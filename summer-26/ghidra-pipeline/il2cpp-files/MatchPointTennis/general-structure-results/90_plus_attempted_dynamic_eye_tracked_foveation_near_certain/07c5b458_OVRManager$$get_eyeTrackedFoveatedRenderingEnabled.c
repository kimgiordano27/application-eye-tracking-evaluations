/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07c5b458
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5
               ,undefined1 param_6 [16],undefined1 param_7 [16],float param_8,undefined8 param_9)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s16;
  
  fVar3 = (float)param_3;
  fVar4 = (float)param_4;
  fVar2 = (float)param_2;
  uVar1 = FUN_09537fe0(param_9,0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_09537b20(param_8 + in_s16 + param_1,param_5 + fVar2,fVar4 + fVar3,uVar1,param_2,param_3,
               param_4);
  return;
}


