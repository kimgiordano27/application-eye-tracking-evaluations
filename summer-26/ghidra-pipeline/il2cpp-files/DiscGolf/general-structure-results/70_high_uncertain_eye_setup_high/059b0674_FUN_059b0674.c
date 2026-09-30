/*
FUNCTION_NAME: FUN_059b0674
ENTRY_POINT: 059b0674
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_059b0674(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  puVar4 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  if ((DAT_06dc149f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0dbb0);
    FUN_02d965b8(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_103_0_TypeInfo);
    DAT_06dc149f = 1;
  }
  puVar3 = PTR_DAT_069fd8d8;
  local_28 = 0;
  FUN_0552aca4(param_1,0);
  lVar6 = *(long *)puVar4;
  *(undefined4 *)(param_1 + 0x28) = 0x32;
  *(undefined2 *)(param_1 + 0x48) = 0x101;
  *(undefined8 *)(param_1 + 0x30) = 0x7fffffff;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x68) = 1;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = PTR_DAT_06a0dbb0;
  uVar7 = FUN_05cf07dc(0);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  LeanTween__value();
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_054ff5e0(DAT_010fc388,0);
  lVar6 = *(long *)puVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(undefined4 *)(param_1 + 0x78) = 4;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc158b == '\0') {
    FUN_02d965b8(PTR_DAT_06a0dbb0);
    DAT_06dc158b = '\x01';
  }
  puVar5 = OVRPlugin_OVRP_1_103_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_101_0_TypeInfo;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar6 = *(long *)puVar4;
  }
  uVar2 = **(undefined4 **)(lVar6 + 0xb8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = 300000;
  LeanTween__value((undefined8 *)(param_1 + 0x88),0);
  lVar6 = *(long *)puVar3;
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_28 = thunk_FUN_02dcf9f0(*(undefined8 *)(lVar6 + 0xb8),0);
  uVar7 = FUN_054e67fc(&local_28,0);
  uVar7 = FUN_05362cb4(*(undefined8 *)puVar5,uVar7,0);
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  LeanTween__value((undefined8 *)(param_1 + 0x98),uVar7);
  return;
}


