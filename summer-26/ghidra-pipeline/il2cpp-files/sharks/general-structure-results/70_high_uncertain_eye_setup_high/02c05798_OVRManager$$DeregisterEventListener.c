/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 02c05798
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__DeregisterEventListener(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      return uVar2;
    }
    lVar1 = FUN_02c1554c(param_1,param_2 & 1,0);
  }
  uVar2 = FUN_02a43498(uVar2,lVar1,0);
  return uVar2;
}


