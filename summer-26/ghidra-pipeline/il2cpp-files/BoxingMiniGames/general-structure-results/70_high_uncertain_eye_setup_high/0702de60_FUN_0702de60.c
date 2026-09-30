/*
FUNCTION_NAME: FUN_0702de60
ENTRY_POINT: 0702de60
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0702de60(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 *puStack_30;
  undefined1 local_24 [4];
  
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  if ((DAT_07eebde9 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_IMEEvent_<>c_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(OVRPlugin_OVRP_1_53_0_TypeInfo);
    DAT_07eebde9 = 1;
  }
  puVar3 = UnityEngine_UIElements_IMEEvent_<>c_TypeInfo;
  lVar5 = *(long *)puVar2;
  local_24[0] = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar2;
  }
  FUN_06eaa264(local_24,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),0);
  lVar5 = *(long *)puVar3;
  local_38 = 0;
  puStack_30 = local_24;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar3;
  }
  thunk_FUN_0718c5e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                     *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0xcc),0);
  puVar2 = PTR_DAT_079ff4c8;
  if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = FUN_0702e180();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  iVar4 = *(int *)(lVar5 + 0x6c);
  if (iVar4 == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x28) + 0x20);
  }
  else if (iVar4 == 1) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x28) + 0x18);
  }
  else if (iVar4 == 2) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar6 = (long *)FUN_07009d08(*(long *)(param_1 + 0x28),0);
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar5 = FUN_0702e180();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    local_3c = *(undefined4 *)(lVar5 + 0x6c);
    uVar7 = thunk_FUN_0367fa58(*(undefined8 *)OVRPlugin_OVRP_1_52_0_TypeInfo,&local_3c);
    uVar7 = FUN_05c8e390(*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo,uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07176120(uVar7,0);
    plVar6 = (long *)0x0;
  }
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar8 = FUN_071c0684(plVar6,0,0);
  if ((uVar8 & 1) != 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar3;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0xd4);
    iVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    FUN_0718cb24(1.0 / (float)iVar4,uVar1,0);
    thunk_FUN_0718c700(*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd0),plVar6,0);
  }
  FUN_06eaa270(local_24,0);
  return;
}


