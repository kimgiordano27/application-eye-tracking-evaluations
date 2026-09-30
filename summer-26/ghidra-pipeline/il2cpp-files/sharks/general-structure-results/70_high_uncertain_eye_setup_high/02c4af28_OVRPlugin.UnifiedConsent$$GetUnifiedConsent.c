/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetUnifiedConsent
ENTRY_POINT: 02c4af28
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetUnifiedConsent(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  FUN_017fc350(PTR_DAT_0380c908);
  FUN_017fc350(PTR_DAT_0380c910);
  *(undefined1 *)(unaff_x22 + 0xea) = 1;
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if (DAT_03a226b9 == '\0') {
    FUN_017fc350(PTR_DAT_037f8790);
    DAT_03a226b9 = '\x01';
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar3 = *unaff_x21;
  }
  puVar1 = PTR_DAT_0380c910;
  if (lVar6 == *(long *)(*(long *)(lVar3 + 0xb8) + 8)) {
    FUN_02c4b12c();
    return;
  }
  if ((unaff_x20 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar6 = FUN_02c46a10();
    if (lVar6 == *(long *)(unaff_x19 + 0x20)) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_02c3d7b8();
      uVar2 = uVar2 & 1;
    }
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar6 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar6 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0xb8);
    lVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9b40);
    FUN_020e6bbc(lVar3,uVar5,*(undefined8 *)PTR_DAT_0380c908,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar3;
    lVar6 = thunk_FUN_0188fd20(plVar4,lVar3);
  }
  lVar6 = FUN_02c4b250(lVar6,lVar3,*(undefined8 *)(unaff_x19 + 0x18),
                       *(undefined8 *)(unaff_x19 + 0x20));
  if (uVar2 != 0) {
    FUN_02c4a548(lVar6,0);
    return;
  }
  if (lVar6 != 0) {
    FUN_02c43d68(lVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


