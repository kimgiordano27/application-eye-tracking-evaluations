/*
FUNCTION_NAME: OVRManager$$Awake
ENTRY_POINT: 0313ad7c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Awake(double param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool in_ZR;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  double in_stack_00000008;
  
  if (!in_ZR) {
    param_1 = param_2;
  }
  if (unaff_x23 == 0) goto LAB_0313b490;
  iVar13 = *(int *)(unaff_x23 + 0x3c);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  fVar10 = -2.1474836e+09;
  if (param_1 != INFINITY) {
    fVar10 = (float)(int)param_1;
  }
  if (*(char *)(unaff_x25 + 0x2db) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    *(undefined1 *)(unaff_x25 + 0x2db) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  dVar11 = (double)(int)((ulong)unaff_x24 >> 0x20);
  dVar8 = modf(dVar11,&stack0x00000008);
  if (unaff_x24 < 0) {
    if (dVar8 == -0.5) {
      dVar8 = -1.0;
      goto LAB_0313ae40;
    }
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  else if (dVar8 == 0.5) {
    dVar8 = 1.0;
LAB_0313ae40:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar8;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x3c);
    lVar6 = FUN_0391c27c();
    if (lVar6 != 0) {
      fVar12 = -2.1474836e+09;
      fVar14 = -2.1474836e+09;
      if (dVar11 != INFINITY) {
        fVar14 = (float)(int)dVar11;
      }
      fVar7 = (float)FUN_0392a7f0(lVar6,0);
      puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
      lVar6 = *unaff_x21;
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          fVar7 = (fVar10 * (1.0 / (float)iVar13)) / fVar7;
          fVar12 = (fVar14 * (1.0 / (float)iVar1)) / fVar12;
          fVar14 = -(fVar7 * 0.5);
          fVar10 = -(fVar12 * 0.5);
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(float *)(lVar4 + 0x20) = fVar14;
            *(float *)(lVar4 + 0x24) = fVar10;
            *(undefined4 *)(lVar4 + 0x28) = 0;
          }
          else {
            FUN_02bd6ed8(fVar14,fVar10,0,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *unaff_x21;
          if (lVar6 != 0) {
            lVar4 = *(long *)(lVar6 + 0x10);
            lVar5 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              fVar12 = fVar12 * 0.5;
              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(float *)(lVar4 + 0x20) = fVar14;
                *(float *)(lVar4 + 0x24) = fVar12;
                *(undefined4 *)(lVar4 + 0x28) = 0;
              }
              else {
                FUN_02bd6ed8(fVar14,fVar12,0,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *unaff_x21;
              if (lVar6 != 0) {
                lVar4 = *(long *)(lVar6 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  fVar7 = fVar7 * 0.5;
                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(float *)(lVar4 + 0x20) = fVar7;
                    *(float *)(lVar4 + 0x24) = fVar12;
                    *(undefined4 *)(lVar4 + 0x28) = 0;
                  }
                  else {
                    FUN_02bd6ed8(fVar7,fVar12,0,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar6 = *unaff_x21;
                  if (lVar6 != 0) {
                    lVar4 = *(long *)(lVar6 + 0x10);
                    lVar5 = *(long *)puVar3;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                        lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(float *)(lVar4 + 0x20) = fVar7;
                        *(float *)(lVar4 + 0x24) = fVar10;
                        *(undefined4 *)(lVar4 + 0x28) = 0;
                      }
                      else {
                        FUN_02bd6ed8(fVar7,fVar10,0,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = 
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      ;
                      lVar6 = *unaff_x20;
                      if (lVar6 != 0) {
                        lVar4 = *(long *)(lVar6 + 0x10);
                        lVar5 = *(long *)
                                 Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                        ;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar2 = *(uint *)(lVar6 + 0x18);
                          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_02b2c8dc(lVar6,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar6 = *unaff_x20;
                            if (lVar6 == 0) goto LAB_0313b490;
                          }
                          lVar4 = *(long *)(lVar6 + 0x10);
                          lVar5 = *(long *)puVar3;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar4 != 0) {
                            uVar2 = *(uint *)(lVar6 + 0x18);
                            if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                              *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 1;
                            }
                            else {
                              FUN_02b2c8dc(lVar6,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar6 = *unaff_x20;
                              if (lVar6 == 0) goto LAB_0313b490;
                            }
                            lVar4 = *(long *)(lVar6 + 0x10);
                            lVar5 = *(long *)puVar3;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar2 = *(uint *)(lVar6 + 0x18);
                              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 2;
                              }
                              else {
                                FUN_02b2c8dc(lVar6,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar6 = *unaff_x20;
                                if (lVar6 == 0) goto LAB_0313b490;
                              }
                              lVar4 = *(long *)(lVar6 + 0x10);
                              lVar5 = *(long *)puVar3;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar2 = *(uint *)(lVar6 + 0x18);
                                if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_02b2c8dc(lVar6,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar6 = *unaff_x20;
                                  if (lVar6 == 0) goto LAB_0313b490;
                                }
                                lVar4 = *(long *)(lVar6 + 0x10);
                                lVar5 = *(long *)puVar3;
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar4 != 0) {
                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                    *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                  }
                                  else {
                                    FUN_02b2c8dc(lVar6,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar6 = *unaff_x20;
                                    if (lVar6 == 0) goto LAB_0313b490;
                                  }
                                  lVar4 = *(long *)(lVar6 + 0x10);
                                  lVar5 = *(long *)puVar3;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar4 != 0) {
                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                    }
                                    else {
                                      FUN_02b2c8dc(lVar6,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = StringLiteral_13312;
                                    lVar6 = *unaff_x19;
                                    if (lVar6 != 0) {
                                      lVar4 = *(long *)(lVar6 + 0x10);
                                      lVar5 = *(long *)StringLiteral_13312;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar2 = *(uint *)(lVar6 + 0x18);
                                        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_02bd46ac(0,0,lVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar6 = *unaff_x19;
                                        if (lVar6 != 0) {
                                          lVar4 = *(long *)(lVar6 + 0x10);
                                          lVar5 = *(long *)puVar3;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          uVar9 = DAT_00b92e20;
                                          if (lVar4 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar9;
                                            }
                                            else {
                                              FUN_02bd46ac(0,0x3f800000,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar6 = *unaff_x19;
                                            if (lVar6 != 0) {
                                              lVar4 = *(long *)(lVar6 + 0x10);
                                              lVar5 = *(long *)puVar3;
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar4 != 0) {
                                                uVar2 = *(uint *)(lVar6 + 0x18);
                                                if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                                  uVar9 = NEON_fmov(0x3f800000,4);
                                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                                }
                                                else {
                                                  FUN_02bd46ac(0x3f800000,0x3f800000,lVar6,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar6 = *unaff_x19;
                                                if (lVar6 != 0) {
                                                  lVar4 = *(long *)(lVar6 + 0x10);
                                                  lVar5 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  uVar9 = DAT_00b91f78;
                                                  if (lVar4 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar9
                                                      ;
                                                      return;
                                                    }
                                                    FUN_02bd46ac(0x3f800000,0,lVar6,
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
LAB_0313b490:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


