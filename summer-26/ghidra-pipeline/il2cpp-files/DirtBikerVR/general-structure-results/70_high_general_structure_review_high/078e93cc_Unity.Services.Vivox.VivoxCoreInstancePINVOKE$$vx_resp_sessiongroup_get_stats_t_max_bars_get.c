/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_max_bars_get
ENTRY_POINT: 078e93cc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_max_bars_get
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_08987aff & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084ae110);
    FUN_03a8a718(System_Threading_Tasks_TaskCompletionSource<NativeGallery_Permission>_TypeInfo);
    FUN_03a8a718(System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491d30);
    FUN_03a8a718(System_Threading_Tasks_Task<bool>_TypeInfo);
    FUN_03a8a718(System_Threading_Tasks_Task<int>_TypeInfo);
    FUN_03a8a718(System_Threading_Tasks_Task<Task>_TypeInfo);
    FUN_03a8a718(System_Threading_Tasks_Task<VoidTaskResult>_TypeInfo);
    DAT_08987aff = 1;
  }
  puVar3 = System_Threading_Tasks_TaskCompletionSource<NativeGallery_Permission>_TypeInfo;
  if (param_3 == (long *)0x0) goto LAB_078e9620;
  uVar4 = thunk_FUN_03a9a6e8(param_3,0);
  puVar2 = PTR_DAT_08486760;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
  }
  uVar9 = FUN_0675ff58(uVar9,0);
  uVar5 = FUN_067690d8(uVar4,uVar9,0);
  plVar6 = (long *)System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<Socket>_TypeInfo;
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)System_Threading_Tasks_Task<bool>_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0675ff58(uVar9,0);
    uVar5 = FUN_067690d8(uVar4,uVar9,0);
    plVar6 = (long *)System_Threading_Tasks_Task<int>_TypeInfo;
    if ((uVar5 & 1) != 0) goto LAB_078e9544;
    uVar9 = *(undefined8 *)System_Threading_Tasks_Task<Task>_TypeInfo;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0675ff58(uVar9,0);
    uVar5 = FUN_067690d8(uVar4,uVar9,0);
    plVar6 = (long *)System_Threading_Tasks_Task<VoidTaskResult>_TypeInfo;
    if ((uVar5 & 1) != 0) goto LAB_078e9544;
  }
  else {
LAB_078e9544:
    bVar1 = *(byte *)(*plVar6 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *plVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(param_3);
    }
  }
  puVar3 = PTR_DAT_084ae110;
  if (*(int *)(*(long *)PTR_DAT_08491d30 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar6 = (long *)FUN_0688ded0(param_3,0);
  lVar8 = *(long *)puVar3;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_03ac40ec(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03ac4090();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03ac4090();
  }
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x078e961c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x2b8))
              (plVar6,param_2,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)(*plVar6 + 0x2c0));
    return;
  }
LAB_078e9620:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


