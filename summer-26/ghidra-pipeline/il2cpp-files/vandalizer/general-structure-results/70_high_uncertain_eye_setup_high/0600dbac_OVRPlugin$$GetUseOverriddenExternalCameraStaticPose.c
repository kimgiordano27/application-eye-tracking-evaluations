/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0600dbac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetUseOverriddenExternalCameraStaticPose
                (float *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000068;
  
  if (*param_1 <= param_4) {
    fVar4 = (unaff_s14 - unaff_s10) * unaff_s13 +
            (in_stack_00000068._4_4_ - unaff_s8) * unaff_s12 + (unaff_s15 - unaff_s9) * unaff_s11;
    fVar2 = (unaff_s12 * fVar4) / param_4;
    fVar3 = (unaff_s11 * fVar4) / param_4;
    param_4 = (unaff_s13 * fVar4) / param_4;
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    param_4 = pfVar1[2];
  }
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  fVar3 = (unaff_s9 + fVar3) - unaff_s15;
  in_stack_00000068._4_4_ = (unaff_s8 + fVar2) - in_stack_00000068._4_4_;
  fVar4 = (unaff_s10 + param_4) - unaff_s14;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(fVar4 * fVar4 + in_stack_00000068._4_4_ * in_stack_00000068._4_4_ + fVar3 * fVar3);
}


