/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 01a22208
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar2;
  
  FUN_017b46ec();
  *(undefined8 *)(param_1 + 0x10) = unaff_x22;
  *(long *)(unaff_x19 + 0xe0) = param_1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar1 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    *(long *)(unaff_x19 + 0xd8) = lVar1;
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    lVar1 = thunk_FUN_00d62348(*unaff_x21);
    if (lVar1 != 0) {
      FUN_017b46ec(lVar1,0);
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      *(long *)(unaff_x19 + 0xd0) = lVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


