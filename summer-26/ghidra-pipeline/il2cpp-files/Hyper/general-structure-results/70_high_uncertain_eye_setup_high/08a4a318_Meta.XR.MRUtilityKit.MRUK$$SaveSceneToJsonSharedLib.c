/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonSharedLib
ENTRY_POINT: 08a4a318
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonSharedLib(void)

{
  undefined *puVar1;
  undefined4 *unaff_x19;
  
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_0ac111a0;
  if ((DAT_0b32ddd6 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac111a0);
    DAT_0b32ddd6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f79c(unaff_x19 + 2);
  return;
}


