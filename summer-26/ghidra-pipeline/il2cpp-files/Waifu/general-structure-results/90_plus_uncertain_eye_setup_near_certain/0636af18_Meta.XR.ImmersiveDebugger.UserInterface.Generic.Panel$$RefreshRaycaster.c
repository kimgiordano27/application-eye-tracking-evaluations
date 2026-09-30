/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 0636af18
PROGRAM: Waifu-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long lVar8;
  uint unaff_w27;
  undefined4 unaff_w28;
  long unaff_x29;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  uint in_stack_00000038;
  long in_stack_000000e0;
  
                    /* catch() { ... } // from try @ 0636ae98 with catch @ 0636af18 */
  FUN_042a7e00();
                    /* catch() { ... } // from try @ 0636ae94 with catch @ 0636af1c */
                    /* catch() { ... } // from try @ 0636aa64 with catch @ 0636af20 */
  if (*(long *)(unaff_x24 + 0x48) != 0) {
                    /* catch() { ... } // from try @ 0636abf0 with catch @ 0636af24 */
                    /* catch() { ... } // from try @ 0636ae90 with catch @ 0636af28 */
                    /* catch() { ... } // from try @ 0636a8b8 with catch @ 0636af2c */
    FUN_042a5368(*(long *)(unaff_x24 + 0x48),unaff_w27,*(undefined8 *)(unaff_x29 + 0x138));
                    /* catch() { ... } // from try @ 0636ae8c with catch @ 0636af30 */
                    /* catch() { ... } // from try @ 0636a984 with catch @ 0636af34 */
    if (*(long *)(unaff_x24 + 0x50) != 0) {
                    /* catch() { ... } // from try @ 0636ae88 with catch @ 0636af38 */
                    /* catch() { ... } // from try @ 0636a9a8 with catch @ 0636af3c */
                    /* catch() { ... } // from try @ 0636ae84 with catch @ 0636af40 */
      FUN_042a5368(*(long *)(unaff_x24 + 0x50),unaff_w27,*(undefined8 *)(unaff_x29 + 0x138));
                    /* catch() { ... } // from try @ 0636ae80 with catch @ 0636af44 */
                    /* catch() { ... } // from try @ 0636ae7c with catch @ 0636af48 */
      if (*(long *)(unaff_x24 + 0x58) != 0) {
                    /* catch() { ... } // from try @ 0636ae78 with catch @ 0636af4c */
                    /* catch() { ... } // from try @ 0636a9e8 with catch @ 0636af50 */
                    /* catch() { ... } // from try @ 0636ae74 with catch @ 0636af54 */
        FUN_042a5368(*(long *)(unaff_x24 + 0x58),unaff_w27,*(undefined8 *)(unaff_x29 + 0x138));
                    /* catch() { ... } // from try @ 0636a8a4 with catch @ 0636af58 */
                    /* catch() { ... } // from try @ 0636aa30 with catch @ 0636af5c */
        if (*(long *)(unaff_x24 + 0x60) != 0) {
                    /* catch() { ... } // from try @ 0636a9c0 with catch @ 0636af60 */
                    /* catch() { ... } // from try @ 0636ae70 with catch @ 0636af64 */
                    /* catch() { ... } // from try @ 0636ad0c with catch @ 0636af68 */
          FUN_042a7e00(*(long *)(unaff_x24 + 0x60),unaff_w27,*(undefined8 *)(unaff_x26 + 0x1f0));
                    /* catch() { ... } // from try @ 0636ad6c with catch @ 0636af6c */
                    /* catch() { ... } // from try @ 0636ae6c with catch @ 0636af70 */
          if (*(long *)(unaff_x24 + 0x68) != 0) {
                    /* catch() { ... } // from try @ 0636ae68 with catch @ 0636af74 */
                    /* catch() { ... } // from try @ 0636ae64 with catch @ 0636af78 */
                    /* catch() { ... } // from try @ 0636ad2c with catch @ 0636af7c */
            FUN_042a5368(*(long *)(unaff_x24 + 0x68),unaff_w27,*(undefined8 *)(unaff_x29 + 0x138));
                    /* catch() { ... } // from try @ 0636ad4c with catch @ 0636af80 */
                    /* catch() { ... } // from try @ 0636ada4 with catch @ 0636af84 */
            if (*(long *)(unaff_x24 + 0x70) != 0) {
                    /* catch() { ... } // from try @ 0636ae60 with catch @ 0636af88 */
                    /* catch() { ... } // from try @ 0636ad80 with catch @ 0636af8c */
                    /* catch() { ... } // from try @ 0636accc with catch @ 0636af90 */
              FUN_042a7e00(*(long *)(unaff_x24 + 0x70),unaff_w27,*(undefined8 *)(unaff_x26 + 0x1f0))
              ;
                    /* catch() { ... } // from try @ 0636ac64 with catch @ 0636af94 */
                    /* catch() { ... } // from try @ 0636ac78 with catch @ 0636af98 */
              if (*(long *)(unaff_x24 + 0x78) != 0) {
                FUN_042a5368(*(long *)(unaff_x24 + 0x78),unaff_w27,
                             *(undefined8 *)(unaff_x29 + 0x138));
                    /* try { // try from 0636afa8 to 0646afab has its CatchHandler @ 0636afe8 */
                    /* try { // try from 0636afac to 0646afef has its CatchHandler @ 06369dec */
                if (*(long *)(unaff_x24 + 0x80) != 0) {
                  FUN_042a7e00(*(long *)(unaff_x24 + 0x80),unaff_w27,
                               *(undefined8 *)(unaff_x26 + 0x1f0));
                  if (*(long *)(unaff_x24 + 0x88) != 0) {
                    FUN_0429fcc0(*(long *)(unaff_x24 + 0x88),unaff_w27,DAT_083eb060);
                    if (*(long *)(unaff_x24 + 0x90) != 0) {
                      FUN_042a5368(*(long *)(unaff_x24 + 0x90),unaff_w27,
                                   *(undefined8 *)(unaff_x29 + 0x138));
                    /* catch() { ... } // from try @ 0636afa8 with catch @ 0636afe8 */
                      if (*(long *)(unaff_x24 + 0xa8) != 0) {
                    /* try { // try from 0636aff0 to 0646aff7 has its CatchHandler @ 0636aff8 */
                    /* catch() { ... } // from try @ 0636a7f8 with catch @ 0636aff8
                       catch() { ... } // from try @ 0636aed0 with catch @ 0636aff8
                       catch() { ... } // from try @ 0636aff0 with catch @ 0636aff8 */
                        FUN_0429fcc0(*(long *)(unaff_x24 + 0xa8),unaff_w27,DAT_083eb060);
                        if (*(long *)(unaff_x24 + 0xb0) != 0) {
                    /* try { // try from 0636b004 to 0646b5ab has its CatchHandler @ 0636b004
                       catch() { ... } // from try @ 0636b004 with catch @ 0636b004
                       catch() { ... } // from try @ 0636b6c0 with catch @ 0636b004
                       catch() { ... } // from try @ 0636b6f0 with catch @ 0636b004 */
                          FUN_0429fcc0(*(long *)(unaff_x24 + 0xb0),unaff_w27,DAT_083eb060);
                          if (*(long *)(unaff_x24 + 0xb8) != 0) {
                            FUN_042a5368(*(long *)(unaff_x24 + 0xb8),unaff_w27,
                                         *(undefined8 *)(unaff_x29 + 0x138));
                            if (*(long *)(unaff_x24 + 0xc0) != 0) {
                              FUN_0429e128(*(long *)(unaff_x24 + 0xc0),unaff_w27,
                                           *(undefined8 *)(unaff_x19 + 0xfe0));
                              if (*(long *)(unaff_x24 + 200) != 0) {
                                FUN_042a5368(*(long *)(unaff_x24 + 200),unaff_w27,
                                             *(undefined8 *)(unaff_x29 + 0x138));
                                if (*(long *)(unaff_x24 + 0xd0) != 0) {
                                  FUN_042a5368(*(long *)(unaff_x24 + 0xd0),unaff_w27,
                                               *(undefined8 *)(unaff_x29 + 0x138));
                                  if (*(long *)(unaff_x24 + 0xd8) != 0) {
                                    FUN_042a5368(*(long *)(unaff_x24 + 0xd8),unaff_w27,
                                                 *(undefined8 *)(unaff_x29 + 0x138));
                                    if (*(long *)(unaff_x24 + 0xe8) != 0) {
                                      FUN_042a7e00(*(long *)(unaff_x24 + 0xe8),unaff_w27,
                                                   *(undefined8 *)(unaff_x26 + 0x1f0));
                                      if (*(long *)(unaff_x24 + 0xf0) != 0) {
                                        FUN_042a7e00(*(long *)(unaff_x24 + 0xf0),unaff_w27,
                                                     *(undefined8 *)(unaff_x26 + 0x1f0));
                                        if (*(long *)(unaff_x24 + 0x98) != 0) {
                                          FUN_0429e128(*(long *)(unaff_x24 + 0x98),unaff_w27,
                                                       *(undefined8 *)(unaff_x19 + 0xfe0));
                                          if (*(long *)(unaff_x24 + 0xa0) != 0) {
                                            FUN_0429e128(*(long *)(unaff_x24 + 0xa0),unaff_w27,
                                                         *(undefined8 *)(unaff_x19 + 0xfe0));
                                            if (*(long *)(unaff_x24 + 0x20) != 0) {
                                              if (0 < (int)in_stack_00000008) {
                                                lVar4 = *(long *)(*(long *)(unaff_x24 + 0x20) + 0x10
                                                                 );
                                                uVar6 = in_stack_00000008 & 0xffffffff;
                                                uVar7 = in_stack_00000010 >> 0x20;
                                                do {
                                                  *(undefined4 *)(lVar4 + (long)(int)uVar7 * 4) =
                                                       unaff_w28;
                                                  uVar2 = (int)uVar6 - 1;
                                                  uVar6 = (ulong)uVar2;
                                                  uVar7 = (ulong)((int)uVar7 + 1);
                                                } while (uVar2 != 0);
                                              }
                                              if (*(long *)(unaff_x24 + 0xe8) != 0) {
                                                puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8);
                                                FUN_042a83b0(*puVar5,puVar5[1],puVar5[2],puVar5[3],
                                                             *(long *)(unaff_x24 + 0xe8),
                                                             in_stack_00000010,in_stack_00000008,
                                                             DAT_083eb200);
                                                if (*(long *)(unaff_x24 + 0xf0) != 0) {
                                                  puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8);
                                                  uVar12 = puVar5[2];
                                                  uStack0000000000000034 = puVar5[3];
                                                  uVar11 = puVar5[1];
                                                  FUN_042a83b0(*puVar5,*(long *)(unaff_x24 + 0xf0),
                                                               in_stack_00000010,in_stack_00000008,
                                                               DAT_083eb200);
                                                  lVar4 = in_stack_000000e0;
                                                  if (0 < (int)unaff_w27) {
                                                    uVar7 = 0;
                                                    lVar8 = (in_stack_00000010 >> 0x20) << 0x20;
                                                    do {
                                                      puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8)
                                                      ;
                                                      uVar13 = *puVar5;
                                                      uVar14 = puVar5[1];
                                                      uVar15 = puVar5[2];
                                                      uVar16 = puVar5[3];
                                                      if (unaff_x23 == 0) {
                                                        uVar2 = 1;
                                                      }
                                                      else {
                                                        uVar2 = (**(code **)(unaff_x23 + 0x18))
                                                                          (*(undefined8 *)
                                                                            (unaff_x23 + 0x40),
                                                                           uVar7 & 0xffffffff,
                                                                           *(undefined8 *)
                                                                            (unaff_x23 + 0x28));
                                                        uVar2 = uVar2 | 1;
                                                      }
                                                      lVar3 = FUN_03398188(DAT_083c7df8,1);
                                                      if (lVar3 == 0) goto LAB_0636b4bc;
                                                      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d44();
                                                      }
                                                      *(uint *)(lVar3 + 0x20) = uVar2;
                                                      FUN_0636acb0(&stack0x00000038);
                                                      if (unaff_x22 == 0) {
                                                        uVar9 = 0;
                                                        uVar17 = 0;
                                                        uVar18 = 0;
                                                      }
                                                      else {
                                                        uVar9 = (**(code **)(unaff_x22 + 0x18))
                                                                          (*(undefined8 *)
                                                                            (unaff_x22 + 0x40),
                                                                           uVar7 & 0xffffffff,
                                                                           *(undefined8 *)
                                                                            (unaff_x22 + 0x28));
                                                        uVar17 = uVar11;
                                                        uVar18 = uVar12;
                                                      }
                                                      if (unaff_x21 != 0) {
                                                        uVar13 = (**(code **)(unaff_x21 + 0x18))
                                                                           (*(undefined8 *)
                                                                             (unaff_x21 + 0x40),
                                                                            uVar7 & 0xffffffff,
                                                                            *(undefined8 *)
                                                                             (unaff_x21 + 0x28));
                                                        uVar14 = uVar11;
                                                        uVar15 = uVar12;
                                                        uVar16 = uStack0000000000000034;
                                                      }
                                                      uStack0000000000000034 = 0;
                                                      if (lVar4 == 0) {
                                                        uStack0000000000000030 = 0;
                                                        uStack000000000000002c = 0;
                                                        uVar1 = 0;
                                                      }
                                                      else {
                                                        uStack0000000000000030 =
                                                             (**(code **)(lVar4 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (lVar4 + 0x40),
                                                                        uVar7 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (lVar4 + 0x28));
                                                        uVar1 = uVar12;
                                                        uStack000000000000002c = uVar11;
                                                      }
                                                      if (unaff_x20 != 0) {
                                                        uStack0000000000000034 =
                                                             (**(code **)(unaff_x20 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (unaff_x20 + 0x40),
                                                                        uVar7 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (unaff_x20 + 0x28));
                                                      }
                                                      if (in_stack_00000020 == 0) {
                                                        uVar10 = 0;
                                                        uVar11 = 0;
                                                        uVar12 = 0;
                                                      }
                                                      else {
                                                        uVar10 = (**(code **)(in_stack_00000020 +
                                                                             0x18))(*(undefined8 *)
                                                                                     (
                                                  in_stack_00000020 + 0x40),uVar7 & 0xffffffff,
                                                  *(undefined8 *)(in_stack_00000020 + 0x28));
                                                  }
                                                  if (*(long *)(unaff_x24 + 0x18) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(uint *)(*(long *)(*(long *)(unaff_x24 + 0x18) +
                                                                     0x10) + (lVar8 >> 0x1e)) =
                                                       in_stack_00000038;
                                                  if (*(long *)(unaff_x24 + 0x28) == 0)
                                                  goto LAB_0636b4bc;
                                                  lVar3 = lVar8 >> 0x20;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x28) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar9;
                                                  puVar5[1] = uVar17;
                                                  puVar5[2] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x30) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x30) +
                                                                     0x10) + lVar3 * 0x10);
                                                  *puVar5 = uVar13;
                                                  puVar5[1] = uVar14;
                                                  puVar5[2] = uVar15;
                                                  puVar5[3] = uVar16;
                                                  if (*(long *)(unaff_x24 + 0x38) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x38) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar9;
                                                  puVar5[1] = uVar17;
                                                  puVar5[2] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x40) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x40) +
                                                                     0x10) + lVar3 * 0x10);
                                                  *puVar5 = uVar13;
                                                  puVar5[1] = uVar14;
                                                  puVar5[2] = uVar15;
                                                  puVar5[3] = uVar16;
                                                  if (*(long *)(unaff_x24 + 0x48) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x48) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar9;
                                                  puVar5[1] = uVar17;
                                                  puVar5[2] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x50) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x50) +
                                                                     0x10) + lVar3 * 0xc);
                                                  puVar5[2] = uVar1;
                                                  *puVar5 = uStack0000000000000030;
                                                  puVar5[1] = uStack000000000000002c;
                                                  if (*(long *)(unaff_x24 + 0x58) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x58) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar9;
                                                  puVar5[1] = uVar17;
                                                  puVar5[2] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x60) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x60) +
                                                                     0x10) + lVar3 * 0x10);
                                                  *puVar5 = uVar13;
                                                  puVar5[1] = uVar14;
                                                  puVar5[2] = uVar15;
                                                  puVar5[3] = uVar16;
                                                  if (*(long *)(unaff_x24 + 0x68) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x68) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar9;
                                                  puVar5[1] = uVar17;
                                                  puVar5[2] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x70) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x70) +
                                                                     0x10) + lVar3 * 0x10);
                                                  *puVar5 = uVar13;
                                                  puVar5[1] = uVar14;
                                                  puVar5[2] = uVar15;
                                                  puVar5[3] = uVar16;
                                                  if (*(long *)(unaff_x24 + 0x78) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x78) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar9;
                                                  puVar5[1] = uVar17;
                                                  puVar5[2] = uVar18;
                                                  if (*(long *)(unaff_x24 + 0x80) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x80) +
                                                                     0x10) + lVar3 * 0x10);
                                                  *puVar5 = uVar13;
                                                  puVar5[1] = uVar14;
                                                  puVar5[2] = uVar15;
                                                  puVar5[3] = uVar16;
                                                  if (*(long *)(unaff_x24 + 0x88) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0x88) + 0x10) +
                                                   lVar3 * 4) = uStack0000000000000034;
                                                  if (*(long *)(unaff_x24 + 0x90) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar5 = (undefined4 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0x90) +
                                                                     0x10) + lVar3 * 0xc);
                                                  *puVar5 = uVar10;
                                                  puVar5[1] = uVar11;
                                                  puVar5[2] = uVar12;
                                                  if (*(long *)(unaff_x24 + 0x98) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0x98) + 0x10) +
                                                   lVar3 * 4) = 0xffffffff;
                                                  if (*(long *)(unaff_x24 + 0xa0) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(unaff_x24 + 0xa0) + 0x10) +
                                                   lVar3 * 4) = 0xffffffff;
                                                  if ((in_stack_00000038 >> 4 & 1) != 0) {
                                                    *(int *)(unaff_x24 + 0xfc) =
                                                         *(int *)(unaff_x24 + 0xfc) + 1;
                                                  }
                                                  uVar7 = uVar7 + 1;
                                                  lVar8 = lVar8 + 0x100000000;
                                                  } while (unaff_w27 != uVar7);
                                                  }
                                                  return in_stack_00000010;
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


