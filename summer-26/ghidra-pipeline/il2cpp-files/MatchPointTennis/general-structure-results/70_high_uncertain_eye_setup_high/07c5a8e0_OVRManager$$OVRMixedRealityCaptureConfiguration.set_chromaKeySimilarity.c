/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity
ENTRY_POINT: 07c5a8e0
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity
               (float param_1,float param_2,float param_3)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float unaff_s15;
  float in_s24;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  FUN_0953a29c(param_1 - in_s24);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_09539d64(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + param_3;
      in_stack_00000068 = in_stack_00000068 + param_2;
      fVar3 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
      FUN_09539e3c((unaff_s15 + fVar2) - fVar3,in_stack_00000068 - param_2,
                   in_stack_00000008._4_4_ - param_3,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


