/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 051b9d48
PROGRAM: hellodot-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 *unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  fVar1 = (float)FUN_05eea23c();
  fVar2 = (float)FUN_05ee9f08(0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_05effcac(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
               (unaff_s13 * fVar1 + unaff_s15 * param_3 + unaff_s8 * fVar2) - unaff_s14 * param_2,
               (unaff_s15 * param_2 + unaff_s14 * param_3 + unaff_s8 * fVar1) - unaff_s13 * fVar2,
               (unaff_s14 * fVar2 + unaff_s13 * param_3 + unaff_s8 * param_2) - unaff_s15 * fVar1,
               ((unaff_s8 * param_3 - unaff_s15 * fVar2) - unaff_s14 * fVar1) - unaff_s13 * param_2)
  ;
  return;
}


