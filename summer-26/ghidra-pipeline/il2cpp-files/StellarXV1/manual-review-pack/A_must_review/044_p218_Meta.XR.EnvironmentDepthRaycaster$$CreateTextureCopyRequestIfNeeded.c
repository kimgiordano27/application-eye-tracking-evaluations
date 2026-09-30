/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 072a3030
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long in_x9;
  long lVar7;
  long in_x10;
  long lVar8;
  long lVar9;
  uint in_w14;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar10;
  uint unaff_w23;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x26;
  long unaff_x28;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (unaff_w21 < *(uint *)(param_1 + 0x18)) {
    lVar8 = *(long *)(param_1 + unaff_x28 * 8 + 0x20);
    if (lVar8 == 0) {
LAB_072a3650:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_072a3650;
      if (*(int *)(lVar8 + 0x18) != 0) {
        lVar9 = *(long *)(unaff_x20 + 0xe8);
        if (lVar9 == 0) goto LAB_072a3650;
        if (unaff_w21 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = *(long *)(lVar9 + unaff_x28 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_072a3650;
          if (unaff_w19 < *(uint *)(lVar9 + 0x18)) {
            lVar7 = *(long *)(in_x9 + 0x28);
            iVar3 = *(int *)(in_x10 + unaff_x26 * 4 + 0x20);
            uVar4 = *(int *)(lVar9 + unaff_x26 * 4 + 0x20) * 2;
            uVar10 = uVar4;
            if ((int)unaff_w23 <= (int)uVar4) {
              uVar10 = unaff_w23;
            }
            if ((int)uVar10 < 1) {
              uVar11 = 0;
            }
            else {
              uVar15 = *(undefined4 *)(lVar8 + 0x20);
              uVar6 = 0;
              do {
                uVar11 = uVar6;
                uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
                if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                FUN_07298d3c(uVar12,uVar15,(long)&stack0x00000028 + 4,&stack0x00000028);
                lVar8 = *(long *)(unaff_x20 + 0x188);
                if (lVar8 == 0) goto LAB_072a3650;
                if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                uVar14 = FUN_072a4664(uStack000000000000002c);
                if (lVar8 == 0) goto LAB_072a3650;
                if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a3718;
                lVar9 = *(long *)(unaff_x20 + 0x188);
                *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar14;
                if (lVar9 == 0) goto LAB_072a3650;
                if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_072a3718;
                lVar8 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
                uVar14 = FUN_072a4664(uStack0000000000000028);
                if (lVar8 == 0) goto LAB_072a3650;
                if ((ulong)*(uint *)(lVar8 + 0x18) <= uVar11 + 1) goto LAB_072a3718;
                *(undefined4 *)(lVar8 + uVar11 * 4 + 0x24) = uVar14;
                uVar6 = uVar11 + 2;
              } while (uVar11 + 2 < (ulong)uVar10);
              param_1 = *(long *)(unaff_x20 + 0x118);
              if (param_1 == 0) goto LAB_072a3650;
              uVar11 = uVar11 + 2;
            }
            if (unaff_w21 < *(uint *)(param_1 + 0x18)) {
              lVar8 = *(long *)(param_1 + unaff_x28 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_072a3650;
              if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_072a3650;
                if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                  uVar10 = uVar4;
                  if ((int)in_w14 <= (int)uVar4) {
                    uVar10 = in_w14;
                  }
                  if ((int)uVar11 < (int)uVar10) {
                    uVar15 = *(undefined4 *)(lVar8 + 0x24);
                    uVar11 = uVar11 & 0xffffffff;
                    do {
                      uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
                      if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      FUN_07298d3c(uVar12,uVar15,(long)&stack0x00000028 + 4,&stack0x00000028);
                      lVar8 = *(long *)(unaff_x20 + 0x188);
                      if (lVar8 == 0) goto LAB_072a3650;
                      if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                      uVar14 = FUN_072a4664(uStack000000000000002c);
                      if (lVar8 == 0) goto LAB_072a3650;
                      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_072a3718;
                      lVar9 = *(long *)(unaff_x20 + 0x188);
                      *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar14;
                      if (lVar9 == 0) goto LAB_072a3650;
                      if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_072a3718;
                      lVar8 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
                      uVar14 = FUN_072a4664(uStack0000000000000028);
                      if (lVar8 == 0) goto LAB_072a3650;
                      if (*(uint *)(lVar8 + 0x18) <= (int)uVar11 + 1U) goto LAB_072a3718;
                      lVar9 = uVar11 * 4;
                      uVar11 = uVar11 + 2;
                      *(undefined4 *)(lVar8 + lVar9 + 0x24) = uVar14;
                    } while ((long)uVar11 < (long)(int)uVar10);
                    param_1 = *(long *)(unaff_x20 + 0x118);
                    if (param_1 == 0) goto LAB_072a3650;
                  }
                  if (unaff_w21 < *(uint *)(param_1 + 0x18)) {
                    lVar8 = *(long *)(param_1 + unaff_x28 * 8 + 0x20);
                    if (lVar8 != 0) {
                      if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                      if (lVar8 != 0) {
                        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_072a3718;
                        if ((int)uVar11 < (int)uVar4) {
                          uVar15 = *(undefined4 *)(lVar8 + 0x28);
                          uVar11 = (ulong)(int)uVar11;
                          do {
                            uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
                            if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                            }
                            FUN_07298d3c(uVar12,uVar15,(long)&stack0x00000028 + 4,&stack0x00000028);
                            lVar8 = *(long *)(unaff_x20 + 0x188);
                            if (lVar8 == 0) goto LAB_072a3650;
                            if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                            lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
                            uVar14 = FUN_072a4664(uStack000000000000002c);
                            if (lVar8 == 0) goto LAB_072a3650;
                            if (*(uint *)(lVar8 + 0x18) <= (uint)uVar11) goto LAB_072a3718;
                            lVar9 = *(long *)(unaff_x20 + 0x188);
                            *(undefined4 *)(lVar8 + uVar11 * 4 + 0x20) = uVar14;
                            if (lVar9 == 0) goto LAB_072a3650;
                            if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_072a3718;
                            lVar8 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
                            uVar14 = FUN_072a4664(uStack0000000000000028);
                            if (lVar8 == 0) goto LAB_072a3650;
                            if (*(uint *)(lVar8 + 0x18) <= (uint)uVar11 + 1) goto LAB_072a3718;
                            lVar9 = uVar11 * 4;
                            uVar11 = uVar11 + 2;
                            *(undefined4 *)(lVar8 + lVar9 + 0x24) = uVar14;
                          } while ((long)uVar11 < (long)(int)uVar4);
                        }
                        lVar8 = *(long *)(unaff_x20 + 0x148);
                        if (lVar8 != 0) {
                          if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_072a3718;
                          lVar8 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_072a3718;
                            lVar9 = *(long *)(unaff_x20 + 0xc0);
                            if (lVar9 != 0) {
                              lVar13 = 0;
                              iVar2 = *(int *)(lVar8 + unaff_x26 * 4 + 0x20);
                              iVar5 = (int)uVar11;
                              uVar11 = -((uVar11 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                                       (uVar11 & 0xffffffff) << 2;
                              lVar8 = (lVar7 - in_stack_00000018._4_4_) + (long)iVar3;
                              do {
                                lVar7 = *(long *)(lVar9 + 0x28);
                                iVar3 = (int)lVar13;
                                if ((0x23c < iVar5 + lVar13) || (lVar8 <= lVar7)) {
                                  if (lVar8 < lVar7) {
                                    Meta_XR_ImmersiveDebugger_Manager_Hook___ctor
                                              (lVar9,(int)lVar7 - (int)lVar8);
                                    lVar9 = *(long *)(unaff_x20 + 0xc0);
                                    if (lVar9 == 0) break;
                                    uVar10 = (iVar5 + iVar3) - 4;
                                    uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
                                  }
                                  else {
                                    uVar10 = iVar3 + iVar5;
                                  }
                                  if (*(long *)(lVar9 + 0x28) < lVar8) {
                                    FUN_07297dc4(lVar9,(int)lVar8 - (int)*(long *)(lVar9 + 0x28));
                                  }
                                  if (0x23f < (int)uVar10) {
                                    return;
                                  }
                                  lVar8 = *(long *)(unaff_x20 + 0x188);
                                  if (lVar8 != 0) {
                                    if (unaff_w19 < *(uint *)(lVar8 + 0x18)) {
                                      FUN_0769c874(*(undefined8 *)(lVar8 + unaff_x26 * 8 + 0x20),
                                                   uVar10,0x243 - uVar10,0);
                                      return;
                                    }
                                    goto LAB_072a3718;
                                  }
                                  break;
                                }
                                if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
                                  thunk_FUN_040d65a8();
                                }
                                FUN_07299060(lVar9,iVar2 + 0x20,(long)&stack0x00000028 + 4,
                                             &stack0x00000028,(long)&stack0x00000020 + 4,
                                             &stack0x00000020);
                                lVar9 = *(long *)(unaff_x20 + 0x188);
                                if (lVar9 == 0) break;
                                if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
                                uVar15 = FUN_072a4664(uStack0000000000000024);
                                if (lVar9 == 0) break;
                                if (*(uint *)(lVar9 + 0x18) <= (uint)(iVar5 + iVar3))
                                goto LAB_072a3718;
                                lVar7 = *(long *)(unaff_x20 + 0x188);
                                *(undefined4 *)(lVar9 + uVar11 + lVar13 * 4 + 0x20) = uVar15;
                                if (lVar7 == 0) break;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                lVar9 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                                uVar15 = FUN_072a4664(uStack0000000000000020);
                                if (lVar9 == 0) break;
                                if (*(uint *)(lVar9 + 0x18) <= iVar5 + iVar3 + 1U)
                                goto LAB_072a3718;
                                lVar7 = *(long *)(unaff_x20 + 0x188);
                                *(undefined4 *)(lVar9 + uVar11 + lVar13 * 4 + 0x24) = uVar15;
                                if (lVar7 == 0) break;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                lVar9 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                                uVar15 = FUN_072a4664(uStack000000000000002c);
                                if (lVar9 == 0) break;
                                if (*(uint *)(lVar9 + 0x18) <= iVar5 + iVar3 + 2U)
                                goto LAB_072a3718;
                                lVar7 = *(long *)(unaff_x20 + 0x188);
                                *(undefined4 *)(lVar9 + uVar11 + lVar13 * 4 + 0x28) = uVar15;
                                if (lVar7 == 0) break;
                                if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_072a3718;
                                lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
                                uVar15 = FUN_072a4664(uStack0000000000000028);
                                if (lVar7 == 0) break;
                                if (*(uint *)(lVar7 + 0x18) <= iVar5 + iVar3 + 3U)
                                goto LAB_072a3718;
                                lVar9 = *(long *)(unaff_x20 + 0xc0);
                                lVar1 = lVar13 * 4;
                                lVar13 = lVar13 + 4;
                                *(undefined4 *)(lVar7 + uVar11 + lVar1 + 0x2c) = uVar15;
                              } while (lVar9 != 0);
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
LAB_072a3718:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


