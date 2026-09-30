/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 04f3fe14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusLost(byte param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(byte *)(unaff_x19 + 0x7c) = param_1 & 1;
  cVar2 = DAT_066c1caa;
  if (((param_1 & 1) != 0) || ((unaff_x20 & 1) == 0)) {
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x7c) = 1;
  if (cVar2 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1caa = '\x01';
  }
  puVar1 = PTR_DAT_06312438;
  lVar3 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
  fVar6 = *(float *)(lVar3 + 0x1c);
  fVar7 = *(float *)(lVar3 + 0x20);
  FUN_05d1b86c(*(undefined4 *)(lVar3 + 0x18),fVar6,fVar7,unaff_x19 + 0x50,0);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar3 = FUN_05c89340(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0)) {
    fVar4 = (float)FUN_05c9bf94(lVar3,0);
    if (DAT_066c1f0a == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1f0a = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar9 = *(float *)(lVar3 + 0x28);
      fVar8 = *(float *)(lVar3 + 0x2c);
      fVar10 = *(float *)(lVar3 + 0x24);
      fVar5 = (float)FUN_05d0be20(*(long *)(unaff_x19 + 0x20),0);
      fVar5 = fVar5 * 0.5 + *(float *)(unaff_x19 + 0x28);
      FUN_05d1b854(fVar4 + fVar10 * fVar5,fVar6 + fVar9 * fVar5,fVar7 + fVar8 * fVar5,
                   unaff_x19 + 0x50,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


