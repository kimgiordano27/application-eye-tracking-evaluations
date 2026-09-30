/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 0313b0d4
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


void OVRManager__GetCurrentDisplaySubsystemDescriptor(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 in_w9;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar6;
  
  *(undefined4 *)(param_2 + 0x18) = in_w9;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *unaff_x21;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 1;
    }
    else {
      FUN_02b2c8dc(param_2,1,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      param_2 = *unaff_x20;
      if (param_2 == 0) goto LAB_0313b490;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *unaff_x21;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 2;
      }
      else {
        FUN_02b2c8dc(param_2,2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        param_2 = *unaff_x20;
        if (param_2 == 0) goto LAB_0313b490;
      }
      lVar3 = *(long *)(param_2 + 0x10);
      lVar4 = *unaff_x21;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 0;
        }
        else {
          FUN_02b2c8dc(param_2,0,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          param_2 = *unaff_x20;
          if (param_2 == 0) goto LAB_0313b490;
        }
        lVar3 = *(long *)(param_2 + 0x10);
        lVar4 = *unaff_x21;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 2;
          }
          else {
            FUN_02b2c8dc(param_2,2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                        );
            param_2 = *unaff_x20;
            if (param_2 == 0) goto LAB_0313b490;
          }
          lVar3 = *(long *)(param_2 + 0x10);
          lVar4 = *unaff_x21;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(param_2 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 3;
            }
            else {
              FUN_02b2c8dc(param_2,3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
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
                          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                        }
                        else {
                          FUN_02bd46ac(0x3f800000,0x3f800000,lVar3,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                              *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                              return;
                            }
                            FUN_02bd46ac(0x3f800000,0,lVar3,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
LAB_0313b490:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


