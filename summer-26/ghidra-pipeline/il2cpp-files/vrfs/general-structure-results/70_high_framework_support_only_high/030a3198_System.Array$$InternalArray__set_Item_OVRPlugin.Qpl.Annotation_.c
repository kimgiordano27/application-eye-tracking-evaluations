/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 030a3198
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_Qpl_Annotation>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long unaff_x20;
  long *unaff_x24;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float fVar3;
  float fVar4;
  float fVar5;
  double in_stack_00000048;
  
  FUN_03368bf0(-param_3);
  fVar1 = *(float *)(unaff_x20 + 0x20);
  fVar3 = *(float *)(unaff_x20 + 0x24);
  fVar4 = *(float *)(unaff_x20 + 0x28);
  fVar5 = *(float *)(unaff_x20 + 0x2c);
  fVar2 = fVar1;
  if (unaff_s8 < fVar1) {
    fVar2 = unaff_s8;
  }
  fVar2 = fVar2 * 255.0;
  if (fVar1 < 0.0) {
    fVar2 = 0.0;
  }
  modf((double)fVar2,&stack0x00000048);
  fVar2 = fVar3;
  if (unaff_s8 < fVar3) {
    fVar2 = unaff_s8;
  }
  fVar2 = fVar2 * 255.0;
  if (fVar3 < 0.0) {
    fVar2 = 0.0;
  }
  modf((double)fVar2,&stack0x00000048);
  fVar2 = fVar4;
  if (unaff_s8 < fVar4) {
    fVar2 = unaff_s8;
  }
  fVar2 = fVar2 * 255.0;
  if (fVar4 < 0.0) {
    fVar2 = 0.0;
  }
  modf((double)fVar2,&stack0x00000048);
  fVar2 = fVar5;
  if (unaff_s8 < fVar5) {
    fVar2 = unaff_s8;
  }
  fVar2 = fVar2 * 255.0;
  if (fVar5 < 0.0) {
    fVar2 = 0.0;
  }
  modf((double)fVar2,&stack0x00000048);
  FUN_03368bf0(-*(float *)(unaff_x20 + 0x30),-*(float *)(unaff_x20 + 0x34));
  FUN_03090ccc();
  FUN_030a231c();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_016f5154();
  return;
}


