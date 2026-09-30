/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 06926480
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  byte unaff_w19;
  long unaff_x20;
  
  if ((unaff_w19 & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x60);
    if (lVar1 == 0) {
LAB_069264d0:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar2 = 0;
  }
  else {
    if ((in_w8 != 0) || ((unaff_w19 & 1) == 0)) goto LAB_069264bc;
    lVar1 = *(long *)(unaff_x20 + 0x60);
    if (lVar1 == 0) goto LAB_069264d0;
    uVar2 = 1;
  }
  FUN_059f6040(lVar1,uVar2,*(undefined8 *)PTR_DAT_08489d50);
LAB_069264bc:
  *(byte *)(unaff_x20 + 0x58) = unaff_w19 & 1;
  return;
}


