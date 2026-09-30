/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 04c2e34c
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords(undefined8 param_1)

{
  long lVar1;
  long *unaff_x21;
  
  FUN_054e9a40(param_1,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
                    /* try { // try from 04c2e364 to 04d2e36f has its CatchHandler @ 04c2e408 */
  if (DAT_06a6d4d0 == '\0') {
                    /* try { // try from 04c2e370 to 04d2e3f7 has its CatchHandler @ 04c2e1ac */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
    DAT_06a6d4d0 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_054df144();
  lVar1 = FUN_04c28dc4();
  if ((lVar1 != 0) && (lVar1 = FUN_054d80d0(lVar1,0), lVar1 != 0)) {
    FUN_054e8f38(lVar1,*(undefined8 *)PTR_DAT_065e61c0);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


