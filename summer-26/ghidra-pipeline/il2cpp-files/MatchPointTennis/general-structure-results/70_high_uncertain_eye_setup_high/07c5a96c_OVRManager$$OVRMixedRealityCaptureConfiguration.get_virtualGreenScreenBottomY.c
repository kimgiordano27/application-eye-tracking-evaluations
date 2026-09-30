/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY
ENTRY_POINT: 07c5a96c
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,float param_6)

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
  float in_s22;
  float in_s24;
  
  param_5 = param_5 - in_s19;
  param_6 = param_6 - in_s22;
  FUN_0953a29c(param_1,param_5,param_6,param_4 - in_s24);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_09539d64(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar4 = unaff_s8 + param_6;
      fVar5 = unaff_s9 + param_5;
      fVar3 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
      FUN_09539e3c((unaff_s15 + fVar2) - fVar3,fVar5 - param_5,fVar4 - param_6,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


