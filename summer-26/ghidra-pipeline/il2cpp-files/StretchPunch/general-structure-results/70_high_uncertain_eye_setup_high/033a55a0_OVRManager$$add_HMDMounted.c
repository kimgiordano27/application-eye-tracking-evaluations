/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 033a55a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_HMDMounted(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int iVar3;
  long unaff_x23;
  long lVar4;
  long unaff_x26;
  
  if (unaff_x23 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_03277aec();
    iVar3 = *(int *)(unaff_x23 + 0x10);
  }
  if (DAT_044a65e9 == '\0') {
    FUN_01d7d918(StringLiteral_4490);
    FUN_01d7d918(StringLiteral_4437);
    DAT_044a65e9 = '\x01';
  }
  if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_032808ac(), (uVar1 & 1) != 0)))) {
    uVar2 = 0x7f800000;
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (*(char *)(unaff_x26 + 0x3b6) == '\0') {
      FUN_01d7d918(StringLiteral_3003);
      *(undefined1 *)(unaff_x26 + 0x3b6) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_03277aec(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (DAT_044a65e9 == '\0') {
      FUN_01d7d918(StringLiteral_4490);
      FUN_01d7d918(StringLiteral_4437);
      DAT_044a65e9 = '\x01';
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_032808ac(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xff800000;
    }
    else {
      lVar4 = *(long *)(unaff_x22 + 0x68);
      if (*(char *)(unaff_x26 + 0x3b6) == '\0') {
        FUN_01d7d918(StringLiteral_3003);
        *(undefined1 *)(unaff_x26 + 0x3b6) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        FUN_03277aec(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (DAT_044a65e9 == '\0') {
        FUN_01d7d918(StringLiteral_4490);
        FUN_01d7d918(StringLiteral_4437);
        DAT_044a65e9 = '\x01';
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_032808ac(), (uVar1 & 1) == 0))))
      {
        return 0;
      }
      uVar2 = 0x7fc00000;
    }
  }
  *unaff_x19 = uVar2;
  return 1;
}


