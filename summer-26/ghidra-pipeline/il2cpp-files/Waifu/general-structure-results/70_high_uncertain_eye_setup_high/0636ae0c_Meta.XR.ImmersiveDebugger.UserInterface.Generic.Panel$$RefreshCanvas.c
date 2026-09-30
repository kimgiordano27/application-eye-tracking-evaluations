/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshCanvas
ENTRY_POINT: 0636ae0c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshCanvas(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined1 unaff_w26;
  long lVar9;
  uint unaff_w27;
  undefined4 unaff_w28;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  long in_stack_00000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  uint in_stack_00000038;
  long in_stack_000000e0;
  
  FUN_0335b6c8(param_1 + 0x88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb178,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb228,1);
                    /* try { // try from 0636ae40 to 0646ae47 has its CatchHandler @ 0636af00 */
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb4b8,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 0636ae60 to 0646ae63 has its CatchHandler @ 0636af88 */
                    /* try { // try from 0636ae64 to 0646ae67 has its CatchHandler @ 0636af78 */
  FUN_0335b6c8(&DAT_083c7df8,1);
                    /* try { // try from 0636ae68 to 0646ae6b has its CatchHandler @ 0636af74 */
  DataMemoryBarrier(2,3);
                    /* try { // try from 0636ae6c to 0646ae6f has its CatchHandler @ 0636af70 */
                    /* try { // try from 0636ae70 to 0646ae73 has its CatchHandler @ 0636af64 */
                    /* try { // try from 0636ae74 to 0646ae77 has its CatchHandler @ 0636af54 */
                    /* try { // try from 0636ae78 to 0646ae7b has its CatchHandler @ 0636af4c */
  FUN_0335b6c8(&DAT_083d4540,1);
                    /* try { // try from 0636ae7c to 0646ae7f has its CatchHandler @ 0636af48 */
  DataMemoryBarrier(2,3);
                    /* try { // try from 0636ae80 to 0646ae83 has its CatchHandler @ 0636af44 */
  *(undefined1 *)(unaff_x25 + 0x938) = unaff_w26;
                    /* try { // try from 0636ae84 to 0646ae87 has its CatchHandler @ 0636af40 */
  in_stack_00000038 = 0;
                    /* try { // try from 0636ae88 to 0646ae8b has its CatchHandler @ 0636af38 */
                    /* try { // try from 0636ae8c to 0646ae8f has its CatchHandler @ 0636af30 */
  if (*(long *)(unaff_x24 + 0x18) != 0) {
                    /* try { // try from 0636ae90 to 0646ae93 has its CatchHandler @ 0636af28 */
                    /* try { // try from 0636ae94 to 0646ae97 has its CatchHandler @ 0636af1c */
                    /* try { // try from 0636ae98 to 0646ae9b has its CatchHandler @ 0636af18 */
                    /* try { // try from 0636ae9c to 0646ae9f has its CatchHandler @ 0636af14 */
    auVar21 = FUN_042b5310(*(long *)(unaff_x24 + 0x18),unaff_w27,DAT_083eb480);
    uVar10 = auVar21._8_8_;
    uVar3 = auVar21._0_8_;
                    /* try { // try from 0636aea0 to 0646aea3 has its CatchHandler @ 0636af10 */
                    /* try { // try from 0636aea4 to 0646aea7 has its CatchHandler @ 0636af0c */
                    /* try { // try from 0636aea8 to 0646aeab has its CatchHandler @ 0636af08 */
                    /* try { // try from 0636aeac to 0646aeaf has its CatchHandler @ 0636af04 */
    if (*(long *)(unaff_x24 + 0x20) != 0) {
                    /* try { // try from 0636aeb0 to 0646aeb3 has its CatchHandler @ 06369dec */
                    /* try { // try from 0636aeb4 to 0646aebb has its CatchHandler @ 0636aee8 */
                    /* try { // try from 0636aebc to 0646aec3 has its CatchHandler @ 0636aed8 */
      FUN_0429e128(*(long *)(unaff_x24 + 0x20),unaff_w27,DAT_083eafe0);
                    /* try { // try from 0636aec4 to 0646aecf has its CatchHandler @ 06369dec */
      if (*(long *)(unaff_x24 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 0636a830 with catch @ 0636aecc */
                    /* try { // try from 0636aed0 to 0646aef7 has its CatchHandler @ 0636aff8 */
                    /* catch() { ... } // from try @ 0636aebc with catch @ 0636aed8 */
        FUN_042a5368(*(long *)(unaff_x24 + 0x28),unaff_w27,DAT_083eb138);
                    /* catch() { ... } // from try @ 0636ac44 with catch @ 0636aedc */
        if (*(long *)(unaff_x24 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 0636aeb4 with catch @ 0636aee8 */
                    /* catch() { ... } // from try @ 0636abc8 with catch @ 0636aeec */
          FUN_042a7e00(*(long *)(unaff_x24 + 0x30),unaff_w27,DAT_083eb1f0);
                    /* catch() { ... } // from try @ 0636aa14 with catch @ 0636aef8
                       try { // try from 0636aef8 to 0646afa7 has its CatchHandler @ 06369dec */
          if (*(long *)(unaff_x24 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0636ae04 with catch @ 0636aefc */
                    /* catch() { ... } // from try @ 0636ae40 with catch @ 0636af00 */
                    /* catch() { ... } // from try @ 0636aeac with catch @ 0636af04 */
            FUN_042a5368(*(long *)(unaff_x24 + 0x38),unaff_w27,DAT_083eb138);
                    /* catch() { ... } // from try @ 0636aea8 with catch @ 0636af08 */
                    /* catch() { ... } // from try @ 0636aea4 with catch @ 0636af0c */
            if (*(long *)(unaff_x24 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 0636aea0 with catch @ 0636af10 */
                    /* catch() { ... } // from try @ 0636ae9c with catch @ 0636af14 */
              FUN_042a7e00(*(long *)(unaff_x24 + 0x40),unaff_w27,DAT_083eb1f0);
              if (*(long *)(unaff_x24 + 0x48) != 0) {
                FUN_042a5368(*(long *)(unaff_x24 + 0x48),unaff_w27,DAT_083eb138);
                if (*(long *)(unaff_x24 + 0x50) != 0) {
                  FUN_042a5368(*(long *)(unaff_x24 + 0x50),unaff_w27,DAT_083eb138);
                  if (*(long *)(unaff_x24 + 0x58) != 0) {
                    FUN_042a5368(*(long *)(unaff_x24 + 0x58),unaff_w27,DAT_083eb138);
                    if (*(long *)(unaff_x24 + 0x60) != 0) {
                      FUN_042a7e00(*(long *)(unaff_x24 + 0x60),unaff_w27,DAT_083eb1f0);
                      if (*(long *)(unaff_x24 + 0x68) != 0) {
                        FUN_042a5368(*(long *)(unaff_x24 + 0x68),unaff_w27,DAT_083eb138);
                        if (*(long *)(unaff_x24 + 0x70) != 0) {
                          FUN_042a7e00(*(long *)(unaff_x24 + 0x70),unaff_w27,DAT_083eb1f0);
                          if (*(long *)(unaff_x24 + 0x78) != 0) {
                            FUN_042a5368(*(long *)(unaff_x24 + 0x78),unaff_w27,DAT_083eb138);
                            if (*(long *)(unaff_x24 + 0x80) != 0) {
                              FUN_042a7e00(*(long *)(unaff_x24 + 0x80),unaff_w27,DAT_083eb1f0);
                              if (*(long *)(unaff_x24 + 0x88) != 0) {
                                FUN_0429fcc0(*(long *)(unaff_x24 + 0x88),unaff_w27,DAT_083eb060);
                                if (*(long *)(unaff_x24 + 0x90) != 0) {
                                  FUN_042a5368(*(long *)(unaff_x24 + 0x90),unaff_w27,DAT_083eb138);
                                  if (*(long *)(unaff_x24 + 0xa8) != 0) {
                                    FUN_0429fcc0(*(long *)(unaff_x24 + 0xa8),unaff_w27,DAT_083eb060)
                                    ;
                                    if (*(long *)(unaff_x24 + 0xb0) != 0) {
                                      FUN_0429fcc0(*(long *)(unaff_x24 + 0xb0),unaff_w27,
                                                   DAT_083eb060);
                                      if (*(long *)(unaff_x24 + 0xb8) != 0) {
                                        FUN_042a5368(*(long *)(unaff_x24 + 0xb8),unaff_w27,
                                                     DAT_083eb138);
                                        if (*(long *)(unaff_x24 + 0xc0) != 0) {
                                          FUN_0429e128(*(long *)(unaff_x24 + 0xc0),unaff_w27,
                                                       DAT_083eafe0);
                                          if (*(long *)(unaff_x24 + 200) != 0) {
                                            FUN_042a5368(*(long *)(unaff_x24 + 200),unaff_w27,
                                                         DAT_083eb138);
                                            if (*(long *)(unaff_x24 + 0xd0) != 0) {
                                              FUN_042a5368(*(long *)(unaff_x24 + 0xd0),unaff_w27,
                                                           DAT_083eb138);
                                              if (*(long *)(unaff_x24 + 0xd8) != 0) {
                                                FUN_042a5368(*(long *)(unaff_x24 + 0xd8),unaff_w27,
                                                             DAT_083eb138);
                                                if (*(long *)(unaff_x24 + 0xe8) != 0) {
                                                  FUN_042a7e00(*(long *)(unaff_x24 + 0xe8),unaff_w27
                                                               ,DAT_083eb1f0);
                                                  if (*(long *)(unaff_x24 + 0xf0) != 0) {
                                                    FUN_042a7e00(*(long *)(unaff_x24 + 0xf0),
                                                                 unaff_w27,DAT_083eb1f0);
                                                    if (*(long *)(unaff_x24 + 0x98) != 0) {
                                                      FUN_0429e128(*(long *)(unaff_x24 + 0x98),
                                                                   unaff_w27,DAT_083eafe0);
                                                      if (*(long *)(unaff_x24 + 0xa0) != 0) {
                                                        FUN_0429e128(*(long *)(unaff_x24 + 0xa0),
                                                                     unaff_w27,DAT_083eafe0);
                                                        if (*(long *)(unaff_x24 + 0x20) != 0) {
                                                          if (0 < auVar21._8_4_) {
                                                            lVar5 = *(long *)(*(long *)(unaff_x24 +
                                                                                       0x20) + 0x10)
                                                            ;
                                                            uVar7 = uVar10 & 0xffffffff;
                                                            uVar8 = uVar3 >> 0x20;
                                                            do {
                                                              *(undefined4 *)
                                                               (lVar5 + (long)(int)uVar8 * 4) =
                                                                   unaff_w28;
                                                              uVar2 = (int)uVar7 - 1;
                                                              uVar7 = (ulong)uVar2;
                                                              uVar8 = (ulong)((int)uVar8 + 1);
                                                            } while (uVar2 != 0);
                                                          }
                                                          if (*(long *)(unaff_x24 + 0xe8) != 0) {
                                                            puVar6 = *(undefined4 **)
                                                                      (DAT_083d4540 + 0xb8);
                                                            FUN_042a83b0(*puVar6,puVar6[1],puVar6[2]
                                                                         ,puVar6[3],
                                                                         *(long *)(unaff_x24 + 0xe8)
                                                                         ,uVar3,uVar10,DAT_083eb200)
                                                            ;
                                                            if (*(long *)(unaff_x24 + 0xf0) != 0) {
                                                              puVar6 = *(undefined4 **)
                                                                        (DAT_083d4540 + 0xb8);
                                                              uVar14 = puVar6[2];
                                                              uStack0000000000000034 = puVar6[3];
                                                              uVar13 = puVar6[1];
                                                              FUN_042a83b0(*puVar6,*(long *)(
                                                  unaff_x24 + 0xf0),uVar3,uVar10,DAT_083eb200);
                                                  lVar5 = in_stack_000000e0;
                                                  if (0 < (int)unaff_w27) {
                                                    uVar10 = 0;
                                                    lVar9 = (uVar3 >> 0x20) << 0x20;
                                                    do {
                                                      puVar6 = *(undefined4 **)(DAT_083d4540 + 0xb8)
                                                      ;
                                                      uVar15 = *puVar6;
                                                      uVar16 = puVar6[1];
                                                      uVar17 = puVar6[2];
                                                      uVar18 = puVar6[3];
                                                      if (unaff_x23 == 0) {
                                                        uVar2 = 1;
                                                      }
                                                      else {
                                                        uVar2 = (**(code **)(unaff_x23 + 0x18))
                                                                          (*(undefined8 *)
                                                                            (unaff_x23 + 0x40),
                                                                           uVar10 & 0xffffffff,
                                                                           *(undefined8 *)
                                                                            (unaff_x23 + 0x28));
                                                        uVar2 = uVar2 | 1;
                                                      }
                                                      lVar4 = FUN_03398188(DAT_083c7df8,1);
                                                      if (lVar4 == 0) goto LAB_0636b4bc;
                                                      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d44();
                                                      }
                                                      *(uint *)(lVar4 + 0x20) = uVar2;
                                                      FUN_0636acb0(&stack0x00000038);
                                                      if (unaff_x22 == 0) {
                                                        uVar11 = 0;
                                                        uVar19 = 0;
                                                        uVar20 = 0;
                                                      }
                                                      else {
                                                        uVar11 = (**(code **)(unaff_x22 + 0x18))
                                                                           (*(undefined8 *)
                                                                             (unaff_x22 + 0x40),
                                                                            uVar10 & 0xffffffff,
                                                                            *(undefined8 *)
                                                                             (unaff_x22 + 0x28));
                                                        uVar19 = uVar13;
                                                        uVar20 = uVar14;
                                                      }
                                                      if (unaff_x21 != 0) {
                                                        uVar15 = (**(code **)(unaff_x21 + 0x18))
                                                                           (*(undefined8 *)
                                                                             (unaff_x21 + 0x40),
                                                                            uVar10 & 0xffffffff,
                                                                            *(undefined8 *)
                                                                             (unaff_x21 + 0x28));
                                                        uVar16 = uVar13;
                                                        uVar17 = uVar14;
                                                        uVar18 = uStack0000000000000034;
                                                      }
                                                      uStack0000000000000034 = 0;
                                                      if (lVar5 == 0) {
                                                        uStack0000000000000030 = 0;
                                                        uStack000000000000002c = 0;
                                                        uVar1 = 0;
                                                      }
                                                      else {
                                                        uStack0000000000000030 =
                                                             (**(code **)(lVar5 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (lVar5 + 0x40),
                                                                        uVar10 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (lVar5 + 0x28));
                                                        uVar1 = uVar14;
                                                        uStack000000000000002c = uVar13;
                                                      }
                                                      if (unaff_x20 != 0) {
                                                        uStack0000000000000034 =
                                                             (**(code **)(unaff_x20 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (unaff_x20 + 0x40),
                                                                        uVar10 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (unaff_x20 + 0x28));
                                                      }
                                                      if (in_stack_00000020 == 0) {
                                                        uVar12 = 0;
                                                        uVar13 = 0;
                                                        uVar14 = 0;
                                                      }
                                                      else {
                                                        uVar12 = (**(code **)(in_stack_00000020 +
                                                                             0x18))(*(undefined8 *)
                                                                                     (
                                                  in_stack_00000020 + 0x40),uVar10 & 0xffffffff,
                                                  *(undefined8 *)(in_stack_00000020 + 0x28));
                                                  }
                                                  if (*(long *)(unaff_x24 + 0x18) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(uint *)(*(long *)(*(long *)(unaff_x24 + 0x18) +
                                                                     0x10) + (lVar9 >> 0x1e)) =
                                                       in_stack_00000038;
                                                  if (*(long *)(unaff_x24 + 0x28) == 0)
                                                  goto LAB_0636b4bc;
                                                  lVar4 = lVar9 >> 0x20;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x28) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar11;
                                                  puVar6[1] = uVar19;
                                                  puVar6[2] = uVar20;
                                                  if (*(long *)(unaff_x24 + 0x30) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x30) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar15;
                                                  puVar6[1] = uVar16;
                                                  puVar6[2] = uVar17;
                                                  puVar6[3] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x38) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x38) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar11;
                                                  puVar6[1] = uVar19;
                                                  puVar6[2] = uVar20;
                                                  if (*(long *)(unaff_x24 + 0x40) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x40) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar15;
                                                  puVar6[1] = uVar16;
                                                  puVar6[2] = uVar17;
                                                  puVar6[3] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x48) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x48) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar11;
                                                  puVar6[1] = uVar19;
                                                  puVar6[2] = uVar20;
                                                  if (*(long *)(unaff_x24 + 0x50) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x50) +
                                                                     0x10) + lVar4 * 0xc);
                                                  puVar6[2] = uVar1;
                                                  *puVar6 = uStack0000000000000030;
                                                  puVar6[1] = uStack000000000000002c;
                                                  if (*(long *)(unaff_x24 + 0x58) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x58) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar11;
                                                  puVar6[1] = uVar19;
                                                  puVar6[2] = uVar20;
                                                  if (*(long *)(unaff_x24 + 0x60) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x60) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar15;
                                                  puVar6[1] = uVar16;
                                                  puVar6[2] = uVar17;
                                                  puVar6[3] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x68) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x68) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar11;
                                                  puVar6[1] = uVar19;
                                                  puVar6[2] = uVar20;
                                                  if (*(long *)(unaff_x24 + 0x70) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x70) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar15;
                                                  puVar6[1] = uVar16;
                                                  puVar6[2] = uVar17;
                                                  puVar6[3] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x78) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x78) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar11;
                                                  puVar6[1] = uVar19;
                                                  puVar6[2] = uVar20;
                                                  if (*(long *)(unaff_x24 + 0x80) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x80) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar15;
                                                  puVar6[1] = uVar16;
                                                  puVar6[2] = uVar17;
                                                  puVar6[3] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x88) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0x88) + 0x10) +
                                                   lVar4 * 4) = uStack0000000000000034;
                                                  if (*(long *)(unaff_x24 + 0x90) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x90) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar13;
                                                  puVar6[2] = uVar14;
                                                  if (*(long *)(unaff_x24 + 0x98) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0x98) + 0x10) +
                                                   lVar4 * 4) = 0xffffffff;
                                                  if (*(long *)(unaff_x24 + 0xa0) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0xa0) + 0x10) +
                                                   lVar4 * 4) = 0xffffffff;
                                                  if ((in_stack_00000038 >> 4 & 1) != 0) {
                                                    *(int *)(unaff_x24 + 0xfc) =
                                                         *(int *)(unaff_x24 + 0xfc) + 1;
                                                  }
                                                  uVar10 = uVar10 + 1;
                                                  lVar9 = lVar9 + 0x100000000;
                                                  } while (unaff_w27 != uVar10);
                                                  }
                                                  return uVar3;
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
LAB_0636b4bc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


