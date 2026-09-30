/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnTransparencyChanged
ENTRY_POINT: 0636ad44
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


ulong Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnTransparencyChanged
                (ulong param_1,long param_2,undefined4 param_3,uint param_4,long param_5,
                long param_6,long param_7,undefined8 param_8,long param_9)

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
  long unaff_x25;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  long lStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  uint in_stack_00000038;
  long in_stack_000000e0;
  
                    /* try { // try from 0636ad4c to 0646ad57 has its CatchHandler @ 0636af80 */
  uVar10 = (ulong)param_4;
  lStack0000000000000020 = param_9;
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0636ad6c to 0646ad77 has its CatchHandler @ 0636af6c */
    FUN_0335b6c8(&DAT_083eb480,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 0636ad80 to 0646ad8b has its CatchHandler @ 0636af8c */
    FUN_0335b6c8(&DAT_083eb1f0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eafe0,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 0636ada4 to 0646adab has its CatchHandler @ 0636af84 */
    FUN_0335b6c8(&DAT_083eb060,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb138,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb200,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaff0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb020,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb088,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb178,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb228,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb4b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c7df8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d4540,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x25 + 0x938) = 1;
  }
  in_stack_00000038 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    auVar22 = FUN_042b5310(*(long *)(param_2 + 0x18),uVar10,DAT_083eb480);
    uVar11 = auVar22._8_8_;
    uVar3 = auVar22._0_8_;
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_0429e128(*(long *)(param_2 + 0x20),uVar10,DAT_083eafe0);
      if (*(long *)(param_2 + 0x28) != 0) {
        FUN_042a5368(*(long *)(param_2 + 0x28),uVar10,DAT_083eb138);
        if (*(long *)(param_2 + 0x30) != 0) {
          FUN_042a7e00(*(long *)(param_2 + 0x30),uVar10,DAT_083eb1f0);
          if (*(long *)(param_2 + 0x38) != 0) {
            FUN_042a5368(*(long *)(param_2 + 0x38),uVar10,DAT_083eb138);
            if (*(long *)(param_2 + 0x40) != 0) {
              FUN_042a7e00(*(long *)(param_2 + 0x40),uVar10,DAT_083eb1f0);
              if (*(long *)(param_2 + 0x48) != 0) {
                FUN_042a5368(*(long *)(param_2 + 0x48),uVar10,DAT_083eb138);
                if (*(long *)(param_2 + 0x50) != 0) {
                  FUN_042a5368(*(long *)(param_2 + 0x50),uVar10,DAT_083eb138);
                  if (*(long *)(param_2 + 0x58) != 0) {
                    FUN_042a5368(*(long *)(param_2 + 0x58),uVar10,DAT_083eb138);
                    if (*(long *)(param_2 + 0x60) != 0) {
                      FUN_042a7e00(*(long *)(param_2 + 0x60),uVar10,DAT_083eb1f0);
                      if (*(long *)(param_2 + 0x68) != 0) {
                        FUN_042a5368(*(long *)(param_2 + 0x68),uVar10,DAT_083eb138);
                        if (*(long *)(param_2 + 0x70) != 0) {
                          FUN_042a7e00(*(long *)(param_2 + 0x70),uVar10,DAT_083eb1f0);
                          if (*(long *)(param_2 + 0x78) != 0) {
                            FUN_042a5368(*(long *)(param_2 + 0x78),uVar10,DAT_083eb138);
                            if (*(long *)(param_2 + 0x80) != 0) {
                              FUN_042a7e00(*(long *)(param_2 + 0x80),uVar10,DAT_083eb1f0);
                              if (*(long *)(param_2 + 0x88) != 0) {
                                FUN_0429fcc0(*(long *)(param_2 + 0x88),uVar10,DAT_083eb060);
                                if (*(long *)(param_2 + 0x90) != 0) {
                                  FUN_042a5368(*(long *)(param_2 + 0x90),uVar10,DAT_083eb138);
                                  if (*(long *)(param_2 + 0xa8) != 0) {
                                    FUN_0429fcc0(*(long *)(param_2 + 0xa8),uVar10,DAT_083eb060);
                                    if (*(long *)(param_2 + 0xb0) != 0) {
                                      FUN_0429fcc0(*(long *)(param_2 + 0xb0),uVar10,DAT_083eb060);
                                      if (*(long *)(param_2 + 0xb8) != 0) {
                                        FUN_042a5368(*(long *)(param_2 + 0xb8),uVar10,DAT_083eb138);
                                        if (*(long *)(param_2 + 0xc0) != 0) {
                                          FUN_0429e128(*(long *)(param_2 + 0xc0),uVar10,DAT_083eafe0
                                                      );
                                          if (*(long *)(param_2 + 200) != 0) {
                                            FUN_042a5368(*(long *)(param_2 + 200),uVar10,
                                                         DAT_083eb138);
                                            if (*(long *)(param_2 + 0xd0) != 0) {
                                              FUN_042a5368(*(long *)(param_2 + 0xd0),uVar10,
                                                           DAT_083eb138);
                                              if (*(long *)(param_2 + 0xd8) != 0) {
                                                FUN_042a5368(*(long *)(param_2 + 0xd8),uVar10,
                                                             DAT_083eb138);
                                                if (*(long *)(param_2 + 0xe8) != 0) {
                                                  FUN_042a7e00(*(long *)(param_2 + 0xe8),uVar10,
                                                               DAT_083eb1f0);
                                                  if (*(long *)(param_2 + 0xf0) != 0) {
                                                    FUN_042a7e00(*(long *)(param_2 + 0xf0),uVar10,
                                                                 DAT_083eb1f0);
                                                    if (*(long *)(param_2 + 0x98) != 0) {
                                                      FUN_0429e128(*(long *)(param_2 + 0x98),uVar10,
                                                                   DAT_083eafe0);
                                                      if (*(long *)(param_2 + 0xa0) != 0) {
                                                        FUN_0429e128(*(long *)(param_2 + 0xa0),
                                                                     uVar10,DAT_083eafe0);
                                                        if (*(long *)(param_2 + 0x20) != 0) {
                                                          if (0 < auVar22._8_4_) {
                                                            lVar5 = *(long *)(*(long *)(param_2 +
                                                                                       0x20) + 0x10)
                                                            ;
                                                            uVar7 = uVar11 & 0xffffffff;
                                                            uVar8 = uVar3 >> 0x20;
                                                            do {
                                                              *(undefined4 *)
                                                               (lVar5 + (long)(int)uVar8 * 4) =
                                                                   param_3;
                                                              uVar2 = (int)uVar7 - 1;
                                                              uVar7 = (ulong)uVar2;
                                                              uVar8 = (ulong)((int)uVar8 + 1);
                                                            } while (uVar2 != 0);
                                                          }
                                                          if (*(long *)(param_2 + 0xe8) != 0) {
                                                            puVar6 = *(undefined4 **)
                                                                      (DAT_083d4540 + 0xb8);
                                                            FUN_042a83b0(*puVar6,puVar6[1],puVar6[2]
                                                                         ,puVar6[3],
                                                                         *(long *)(param_2 + 0xe8),
                                                                         uVar3,uVar11,DAT_083eb200);
                                                            if (*(long *)(param_2 + 0xf0) != 0) {
                                                              puVar6 = *(undefined4 **)
                                                                        (DAT_083d4540 + 0xb8);
                                                              uVar15 = puVar6[2];
                                                              uStack0000000000000034 = puVar6[3];
                                                              uVar14 = puVar6[1];
                                                              FUN_042a83b0(*puVar6,*(long *)(param_2
                                                                                            + 0xf0),
                                                                           uVar3,uVar11,DAT_083eb200
                                                                          );
                                                              lVar5 = in_stack_000000e0;
                                                              if (0 < (int)param_4) {
                                                                uVar11 = 0;
                                                                lVar9 = (uVar3 >> 0x20) << 0x20;
                                                                do {
                                                                  puVar6 = *(undefined4 **)
                                                                            (DAT_083d4540 + 0xb8);
                                                                  uVar16 = *puVar6;
                                                                  uVar17 = puVar6[1];
                                                                  uVar18 = puVar6[2];
                                                                  uVar19 = puVar6[3];
                                                                  if (param_5 == 0) {
                                                                    uVar2 = 1;
                                                                  }
                                                                  else {
                                                                    uVar2 = (**(code **)(param_5 +
                                                                                        0x18))(*(
                                                  undefined8 *)(param_5 + 0x40),uVar11 & 0xffffffff,
                                                  *(undefined8 *)(param_5 + 0x28));
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
                                                  if (param_6 == 0) {
                                                    uVar12 = 0;
                                                    uVar20 = 0;
                                                    uVar21 = 0;
                                                  }
                                                  else {
                                                    uVar12 = (**(code **)(param_6 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (param_6 + 0x40),
                                                                        uVar11 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (param_6 + 0x28));
                                                    uVar20 = uVar14;
                                                    uVar21 = uVar15;
                                                  }
                                                  lVar4 = lStack0000000000000020;
                                                  if (param_7 != 0) {
                                                    uVar16 = (**(code **)(param_7 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (param_7 + 0x40),
                                                                        uVar11 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (param_7 + 0x28));
                                                    uVar17 = uVar14;
                                                    uVar18 = uVar15;
                                                    uVar19 = uStack0000000000000034;
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
                                                                   (*(undefined8 *)(lVar5 + 0x40),
                                                                    uVar11 & 0xffffffff,
                                                                    *(undefined8 *)(lVar5 + 0x28));
                                                    uVar1 = uVar15;
                                                    uStack000000000000002c = uVar14;
                                                  }
                                                  if (unaff_x20 != 0) {
                                                    uStack0000000000000034 =
                                                         (**(code **)(unaff_x20 + 0x18))
                                                                   (*(undefined8 *)
                                                                     (unaff_x20 + 0x40),
                                                                    uVar11 & 0xffffffff,
                                                                    *(undefined8 *)
                                                                     (unaff_x20 + 0x28));
                                                  }
                                                  if (lVar4 == 0) {
                                                    uVar13 = 0;
                                                    uVar14 = 0;
                                                    uVar15 = 0;
                                                  }
                                                  else {
                                                    uVar13 = (**(code **)(lVar4 + 0x18))
                                                                       (*(undefined8 *)
                                                                         (lVar4 + 0x40),
                                                                        uVar11 & 0xffffffff,
                                                                        *(undefined8 *)
                                                                         (lVar4 + 0x28));
                                                  }
                                                  if (*(long *)(param_2 + 0x18) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(uint *)(*(long *)(*(long *)(param_2 + 0x18) +
                                                                     0x10) + (lVar9 >> 0x1e)) =
                                                       in_stack_00000038;
                                                  if (*(long *)(param_2 + 0x28) == 0)
                                                  goto LAB_0636b4bc;
                                                  lVar4 = lVar9 >> 0x20;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x28) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar20;
                                                  puVar6[2] = uVar21;
                                                  if (*(long *)(param_2 + 0x30) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x30) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar16;
                                                  puVar6[1] = uVar17;
                                                  puVar6[2] = uVar18;
                                                  puVar6[3] = uVar19;
                                                  if (*(long *)(param_2 + 0x38) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x38) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar20;
                                                  puVar6[2] = uVar21;
                                                  if (*(long *)(param_2 + 0x40) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x40) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar16;
                                                  puVar6[1] = uVar17;
                                                  puVar6[2] = uVar18;
                                                  puVar6[3] = uVar19;
                                                  if (*(long *)(param_2 + 0x48) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x48) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar20;
                                                  puVar6[2] = uVar21;
                                                  if (*(long *)(param_2 + 0x50) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x50) +
                                                                     0x10) + lVar4 * 0xc);
                                                  puVar6[2] = uVar1;
                                                  *puVar6 = uStack0000000000000030;
                                                  puVar6[1] = uStack000000000000002c;
                                                  if (*(long *)(param_2 + 0x58) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x58) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar20;
                                                  puVar6[2] = uVar21;
                                                  if (*(long *)(param_2 + 0x60) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x60) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar16;
                                                  puVar6[1] = uVar17;
                                                  puVar6[2] = uVar18;
                                                  puVar6[3] = uVar19;
                                                  if (*(long *)(param_2 + 0x68) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x68) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar20;
                                                  puVar6[2] = uVar21;
                                                  if (*(long *)(param_2 + 0x70) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x70) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar16;
                                                  puVar6[1] = uVar17;
                                                  puVar6[2] = uVar18;
                                                  puVar6[3] = uVar19;
                                                  if (*(long *)(param_2 + 0x78) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x78) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar12;
                                                  puVar6[1] = uVar20;
                                                  puVar6[2] = uVar21;
                                                  if (*(long *)(param_2 + 0x80) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x80) +
                                                                     0x10) + lVar4 * 0x10);
                                                  *puVar6 = uVar16;
                                                  puVar6[1] = uVar17;
                                                  puVar6[2] = uVar18;
                                                  puVar6[3] = uVar19;
                                                  if (*(long *)(param_2 + 0x88) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(param_2 + 0x88) + 0x10) +
                                                   lVar4 * 4) = uStack0000000000000034;
                                                  if (*(long *)(param_2 + 0x90) == 0)
                                                  goto LAB_0636b4bc;
                                                  puVar6 = (undefined4 *)
                                                           (*(long *)(*(long *)(param_2 + 0x90) +
                                                                     0x10) + lVar4 * 0xc);
                                                  *puVar6 = uVar13;
                                                  puVar6[1] = uVar14;
                                                  puVar6[2] = uVar15;
                                                  if (*(long *)(param_2 + 0x98) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(param_2 + 0x98) + 0x10) +
                                                   lVar4 * 4) = 0xffffffff;
                                                  if (*(long *)(param_2 + 0xa0) == 0)
                                                  goto LAB_0636b4bc;
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)(param_2 + 0xa0) + 0x10) +
                                                   lVar4 * 4) = 0xffffffff;
                                                  if ((in_stack_00000038 >> 4 & 1) != 0) {
                                                    *(int *)(param_2 + 0xfc) =
                                                         *(int *)(param_2 + 0xfc) + 1;
                                                  }
                                                  uVar11 = uVar11 + 1;
                                                  lVar9 = lVar9 + 0x100000000;
                                                  } while (uVar10 != uVar11);
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


