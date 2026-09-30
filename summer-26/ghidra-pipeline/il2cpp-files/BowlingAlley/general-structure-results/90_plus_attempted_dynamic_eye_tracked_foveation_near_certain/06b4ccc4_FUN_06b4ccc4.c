/*
FUNCTION_NAME: FUN_06b4ccc4
ENTRY_POINT: 06b4ccc4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 112
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool FUN_06b4ccc4(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_076e3868 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
    local_30 = "GetEyeTrackedFoveatedRenderingEnabled";
    uStack_28 = 0x25;
    local_20 = DAT_0139df28;
    local_14 = 0;
    DAT_076e3868 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality
                                     (&local_40);
  }
  cVar1 = (*DAT_076e3868)();
  return cVar1 != '\0';
}


