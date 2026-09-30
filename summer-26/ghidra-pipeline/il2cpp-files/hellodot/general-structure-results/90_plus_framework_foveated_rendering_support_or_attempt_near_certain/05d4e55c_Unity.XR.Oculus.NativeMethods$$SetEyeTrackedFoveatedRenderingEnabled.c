/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d4e55c
PROGRAM: hellodot-libil2cpp.so
SCORE: 128
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ef720);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ee7d0);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_Dictionary<Type,_MethodInfo[]>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_Dictionary<Type,_List<string>>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065deda8);
  *(undefined1 *)(unaff_x20 + 0x9a4) = 1;
  if (*unaff_x19 != 0) {
    FUN_03c3a1d0();
  }
  if (unaff_x19[2] != 0) {
    FUN_03c2e6e8(unaff_x19 + 2,*(undefined8 *)PTR_DAT_065ee7d0);
  }
  if (unaff_x19[4] != 0) {
    FUN_03c36384(unaff_x19 + 4,*(undefined8 *)PTR_DAT_065dedb8);
    return;
  }
  return;
}


