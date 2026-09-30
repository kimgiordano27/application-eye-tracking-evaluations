/*
FUNCTION_NAME: OVRPlugin.ControllerState5$$.ctor
ENTRY_POINT: 02c43724
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_ControllerState5___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_03a260bf & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f8768);
    DAT_03a260bf = 1;
  }
  puVar3 = PTR_DAT_037f8768;
  thunk_FUN_0181f594();
  uVar1 = *(uint *)(param_1 + 0x38);
  thunk_FUN_0181f594();
  FUN_01818414((uint *)(param_1 + 0x38),uVar1 | 0x400000);
  lVar4 = *(long *)(param_1 + 0x48);
  thunk_FUN_0181f594();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x18);
    thunk_FUN_0181f594();
    if (lVar5 != 0) {
      FUN_02c31860(lVar5,0);
    }
    FUN_02c457ac(lVar4);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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
  lVar4 = *(long *)PTR_DAT_037f45f0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar4 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c42538(param_1);
  }
  OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize(param_1);
  return;
}


