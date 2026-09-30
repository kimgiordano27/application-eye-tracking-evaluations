/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 0313b270
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int in_w10;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 uVar6;
  
  lVar4 = *unaff_x21;
  *(int *)(param_2 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 3;
    }
    else {
      FUN_02b2c8dc(param_2,3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    puVar2 = StringLiteral_13312;
    lVar4 = *unaff_x19;
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x10);
      lVar5 = *(long *)StringLiteral_13312;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = 0;
        }
        else {
          FUN_02bd46ac(0,0,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = *unaff_x19;
        if (lVar4 != 0) {
          lVar3 = *(long *)(lVar4 + 0x10);
          lVar5 = *(long *)puVar2;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          uVar6 = DAT_00b92e20;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            }
            else {
              FUN_02bd46ac(0,0x3f800000,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            lVar4 = *unaff_x19;
            if (lVar4 != 0) {
              lVar3 = *(long *)(lVar4 + 0x10);
              lVar5 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar3 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                  uVar6 = NEON_fmov(0x3f800000,4);
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                }
                else {
                  FUN_02bd46ac(0x3f800000,0x3f800000,lVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                lVar4 = *unaff_x19;
                if (lVar4 != 0) {
                  lVar3 = *(long *)(lVar4 + 0x10);
                  lVar5 = *(long *)puVar2;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  uVar6 = DAT_00b91f78;
                  if (lVar3 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                      return;
                    }
                    FUN_02bd46ac(0x3f800000,0,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


