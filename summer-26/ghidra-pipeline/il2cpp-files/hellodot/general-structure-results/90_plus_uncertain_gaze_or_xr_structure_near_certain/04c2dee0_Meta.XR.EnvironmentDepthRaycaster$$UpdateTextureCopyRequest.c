/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 04c2dee0
PROGRAM: hellodot-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest(void)

{
  undefined *puVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
  *(undefined1 *)(unaff_x21 + 0x6f5) = 1;
  puVar1 = PTR_DAT_065e61a0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_03532dc0(uVar2,*(undefined8 *)puVar1);
  return;
}


