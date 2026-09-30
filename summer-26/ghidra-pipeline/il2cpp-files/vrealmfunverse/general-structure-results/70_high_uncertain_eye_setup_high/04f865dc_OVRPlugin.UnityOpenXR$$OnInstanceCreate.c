/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 04f865dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceCreate(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_066c9d2b & 1) == 0) {
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    DAT_066c9d2b = 1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar1 = thunk_FUN_02b79548(*(undefined8 *)(param_1 + 0x78),
                               *(undefined8 *)System_Runtime_Remoting_IRemotingTypeInfo_var);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    thunk_FUN_02bb0e9c((long *)(param_1 + 0x80),uVar1);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  uVar1 = thunk_FUN_02b79548(*(undefined8 *)(param_1 + 0x88),
                             *(undefined8 *)System_Runtime_Remoting_IRemotingTypeInfo_var);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x90));
  return;
}


