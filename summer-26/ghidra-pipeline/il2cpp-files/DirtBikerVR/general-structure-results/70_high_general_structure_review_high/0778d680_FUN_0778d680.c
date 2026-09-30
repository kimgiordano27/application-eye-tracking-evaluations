/*
FUNCTION_NAME: FUN_0778d680
ENTRY_POINT: 0778d680
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0778d680(long param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_e8 [136];
  
  puVar3 = PTR_DAT_084887a8;
  if ((DAT_08986f05 & 1) == 0) {
    FUN_03a8a718(UnityEngine_VFX_VFXBatchedEffectInfo_var);
    FUN_03a8a718(PTR_DAT_084887a8);
    FUN_03a8a718(PTR_DAT_08486bf8);
    FUN_03a8a718(PTR_DAT_0848c978);
    FUN_03a8a718(PTR_DAT_0848d7e8);
    FUN_03a8a718(System_IO_TextReader_var);
    FUN_03a8a718(UnityEngine_Texture2D_var);
    FUN_03a8a718(UnityEngine_VFX_VFXEventAttribute_var);
    FUN_03a8a718(UnityEngine_VFX_VFXOutputEventArgs_var);
    FUN_03a8a718(UnityEngine_VFX_VFXSpawnerState_var);
    FUN_03a8a718(OVR_OpenVR_VRControllerState_t_var);
    FUN_03a8a718(OVR_OpenVR_VRControllerState_t_Packed_var);
    FUN_03a8a718(System_Threading_Timer_var);
    FUN_03a8a718(UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_var);
    FUN_03a8a718(OVR_OpenVR_VREvent_t_Packed_var);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var);
    FUN_03a8a718(System_Runtime_CompilerServices_ValueTaskAwaiter_var);
    FUN_03a8a718(UnityEngine_Vector2_var);
    DAT_08986f05 = 1;
  }
  puVar9 = OVR_OpenVR_VREvent_t_Packed_var;
  puVar8 = OVR_OpenVR_VRControllerState_t_var;
  puVar7 = UnityEngine_VFX_VFXBatchedEffectInfo_var;
  puVar6 = System_Threading_Timer_var;
  puVar5 = UnityEngine_Texture2D_var;
  puVar4 = System_IO_TextReader_var;
  FUN_0679343c(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar10 = FUN_07747bbc(0);
  uVar12 = *(undefined8 *)puVar6;
  *(byte *)(param_1 + 0x50) = bVar10 & 1;
  *(byte *)(param_1 + 0x51) = param_3 & 1;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar4;
  **(undefined4 **)(*(long *)puVar7 + 0xb8) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_07c60c0c(uVar12,0);
  cVar2 = *(char *)(param_1 + 0x50);
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10) = uVar11;
  puVar3 = UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_var;
  if (cVar2 == '\0') {
    uVar11 = FUN_07c60c0c(*(undefined8 *)
                           Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var,0);
    uVar12 = *(undefined8 *)UnityEngine_VFX_VFXOutputEventArgs_var;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x14) = uVar11;
    uVar11 = FUN_07c60c0c(uVar12,0);
    uVar12 = *(undefined8 *)UnityEngine_Vector2_var;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18) = uVar11;
    uVar11 = FUN_07c60c0c(uVar12,0);
    uVar12 = *(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x1c) = uVar11;
    uVar11 = FUN_07c60c0c(uVar12,0);
    uVar12 = *(undefined8 *)UnityEngine_VFX_VFXEventAttribute_var;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20) = uVar11;
    uVar11 = FUN_07c60c0c(uVar12,0);
    uVar12 = *(undefined8 *)OVR_OpenVR_VRControllerState_t_Packed_var;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x24) = uVar11;
    uVar11 = FUN_07c60c0c(uVar12,0);
    lVar13 = *(long *)PTR_DAT_0848c978;
    iVar1 = *(int *)(lVar13 + 0xe4);
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28) = uVar11;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar13);
    }
    uVar11 = FUN_0776fddc(0);
    puVar3 = PTR_DAT_0848d7e8;
    uVar12 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d7e8,uVar11);
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    thunk_FUN_03afed3c();
    uVar12 = FUN_03a8a804(*(undefined8 *)puVar3,uVar11);
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    thunk_FUN_03afed3c();
    uVar12 = FUN_03a8a804(*(undefined8 *)puVar3,uVar11);
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    thunk_FUN_03afed3c();
    uVar12 = FUN_03a8a804(*(undefined8 *)puVar3,uVar11);
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    thunk_FUN_03afed3c();
    uVar12 = FUN_03a8a804(*(undefined8 *)puVar3,uVar11);
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    thunk_FUN_03afed3c();
    uVar12 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486bf8,uVar11);
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    thunk_FUN_03afed3c();
  }
  else {
    uVar11 = FUN_07c60c0c(*(undefined8 *)System_Runtime_CompilerServices_ValueTaskAwaiter_var,0);
    uVar12 = *(undefined8 *)puVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar11;
    uVar11 = FUN_07c60c0c(uVar12,0);
    *(undefined4 *)(param_1 + 0x14) = uVar11;
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    FUN_0778dae8(param_1);
    FUN_0773e8ac(auStack_e8,0);
    memcpy((void *)(param_1 + 0xb0),auStack_e8,0x88);
    thunk_FUN_03afed3c(param_1 + 0xb8,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xa8),param_2);
  return;
}


