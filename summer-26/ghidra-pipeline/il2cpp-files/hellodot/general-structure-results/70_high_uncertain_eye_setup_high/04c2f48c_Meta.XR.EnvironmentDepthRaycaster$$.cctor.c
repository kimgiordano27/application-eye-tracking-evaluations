/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.cctor
ENTRY_POINT: 04c2f48c
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster___cctor(undefined8 param_1,long param_2)

{
  if ((DAT_06a6d706 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5c08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6240);
    DAT_06a6d706 = 1;
  }
  if (param_2 != 0) {
    FUN_04db8840(param_2,*(undefined8 *)PTR_DAT_065e6240,5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


