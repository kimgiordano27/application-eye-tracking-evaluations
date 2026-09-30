/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 073d7fa0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__set_rotation(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x24) * DAT_018b02e8;
  fVar5 = fVar7 * DAT_018b02e8;
  FUN_085d262c(*(float *)(param_1 + 0x20) * DAT_018b02e8,fVar3,fVar5,0);
  fVar1 = (float)FUN_085d2318(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar8 = fVar7;
    fVar2 = (float)FUN_085eb494(*(long *)(param_1 + 0x18),0);
    return (fVar3 * fVar6 + fVar7 * fVar2 + fVar1 * fVar8) - fVar5 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


