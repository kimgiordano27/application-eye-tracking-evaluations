/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 05fdba0c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (*(int *)(param_4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar1 = (float)FUN_06ee4a4c(0);
  fVar2 = *(float *)(unaff_x19 + 0x80);
  *(float *)(unaff_x19 + 0xcc) = unaff_s11 + unaff_s8 * fVar1 * fVar2;
  *(float *)(unaff_x19 + 0xd0) = unaff_s9 + unaff_s8 * param_2 * fVar2;
  *(float *)(unaff_x19 + 0xd4) = unaff_s10 + unaff_s8 * param_3 * fVar2;
  return;
}


