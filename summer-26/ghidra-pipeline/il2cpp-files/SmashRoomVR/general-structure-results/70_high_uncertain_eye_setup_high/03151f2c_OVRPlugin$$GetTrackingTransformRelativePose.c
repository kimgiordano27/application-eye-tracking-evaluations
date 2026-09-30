/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 03151f2c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined4 *unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)FUN_03914564();
  fVar3 = (unaff_s10 * fVar1 + unaff_s11 * param_2 + unaff_s9 * param_4) - unaff_s8 * param_3;
  fVar4 = (unaff_s8 * param_2 + unaff_s11 * param_3 + unaff_s10 * param_4) - unaff_s9 * fVar1;
  fVar5 = ((unaff_s11 * param_4 - unaff_s8 * fVar1) - unaff_s9 * param_2) - unaff_s10 * param_3;
  fVar2 = (unaff_s9 * param_3 + unaff_s11 * fVar1 + unaff_s8 * param_4) - unaff_s10 * param_2;
  fVar1 = (float)FUN_03914250(0);
  FUN_03914a7c((unaff_s10 * fVar3 + fVar1 * fVar5 + unaff_s11 * fVar2) - unaff_s9 * fVar4,
               (fVar1 * fVar4 + unaff_s9 * fVar5 + unaff_s11 * fVar3) - unaff_s10 * fVar2,
               (unaff_s9 * fVar2 + unaff_s10 * fVar5 + unaff_s11 * fVar4) - fVar1 * fVar3,
               ((unaff_s11 * fVar5 - fVar1 * fVar2) - unaff_s9 * fVar3) - unaff_s10 * fVar4,
               *unaff_x19,unaff_x19[1],unaff_x19[2],0);
  return;
}


