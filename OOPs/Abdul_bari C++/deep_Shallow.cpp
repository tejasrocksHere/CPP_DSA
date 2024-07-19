rectangle(const rectangle &r, bool shallow) {
        l = r.l;
        if (shallow) {
            p = r.p;  // Shallow copy: point to the same array
        } else {
            // Deep copy
            p = new int[5]; // Assuming the size is always 5 for simplicity
            for (int i = 0; i < 5; ++i) {
                p[i] = r.p[i];
            }
        }
    }