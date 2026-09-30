/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 04f3f9c8
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


void OVRManager__remove_VrFocusAcquired(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  fVar2 = (float)FUN_05d1b860();
  if (*(char *)(unaff_x22 + 0x98e) == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    *(undefined1 *)(unaff_x22 + 0x98e) = 1;
  }
  fVar3 = param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2;
  if (**(float **)(*unaff_x23 + 0xb8) <= fVar3) {
    fVar5 = unaff_s9 * param_3 + unaff_s10 * fVar2 + unaff_s8 * param_2;
    unaff_s10 = unaff_s10 - (fVar2 * fVar5) / fVar3;
    unaff_s8 = unaff_s8 - (param_2 * fVar5) / fVar3;
    unaff_s9 = unaff_s9 - (param_3 * fVar5) / fVar3;
  }
  if (*(char *)(unaff_x20 + 0xcaa) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    *(undefined1 *)(unaff_x20 + 0xcaa) = 1;
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fVar5 = unaff_s9 + unaff_s11 * *(float *)(lVar1 + 0x20);
  fVar3 = unaff_s8 + unaff_s11 * *(float *)(lVar1 + 0x1c);
  fVar2 = (float)FUN_04f3fb4c(unaff_s10 + unaff_s11 * *(float *)(lVar1 + 0x18),fVar3,fVar5);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar6 = fVar3, fVar7 = fVar5, lVar1 = FUN_05c89340(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)
     ) {
    fVar4 = (float)FUN_05c9bf94(lVar1,0);
    FUN_05c9c070(fVar2 + fVar4,fVar3 + fVar6,fVar5 + fVar7,lVar1,0);
    FUN_04f3fdc8();
    FUN_04f3eb7c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


