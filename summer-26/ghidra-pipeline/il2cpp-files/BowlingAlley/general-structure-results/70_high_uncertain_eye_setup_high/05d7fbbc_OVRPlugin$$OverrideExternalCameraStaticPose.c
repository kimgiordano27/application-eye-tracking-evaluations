/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 05d7fbbc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__OverrideExternalCameraStaticPose(undefined1 param_1 [16],undefined4 param_2)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  undefined4 uStack0000000000000004;
  
  uStack0000000000000004 = param_2;
  FUN_06bde1c4();
  fVar1 = (float)FUN_05d765a4();
  fVar2 = (float)FUN_06bddf48(0);
  fVar5 = *(float *)(unaff_x20 + 0x2c);
  fVar6 = *(float *)(unaff_x20 + 0x30);
  fVar4 = *(float *)(unaff_x20 + 0x28);
  fVar3 = (float)FUN_06bdd998(*(undefined4 *)(unaff_x20 + 0x24),fVar4,fVar5,fVar6,0);
  return (*(float *)(unaff_x19 + 0x2c) *
          ((unaff_s10 * fVar3 + fVar1 * fVar4 + unaff_s9 * fVar6) - fVar2 * fVar5) +
         *(float *)(unaff_x19 + 0x24) *
         (((fVar1 * fVar6 - fVar2 * fVar3) - unaff_s9 * fVar4) - unaff_s10 * fVar5) +
         *(float *)(unaff_x19 + 0x30) *
         ((unaff_s9 * fVar5 + fVar1 * fVar3 + fVar2 * fVar6) - unaff_s10 * fVar4)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar2 * fVar4 + fVar1 * fVar5 + unaff_s10 * fVar6) - unaff_s9 * fVar3);
}


