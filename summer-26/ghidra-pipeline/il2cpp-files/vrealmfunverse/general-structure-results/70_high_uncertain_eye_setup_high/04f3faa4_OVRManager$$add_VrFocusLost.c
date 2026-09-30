/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 04f3faa4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusLost(undefined1 param_1 [16],float param_2)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  
  fVar2 = (float)FUN_04f3fb4c();
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = param_2, fVar5 = unaff_s9, lVar1 = FUN_05c89340(*(long *)(unaff_x19 + 0x20),0),
     lVar1 != 0)) {
    fVar3 = (float)FUN_05c9bf94(lVar1,0);
    FUN_05c9c070(fVar2 + fVar3,param_2 + fVar4,unaff_s9 + fVar5,lVar1,0);
    FUN_04f3fdc8();
    FUN_04f3eb7c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


