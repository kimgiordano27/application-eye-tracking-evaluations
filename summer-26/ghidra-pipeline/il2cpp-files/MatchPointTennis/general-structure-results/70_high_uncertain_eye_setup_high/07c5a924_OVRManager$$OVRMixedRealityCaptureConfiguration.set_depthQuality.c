/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_depthQuality
ENTRY_POINT: 07c5a924
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_depthQuality
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],float param_8)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s20;
  
  fVar4 = (in_s18 + in_s16 + in_s17) - unaff_s14 * param_3;
  fVar5 = (in_s20 + unaff_s11 * param_3 + unaff_s13 * param_4) - unaff_s12 * param_1;
  FUN_0953a29c((unaff_s12 * param_3 + param_5 + param_6) - param_8,fVar4,fVar5,
               ((unaff_s11 * param_4 - unaff_s14 * param_1) - unaff_s12 * param_2) -
               unaff_s13 * param_3);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_09539d64(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar6 = unaff_s8 + fVar5;
      fVar7 = unaff_s9 + fVar4;
      fVar3 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
      FUN_09539e3c((unaff_s15 + fVar2) - fVar3,fVar7 - fVar4,fVar6 - fVar5,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


