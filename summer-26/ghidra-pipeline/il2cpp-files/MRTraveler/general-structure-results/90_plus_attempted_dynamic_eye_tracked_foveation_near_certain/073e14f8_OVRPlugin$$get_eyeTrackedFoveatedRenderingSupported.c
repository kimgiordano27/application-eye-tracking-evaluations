/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 073e14f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(float param_1)

{
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 in_stack_00000008;
  
  fVar2 = unaff_s12 / param_1;
  fVar1 = (float)FUN_085d2264(in_stack_00000008,fStack0000000000000004,fStack0000000000000000,fVar2,
                              unaff_s13 / param_1,unaff_s15 / param_1,0);
  return (unaff_s8 * fStack0000000000000004 + unaff_s11 * fVar2 + unaff_s10 * fVar1) -
         unaff_s9 * fStack0000000000000000;
}


