/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 066df1e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObjectInternal
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x29;
  code *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  pcStack0000000000000000 = (code *)(param_1 & 0xffff0000ffffffff | 0x20200000000);
  uStack0000000000000008 = param_3;
  thunk_FUN_03afed3c();
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x19 + 0x58) = uStack0000000000000008;
    *(code **)(unaff_x19 + 0x50) = pcStack0000000000000000;
    thunk_FUN_03afed3c(unaff_x19 + 0x58,0);
    uStack0000000000000008 = *unaff_x29;
    pcStack0000000000000000 = (code *)0x4e502e1;
    thunk_FUN_03afed3c(unaff_x24 | 8);
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x68) = uStack0000000000000008;
      *(code **)(unaff_x19 + 0x60) = pcStack0000000000000000;
      thunk_FUN_03afed3c(unaff_x19 + 0x68,0);
      uStack0000000000000008 = *unaff_x22;
      pcStack0000000000000000 = (code *)&DAT_04e90307;
      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
      puVar7 = PTR_DAT_084a7200;
      puVar6 = PTR_DAT_084a7198;
      puVar5 = PTR_DAT_084a6f08;
      puVar4 = PTR_DAT_084a6b18;
      puVar3 = PTR_DAT_084a6938;
      puVar1 = PTR_DAT_084a6740;
      puVar2 = PTR_DAT_084a6670;
      if (5 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x78) = uStack0000000000000008;
        *(code **)(unaff_x19 + 0x70) = pcStack0000000000000000;
        thunk_FUN_03afed3c(unaff_x19 + 0x78,0);
        uStack0000000000000008 = *(undefined8 *)puVar3;
        pcStack0000000000000000 = (code *)0x4e40352;
        thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
        puVar3 = PTR_DAT_084a6b38;
        if (6 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x88) = uStack0000000000000008;
          *(code **)(unaff_x19 + 0x80) = pcStack0000000000000000;
          thunk_FUN_03afed3c(unaff_x19 + 0x88,0);
          uStack0000000000000008 = *(undefined8 *)puVar3;
          pcStack0000000000000000 = (code *)0x20204e20354;
          thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
          if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
            *(undefined8 *)(unaff_x19 + 0x98) = uStack0000000000000008;
            *(code **)(unaff_x19 + 0x90) = pcStack0000000000000000;
            thunk_FUN_03afed3c(unaff_x19 + 0x98,0);
            uStack0000000000000008 = *(undefined8 *)puVar5;
            pcStack0000000000000000 = (code *)0x4e40357;
            thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
            puVar3 = PTR_DAT_084a68f8;
            if (8 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0xa8) = uStack0000000000000008;
              *(code **)(unaff_x19 + 0xa0) = pcStack0000000000000000;
              thunk_FUN_03afed3c(unaff_x19 + 0xa8,0);
              uStack0000000000000008 = *(undefined8 *)puVar3;
              pcStack0000000000000000 = (code *)0x4e60359;
              thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
              if (9 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0xb8) = uStack0000000000000008;
                *(code **)(unaff_x19 + 0xb0) = pcStack0000000000000000;
                thunk_FUN_03afed3c(unaff_x19 + 0xb8,0);
                uStack0000000000000008 = *(undefined8 *)PTR_DAT_084a71b0;
                pcStack0000000000000000 = (code *)0x4e4035a;
                thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                if (10 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 200) = uStack0000000000000008;
                  *(code **)(unaff_x19 + 0xc0) = pcStack0000000000000000;
                  thunk_FUN_03afed3c(unaff_x19 + 200,0);
                  uStack0000000000000008 = *unaff_x23;
                  pcStack0000000000000000 =
                       System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__Sort;
                  thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                  puVar3 = PTR_DAT_084a6b50;
                  if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xd8) = uStack0000000000000008;
                    *(code **)(unaff_x19 + 0xd0) = pcStack0000000000000000;
                    thunk_FUN_03afed3c(unaff_x19 + 0xd8,0);
                    uStack0000000000000008 = *(undefined8 *)puVar3;
                    pcStack0000000000000000 =
                         System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__Sort;
                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                    if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0xe8) = uStack0000000000000008;
                      *(code **)(unaff_x19 + 0xe0) = pcStack0000000000000000;
                      thunk_FUN_03afed3c(unaff_x19 + 0xe8,0);
                      uStack0000000000000008 = *(undefined8 *)PTR_DAT_084a6db0;
                      pcStack0000000000000000 = (code *)0x20204e7035e;
                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                      if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xf8) = uStack0000000000000008;
                        *(code **)(unaff_x19 + 0xf0) = pcStack0000000000000000;
                        thunk_FUN_03afed3c(unaff_x19 + 0xf8,0);
                        uStack0000000000000008 = *(undefined8 *)puVar6;
                        pcStack0000000000000000 =
                             System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__Sort
                        ;
                        thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                        if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x108) = uStack0000000000000008;
                          *(code **)(unaff_x19 + 0x100) = pcStack0000000000000000;
                          thunk_FUN_03afed3c(unaff_x19 + 0x108,0);
                          uStack0000000000000008 = *(undefined8 *)puVar2;
                          pcStack0000000000000000 = (code *)0x4e80360;
                          thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                          if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                            *(undefined8 *)(unaff_x19 + 0x118) = uStack0000000000000008;
                            *(code **)(unaff_x19 + 0x110) = pcStack0000000000000000;
                            thunk_FUN_03afed3c(unaff_x19 + 0x118,0);
                            uStack0000000000000008 = *(undefined8 *)puVar7;
                            pcStack0000000000000000 =
                                 System_Collections_Generic_List<InputActionMap_BindingOverrideJson>__Sort
                            ;
                            thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                            if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x128) = uStack0000000000000008;
                              *(code **)(unaff_x19 + 0x120) = pcStack0000000000000000;
                              thunk_FUN_03afed3c(unaff_x19 + 0x128,0);
                              uStack0000000000000008 = *(undefined8 *)PTR_DAT_084a6a50;
                              pcStack0000000000000000 = (code *)0x20204e30362;
                              thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                              puVar2 = PTR_DAT_084a66f0;
                              if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x138) = uStack0000000000000008;
                                *(code **)(unaff_x19 + 0x130) = pcStack0000000000000000;
                                thunk_FUN_03afed3c(unaff_x19 + 0x138,0);
                                uStack0000000000000008 = *(undefined8 *)puVar2;
                                pcStack0000000000000000 = (code *)0x4e50365;
                                thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                puVar2 = PTR_DAT_084a6da8;
                                if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x148) = uStack0000000000000008;
                                  *(code **)(unaff_x19 + 0x140) = pcStack0000000000000000;
                                  thunk_FUN_03afed3c(unaff_x19 + 0x148,0);
                                  uStack0000000000000008 = *(undefined8 *)puVar4;
                                  pcStack0000000000000000 = (code *)0x4e20366;
                                  thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                  if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000008;
                                    *(code **)(unaff_x19 + 0x150) = pcStack0000000000000000;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x158,0);
                                    uStack0000000000000008 = *(undefined8 *)PTR_DAT_084a6df8;
                                    pcStack0000000000000000 = (code *)0x303036a036a;
                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                    if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x168) = uStack0000000000000008;
                                      *(code **)(unaff_x19 + 0x160) = pcStack0000000000000000;
                                      thunk_FUN_03afed3c(unaff_x19 + 0x168,0);
                                      uStack0000000000000008 = *(undefined8 *)puVar2;
                                      pcStack0000000000000000 = (code *)0x4e5036b;
                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                      puVar2 = PTR_DAT_084a7160;
                                      if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x178) = uStack0000000000000008;
                                        *(code **)(unaff_x19 + 0x170) = pcStack0000000000000000;
                                        thunk_FUN_03afed3c(unaff_x19 + 0x178,0);
                                        uStack0000000000000008 = *(undefined8 *)puVar2;
                                        pcStack0000000000000000 = (code *)0x30303a403a4;
                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                        puVar2 = PTR_DAT_084a6b80;
                                        if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x188) =
                                               uStack0000000000000008;
                                          *(code **)(unaff_x19 + 0x180) = pcStack0000000000000000;
                                          thunk_FUN_03afed3c(unaff_x19 + 0x188,0);
                                          uStack0000000000000008 = *(undefined8 *)puVar2;
                                          pcStack0000000000000000 = (code *)0x30303a803a8;
                                          thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                          if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x198) =
                                                 uStack0000000000000008;
                                            *(code **)(unaff_x19 + 400) = pcStack0000000000000000;
                                            thunk_FUN_03afed3c(unaff_x19 + 0x198,0);
                                            uStack0000000000000008 = *(undefined8 *)PTR_DAT_084a67a0
                                            ;
                                            pcStack0000000000000000 = (code *)0x30303b503b5;
                                            thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                            puVar2 = PTR_DAT_084a6a38;
                                            if (0x18 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x1a8) =
                                                   uStack0000000000000008;
                                              *(code **)(unaff_x19 + 0x1a0) =
                                                   pcStack0000000000000000;
                                              thunk_FUN_03afed3c(unaff_x19 + 0x1a8,0);
                                              uStack0000000000000008 = *(undefined8 *)puVar2;
                                              pcStack0000000000000000 = (code *)0x30303b603b6;
                                              thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                              if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x1b8) =
                                                     uStack0000000000000008;
                                                *(code **)(unaff_x19 + 0x1b0) =
                                                     pcStack0000000000000000;
                                                thunk_FUN_03afed3c(unaff_x19 + 0x1b8,0);
                                                uStack0000000000000008 =
                                                     *(undefined8 *)PTR_DAT_084a6d38;
                                                pcStack0000000000000000 = (code *)0x4e60402;
                                                thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                if (0x1a < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x1c8) =
                                                       uStack0000000000000008;
                                                  *(code **)(unaff_x19 + 0x1c0) =
                                                       pcStack0000000000000000;
                                                  thunk_FUN_03afed3c(unaff_x19 + 0x1c8,0);
                                                  uStack0000000000000008 =
                                                       *(undefined8 *)PTR_DAT_084a6590;
                                                  pcStack0000000000000000 = (code *)0x4e40417;
                                                  thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                  if (0x1b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1d8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x1d0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x1d8,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a66a8;
                                                    pcStack0000000000000000 = (code *)0x4e40474;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x1c < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1e8) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x1e0) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x1e8,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_084a6d30;
                                                      pcStack0000000000000000 = (code *)0x4e40475;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar7 = PTR_DAT_084a6f50;
                                                      puVar6 = PTR_DAT_084a6ea8;
                                                      puVar5 = PTR_DAT_084a6df0;
                                                      puVar4 = PTR_DAT_084a6950;
                                                      puVar3 = PTR_DAT_084a6850;
                                                      puVar2 = PTR_DAT_084a65b8;
                                                      if (0x1d < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1f8) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x1f0) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x1f8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar2;
                                                        pcStack0000000000000000 = (code *)0x4e40476;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x208) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x200) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x208,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar6;
                                                          pcStack0000000000000000 =
                                                               (code *)0x4e40477;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if ((*(uint *)(unaff_x19 + 0x18) &
                                                              0xffffffe0) != 0) {
                                                            *(undefined8 *)(unaff_x19 + 0x218) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x210) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x218,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar7;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x4e40478;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x228) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x220) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x228,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar3;
                                                    pcStack0000000000000000 = (code *)0x4e40479;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x238) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x230) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x238,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar4
                                                      ;
                                                      pcStack0000000000000000 = (code *)0x4e4047a;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x248) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x240) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x248,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar5;
                                                        pcStack0000000000000000 = (code *)0x4e4047b;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 600) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x250) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 600,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_084a6d68;
                                                          pcStack0000000000000000 =
                                                               (code *)0x4e4047c;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_084a7230;
                                                          if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x268) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x260) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x268,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x4e4047d;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x278) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x270) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x278,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a6868;
                                                    pcStack0000000000000000 = (code *)0x20004b004b0;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_084a6fb8;
                                                    if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x288) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x280) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x288,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      pcStack0000000000000000 = (code *)0x4b004b1;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar2 = PTR_DAT_084a6c88;
                                                      if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x298) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x290) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x298,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar2;
                                                        pcStack0000000000000000 =
                                                             (code *)0x30304e204e2;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_084a72a8;
                                                        if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x2a8) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x2a0) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x2a8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          pcStack0000000000000000 =
                                                               (code *)0x30304e304e3;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_084a6888;
                                                          if (0x29 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x2b8) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x2b0) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x2b8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x30304e404e4;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar2 = PTR_DAT_084a66f8;
                                                  if (0x2a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x2c8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x2c0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x2c8,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar2;
                                                    pcStack0000000000000000 = (code *)0x30304e504e5;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_084a7008;
                                                    if (0x2b < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x2d8) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x2d0) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x2d8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      pcStack0000000000000000 =
                                                           (code *)0x30304e604e6;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x2c < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x2e8) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x2e0) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x2e8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a69a0;
                                                        pcStack0000000000000000 =
                                                             (code *)0x30304e704e7;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x2d < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x2f8) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x2f0) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x2f8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_084a6b98;
                                                          pcStack0000000000000000 =
                                                               (code *)0x30304e804e8;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x2e < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x308) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x300) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x308,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_084a6b58;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x30304e904e9;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x2f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x318) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x310) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x318,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a6600;
                                                    pcStack0000000000000000 = (code *)0x30304ea04ea;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x30 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x328) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 800) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x328,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_084a6d98;
                                                      pcStack0000000000000000 = (code *)0x4e42710;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x31 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x338) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x330) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x338,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a6c30;
                                                        pcStack0000000000000000 = (code *)0x4e4275f;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x32 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x348) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x340) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x348,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_084a7090;
                                                          pcStack0000000000000000 =
                                                               (code *)0x4b02ee0;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_084a6d08;
                                                          if (0x33 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x358) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x350) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x358,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x4b02ee1;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x34 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x368) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x360) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x368,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a6e18;
                                                    pcStack0000000000000000 = (code *)0x10104e44e9f;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_084a6858;
                                                    if (0x35 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x378) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x370) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x378,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      pcStack0000000000000000 = (code *)0x4e44f31;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x36 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x388) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x380) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x388,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a7158;
                                                        pcStack0000000000000000 = (code *)0x4e44f35;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar8 = PTR_DAT_084a6e48;
                                                        puVar7 = PTR_DAT_084a6960;
                                                        puVar6 = PTR_DAT_084a6918;
                                                        puVar5 = PTR_DAT_084a68a0;
                                                        puVar4 = PTR_DAT_084a6800;
                                                        puVar3 = PTR_DAT_084a67d0;
                                                        puVar2 = PTR_DAT_084a6750;
                                                        if (0x37 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x398) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x390) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x398,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar5;
                                                          pcStack0000000000000000 =
                                                               (code *)0x4e44f36;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x38 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x3a8) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x3a0) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x3a8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar8;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x4e44f38;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x39 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x3b8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x3b0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x3b8,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    pcStack0000000000000000 =
                                                                                                                  
                                                  System_Collections_Generic_List<JsonParser_JsonValue>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                                                  ;
                                                  thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                  if (0x3a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x3c8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x3c0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x3c8,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar7;
                                                    pcStack0000000000000000 = (code *)0x4e44f3d;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x3b < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x3d8) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x3d0) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x3d8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      pcStack0000000000000000 = (code *)0x3a44f42;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x3c < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 1000) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x3e0) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 1000,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar3;
                                                        pcStack0000000000000000 = (code *)0x4e44f49;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x3d < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x3f8) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x3f0) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x3f8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar6;
                                                          pcStack0000000000000000 =
                                                               (code *)0x4e84fc4;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x3e < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x408) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x400) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x408,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_084a6c68;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x4e74fc8;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar8 = PTR_DAT_084a7288;
                                                  puVar7 = PTR_DAT_084a7270;
                                                  puVar6 = PTR_DAT_084a7238;
                                                  puVar5 = PTR_DAT_084a6f90;
                                                  puVar4 = PTR_DAT_084a6f18;
                                                  puVar3 = PTR_DAT_084a6db8;
                                                  puVar2 = PTR_DAT_084a6708;
                                                  if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffc0) !=
                                                      0) {
                                                    *(undefined8 *)(unaff_x19 + 0x418) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x410) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x418,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a71a0;
                                                    pcStack0000000000000000 = (code *)0x30304e35182;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x40 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x428) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x420) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x428,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      pcStack0000000000000000 = (code *)0x4e45187;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x41 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x438) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x430) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x438,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a6c60;
                                                        pcStack0000000000000000 = (code *)0x4e35221;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x42 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x448) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x440) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x448,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar1;
                                                          pcStack0000000000000000 =
                                                               (code *)0x30304e3556a;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x43 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x458) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x450) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x458,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar7;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x30304e46faf;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x44 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x468) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x460) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x468,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    pcStack0000000000000000 = (code *)0x30304e26fb0;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x45 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x478) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x470) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x478,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar3
                                                      ;
                                                      pcStack0000000000000000 =
                                                           (code *)0x10104e66fb1;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x46 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x488) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x480) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x488,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar5;
                                                        pcStack0000000000000000 =
                                                             (code *)0x30304e96fb2;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x47 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x498) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x490) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x498,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_084a6fe8;
                                                          pcStack0000000000000000 =
                                                               (code *)0x30304e36fb3;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar5 = PTR_DAT_084a6fc0;
                                                          puVar4 = PTR_DAT_084a6a28;
                                                          puVar3 = PTR_DAT_084a6980;
                                                          puVar1 = PTR_DAT_084a6718;
                                                          puVar2 = PTR_DAT_084a65f8;
                                                          if (0x48 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x4a8) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x4a0) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x4a8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x30304e86fb4;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x49 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x4b8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x4b0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x4b8,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar1;
                                                    pcStack0000000000000000 = (code *)0x30304e56fb5;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x4a < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x4c8) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x4c0) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x4c8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar5
                                                      ;
                                                      pcStack0000000000000000 =
                                                           (code *)0x20204e76fb6;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x4b < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x4d8) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x4d0) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x4d8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar3;
                                                        pcStack0000000000000000 =
                                                             (code *)0x30304e66fb7;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x4c < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x4e8) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x4e0) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x4e8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar8;
                                                          pcStack0000000000000000 =
                                                               (code *)0x30104e46fbd;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x4d < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x4f8) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x4f0) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x4f8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar4;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x30304e796c6;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x4e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x508) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x500) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x508,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar6;
                                                    pcStack0000000000000000 = (code *)0x10103a4c42c;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_084a72a0;
                                                    if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x518) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x510) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x518,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      pcStack0000000000000000 =
                                                           (code *)0x30103a4c42d;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x528) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x520) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x528,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar6;
                                                        pcStack0000000000000000 = (code *)0x3a4c42e;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_084a6758;
                                                        if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x538) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x530) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x538,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          pcStack0000000000000000 =
                                                               (code *)0x30303a4cadc;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_084a6dd8;
                                                          if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x548) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x540) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x548,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_084a71c0;
                                                            pcStack0000000000000000 =
                                                                 (code *)0x10103b5caed;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar1 = PTR_DAT_084a6630;
                                                  if (0x53 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x558) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x550) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x558,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar1;
                                                    pcStack0000000000000000 = (code *)0x30303a8d698;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x54 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x568) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x560) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x568,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_084a6ba0;
                                                      pcStack0000000000000000 = (code *)0xdeaadeaa;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x55 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x578) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x570) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x578,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a6640;
                                                        pcStack0000000000000000 = (code *)0xdeabdeab
                                                        ;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x56 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x588) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x580) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x588,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          pcStack0000000000000000 =
                                                               (code *)0xdeacdeac;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x57 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x598) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x590) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x598,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_084a6f00;
                                                            pcStack0000000000000000 =
                                                                 (code *)0xdeaddead;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x58 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x5a8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x5a0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x5a8,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a6940;
                                                    pcStack0000000000000000 = (code *)0xdeaedeae;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x59 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x5b8) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x5b0) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x5b8,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_084a6d90;
                                                      pcStack0000000000000000 = (code *)0xdeafdeaf;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x5c8) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x5c0) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x5c8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a6840;
                                                        pcStack0000000000000000 = (code *)0xdeb0deb0
                                                        ;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x5d8) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x5d0) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x5d8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_084a7140;
                                                          pcStack0000000000000000 =
                                                               (code *)0xdeb1deb1;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x5e8) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x5e0) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x5e8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_084a6610;
                                                            pcStack0000000000000000 =
                                                                 (code *)0xdeb2deb2;
                                                            thunk_FUN_03afed3c((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x5f8) =
                                                         uStack0000000000000008;
                                                    *(code **)(unaff_x19 + 0x5f0) =
                                                         pcStack0000000000000000;
                                                    thunk_FUN_03afed3c(unaff_x19 + 0x5f8,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_084a6f80;
                                                    pcStack0000000000000000 = (code *)0xdeb3deb3;
                                                    thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8);
                                                    if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x608) =
                                                           uStack0000000000000008;
                                                      *(code **)(unaff_x19 + 0x600) =
                                                           pcStack0000000000000000;
                                                      thunk_FUN_03afed3c(unaff_x19 + 0x608,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_084a6ab0;
                                                      pcStack0000000000000000 =
                                                           (code *)0x10104b0fde8;
                                                      thunk_FUN_03afed3c((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x618) =
                                                             uStack0000000000000008;
                                                        *(code **)(unaff_x19 + 0x610) =
                                                             pcStack0000000000000000;
                                                        thunk_FUN_03afed3c(unaff_x19 + 0x618,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_084a6ee8;
                                                        pcStack0000000000000000 =
                                                             (code *)0x30304b0fde9;
                                                        thunk_FUN_03afed3c((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x628) =
                                                               uStack0000000000000008;
                                                          *(code **)(unaff_x19 + 0x620) =
                                                               pcStack0000000000000000;
                                                          thunk_FUN_03afed3c(unaff_x19 + 0x628,0);
                                                          pcStack0000000000000000 = (code *)0x0;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03afed3c((ulong)&stack0x00000000
                                                                             | 8,0);
                                                          puVar2 = PTR_DAT_084a3408;
                                                          if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x638) =
                                                                 uStack0000000000000008;
                                                            *(code **)(unaff_x19 + 0x630) =
                                                                 pcStack0000000000000000;
                                                            thunk_FUN_03afed3c(unaff_x19 + 0x638,0);
                                                            *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     8) = unaff_x19;
                                                            thunk_FUN_03afed3c();
                                                            iVar9 = FUN_066d7454();
                                                            lVar10 = *(long *)puVar2;
                                                            *(int *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                    0x10) = iVar9 + -1;
                                                            if (*(int *)(lVar10 + 0xe4) == 0) {
                                                              thunk_FUN_03ae8be4();
                                                            }
                                                            if (DAT_0897b36f == '\0') {
                                                              FUN_03a8a718(PTR_DAT_084a3408);
                                                              DAT_0897b36f = '\x01';
                                                            }
                                                            puVar5 = PTR_DAT_084a6580;
                                                            puVar4 = PTR_DAT_084a6578;
                                                            puVar3 = PTR_DAT_084a6570;
                                                            puVar1 = PTR_DAT_084a27a8;
                                                            lVar10 = *(long *)puVar2;
                                                            if (*(int *)(lVar10 + 0xe4) == 0) {
                                                              thunk_FUN_03ae8be4();
                                                              lVar10 = *(long *)puVar2;
                                                            }
                                                            uVar13 = *(undefined8 *)
                                                                      (*(long *)(lVar10 + 0xb8) +
                                                                      0x18);
                                                            uVar11 = thunk_FUN_03ac74bc(*(undefined8
                                                                                          *)puVar1);
                                                            FUN_05f95188(uVar11,uVar13,
                                                                         *(undefined8 *)puVar3);
                                                            puVar12 = (undefined8 *)
                                                                      (*(long *)(*unaff_x21 + 0xb8)
                                                                      + 0x18);
                                                            *puVar12 = uVar11;
                                                            thunk_FUN_03afed3c(puVar12,uVar11);
                                                            uVar11 = thunk_FUN_03ac74bc(*(undefined8
                                                                                          *)puVar5);
                                                            FUN_05ed0550(uVar11,*(undefined8 *)
                                                                                 puVar4);
                                                            puVar12 = (undefined8 *)
                                                                      (*(long *)(*unaff_x21 + 0xb8)
                                                                      + 0x20);
                                                            *puVar12 = uVar11;
                                                            thunk_FUN_03afed3c(puVar12,uVar11);
                                                            return;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


