/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 05119680
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryComplete(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  undefined8 *puVar3;
  
  if (unaff_x19 != 0) {
    lVar2 = *unaff_x20;
    uVar1 = FUN_050c0370();
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x58);
      *puVar3 = uVar1;
      thunk_FUN_02dd37b4(puVar3,uVar1);
      if (*unaff_x20 != 0) {
        FUN_050d0ab4(*unaff_x20,*(undefined4 *)(unaff_x19 + 0x3c),0);
        if (*unaff_x20 != 0) {
          *(undefined8 *)(*unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
          thunk_FUN_02dd37b4();
          if (*unaff_x20 != 0) {
            FUN_050d0b1c(*unaff_x20,*(undefined4 *)(unaff_x19 + 0x40),0);
            if (*unaff_x20 != 0) {
              FUN_050d0bfc(*unaff_x20,*(undefined4 *)(unaff_x19 + 0x48),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


