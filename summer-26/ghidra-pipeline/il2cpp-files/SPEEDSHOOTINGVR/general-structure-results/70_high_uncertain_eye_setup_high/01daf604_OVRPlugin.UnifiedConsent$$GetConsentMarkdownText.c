/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentMarkdownText
ENTRY_POINT: 01daf604
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetConsentMarkdownText(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x350));
  FUN_00fdc2e4(PTR_DAT_0235a368);
  FUN_00fdc2e4(PTR_DAT_0235a370);
  *(undefined1 *)(unaff_x19 + 0x9c5) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar2 = FUN_00fd7c64();
  puVar1 = PTR_DAT_0235a370;
  if (lVar2 == 0) {
    return;
  }
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar5);
    lVar5 = *unaff_x20;
  }
  lVar3 = *(long *)puVar1;
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a360);
    FUN_0136f3b8(lVar6,uVar7,*(undefined8 *)PTR_DAT_0235a368,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_0106e12c(plVar4,lVar6);
  }
  if (lVar5 != 0) {
    FUN_013679b4(lVar5,lVar2,lVar6,*(undefined8 *)PTR_DAT_0235a358);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


