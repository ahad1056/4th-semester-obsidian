```mermaid
graph LR
    A[Message Signal] --> B[Modulator]
    B --> C((Channel + Noise))
    C --> D[Demodulator]
    D --> E[Output]
```