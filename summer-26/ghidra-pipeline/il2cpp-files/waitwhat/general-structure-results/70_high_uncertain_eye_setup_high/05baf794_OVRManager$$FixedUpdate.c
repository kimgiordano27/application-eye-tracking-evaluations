/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 05baf794
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s15;
  float in_s19;
  float in_s20;
  
  param_5 = param_5 - param_2;
  param_6 = param_6 - in_s19;
  FUN_069e7254(param_3 - param_1,param_5,param_6,param_4 - in_s20);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_069e6fbc(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar4 = unaff_s8 + param_6;
      fVar5 = unaff_s9 + param_5;
      fVar3 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
      FUN_069e7098((unaff_s15 + fVar2) - fVar3,fVar5 - param_5,fVar4 - param_6,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


