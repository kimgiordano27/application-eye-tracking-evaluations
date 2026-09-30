/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 052c6c1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke
               (long param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x28;
  undefined8 *puVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  double in_stack_00000008;
  
  puVar7 = PTR_DAT_067d1470;
  puVar6 = PTR_DAT_067d1468;
  puVar5 = PTR_DAT_067ce900;
  puVar4 = PTR_DAT_067cdb68;
  puVar3 = PTR_DAT_067cca10;
  puVar11 = *(undefined8 **)(unaff_x28 + 0x920);
  if ((DAT_06bbaef5 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc9f8);
    FUN_02f08768(PTR_DAT_067d1478);
    FUN_02f08768(PTR_DAT_067d1480);
    FUN_02f08768(PTR_DAT_067cdb68);
    FUN_02f08768(PTR_DAT_067d1470);
    FUN_02f08768(PTR_DAT_067ce900);
    FUN_02f08768(PTR_DAT_067cca10);
    FUN_02f08768(PTR_DAT_067ce920);
    FUN_02f08768(PTR_DAT_067d1468);
    DAT_06bbaef5 = 1;
  }
  lVar8 = thunk_FUN_02f45270(*puVar11);
  FUN_03b62fcc(lVar8,*(undefined8 *)puVar5);
  *param_2 = lVar8;
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_03a6b958(lVar8,*(undefined8 *)puVar4);
  *param_3 = lVar8;
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
  FUN_03b60818(lVar8,*(undefined8 *)puVar7);
  *param_4 = lVar8;
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) goto LAB_052c74dc;
  if (*(int *)(lVar8 + 0x2c) == 0) {
    lVar10 = FUN_052c780c(lVar8);
    lVar8 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar10 = *(long *)(lVar8 + 0x30);
  }
  if (DAT_06bb5d8a == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb5d8a = '\x01';
  }
  puVar3 = PTR_DAT_067c8f80;
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  dVar16 = (double)(int)lVar10;
  dVar13 = modf(dVar16,&stack0x00000008);
  if ((int)lVar10 < 0) {
    if (dVar13 == -0.5) {
      dVar13 = -1.0;
      goto LAB_052c6dc4;
    }
    dVar16 = (double)(long)(dVar16 + -0.5);
  }
  else if (dVar13 == 0.5) {
    dVar13 = 1.0;
LAB_052c6dc4:
    dVar16 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar16 = in_stack_00000008 + dVar13;
    }
  }
  else {
    dVar16 = (double)(long)(dVar16 + 0.5);
  }
  if (lVar8 == 0) goto LAB_052c74dc;
  iVar18 = *(int *)(lVar8 + 0x3c);
  lVar8 = *(long *)(param_1 + 0x20);
  fVar15 = -2.1474836e+09;
  if (dVar16 != INFINITY) {
    fVar15 = (float)(int)dVar16;
  }
  if (DAT_06bb5d8a == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb5d8a = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  dVar16 = (double)(int)((ulong)lVar10 >> 0x20);
  dVar13 = modf(dVar16,&stack0x00000008);
  if (lVar10 < 0) {
    if (dVar13 == -0.5) {
      dVar13 = -1.0;
      goto FUN_052c6e90;
    }
    dVar16 = (double)(long)(dVar16 + -0.5);
  }
  else if (dVar13 == 0.5) {
    dVar13 = 1.0;
FUN_052c6e90:
    dVar16 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar16 = in_stack_00000008 + dVar13;
    }
  }
  else {
    dVar16 = (double)(long)(dVar16 + 0.5);
  }
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x3c);
    lVar8 = FUN_060ed7ac(param_1,0);
    if (lVar8 != 0) {
      fVar17 = 0.0;
      fVar19 = -2.1474836e+09;
      if (dVar16 != INFINITY) {
        fVar19 = (float)(int)dVar16;
      }
      fVar12 = (float)FUN_06101d4c(lVar8,0);
      puVar3 = PTR_DAT_067d1478;
      lVar8 = *param_2;
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar9 = *(long *)PTR_DAT_067d1478;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          fVar12 = (fVar15 * (1.0 / (float)iVar18)) / fVar12;
          fVar17 = (fVar19 * (1.0 / (float)iVar1)) / fVar17;
          fVar19 = -(fVar12 * 0.5);
          fVar15 = -(fVar17 * 0.5);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(float *)(lVar10 + 0x20) = fVar19;
            *(float *)(lVar10 + 0x24) = fVar15;
            *(undefined4 *)(lVar10 + 0x28) = 0;
          }
          else {
            FUN_03b63838(fVar19,fVar15,0,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = *param_2;
          if (lVar8 != 0) {
            lVar10 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar10 != 0) {
              fVar17 = fVar17 * 0.5;
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                *(float *)(lVar10 + 0x20) = fVar19;
                *(float *)(lVar10 + 0x24) = fVar17;
                *(undefined4 *)(lVar10 + 0x28) = 0;
              }
              else {
                FUN_03b63838(fVar19,fVar17,0,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = *param_2;
              if (lVar8 != 0) {
                lVar10 = *(long *)(lVar8 + 0x10);
                lVar9 = *(long *)puVar3;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 != 0) {
                  fVar12 = fVar12 * 0.5;
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    *(float *)(lVar10 + 0x20) = fVar12;
                    *(float *)(lVar10 + 0x24) = fVar17;
                    *(undefined4 *)(lVar10 + 0x28) = 0;
                  }
                  else {
                    FUN_03b63838(fVar12,fVar17,0,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar8 = *param_2;
                  if (lVar8 != 0) {
                    lVar10 = *(long *)(lVar8 + 0x10);
                    lVar9 = *(long *)puVar3;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar2 = *(uint *)(lVar8 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
                        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                        *(float *)(lVar10 + 0x20) = fVar12;
                        *(float *)(lVar10 + 0x24) = fVar15;
                        *(undefined4 *)(lVar10 + 0x28) = 0;
                      }
                      else {
                        FUN_03b63838(fVar12,fVar15,0,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_067cc9f8;
                      lVar8 = *param_3;
                      if (lVar8 != 0) {
                        lVar10 = *(long *)(lVar8 + 0x10);
                        lVar9 = *(long *)PTR_DAT_067cc9f8;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar2 = *(uint *)(lVar8 + 0x18);
                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_03a6c18c(lVar8,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar8 = *param_3;
                            if (lVar8 == 0) goto LAB_052c74dc;
                          }
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar3;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 != 0) {
                            uVar2 = *(uint *)(lVar8 + 0x18);
                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                              *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 1;
                            }
                            else {
                              FUN_03a6c18c(lVar8,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar8 = *param_3;
                              if (lVar8 == 0) goto LAB_052c74dc;
                            }
                            lVar10 = *(long *)(lVar8 + 0x10);
                            lVar9 = *(long *)puVar3;
                            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar2 = *(uint *)(lVar8 + 0x18);
                              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 2;
                              }
                              else {
                                FUN_03a6c18c(lVar8,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar8 = *param_3;
                                if (lVar8 == 0) goto LAB_052c74dc;
                              }
                              lVar10 = *(long *)(lVar8 + 0x10);
                              lVar9 = *(long *)puVar3;
                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar2 = *(uint *)(lVar8 + 0x18);
                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_03a6c18c(lVar8,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar8 = *param_3;
                                  if (lVar8 == 0) goto LAB_052c74dc;
                                }
                                lVar10 = *(long *)(lVar8 + 0x10);
                                lVar9 = *(long *)puVar3;
                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar2 = *(uint *)(lVar8 + 0x18);
                                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                    *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                  }
                                  else {
                                    FUN_03a6c18c(lVar8,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar8 = *param_3;
                                    if (lVar8 == 0) goto LAB_052c74dc;
                                  }
                                  lVar10 = *(long *)(lVar8 + 0x10);
                                  lVar9 = *(long *)puVar3;
                                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar2 = *(uint *)(lVar8 + 0x18);
                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                    }
                                    else {
                                      FUN_03a6c18c(lVar8,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = PTR_DAT_067d1480;
                                    lVar8 = *param_4;
                                    if (lVar8 != 0) {
                                      lVar10 = *(long *)(lVar8 + 0x10);
                                      lVar9 = *(long *)PTR_DAT_067d1480;
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar2 = *(uint *)(lVar8 + 0x18);
                                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_03b61054(0,0,lVar8,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar8 = *param_4;
                                        if (lVar8 != 0) {
                                          lVar10 = *(long *)(lVar8 + 0x10);
                                          lVar9 = *(long *)puVar3;
                                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                          uVar14 = DAT_011b0bc8;
                                          if (lVar10 != 0) {
                                            uVar2 = *(uint *)(lVar8 + 0x18);
                                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20)
                                                   = uVar14;
                                            }
                                            else {
                                              FUN_03b61054(0,0x3f800000,lVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar8 = *param_4;
                                            if (lVar8 != 0) {
                                              lVar10 = *(long *)(lVar8 + 0x10);
                                              lVar9 = *(long *)puVar3;
                                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar2 = *(uint *)(lVar8 + 0x18);
                                                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                  uVar14 = NEON_fmov(0x3f800000,4);
                                                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
                                                }
                                                else {
                                                  FUN_03b61054(0x3f800000,0x3f800000,lVar8,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar8 = *param_4;
                                                if (lVar8 != 0) {
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  uVar14 = DAT_011b0bd0;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar14;
                                                      return;
                                                    }
                                                    FUN_03b61054(0x3f800000,0,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
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
LAB_052c74dc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


