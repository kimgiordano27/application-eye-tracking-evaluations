/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDestroy
ENTRY_POINT: 072a2f50
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__OnDestroy(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint in_w9;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x26;
  long unaff_x28;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (unaff_w19 < in_w9) {
    lVar13 = *(long *)(unaff_x20 + 0x150);
    if (lVar13 == 0) {
LAB_072a3650:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar2 = *(int *)(param_1 + unaff_x26 * 4 + 0x20);
    uVar12 = iVar2 + 1;
    if (uVar12 < *(uint *)(lVar13 + 0x18)) {
      lVar8 = *(long *)(unaff_x20 + 0x130);
      if (lVar8 == 0) goto LAB_072a3650;
      if (unaff_w21 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_072a3650;
        if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
          uVar12 = *(uint *)(lVar13 + (long)(int)uVar12 * 4 + 0x20);
          iVar3 = *(int *)(lVar8 + unaff_x26 * 4 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_0767a6b4(iVar2 + iVar3 + 2,0x16,0);
          if (uVar7 < *(uint *)(lVar13 + 0x18)) {
            uVar7 = *(uint *)(lVar13 + (long)(int)uVar7 * 4 + 0x20);
            if ((*(long *)(unaff_x20 + 0xc0) == 0) ||
               (lVar13 = *(long *)(unaff_x20 + 0xe0), lVar13 == 0)) goto LAB_072a3650;
            if (unaff_w21 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = *(long *)(lVar13 + unaff_x28 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_072a3650;
              if (unaff_w19 < *(uint *)(lVar13 + 0x18)) {
                lVar8 = *(long *)(unaff_x20 + 0x118);
                if (lVar8 == 0) goto LAB_072a3650;
                if (unaff_w21 < *(uint *)(lVar8 + 0x18)) {
                  lVar10 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
                  if (lVar10 == 0) goto LAB_072a3650;
                  if (unaff_w19 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
                    if (lVar10 == 0) goto LAB_072a3650;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      lVar11 = *(long *)(unaff_x20 + 0xe8);
                      if (lVar11 == 0) goto LAB_072a3650;
                      if (unaff_w21 < *(uint *)(lVar11 + 0x18)) {
                        lVar11 = *(long *)(lVar11 + unaff_x28 * 8 + 0x20);
                        if (lVar11 == 0) goto LAB_072a3650;
                        if (unaff_w19 < *(uint *)(lVar11 + 0x18)) {
                          lVar9 = *(long *)(*(long *)(unaff_x20 + 0xc0) + 0x28);
                          iVar2 = *(int *)(lVar13 + unaff_x26 * 4 + 0x20);
                          uVar4 = *(int *)(lVar11 + unaff_x26 * 4 + 0x20) * 2;
                          uVar1 = uVar4;
                          if ((int)uVar12 <= (int)uVar4) {
                            uVar1 = uVar12;
                          }
                          if ((int)uVar1 < 1) {
                            uVar14 = 0;
                          }
                          else {
                            uVar17 = *(undefined4 *)(lVar10 + 0x20);
                            uVar6 = 0;
                            do {
                              uVar14 = uVar6;
                              uVar15 = *(undefined8 *)(unaff_x20 + 0xc0);
                              if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                                thunk_FUN_040d65a8();
                              }
                              FUN_07298d3c(uVar15,uVar17,(long)&stack0x00000028 + 4,&stack0x00000028
                                          );
                              lVar13 = *(long *)(unaff_x20 + 0x188);
                              if (lVar13 == 0) goto LAB_072a3650;
                              if (*(uint *)(lVar13 + 0x18) <= unaff_w19) goto LAB_072a3718;
                              lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
                              uVar16 = FUN_072a4664(uStack000000000000002c);
                              if (lVar13 == 0) goto LAB_072a3650;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_072a3718;
                              lVar8 = *(long *)(unaff_x20 + 0x188);
                              *(undefined4 *)(lVar13 + uVar14 * 4 + 0x20) = uVar16;
                              if (lVar8 == 0) goto LAB_072a3650;
                              if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                              lVar13 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                              uVar16 = FUN_072a4664(uStack0000000000000028);
                              if (lVar13 == 0) goto LAB_072a3650;
                              if ((ulong)*(uint *)(lVar13 + 0x18) <= uVar14 + 1) goto LAB_072a3718;
                              *(undefined4 *)(lVar13 + uVar14 * 4 + 0x24) = uVar16;
                              uVar6 = uVar14 + 2;
                            } while (uVar14 + 2 < (ulong)uVar1);
                            lVar8 = *(long *)(unaff_x20 + 0x118);
                            if (lVar8 == 0) goto LAB_072a3650;
                            uVar14 = uVar14 + 2;
                          }
                          if (unaff_w21 < *(uint *)(lVar8 + 0x18)) {
                            lVar13 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
                            if (lVar13 == 0) goto LAB_072a3650;
                            if (unaff_w19 < *(uint *)(lVar13 + 0x18)) {
                              lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
                              if (lVar13 == 0) goto LAB_072a3650;
                              if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
                                uVar12 = uVar4;
                                if ((int)uVar7 <= (int)uVar4) {
                                  uVar12 = uVar7;
                                }
                                if ((int)uVar14 < (int)uVar12) {
                                  uVar17 = *(undefined4 *)(lVar13 + 0x24);
                                  uVar14 = uVar14 & 0xffffffff;
                                  do {
                                    uVar15 = *(undefined8 *)(unaff_x20 + 0xc0);
                                    if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                                      thunk_FUN_040d65a8();
                                    }
                                    FUN_07298d3c(uVar15,uVar17,(long)&stack0x00000028 + 4,
                                                 &stack0x00000028);
                                    lVar13 = *(long *)(unaff_x20 + 0x188);
                                    if (lVar13 == 0) goto LAB_072a3650;
                                    if (*(uint *)(lVar13 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                    lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
                                    uVar16 = FUN_072a4664(uStack000000000000002c);
                                    if (lVar13 == 0) goto LAB_072a3650;
                                    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_072a3718;
                                    lVar8 = *(long *)(unaff_x20 + 0x188);
                                    *(undefined4 *)(lVar13 + uVar14 * 4 + 0x20) = uVar16;
                                    if (lVar8 == 0) goto LAB_072a3650;
                                    if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                    lVar13 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                                    uVar16 = FUN_072a4664(uStack0000000000000028);
                                    if (lVar13 == 0) goto LAB_072a3650;
                                    if (*(uint *)(lVar13 + 0x18) <= (int)uVar14 + 1U)
                                    goto LAB_072a3718;
                                    lVar8 = uVar14 * 4;
                                    uVar14 = uVar14 + 2;
                                    *(undefined4 *)(lVar13 + lVar8 + 0x24) = uVar16;
                                  } while ((long)uVar14 < (long)(int)uVar12);
                                  lVar8 = *(long *)(unaff_x20 + 0x118);
                                  if (lVar8 == 0) goto LAB_072a3650;
                                }
                                if (unaff_w21 < *(uint *)(lVar8 + 0x18)) {
                                  lVar13 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
                                  if (lVar13 != 0) {
                                    if (*(uint *)(lVar13 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                    lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
                                    if (lVar13 != 0) {
                                      if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_072a3718;
                                      if ((int)uVar14 < (int)uVar4) {
                                        uVar17 = *(undefined4 *)(lVar13 + 0x28);
                                        uVar14 = (ulong)(int)uVar14;
                                        do {
                                          uVar15 = *(undefined8 *)(unaff_x20 + 0xc0);
                                          if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                                            thunk_FUN_040d65a8();
                                          }
                                          FUN_07298d3c(uVar15,uVar17,(long)&stack0x00000028 + 4,
                                                       &stack0x00000028);
                                          lVar13 = *(long *)(unaff_x20 + 0x188);
                                          if (lVar13 == 0) goto LAB_072a3650;
                                          if (*(uint *)(lVar13 + 0x18) <= unaff_w19)
                                          goto LAB_072a3718;
                                          lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
                                          uVar16 = FUN_072a4664(uStack000000000000002c);
                                          if (lVar13 == 0) goto LAB_072a3650;
                                          if (*(uint *)(lVar13 + 0x18) <= (uint)uVar14)
                                          goto LAB_072a3718;
                                          lVar8 = *(long *)(unaff_x20 + 0x188);
                                          *(undefined4 *)(lVar13 + uVar14 * 4 + 0x20) = uVar16;
                                          if (lVar8 == 0) goto LAB_072a3650;
                                          if (*(uint *)(lVar8 + 0x18) <= unaff_w19)
                                          goto LAB_072a3718;
                                          lVar13 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                                          uVar16 = FUN_072a4664(uStack0000000000000028);
                                          if (lVar13 == 0) goto LAB_072a3650;
                                          if (*(uint *)(lVar13 + 0x18) <= (uint)uVar14 + 1)
                                          goto LAB_072a3718;
                                          lVar8 = uVar14 * 4;
                                          uVar14 = uVar14 + 2;
                                          *(undefined4 *)(lVar13 + lVar8 + 0x24) = uVar16;
                                        } while ((long)uVar14 < (long)(int)uVar4);
                                      }
                                      lVar13 = *(long *)(unaff_x20 + 0x148);
                                      if (lVar13 != 0) {
                                        if (*(uint *)(lVar13 + 0x18) <= unaff_w21)
                                        goto LAB_072a3718;
                                        lVar13 = *(long *)(lVar13 + unaff_x28 * 8 + 0x20);
                                        if (lVar13 != 0) {
                                          if (*(uint *)(lVar13 + 0x18) <= unaff_w19)
                                          goto LAB_072a3718;
                                          lVar8 = *(long *)(unaff_x20 + 0xc0);
                                          if (lVar8 != 0) {
                                            lVar10 = 0;
                                            iVar3 = *(int *)(lVar13 + unaff_x26 * 4 + 0x20);
                                            iVar5 = (int)uVar14;
                                            uVar14 = -((uVar14 & 0xffffffff) >> 0x1f) &
                                                     0xfffffffc00000000 | (uVar14 & 0xffffffff) << 2
                                            ;
                                            lVar13 = (lVar9 - in_stack_00000018._4_4_) + (long)iVar2
                                            ;
                                            do {
                                              lVar11 = *(long *)(lVar8 + 0x28);
                                              iVar2 = (int)lVar10;
                                              if ((0x23c < iVar5 + lVar10) || (lVar13 <= lVar11)) {
                                                if (lVar13 < lVar11) {
                                                  Meta_XR_ImmersiveDebugger_Manager_Hook___ctor
                                                            (lVar8,(int)lVar11 - (int)lVar13);
                                                  lVar8 = *(long *)(unaff_x20 + 0xc0);
                                                  if (lVar8 == 0) break;
                                                  uVar12 = (iVar5 + iVar2) - 4;
                                                  uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^
                                                                    0xffffffffU);
                                                }
                                                else {
                                                  uVar12 = iVar2 + iVar5;
                                                }
                                                if (*(long *)(lVar8 + 0x28) < lVar13) {
                                                  FUN_07297dc4(lVar8,(int)lVar13 -
                                                                     (int)*(long *)(lVar8 + 0x28));
                                                }
                                                if (0x23f < (int)uVar12) {
                                                  return;
                                                }
                                                lVar13 = *(long *)(unaff_x20 + 0x188);
                                                if (lVar13 != 0) {
                                                  if (unaff_w19 < *(uint *)(lVar13 + 0x18)) {
                                                    FUN_0769c874(*(undefined8 *)
                                                                  (lVar13 + unaff_x26 * 8 + 0x20),
                                                                 uVar12,0x243 - uVar12,0);
                                                    return;
                                                  }
                                                  goto LAB_072a3718;
                                                }
                                                break;
                                              }
                                              if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                                                thunk_FUN_040d65a8();
                                              }
                                              FUN_07299060(lVar8,iVar3 + 0x20,
                                                           (long)&stack0x00000028 + 4,
                                                           &stack0x00000028,
                                                           (long)&stack0x00000020 + 4,
                                                           &stack0x00000020);
                                              lVar8 = *(long *)(unaff_x20 + 0x188);
                                              if (lVar8 == 0) break;
                                              if (*(uint *)(lVar8 + 0x18) <= unaff_w19)
                                              goto LAB_072a3718;
                                              lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                                              uVar17 = FUN_072a4664(uStack0000000000000024);
                                              if (lVar8 == 0) break;
                                              if (*(uint *)(lVar8 + 0x18) <= (uint)(iVar5 + iVar2))
                                              goto LAB_072a3718;
                                              lVar11 = *(long *)(unaff_x20 + 0x188);
                                              *(undefined4 *)(lVar8 + uVar14 + lVar10 * 4 + 0x20) =
                                                   uVar17;
                                              if (lVar11 == 0) break;
                                              if (*(uint *)(lVar11 + 0x18) <= unaff_w19)
                                              goto LAB_072a3718;
                                              lVar8 = *(long *)(lVar11 + unaff_x26 * 8 + 0x20);
                                              uVar17 = FUN_072a4664(uStack0000000000000020);
                                              if (lVar8 == 0) break;
                                              if (*(uint *)(lVar8 + 0x18) <= iVar5 + iVar2 + 1U)
                                              goto LAB_072a3718;
                                              lVar11 = *(long *)(unaff_x20 + 0x188);
                                              *(undefined4 *)(lVar8 + uVar14 + lVar10 * 4 + 0x24) =
                                                   uVar17;
                                              if (lVar11 == 0) break;
                                              if (*(uint *)(lVar11 + 0x18) <= unaff_w19)
                                              goto LAB_072a3718;
                                              lVar8 = *(long *)(lVar11 + unaff_x26 * 8 + 0x20);
                                              uVar17 = FUN_072a4664(uStack000000000000002c);
                                              if (lVar8 == 0) break;
                                              if (*(uint *)(lVar8 + 0x18) <= iVar5 + iVar2 + 2U)
                                              goto LAB_072a3718;
                                              lVar11 = *(long *)(unaff_x20 + 0x188);
                                              *(undefined4 *)(lVar8 + uVar14 + lVar10 * 4 + 0x28) =
                                                   uVar17;
                                              if (lVar11 == 0) break;
                                              if (*(uint *)(lVar11 + 0x18) <= unaff_w19)
                                              goto LAB_072a3718;
                                              lVar11 = *(long *)(lVar11 + unaff_x26 * 8 + 0x20);
                                              uVar17 = FUN_072a4664(uStack0000000000000028);
                                              if (lVar11 == 0) break;
                                              if (*(uint *)(lVar11 + 0x18) <= iVar5 + iVar2 + 3U)
                                              goto LAB_072a3718;
                                              lVar8 = *(long *)(unaff_x20 + 0xc0);
                                              lVar9 = lVar10 * 4;
                                              lVar10 = lVar10 + 4;
                                              *(undefined4 *)(lVar11 + uVar14 + lVar9 + 0x2c) =
                                                   uVar17;
                                            } while (lVar8 != 0);
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_072a3650;
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
LAB_072a3718:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


