/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency
ENTRY_POINT: 07c5a898
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               float param_6,undefined1 param_7 [16],float param_8)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s15;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar5 = (unaff_s9 * param_2 + in_s17 + in_s18) - in_s19;
  fVar4 = (unaff_s8 * param_1 + unaff_s11 * param_2 + in_s20) - in_s22;
  FUN_0953a29c((in_s21 + unaff_s11 * param_1 + unaff_s9 * param_4) - unaff_s8 * param_2,fVar4,fVar5,
               ((param_5 - param_6) - unaff_s10 * param_2) - param_8);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_09539d64(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar5;
      in_stack_00000068 = in_stack_00000068 + fVar4;
      fVar3 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
      FUN_09539e3c((unaff_s15 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                   in_stack_00000008._4_4_ - fVar5,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


