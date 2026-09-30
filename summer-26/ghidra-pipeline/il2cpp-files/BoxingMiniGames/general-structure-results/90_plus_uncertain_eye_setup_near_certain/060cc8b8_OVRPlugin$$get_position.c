/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 060cc8b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long unaff_x19;
  undefined4 uVar1;
  float fVar2;
  float unaff_s9;
  float fVar3;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  
  param_2 = unaff_s9 * param_2;
  fVar2 = (param_6 + param_5) - param_2;
  fVar3 = (param_4 - in_s18) - param_3;
  uVar1 = FUN_060cc3f8();
  FUN_071af638(fVar2,(param_8 + param_7) - in_s19,(in_s17 + in_s16) - param_1,fVar3,uVar1,param_2,
               param_3,0);
  if (unaff_x19 != 0) {
    FUN_071d140c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


