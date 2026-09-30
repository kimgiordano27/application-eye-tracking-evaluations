/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 05fb3378
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke
               (ulong param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar6;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  double in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b6c0);
    FUN_031f20f4(PTR_DAT_075de7a8);
    FUN_031f20f4(PTR_DAT_075de7b0);
    FUN_031f20f4(PTR_DAT_0759b6c8);
    FUN_031f20f4(PTR_DAT_075de7a0);
    FUN_031f20f4(PTR_DAT_075dc558);
    FUN_031f20f4(PTR_DAT_0759b6d0);
    FUN_031f20f4(PTR_DAT_075dc568);
    FUN_031f20f4(PTR_DAT_075de798);
    *(undefined1 *)(unaff_x28 + 0x655) = 1;
  }
  lVar4 = thunk_FUN_0322f148(*unaff_x29);
  FUN_0487aba4(lVar4,*unaff_x23);
  *param_3 = lVar4;
  thunk_FUN_0329bf60(param_3,lVar4);
  lVar4 = thunk_FUN_0322f148(*unaff_x27);
  FUN_0474f6bc(lVar4,*unaff_x26);
  *param_4 = lVar4;
  thunk_FUN_0329bf60(param_4,lVar4);
  lVar4 = thunk_FUN_0322f148(*unaff_x25);
  FUN_048782d8(lVar4,*unaff_x24);
  *unaff_x19 = lVar4;
  thunk_FUN_0329bf60();
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 == 0) goto LAB_05fb3c2c;
  if (*(int *)(lVar4 + 0x2c) == 0) {
    lVar6 = FUN_05fb3f98(lVar4);
    lVar4 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x30);
  }
  if (DAT_07a3fbf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fbf2 = '\x01';
  }
  puVar3 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  dVar11 = (double)(int)lVar6;
  dVar8 = modf(dVar11,&stack0x00000008);
  if ((int)lVar6 < 0) {
    if (dVar8 == -0.5) {
      dVar8 = -1.0;
      goto LAB_05fb350c;
    }
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  else if (dVar8 == 0.5) {
    dVar8 = 1.0;
LAB_05fb350c:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar8;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  if (lVar4 == 0) goto LAB_05fb3c2c;
  iVar13 = *(int *)(lVar4 + 0x3c);
  lVar4 = *(long *)(param_2 + 0x20);
  fVar10 = -2.1474836e+09;
  if (dVar11 != INFINITY) {
    fVar10 = (float)(int)dVar11;
  }
  if (DAT_07a3fbf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fbf2 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  dVar11 = (double)(int)((ulong)lVar6 >> 0x20);
  dVar8 = modf(dVar11,&stack0x00000008);
  if (lVar6 < 0) {
    if (dVar8 == -0.5) {
      dVar8 = -1.0;
      goto LAB_05fb35dc;
    }
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  else if (dVar8 == 0.5) {
    dVar8 = 1.0;
LAB_05fb35dc:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar8;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x3c);
    lVar4 = FUN_06e5502c(param_2,0);
    if (lVar4 != 0) {
      fVar12 = -2.1474836e+09;
      fVar14 = -2.1474836e+09;
      if (dVar11 != INFINITY) {
        fVar14 = (float)(int)dVar11;
      }
      fVar7 = (float)FUN_06e6e3cc(lVar4,0);
      puVar3 = PTR_DAT_075de7a8;
      lVar4 = *param_3;
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar5 = *(long *)PTR_DAT_075de7a8;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          fVar7 = (fVar10 * (1.0 / (float)iVar13)) / fVar7;
          fVar12 = (fVar14 * (1.0 / (float)iVar1)) / fVar12;
          fVar14 = -(fVar7 * 0.5);
          fVar10 = -(fVar12 * 0.5);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(float *)(lVar6 + 0x20) = fVar14;
            *(float *)(lVar6 + 0x24) = fVar10;
            *(undefined4 *)(lVar6 + 0x28) = 0;
          }
          else {
            FUN_0487b438(fVar14,fVar10,0,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = *param_3;
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            lVar5 = *(long *)puVar3;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar4 + 0x18);
              fVar12 = fVar12 * 0.5;
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                *(float *)(lVar6 + 0x20) = fVar14;
                *(float *)(lVar6 + 0x24) = fVar12;
                *(undefined4 *)(lVar6 + 0x28) = 0;
              }
              else {
                FUN_0487b438(fVar14,fVar12,0,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar4 = *param_3;
              if (lVar4 != 0) {
                lVar6 = *(long *)(lVar4 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar2 = *(uint *)(lVar4 + 0x18);
                  fVar7 = fVar7 * 0.5;
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                    *(float *)(lVar6 + 0x20) = fVar7;
                    *(float *)(lVar6 + 0x24) = fVar12;
                    *(undefined4 *)(lVar6 + 0x28) = 0;
                  }
                  else {
                    FUN_0487b438(fVar7,fVar12,0,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar4 = *param_3;
                  if (lVar4 != 0) {
                    lVar6 = *(long *)(lVar4 + 0x10);
                    lVar5 = *(long *)puVar3;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar2 = *(uint *)(lVar4 + 0x18);
                      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                        lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
                        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                        *(float *)(lVar6 + 0x20) = fVar7;
                        *(float *)(lVar6 + 0x24) = fVar10;
                        *(undefined4 *)(lVar6 + 0x28) = 0;
                      }
                      else {
                        FUN_0487b438(fVar7,fVar10,0,lVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_0759b6c0;
                      lVar4 = *param_4;
                      if (lVar4 != 0) {
                        lVar6 = *(long *)(lVar4 + 0x10);
                        lVar5 = *(long *)PTR_DAT_0759b6c0;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar6 != 0) {
                          uVar2 = *(uint *)(lVar4 + 0x18);
                          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_0474ff10(lVar4,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar4 = *param_4;
                            if (lVar4 == 0) goto LAB_05fb3c2c;
                          }
                          lVar6 = *(long *)(lVar4 + 0x10);
                          lVar5 = *(long *)puVar3;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar2 = *(uint *)(lVar4 + 0x18);
                            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                              *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 1;
                            }
                            else {
                              FUN_0474ff10(lVar4,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar4 = *param_4;
                              if (lVar4 == 0) goto LAB_05fb3c2c;
                            }
                            lVar6 = *(long *)(lVar4 + 0x10);
                            lVar5 = *(long *)puVar3;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar2 = *(uint *)(lVar4 + 0x18);
                              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 2;
                              }
                              else {
                                FUN_0474ff10(lVar4,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar4 = *param_4;
                                if (lVar4 == 0) goto LAB_05fb3c2c;
                              }
                              lVar6 = *(long *)(lVar4 + 0x10);
                              lVar5 = *(long *)puVar3;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar6 != 0) {
                                uVar2 = *(uint *)(lVar4 + 0x18);
                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_0474ff10(lVar4,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar4 = *param_4;
                                  if (lVar4 == 0) goto LAB_05fb3c2c;
                                }
                                lVar6 = *(long *)(lVar4 + 0x10);
                                lVar5 = *(long *)puVar3;
                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                if (lVar6 != 0) {
                                  uVar2 = *(uint *)(lVar4 + 0x18);
                                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                    *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                  }
                                  else {
                                    FUN_0474ff10(lVar4,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar4 = *param_4;
                                    if (lVar4 == 0) goto LAB_05fb3c2c;
                                  }
                                  lVar6 = *(long *)(lVar4 + 0x10);
                                  lVar5 = *(long *)puVar3;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar6 != 0) {
                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                    }
                                    else {
                                      FUN_0474ff10(lVar4,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = PTR_DAT_075de7b0;
                                    lVar4 = *unaff_x19;
                                    if (lVar4 != 0) {
                                      lVar6 = *(long *)(lVar4 + 0x10);
                                      lVar5 = *(long *)PTR_DAT_075de7b0;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar6 != 0) {
                                        uVar2 = *(uint *)(lVar4 + 0x18);
                                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_04878b40(0,0,lVar4,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar4 = *unaff_x19;
                                        if (lVar4 != 0) {
                                          lVar6 = *(long *)(lVar4 + 0x10);
                                          lVar5 = *(long *)puVar3;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          uVar9 = DAT_014bc198;
                                          if (lVar6 != 0) {
                                            uVar2 = *(uint *)(lVar4 + 0x18);
                                            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar9;
                                            }
                                            else {
                                              FUN_04878b40(0,0x3f800000,lVar4,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar4 = *unaff_x19;
                                            if (lVar4 != 0) {
                                              lVar6 = *(long *)(lVar4 + 0x10);
                                              lVar5 = *(long *)puVar3;
                                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                              if (lVar6 != 0) {
                                                uVar2 = *(uint *)(lVar4 + 0x18);
                                                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                  uVar9 = NEON_fmov(0x3f800000,4);
                                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                                }
                                                else {
                                                  FUN_04878b40(0x3f800000,0x3f800000,lVar4,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar4 = *unaff_x19;
                                                if (lVar4 != 0) {
                                                  lVar6 = *(long *)(lVar4 + 0x10);
                                                  lVar5 = *(long *)puVar3;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  uVar9 = DAT_014bb328;
                                                  if (lVar6 != 0) {
                                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar9
                                                      ;
                                                      return;
                                                    }
                                                    FUN_04878b40(0x3f800000,0,lVar4,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar5 + 0x20)
                                                                            + 0xc0) + 0x70));
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
LAB_05fb3c2c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


