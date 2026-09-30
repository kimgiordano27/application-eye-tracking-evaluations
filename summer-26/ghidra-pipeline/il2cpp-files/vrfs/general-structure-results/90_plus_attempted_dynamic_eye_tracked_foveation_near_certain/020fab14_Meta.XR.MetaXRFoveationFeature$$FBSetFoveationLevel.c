/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 020fab14
PROGRAM: vrfs-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(long param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float unaff_s8;
  undefined8 unaff_d9;
  
  pfVar1 = *(float **)(**(long **)(param_1 + 0x440) + 0xb8);
  uVar4 = *(undefined8 *)(pfVar1 + 1);
  fVar2 = unaff_s8 - *pfVar1;
  fVar3 = (float)unaff_d9 - (float)uVar4;
  fVar5 = (float)((ulong)unaff_d9 >> 0x20) - (float)((ulong)uVar4 >> 0x20);
  return DAT_0534bf7c <= fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
}


