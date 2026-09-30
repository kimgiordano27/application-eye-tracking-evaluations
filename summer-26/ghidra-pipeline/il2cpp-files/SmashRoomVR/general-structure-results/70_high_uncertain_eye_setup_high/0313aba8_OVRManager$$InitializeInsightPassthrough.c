/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 0313aba8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeInsightPassthrough
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
  long unaff_x29;
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
  
  puVar7 = StringLiteral_13315;
  puVar6 = StringLiteral_13314;
  puVar5 = 
  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
  ;
  puVar4 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
  puVar3 = Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__;
  puVar11 = *(undefined8 **)(unaff_x29 + 0x4c8);
  if ((*(byte *)(unaff_x28 + 0xeee) & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01ad9084(StringLiteral_13312);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(StringLiteral_13314);
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__);
    thunk_FUN_01ad9084(StringLiteral_13315);
    *(undefined1 *)(unaff_x28 + 0xeee) = 1;
  }
  lVar8 = thunk_FUN_01afaadc(*puVar11);
  FUN_02bd6644(lVar8,*(undefined8 *)puVar3);
  *param_2 = lVar8;
  thunk_FUN_01b4f09c(param_2,lVar8);
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
  FUN_02b2c088(lVar8,*(undefined8 *)puVar4);
  *param_3 = lVar8;
  thunk_FUN_01b4f09c(param_3,lVar8);
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar7);
  FUN_02bd3e44(lVar8,*(undefined8 *)puVar6);
  *param_4 = lVar8;
  thunk_FUN_01b4f09c(param_4,lVar8);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) goto LAB_0313b490;
  if (*(int *)(lVar8 + 0x2c) == 0) {
    lVar10 = FUN_0313b7fc(lVar8);
    lVar8 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar10 = *(long *)(lVar8 + 0x30);
  }
  if (DAT_03fed2db == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed2db = '\x01';
  }
  puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  dVar16 = (double)(int)lVar10;
  dVar13 = modf(dVar16,&stack0x00000008);
  if ((int)lVar10 < 0) {
    if (dVar13 == -0.5) {
      dVar13 = -1.0;
      goto LAB_0313ad70;
    }
    dVar16 = (double)(long)(dVar16 + -0.5);
  }
  else if (dVar13 == 0.5) {
    dVar13 = 1.0;
LAB_0313ad70:
    dVar16 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar16 = in_stack_00000008 + dVar13;
    }
  }
  else {
    dVar16 = (double)(long)(dVar16 + 0.5);
  }
  if (lVar8 == 0) goto LAB_0313b490;
  iVar18 = *(int *)(lVar8 + 0x3c);
  lVar8 = *(long *)(param_1 + 0x20);
  fVar15 = -2.1474836e+09;
  if (dVar16 != INFINITY) {
    fVar15 = (float)(int)dVar16;
  }
  if (DAT_03fed2db == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed2db = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  dVar16 = (double)(int)((ulong)lVar10 >> 0x20);
  dVar13 = modf(dVar16,&stack0x00000008);
  if (lVar10 < 0) {
    if (dVar13 == -0.5) {
      dVar13 = -1.0;
      goto LAB_0313ae40;
    }
    dVar16 = (double)(long)(dVar16 + -0.5);
  }
  else if (dVar13 == 0.5) {
    dVar13 = 1.0;
LAB_0313ae40:
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
    lVar8 = FUN_0391c27c(param_1,0);
    if (lVar8 != 0) {
      fVar17 = -2.1474836e+09;
      fVar19 = -2.1474836e+09;
      if (dVar16 != INFINITY) {
        fVar19 = (float)(int)dVar16;
      }
      fVar12 = (float)FUN_0392a7f0(lVar8,0);
      puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
      lVar8 = *param_2;
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar9 = *(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
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
            FUN_02bd6ed8(fVar19,fVar15,0,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = *param_2;
          if (lVar8 != 0) {
            lVar10 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar8 + 0x18);
              fVar17 = fVar17 * 0.5;
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                *(float *)(lVar10 + 0x20) = fVar19;
                *(float *)(lVar10 + 0x24) = fVar17;
                *(undefined4 *)(lVar10 + 0x28) = 0;
              }
              else {
                FUN_02bd6ed8(fVar19,fVar17,0,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = *param_2;
              if (lVar8 != 0) {
                lVar10 = *(long *)(lVar8 + 0x10);
                lVar9 = *(long *)puVar3;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  fVar12 = fVar12 * 0.5;
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    *(float *)(lVar10 + 0x20) = fVar12;
                    *(float *)(lVar10 + 0x24) = fVar17;
                    *(undefined4 *)(lVar10 + 0x28) = 0;
                  }
                  else {
                    FUN_02bd6ed8(fVar12,fVar17,0,lVar8,
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
                        FUN_02bd6ed8(fVar12,fVar15,0,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = 
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      ;
                      lVar8 = *param_3;
                      if (lVar8 != 0) {
                        lVar10 = *(long *)(lVar8 + 0x10);
                        lVar9 = *(long *)
                                 Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                        ;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar2 = *(uint *)(lVar8 + 0x18);
                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_02b2c8dc(lVar8,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar8 = *param_3;
                            if (lVar8 == 0) goto LAB_0313b490;
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
                              FUN_02b2c8dc(lVar8,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar8 = *param_3;
                              if (lVar8 == 0) goto LAB_0313b490;
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
                                FUN_02b2c8dc(lVar8,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar8 = *param_3;
                                if (lVar8 == 0) goto LAB_0313b490;
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
                                  FUN_02b2c8dc(lVar8,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar8 = *param_3;
                                  if (lVar8 == 0) goto LAB_0313b490;
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
                                    FUN_02b2c8dc(lVar8,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar8 = *param_3;
                                    if (lVar8 == 0) goto LAB_0313b490;
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
                                      FUN_02b2c8dc(lVar8,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = StringLiteral_13312;
                                    lVar8 = *param_4;
                                    if (lVar8 != 0) {
                                      lVar10 = *(long *)(lVar8 + 0x10);
                                      lVar9 = *(long *)StringLiteral_13312;
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar2 = *(uint *)(lVar8 + 0x18);
                                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_02bd46ac(0,0,lVar8,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar8 = *param_4;
                                        if (lVar8 != 0) {
                                          lVar10 = *(long *)(lVar8 + 0x10);
                                          lVar9 = *(long *)puVar3;
                                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                          uVar14 = DAT_00b92e20;
                                          if (lVar10 != 0) {
                                            uVar2 = *(uint *)(lVar8 + 0x18);
                                            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20)
                                                   = uVar14;
                                            }
                                            else {
                                              FUN_02bd46ac(0,0x3f800000,lVar8,
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
                                                  FUN_02bd46ac(0x3f800000,0x3f800000,lVar8,
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
                                                  uVar14 = DAT_00b91f78;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar14;
                                                      return;
                                                    }
                                                    FUN_02bd46ac(0x3f800000,0,lVar8,
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
LAB_0313b490:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


