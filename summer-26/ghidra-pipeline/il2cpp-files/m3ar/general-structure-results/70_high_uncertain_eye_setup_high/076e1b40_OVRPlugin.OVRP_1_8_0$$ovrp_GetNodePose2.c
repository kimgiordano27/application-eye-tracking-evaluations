/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 076e1b40
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               undefined1 param_6 [16],float param_7,float param_8)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  
  param_2 = (param_8 + param_7) - param_2;
  fVar4 = (in_s17 + in_s16) - in_s19;
  FUN_08598b14(param_3 - param_1,param_2,fVar4,(param_4 - in_s18) - in_s20);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_08598884(lVar1,0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar5 = unaff_s8 + fVar4;
      fVar6 = unaff_s9 + param_2;
      fVar3 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x28),0);
      FUN_0859895c((unaff_s15 + fVar2) - fVar3,fVar6 - param_2,fVar5 - fVar4,lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


