
import emission



def optimize_static(self):
    offset = 0

    index = 0
    while index < len(self.seq)-1:
        index_low  = index
        index_high = index + 1
        index += 1

        low  = self.seq[index_low]
        high = self.seq[index_high]

        #adjust definition origin
        if type(low) is emission.definition:
            low.address -= offset

        if type(low)  in (emission.anno, emission.definition): continue
        if type(high) in (emission.anno, emission.definition): continue

        #seq len before changes
        seq_len_start = len(self.seq)

        if low.inst == 'push' and high.inst == 'pull':
            self.seq.pop(index_high)
            self.seq.pop(index_low)

        elif low.inst == 'alloc' and low.arg == 0:
            self.seq.pop(index_low)

        elif low.inst == 'free' and low.arg == 0:
            self.seq.pop(index_low)

        #seq len after changes
        seq_len_end = len(self.seq)
        seq_len_delta = seq_len_start - seq_len_end
        offset += seq_len_delta

