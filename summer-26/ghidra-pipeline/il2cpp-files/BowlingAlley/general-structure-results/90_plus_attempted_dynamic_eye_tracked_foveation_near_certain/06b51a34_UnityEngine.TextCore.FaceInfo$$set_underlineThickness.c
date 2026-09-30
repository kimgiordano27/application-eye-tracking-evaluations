/*
FUNCTION_NAME: UnityEngine.TextCore.FaceInfo$$set_underlineThickness
ENTRY_POINT: 06b51a34
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 97
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_TextCore_FaceInfo__set_underlineThickness(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x19;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x97;
  uStack0000000000000028 = 0;
  uStack0000000000000008 = 0xb;
  pcStack0000000000000010 = "OculusFoveation_GetUsedApi";
  uStack0000000000000018 = 0x1a;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality();
  *(code **)(unaff_x19 + 0x940) = pcVar1;
  (*pcVar1)();
  return;
}


