/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 02fc4134
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioInChanged(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar7;
  ulong unaff_x27;
  
  while (uVar2 = *(uint *)(unaff_x23 + 0x18), unaff_x27 < uVar2) {
    *(uint *)(unaff_x26 + -8) = param_1 & 0x7fffffff;
    lVar7 = unaff_x26;
    do {
      unaff_x27 = unaff_x27 + 1;
      unaff_x26 = lVar7 + 0x38;
      if (unaff_x24 == unaff_x27) {
        if ((int)unaff_x24 < 1) goto LAB_02fc41cc;
        if (unaff_x23 == 0) goto LAB_02fc420c;
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        uVar6 = 0;
        goto LAB_02fc4170;
      }
      if (uVar2 <= unaff_x27) goto LAB_02fc4208;
      piVar1 = (int *)(lVar7 + 0x30);
      lVar7 = unaff_x26;
    } while (*piVar1 < 0);
    param_1 = FUN_031d7008(unaff_x26,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x130));
  }
LAB_02fc4208:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
LAB_02fc4170:
  if (uVar2 <= uVar6) goto LAB_02fc4208;
  iVar3 = *(int *)(unaff_x23 + uVar6 * 0x38 + 0x20);
  if (-1 < iVar3) {
    if (unaff_x21 == 0) {
LAB_02fc420c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar5 = 0;
    if (unaff_w20 != 0) {
      iVar5 = iVar3 / unaff_w20;
    }
    uVar4 = iVar3 - iVar5 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar4) goto LAB_02fc4208;
    lVar7 = unaff_x21 + (long)(int)uVar4 * 4;
    *(int *)(unaff_x23 + uVar6 * 0x38 + 0x24) = *(int *)(lVar7 + 0x20) + -1;
    *(int *)(lVar7 + 0x20) = (int)uVar6 + 1;
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == unaff_x24) {
LAB_02fc41cc:
    *(long *)(unaff_x19 + 0x10) = unaff_x21;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
    *(long *)(unaff_x19 + 0x18) = unaff_x23;
    thunk_FUN_01656ef8();
    return;
  }
  goto LAB_02fc4170;
}


