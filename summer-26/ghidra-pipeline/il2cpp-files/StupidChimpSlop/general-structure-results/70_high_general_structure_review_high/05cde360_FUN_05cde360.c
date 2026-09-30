/*
FUNCTION_NAME: FUN_05cde360
ENTRY_POINT: 05cde360
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05cde360(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar10 = Method_PlayFab_PluginManager_CreatePlugin<SimpleJsonInstance>__;
  puVar9 = Method_UnityEngine_PlayerPrefs_SetString__;
  puVar8 = Method_UnityEngine_PlayerPrefs_SetInt__;
  puVar7 = Method_Cysharp_Threading_Tasks_PlayerLoopTimer_Restart__;
  puVar6 = Method_Cysharp_Threading_Tasks_PlayerLoopTimer_Restart__;
  puVar5 = Method_Cysharp_Threading_Tasks_Internal_PlayerLoopRunner_RunCore__;
  puVar4 = Method_Cysharp_Threading_Tasks_Internal_PlayerLoopRunner_Run__;
  puVar3 = Method_Cysharp_Threading_Tasks_Internal_PlayerLoopRunner_AddAction__;
  puVar2 = Method_Cysharp_Threading_Tasks_PlayerLoopHelper_ThrowInvalidLoopTiming__;
  puVar1 = PTR_DAT_06649b28;
  if ((DAT_06a57d12 & 1) == 0) {
    FUN_02d4dc40(Method_PlayFab_PluginManager_GetPlugin<ISerializerPlugin>__);
    FUN_02d4dc40(Method_PlayFab_PluginManager_GetPlugin<ITransportPlugin>__);
    FUN_02d4dc40(Method_PlayFab_PluginManager_GetPluginInternal__);
    FUN_02d4dc40(Method_PlayFab_PluginManager_SetPluginInternal__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_Internal_PlayerLoopRunner_AddAction__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_Internal_PlayerLoopRunner_RunCore__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_PlayerLoopTimer_Restart__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_PlayerLoopTimer_Restart__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_PlayerLoopHelper_ThrowInvalidLoopTiming__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_Internal_PlayerLoopRunner_Run__);
    FUN_02d4dc40(Method_UnityEngine_PlayerPrefs_SetString__);
    FUN_02d4dc40(Method_UnityEngine_PlayerPrefs_SetInt__);
    FUN_02d4dc40(Method_PlayFab_PluginManager_CreatePlugin<SimpleJsonInstance>__);
    FUN_02d4dc40(PTR_DAT_06649b28);
    DAT_06a57d12 = 1;
  }
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_04bb5694(uVar11,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar11;
  thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
  FUN_04bb5454(uVar11,*(undefined8 *)puVar5);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_04bb5454(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_04bb5454(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_04bb5454(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar8);
  FUN_04bb608c(uVar11,*(undefined8 *)puVar9);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)Method_PlayFab_PluginManager_SetPluginInternal__);
  FUN_04bb4a1c(uVar11,*(undefined8 *)Method_PlayFab_PluginManager_GetPlugin<ITransportPlugin>__);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  puVar3 = Method_PlayFab_PluginManager_GetPluginInternal__;
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)Method_PlayFab_PluginManager_GetPluginInternal__);
  puVar2 = Method_PlayFab_PluginManager_GetPlugin<ISerializerPlugin>__;
  FUN_04bb4c4c(uVar11,*(undefined8 *)Method_PlayFab_PluginManager_GetPlugin<ISerializerPlugin>__);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
  FUN_05cccb20(uVar11,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
  FUN_05cccb20(uVar11,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_04bb5454(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_04bb4c4c(uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
  *puVar12 = uVar11;
  thunk_FUN_02dc1ef0(puVar12,uVar11);
  return;
}


