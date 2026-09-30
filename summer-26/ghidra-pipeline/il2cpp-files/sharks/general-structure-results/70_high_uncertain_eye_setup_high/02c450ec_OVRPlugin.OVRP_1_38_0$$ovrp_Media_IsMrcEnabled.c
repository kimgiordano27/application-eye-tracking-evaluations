/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 02c450ec
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  uint uVar6;
  long lVar7;
  
  uVar4 = FUN_02c44738();
  puVar3 = PTR_DAT_037f8768;
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_02c44354();
    if (((uVar4 & 1) == 0) ||
       (uVar6 = *(uint *)(unaff_x19 + 0x38), thunk_FUN_0181f594(), puVar3 = PTR_DAT_037f8768,
       (uVar6 >> 0x14 & 1) == 0)) {
      puVar3 = PTR_DAT_037f8768;
      if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
      }
      if (DAT_03a22660 == '\0') {
        FUN_017fc350(PTR_DAT_037f8768);
        FUN_017fc350(PTR_DAT_037f45f0);
        DAT_03a22660 = '\x01';
      }
      puVar2 = PTR_DAT_037f45f0;
      lVar5 = *(long *)PTR_DAT_037f45f0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar5 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_02c42538();
      }
      uVar6 = 0x1000000;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
      }
      if (DAT_03a22660 == '\0') {
        FUN_017fc350(PTR_DAT_037f8768);
        FUN_017fc350(PTR_DAT_037f45f0);
        DAT_03a22660 = '\x01';
      }
      puVar2 = PTR_DAT_037f45f0;
      lVar5 = *(long *)PTR_DAT_037f45f0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar5 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_02c42538();
      }
      uVar6 = 0x400000;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
    }
    if (DAT_03a22660 == '\0') {
      FUN_017fc350(PTR_DAT_037f8768);
      FUN_017fc350(PTR_DAT_037f45f0);
      DAT_03a22660 = '\x01';
    }
    puVar2 = PTR_DAT_037f45f0;
    lVar5 = *(long *)PTR_DAT_037f45f0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c42538();
    }
    uVar6 = 0x200000;
  }
  thunk_FUN_0181f594();
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_0181f594();
  FUN_01818414((uint *)(unaff_x19 + 0x38),uVar1 | uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_0181f594();
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x18);
    thunk_FUN_0181f594();
    if (lVar7 != 0) {
      FUN_02c31860(lVar7,0);
    }
    FUN_02c457ac(lVar5);
  }
  OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize();
  return;
}


