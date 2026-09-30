/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 0313af38
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


void OVRManager__GetCurrentDisplaySubsystem(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar7;
  undefined4 unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  
  FUN_02bd6ed8(param_1,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  lVar3 = *unaff_x21;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *unaff_x22;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      fVar7 = unaff_s9 * unaff_s11;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + 0x20) = unaff_s10;
        *(float *)(lVar4 + 0x24) = fVar7;
        *(undefined4 *)(lVar4 + 0x28) = 0;
      }
      else {
        FUN_02bd6ed8(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = *unaff_x21;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar5 = *unaff_x22;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          fVar8 = unaff_s12 * unaff_s11;
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(float *)(lVar4 + 0x20) = fVar8;
            *(float *)(lVar4 + 0x24) = fVar7;
            *(undefined4 *)(lVar4 + 0x28) = 0;
          }
          else {
            FUN_02bd6ed8(fVar8,fVar7,0,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar3 = *unaff_x21;
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            lVar5 = *unaff_x22;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(float *)(lVar4 + 0x20) = fVar8;
                *(undefined4 *)(lVar4 + 0x24) = unaff_s8;
                *(undefined4 *)(lVar4 + 0x28) = 0;
              }
              else {
                FUN_02bd6ed8(fVar8,lVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = 
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
              lVar3 = *unaff_x20;
              if (lVar3 != 0) {
                lVar4 = *(long *)(lVar3 + 0x10);
                lVar5 = *(long *)
                         Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                ;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_02b2c8dc(lVar3,0,*(undefined8 *)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    lVar3 = *unaff_x20;
                    if (lVar3 == 0) goto LAB_0313b490;
                  }
                  lVar4 = *(long *)(lVar3 + 0x10);
                  lVar5 = *(long *)puVar2;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar4 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 1;
                    }
                    else {
                      FUN_02b2c8dc(lVar3,1,*(undefined8 *)
                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      lVar3 = *unaff_x20;
                      if (lVar3 == 0) goto LAB_0313b490;
                    }
                    lVar4 = *(long *)(lVar3 + 0x10);
                    lVar5 = *(long *)puVar2;
                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                      }
                      else {
                        FUN_02b2c8dc(lVar3,2,*(undefined8 *)
                                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        lVar3 = *unaff_x20;
                        if (lVar3 == 0) goto LAB_0313b490;
                      }
                      lVar4 = *(long *)(lVar3 + 0x10);
                      lVar5 = *(long *)puVar2;
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_02b2c8dc(lVar3,0,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          lVar3 = *unaff_x20;
                          if (lVar3 == 0) goto LAB_0313b490;
                        }
                        lVar4 = *(long *)(lVar3 + 0x10);
                        lVar5 = *(long *)puVar2;
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                          }
                          else {
                            FUN_02b2c8dc(lVar3,2,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar3 = *unaff_x20;
                            if (lVar3 == 0) goto LAB_0313b490;
                          }
                          lVar4 = *(long *)(lVar3 + 0x10);
                          lVar5 = *(long *)puVar2;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar4 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
                            }
                            else {
                              FUN_02b2c8dc(lVar3,3,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                            }
                            puVar2 = StringLiteral_13312;
                            lVar3 = *unaff_x19;
                            if (lVar3 != 0) {
                              lVar4 = *(long *)(lVar3 + 0x10);
                              lVar5 = *(long *)StringLiteral_13312;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = 0;
                                }
                                else {
                                  FUN_02bd46ac(0,0,lVar3,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                }
                                lVar3 = *unaff_x19;
                                if (lVar3 != 0) {
                                  lVar4 = *(long *)(lVar3 + 0x10);
                                  lVar5 = *(long *)puVar2;
                                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                  uVar6 = DAT_00b92e20;
                                  if (lVar4 != 0) {
                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                    }
                                    else {
                                      FUN_02bd46ac(0,0x3f800000,lVar3,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar3 = *unaff_x19;
                                    if (lVar3 != 0) {
                                      lVar4 = *(long *)(lVar3 + 0x10);
                                      lVar5 = *(long *)puVar2;
                                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                          uVar6 = NEON_fmov(0x3f800000,4);
                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar6;
                                        }
                                        else {
                                          FUN_02bd46ac(0x3f800000,0x3f800000,lVar3,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar3 = *unaff_x19;
                                        if (lVar3 != 0) {
                                          lVar4 = *(long *)(lVar3 + 0x10);
                                          lVar5 = *(long *)puVar2;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          uVar6 = DAT_00b91f78;
                                          if (lVar4 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              return;
                                            }
                                            FUN_02bd46ac(0x3f800000,0,lVar3,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
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
LAB_0313b490:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


