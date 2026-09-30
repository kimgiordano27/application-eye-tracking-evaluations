/*
FUNCTION_NAME: OVRPlugin$$get_cpuLevel
ENTRY_POINT: 0314f59c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_cpuLevel(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x21;
  long lVar2;
  long unaff_x24;
  
  lVar2 = *unaff_x21;
  uVar1 = thunk_FUN_01afaadc();
  FUN_0314f624(uVar1,lVar2);
  if ((*unaff_x21 != 0) && (unaff_x24 != 0)) {
    FUN_0289d61c();
    if ((*unaff_x21 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_0255ad40(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*unaff_x21 + 0x38),uVar1,
                   *(undefined8 *)PTR_DAT_03d80140);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


