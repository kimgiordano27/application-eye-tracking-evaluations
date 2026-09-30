/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 04db8f30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation
               (long param_1,void *param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  code *pcVar2;
  long unaff_x22;
  ulong unaff_x23;
  long in_stack_000022e8;
  
  pcVar2 = (code *)**(undefined8 **)(param_1 + 0x298);
  memcpy(param_2,param_3,param_4);
  if ((unaff_x23 & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar1 = (*pcVar2)();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000022e8) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


