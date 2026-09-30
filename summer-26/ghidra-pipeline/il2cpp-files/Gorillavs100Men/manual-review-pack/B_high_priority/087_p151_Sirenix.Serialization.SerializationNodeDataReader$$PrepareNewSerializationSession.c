/*
FUNCTION_NAME: Sirenix.Serialization.SerializationNodeDataReader$$PrepareNewSerializationSession
ENTRY_POINT: 037ec0b8
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_SerializationNodeDataReader__PrepareNewSerializationSession(void)

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
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
    *(undefined **)(unaff_x19 + 0x30) = in_stack_00000000;
    thunk_FUN_020ccb58(unaff_x19 + 0x38,0);
    in_stack_00000008 = *unaff_x27;
    in_stack_00000000 = (undefined *)0x4e401f4;
    thunk_FUN_020ccb58(unaff_x24 | 8);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000008;
      *(undefined **)(unaff_x19 + 0x40) = in_stack_00000000;
      thunk_FUN_020ccb58(unaff_x19 + 0x48,0);
      in_stack_00000008 = *unaff_x26;
      in_stack_00000000 = (undefined *)0x20204e802c4;
      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000008;
        *(undefined **)(unaff_x19 + 0x50) = in_stack_00000000;
        thunk_FUN_020ccb58(unaff_x19 + 0x58,0);
        in_stack_00000008 = *unaff_x29;
        in_stack_00000000 = (undefined *)0x4e502e1;
        thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000008;
          *(undefined **)(unaff_x19 + 0x60) = in_stack_00000000;
          thunk_FUN_020ccb58(unaff_x19 + 0x68,0);
          in_stack_00000008 = *unaff_x22;
          in_stack_00000000 = (undefined *)0x4e90307;
          thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
          puVar7 = PTR_DAT_04696d18;
          puVar6 = PTR_DAT_04696cb0;
          puVar5 = PTR_DAT_04696a20;
          puVar4 = PTR_DAT_04696630;
          puVar3 = PTR_DAT_04696450;
          puVar2 = PTR_DAT_04696258;
          puVar1 = PTR_DAT_04696188;
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000008;
            *(undefined **)(unaff_x19 + 0x70) = in_stack_00000000;
            thunk_FUN_020ccb58(unaff_x19 + 0x78,0);
            in_stack_00000008 = *(undefined8 *)puVar3;
            in_stack_00000000 = (undefined *)0x4e40352;
            thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
            puVar3 = PTR_DAT_04696650;
            if (6 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000008;
              *(undefined **)(unaff_x19 + 0x80) = in_stack_00000000;
              thunk_FUN_020ccb58(unaff_x19 + 0x88,0);
              in_stack_00000008 = *(undefined8 *)puVar3;
              in_stack_00000000 = (undefined *)0x20204e20354;
              thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
                *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000008;
                *(undefined **)(unaff_x19 + 0x90) = in_stack_00000000;
                thunk_FUN_020ccb58(unaff_x19 + 0x98,0);
                in_stack_00000008 = *(undefined8 *)puVar5;
                in_stack_00000000 = (undefined *)0x4e40357;
                thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                puVar3 = PTR_DAT_04696410;
                if (8 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000008;
                  *(undefined **)(unaff_x19 + 0xa0) = in_stack_00000000;
                  thunk_FUN_020ccb58(unaff_x19 + 0xa8,0);
                  in_stack_00000008 = *(undefined8 *)puVar3;
                  in_stack_00000000 = (undefined *)0x4e60359;
                  thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                  if (9 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000008;
                    *(undefined **)(unaff_x19 + 0xb0) = in_stack_00000000;
                    thunk_FUN_020ccb58(unaff_x19 + 0xb8,0);
                    in_stack_00000008 = *(undefined8 *)PTR_DAT_04696cc8;
                    in_stack_00000000 = (undefined *)0x4e4035a;
                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                    if (10 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 200) = in_stack_00000008;
                      *(undefined **)(unaff_x19 + 0xc0) = in_stack_00000000;
                      thunk_FUN_020ccb58(unaff_x19 + 200,0);
                      in_stack_00000008 = *unaff_x23;
                      in_stack_00000000 = (undefined *)0x4e4035c;
                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                      puVar3 = PTR_DAT_04696668;
                      if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000008;
                        *(undefined **)(unaff_x19 + 0xd0) = in_stack_00000000;
                        thunk_FUN_020ccb58(unaff_x19 + 0xd8,0);
                        in_stack_00000008 = *(undefined8 *)puVar3;
                        in_stack_00000000 = (undefined *)0x4e4035d;
                        thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                        if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000008;
                          *(undefined **)(unaff_x19 + 0xe0) = in_stack_00000000;
                          thunk_FUN_020ccb58(unaff_x19 + 0xe8,0);
                          in_stack_00000008 = *(undefined8 *)PTR_DAT_046968c8;
                          in_stack_00000000 = (undefined *)0x20204e7035e;
                          thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                          if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00000008;
                            *(undefined **)(unaff_x19 + 0xf0) = in_stack_00000000;
                            thunk_FUN_020ccb58(unaff_x19 + 0xf8,0);
                            in_stack_00000008 = *(undefined8 *)puVar6;
                            in_stack_00000000 = (undefined *)0x4e4035f;
                            thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                            if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x108) = in_stack_00000008;
                              *(undefined **)(unaff_x19 + 0x100) = in_stack_00000000;
                              thunk_FUN_020ccb58(unaff_x19 + 0x108,0);
                              in_stack_00000008 = *(undefined8 *)puVar1;
                              in_stack_00000000 = (undefined *)0x4e80360;
                              thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                                *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000008;
                                *(undefined **)(unaff_x19 + 0x110) = in_stack_00000000;
                                thunk_FUN_020ccb58(unaff_x19 + 0x118,0);
                                in_stack_00000008 = *(undefined8 *)puVar7;
                                in_stack_00000000 = (undefined *)0x4e40361;
                                thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000008;
                                  *(undefined **)(unaff_x19 + 0x120) = in_stack_00000000;
                                  thunk_FUN_020ccb58(unaff_x19 + 0x128,0);
                                  in_stack_00000008 = *(undefined8 *)PTR_DAT_04696568;
                                  in_stack_00000000 = (undefined *)0x20204e30362;
                                  thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                  puVar1 = PTR_DAT_04696208;
                                  if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000008;
                                    *(undefined **)(unaff_x19 + 0x130) = in_stack_00000000;
                                    thunk_FUN_020ccb58(unaff_x19 + 0x138,0);
                                    in_stack_00000008 = *(undefined8 *)puVar1;
                                    in_stack_00000000 = (undefined *)0x4e50365;
                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                    puVar1 = PTR_DAT_046968c0;
                                    if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000008;
                                      *(undefined **)(unaff_x19 + 0x140) = in_stack_00000000;
                                      thunk_FUN_020ccb58(unaff_x19 + 0x148,0);
                                      in_stack_00000008 = *(undefined8 *)puVar4;
                                      in_stack_00000000 = (undefined *)0x4e20366;
                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                      if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000008;
                                        *(undefined **)(unaff_x19 + 0x150) = in_stack_00000000;
                                        thunk_FUN_020ccb58(unaff_x19 + 0x158,0);
                                        in_stack_00000008 = *(undefined8 *)PTR_DAT_04696910;
                                        in_stack_00000000 = (undefined *)0x303036a036a;
                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                        if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000008;
                                          *(undefined **)(unaff_x19 + 0x160) = in_stack_00000000;
                                          thunk_FUN_020ccb58(unaff_x19 + 0x168,0);
                                          in_stack_00000008 = *(undefined8 *)puVar1;
                                          in_stack_00000000 = (undefined *)0x4e5036b;
                                          thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                          puVar1 = PTR_DAT_04696c78;
                                          if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000008;
                                            *(undefined **)(unaff_x19 + 0x170) = in_stack_00000000;
                                            thunk_FUN_020ccb58(unaff_x19 + 0x178,0);
                                            in_stack_00000008 = *(undefined8 *)puVar1;
                                            in_stack_00000000 = (undefined *)0x30303a403a4;
                                            thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                            puVar1 = PTR_DAT_04696698;
                                            if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000008
                                              ;
                                              *(undefined **)(unaff_x19 + 0x180) = in_stack_00000000
                                              ;
                                              thunk_FUN_020ccb58(unaff_x19 + 0x188,0);
                                              in_stack_00000008 = *(undefined8 *)puVar1;
                                              in_stack_00000000 = (undefined *)0x30303a803a8;
                                              thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                              if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x198) =
                                                     in_stack_00000008;
                                                *(undefined **)(unaff_x19 + 400) = in_stack_00000000
                                                ;
                                                thunk_FUN_020ccb58(unaff_x19 + 0x198,0);
                                                in_stack_00000008 = *(undefined8 *)PTR_DAT_046962b8;
                                                in_stack_00000000 = (undefined *)0x30303b503b5;
                                                thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                puVar1 = PTR_DAT_04696550;
                                                if (0x18 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x1a8) =
                                                       in_stack_00000008;
                                                  *(undefined **)(unaff_x19 + 0x1a0) =
                                                       in_stack_00000000;
                                                  thunk_FUN_020ccb58(unaff_x19 + 0x1a8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  in_stack_00000000 = (undefined *)0x30303b603b6;
                                                  thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                  if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1b8) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x1b0) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x1b8,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696850;
                                                    in_stack_00000000 = (undefined *)0x4e60402;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x1a < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1c8) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x1c0) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x1c8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_046960a8;
                                                      in_stack_00000000 = (undefined *)0x4e40417;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x1b < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1d8) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x1d0) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x1d8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_046961c0;
                                                        in_stack_00000000 = (undefined *)0x4e40474;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x1c < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1e8) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x1e0) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x1e8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_04696848;
                                                          in_stack_00000000 = (undefined *)0x4e40475
                                                          ;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar7 = PTR_DAT_04696a68;
                                                          puVar6 = PTR_DAT_046969c0;
                                                          puVar5 = PTR_DAT_04696908;
                                                          puVar4 = PTR_DAT_04696468;
                                                          puVar3 = PTR_DAT_04696368;
                                                          puVar1 = PTR_DAT_046960d0;
                                                          if (0x1d < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1f8) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x1f0) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x1f8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar1;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x4e40476;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x208) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x200) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x208,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar6;
                                                    in_stack_00000000 = (undefined *)0x4e40477;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffe0)
                                                        != 0) {
                                                      *(undefined8 *)(unaff_x19 + 0x218) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x210) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x218,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar7;
                                                      in_stack_00000000 = (undefined *)0x4e40478;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x228) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x220) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x228,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar3;
                                                        in_stack_00000000 = (undefined *)0x4e40479;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x238) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x230) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x238,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar4;
                                                          in_stack_00000000 = (undefined *)0x4e4047a
                                                          ;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x248) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x240) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x248,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar5;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x4e4047b;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 600) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x250) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 600,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696880;
                                                    in_stack_00000000 = (undefined *)0x4e4047c;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    puVar1 = PTR_DAT_04696d48;
                                                    if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x268) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x260) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x268,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      in_stack_00000000 = (undefined *)0x4e4047d;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x278) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x270) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x278,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696380;
                                                        in_stack_00000000 =
                                                             (undefined *)0x20004b004b0;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar1 = PTR_DAT_04696ad0;
                                                        if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x288) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x280) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x288,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar1;
                                                          in_stack_00000000 = &DAT_04b004b1;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar1 = PTR_DAT_046967a0;
                                                          if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x298) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x290) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x298,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar1;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x30304e204e2;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar1 = PTR_DAT_04696dc0;
                                                  if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x2a8) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x2a0) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x2a8,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar1;
                                                    in_stack_00000000 = (undefined *)0x30304e304e3;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    puVar1 = PTR_DAT_046963a0;
                                                    if (0x29 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x2b8) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x2b0) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x2b8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      in_stack_00000000 = (undefined *)0x30304e404e4
                                                      ;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar1 = PTR_DAT_04696210;
                                                      if (0x2a < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x2c8) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x2c0) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x2c8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar1;
                                                        in_stack_00000000 =
                                                             (undefined *)0x30304e504e5;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar1 = PTR_DAT_04696b20;
                                                        if (0x2b < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x2d8) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x2d0) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x2d8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar1;
                                                          in_stack_00000000 =
                                                               (undefined *)0x30304e604e6;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x2c < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x2e8) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x2e0) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x2e8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_046964b8;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x30304e704e7;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x2d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x2f8) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x2f0) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x2f8,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_046966b0;
                                                    in_stack_00000000 = (undefined *)0x30304e804e8;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x2e < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x308) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x300) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x308,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_04696670;
                                                      in_stack_00000000 = (undefined *)0x30304e904e9
                                                      ;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x2f < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x318) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x310) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x318,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696118;
                                                        in_stack_00000000 =
                                                             (undefined *)0x30304ea04ea;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x30 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x328) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 800) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x328,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_046968b0;
                                                          in_stack_00000000 = (undefined *)0x4e42710
                                                          ;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x31 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x338) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x330) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x338,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_04696748;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x4e4275f;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x32 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x348) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x340) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x348,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696ba8;
                                                    in_stack_00000000 = &DAT_04b02ee0;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    puVar1 = PTR_DAT_04696820;
                                                    if (0x33 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x358) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x350) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x358,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      in_stack_00000000 = &DAT_04b02ee1;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x34 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x368) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x360) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x368,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696930;
                                                        in_stack_00000000 =
                                                             (undefined *)0x10104e44e9f;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar1 = PTR_DAT_04696370;
                                                        if (0x35 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x378) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x370) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x378,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar1;
                                                          in_stack_00000000 = (undefined *)0x4e44f31
                                                          ;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x36 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x388) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x380) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x388,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_04696c70;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x4e44f35;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar8 = PTR_DAT_04696960;
                                                  puVar7 = PTR_DAT_04696478;
                                                  puVar6 = PTR_DAT_04696430;
                                                  puVar5 = PTR_DAT_046963b8;
                                                  puVar4 = PTR_DAT_04696318;
                                                  puVar3 = PTR_DAT_046962e8;
                                                  puVar1 = PTR_DAT_04696268;
                                                  if (0x37 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x398) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x390) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x398,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar5;
                                                    in_stack_00000000 = (undefined *)0x4e44f36;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x38 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x3a8) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x3a0) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x3a8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar8;
                                                      in_stack_00000000 = (undefined *)0x4e44f38;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x39 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x3b8) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x3b0) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x3b8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar4;
                                                        in_stack_00000000 = (undefined *)0x4e44f3c;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x3a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x3c8) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x3c0) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x3c8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar7;
                                                          in_stack_00000000 = (undefined *)0x4e44f3d
                                                          ;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x3b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x3d8) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x3d0) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x3d8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar1;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x3a44f42;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x3c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 1000) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x3e0) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 1000,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar3;
                                                    in_stack_00000000 = (undefined *)0x4e44f49;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x3d < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x3f8) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x3f0) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x3f8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar6;
                                                      in_stack_00000000 = (undefined *)0x4e84fc4;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x3e < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x408) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x400) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x408,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696780;
                                                        in_stack_00000000 = (undefined *)0x4e74fc8;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar8 = PTR_DAT_04696da0;
                                                        puVar7 = PTR_DAT_04696d88;
                                                        puVar6 = PTR_DAT_04696d50;
                                                        puVar5 = PTR_DAT_04696aa8;
                                                        puVar4 = PTR_DAT_04696a30;
                                                        puVar3 = PTR_DAT_046968d0;
                                                        puVar1 = PTR_DAT_04696220;
                                                        if ((*(uint *)(unaff_x19 + 0x18) &
                                                            0xffffffc0) != 0) {
                                                          *(undefined8 *)(unaff_x19 + 0x418) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x410) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x418,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_04696cb8;
                                                          in_stack_00000000 =
                                                               (undefined *)0x30304e35182;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x40 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x428) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x420) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x428,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar1;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x4e45187;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x41 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x438) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x430) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x438,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696778;
                                                    in_stack_00000000 = (undefined *)0x4e35221;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x42 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x448) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x440) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x448,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar2;
                                                      in_stack_00000000 = (undefined *)0x30304e3556a
                                                      ;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x43 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x458) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x450) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x458,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar7;
                                                        in_stack_00000000 =
                                                             (undefined *)0x30304e46faf;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x44 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x468) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x460) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x468,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar4;
                                                          in_stack_00000000 =
                                                               (undefined *)0x30304e26fb0;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x45 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x478) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x470) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x478,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar3;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x10104e66fb1;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x46 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x488) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x480) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x488,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar5;
                                                    in_stack_00000000 = (undefined *)0x30304e96fb2;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x47 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x498) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x490) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x498,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_04696b00;
                                                      in_stack_00000000 = (undefined *)0x30304e36fb3
                                                      ;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar5 = PTR_DAT_04696ad8;
                                                      puVar4 = PTR_DAT_04696540;
                                                      puVar3 = PTR_DAT_04696498;
                                                      puVar2 = PTR_DAT_04696230;
                                                      puVar1 = PTR_DAT_04696110;
                                                      if (0x48 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x4a8) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x4a0) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x4a8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar1;
                                                        in_stack_00000000 =
                                                             (undefined *)0x30304e86fb4;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x49 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x4b8) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x4b0) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x4b8,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar2;
                                                          in_stack_00000000 =
                                                               (undefined *)0x30304e56fb5;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x4a < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x4c8) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x4c0) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x4c8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar5;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x20204e76fb6;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x4b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x4d8) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x4d0) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x4d8,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar3;
                                                    in_stack_00000000 = (undefined *)0x30304e66fb7;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x4c < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x4e8) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x4e0) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x4e8,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar8;
                                                      in_stack_00000000 = (undefined *)0x30104e46fbd
                                                      ;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x4d < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x4f8) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x4f0) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x4f8,0);
                                                        in_stack_00000008 = *(undefined8 *)puVar4;
                                                        in_stack_00000000 =
                                                             (undefined *)0x30304e796c6;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x4e < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x508) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x500) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x508,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar6;
                                                          in_stack_00000000 =
                                                               (undefined *)0x10103a4c42c;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar1 = PTR_DAT_04696db8;
                                                          if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x518) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x510) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x518,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)puVar1;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x30103a4c42d;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x528) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x520) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x528,0);
                                                    in_stack_00000008 = *(undefined8 *)puVar6;
                                                    in_stack_00000000 = (undefined *)0x3a4c42e;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    puVar1 = PTR_DAT_04696270;
                                                    if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x538) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x530) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x538,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      in_stack_00000000 = (undefined *)0x30303a4cadc
                                                      ;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar1 = PTR_DAT_046968f0;
                                                      if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x548) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x540) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x548,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696cd8;
                                                        in_stack_00000000 =
                                                             (undefined *)0x10103b5caed;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_04696148;
                                                        if (0x53 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x558) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x550) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x558,0);
                                                          in_stack_00000008 = *(undefined8 *)puVar2;
                                                          in_stack_00000000 =
                                                               (undefined *)0x30303a8d698;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x54 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x568) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x560) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x568,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_046966b8;
                                                            in_stack_00000000 =
                                                                 (undefined *)0xdeaadeaa;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x55 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x578) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x570) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x578,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696158;
                                                    in_stack_00000000 = (undefined *)0xdeabdeab;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x56 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x588) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x580) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x588,0);
                                                      in_stack_00000008 = *(undefined8 *)puVar1;
                                                      in_stack_00000000 = (undefined *)0xdeacdeac;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x57 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x598) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x590) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x598,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696a18;
                                                        in_stack_00000000 = (undefined *)0xdeaddead;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x58 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x5a8) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x5a0) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x5a8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_04696458;
                                                          in_stack_00000000 =
                                                               (undefined *)0xdeaedeae;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x59 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x5b8) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x5b0) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x5b8,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_046968a8;
                                                            in_stack_00000000 =
                                                                 (undefined *)0xdeafdeaf;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x5a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x5c8) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x5c0) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x5c8,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696358;
                                                    in_stack_00000000 = (undefined *)0xdeb0deb0;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x5d8) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x5d0) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x5d8,0);
                                                      in_stack_00000008 =
                                                           *(undefined8 *)PTR_DAT_04696c58;
                                                      in_stack_00000000 = (undefined *)0xdeb1deb1;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x5e8) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x5e0) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x5e8,0);
                                                        in_stack_00000008 =
                                                             *(undefined8 *)PTR_DAT_04696128;
                                                        in_stack_00000000 = (undefined *)0xdeb2deb2;
                                                        thunk_FUN_020ccb58((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x5f8) =
                                                               in_stack_00000008;
                                                          *(undefined **)(unaff_x19 + 0x5f0) =
                                                               in_stack_00000000;
                                                          thunk_FUN_020ccb58(unaff_x19 + 0x5f8,0);
                                                          in_stack_00000008 =
                                                               *(undefined8 *)PTR_DAT_04696a98;
                                                          in_stack_00000000 =
                                                               (undefined *)0xdeb3deb3;
                                                          thunk_FUN_020ccb58((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x5e < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x608) =
                                                                 in_stack_00000008;
                                                            *(undefined **)(unaff_x19 + 0x600) =
                                                                 in_stack_00000000;
                                                            thunk_FUN_020ccb58(unaff_x19 + 0x608,0);
                                                            in_stack_00000008 =
                                                                 *(undefined8 *)PTR_DAT_046965c8;
                                                            in_stack_00000000 =
                                                                 (undefined *)0x10104b0fde8;
                                                            thunk_FUN_020ccb58((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x5f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x618) =
                                                         in_stack_00000008;
                                                    *(undefined **)(unaff_x19 + 0x610) =
                                                         in_stack_00000000;
                                                    thunk_FUN_020ccb58(unaff_x19 + 0x618,0);
                                                    in_stack_00000008 =
                                                         *(undefined8 *)PTR_DAT_04696a00;
                                                    in_stack_00000000 = (undefined *)0x30304b0fde9;
                                                    thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8);
                                                    if (0x60 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x628) =
                                                           in_stack_00000008;
                                                      *(undefined **)(unaff_x19 + 0x620) =
                                                           in_stack_00000000;
                                                      thunk_FUN_020ccb58(unaff_x19 + 0x628,0);
                                                      in_stack_00000000 = (undefined *)0x0;
                                                      in_stack_00000008 = 0;
                                                      thunk_FUN_020ccb58((ulong)&stack0x00000000 | 8
                                                                         ,0);
                                                      puVar1 = PTR_DAT_04691ee8;
                                                      if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x638) =
                                                             in_stack_00000008;
                                                        *(undefined **)(unaff_x19 + 0x630) =
                                                             in_stack_00000000;
                                                        thunk_FUN_020ccb58(unaff_x19 + 0x638,0);
                                                        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8)
                                                             = unaff_x19;
                                                        thunk_FUN_020ccb58();
                                                        iVar9 = FUN_037e4394();
                                                        lVar10 = *(long *)puVar1;
                                                        *(int *)(*(long *)(*unaff_x21 + 0xb8) + 0x10
                                                                ) = iVar9 + -1;
                                                        if (*(int *)(lVar10 + 0xe4) == 0) {
                                                          thunk_FUN_020b5864();
                                                        }
                                                        if (DAT_0491f0a9 == '\0') {
                                                          FUN_020612a4(PTR_DAT_04691ee8);
                                                          DAT_0491f0a9 = '\x01';
                                                        }
                                                        puVar5 = PTR_DAT_04696098;
                                                        puVar4 = PTR_DAT_04696090;
                                                        puVar3 = PTR_DAT_04696088;
                                                        puVar2 = PTR_DAT_046937d0;
                                                        lVar10 = *(long *)puVar1;
                                                        if (*(int *)(lVar10 + 0xe4) == 0) {
                                                          thunk_FUN_020b5864();
                                                          lVar10 = *(long *)puVar1;
                                                        }
                                                        uVar13 = *(undefined8 *)
                                                                  (*(long *)(lVar10 + 0xb8) + 0x18);
                                                        uVar11 = thunk_FUN_02094760(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_02ec0f68(uVar11,uVar13,
                                                                     *(undefined8 *)puVar3);
                                                        puVar12 = (undefined8 *)
                                                                  (*(long *)(*unaff_x21 + 0xb8) +
                                                                  0x18);
                                                        *puVar12 = uVar11;
                                                        thunk_FUN_020ccb58(puVar12,uVar11);
                                                        uVar11 = thunk_FUN_02094760(*(undefined8 *)
                                                                                     puVar5);
                                                                                                                
                                                  UnityEngine_Rendering_DynamicArray<object>__IndexOf
                                                            (uVar11,*(undefined8 *)puVar4);
                                                  puVar12 = (undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x20);
                                                  *puVar12 = uVar11;
                                                  thunk_FUN_020ccb58(puVar12,uVar11);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02061554();
}


