/*
FUNCTION_NAME: FUN_05d7e82c
ENTRY_POINT: 05d7e82c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_15;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_05d7e82c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *local_1b0;
  long lStack_1a8;
  long *local_1a0;
  long lStack_198;
  long *local_190;
  long lStack_188;
  long *local_180;
  long *local_170;
  long lStack_168;
  long *local_160;
  long *local_150;
  long lStack_148;
  long *local_140;
  long *local_130;
  long lStack_128;
  long *local_120;
  long *local_110;
  long lStack_108;
  long *local_100;
  long *local_f0;
  long lStack_e8;
  long *local_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *local_b8;
  long lStack_b0;
  long *local_a8;
  long *local_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *local_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  undefined *puVar9;
  
  puVar9 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
  if ((DAT_06b82d31 & 1) == 0) {
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetStateMachine__);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_get_Task__);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    FUN_02d6084c(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                );
    FUN_02d6084c(PTR_DAT_067693f0);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    FUN_02d6084c(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                );
    DAT_06b82d31 = 1;
  }
  lVar3 = *(long *)puVar9;
  lStack_78 = 0;
  local_80 = (long *)0x0;
  lStack_68 = 0;
  plStack_70 = (long *)0x0;
  lStack_98 = 0;
  local_a0 = (long *)0x0;
  lStack_88 = 0;
  plStack_90 = (long *)0x0;
  local_b8 = (long *)0x0;
  lStack_b0 = 0;
  local_a8 = (long *)0x0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar9;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_05d7ebc4;
  uVar4 = FUN_0486c9d4(**(long **)(lVar3 + 0xb8),param_2,&local_80,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
  if ((uVar4 & 1) != 0) goto LAB_05d7eb98;
  if (*(int *)(*(long *)PTR_DAT_067693f0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = FUN_0360959c(param_2,*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                      );
  if (lVar3 != 0) {
    uVar4 = FUN_04e8cf70(*(undefined8 *)(lVar3 + 0x18),0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar3 + 0x10) != 0) goto LAB_05d7e97c;
LAB_05d7e99c:
      uVar10 = 0;
    }
    else {
      if (*(long *)(lVar3 + 0x10) == 0) goto LAB_05d7eb50;
LAB_05d7e97c:
      uVar4 = FUN_04e8cf70(*(undefined8 *)(lVar3 + 0x18),0);
      if ((uVar4 & 1) != 0) {
        uVar7 = thunk_FUN_02dc61f4(
                                  Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetStateMachine__
                                  );
        uVar13 = 0;
        puVar9 = 
        Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_get_Task__;
        if (param_2 != (long *)0x0) {
          uVar13 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
          puVar9 = 
          Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_get_Task__;
        }
LAB_05d7ec0c:
        uVar8 = thunk_FUN_02dc61f4(puVar9);
        uVar13 = FUN_04e8db00(uVar7,uVar13,uVar8,0);
        thunk_FUN_02dc61f4(PTR_DAT_067608d0);
        uVar7 = thunk_FUN_02d9d534();
        FUN_0503de34(uVar7,uVar13,0);
        uVar13 = thunk_FUN_02dc61f4(
                                   Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetResult__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar7,uVar13);
      }
      if (*(long *)(lVar3 + 0x10) == 0) goto LAB_05d7e99c;
      uVar10 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x18);
    }
    plVar5 = (long *)FUN_02d60934(*(undefined8 *)
                                   Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                                  ,uVar10);
    puVar2 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_get_Task__;
    puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__;
    if (plVar5 == (long *)0x0) goto LAB_05d7ebc4;
    if (0 < (int)plVar5[3]) {
      uVar4 = 0;
      plVar12 = plVar5 + 4;
      do {
        lVar11 = *(long *)(lVar3 + 0x10);
        if (lVar11 == 0) goto LAB_05d7ebc4;
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
LAB_05d7ebc0:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        uVar13 = *(undefined8 *)(lVar11 + uVar4 * 8 + 0x20);
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05d7e82c(&local_f0,uVar13);
        lStack_98 = lStack_e8;
        local_a0 = local_f0;
        lStack_88 = lStack_d8;
        plStack_90 = local_e0;
        uVar6 = FUN_0463fea8(&local_a0,*(undefined8 *)puVar2);
        if ((uVar6 & 1) != 0) {
          local_f0 = (long *)thunk_FUN_02dc61f4(
                                               Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_Start<OVRSceneManager_<FilterByActiveRoom>d__46>__
                                               );
          lStack_e8 = -1;
          lStack_d8 = lStack_98;
          local_e0 = local_a0;
          lStack_c8 = lStack_88;
          plStack_d0 = plStack_90;
          uVar13 = FUN_0506099c(&local_f0,0);
          uVar7 = thunk_FUN_02dc61f4(
                                    Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_Create__
                                    );
          puVar9 = 
          Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetException__
          ;
          goto LAB_05d7ec0c;
        }
        FUN_0463feb8(&local_f0,&local_a0,*(undefined8 *)puVar1);
        lStack_108 = lStack_e8;
        local_110 = local_f0;
        local_100 = local_e0;
        if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_05d7ebc0;
        plVar12[2] = (long)local_e0;
        plVar12[1] = lStack_e8;
        *plVar12 = (long)local_f0;
        thunk_FUN_02dd37b4(plVar12,0);
        uVar4 = uVar4 + 1;
        plVar12 = plVar12 + 3;
      } while ((long)uVar4 < (long)(int)plVar5[3]);
    }
    lStack_b0 = 0;
    local_a8 = (long *)0x0;
    local_b8 = plVar5;
    thunk_FUN_02dd37b4(&local_b8,plVar5);
    lStack_b0 = *(long *)(lVar3 + 0x18);
    thunk_FUN_02dd37b4(&lStack_b0);
    local_a8 = param_2;
    thunk_FUN_02dd37b4(&local_a8,param_2);
    local_120 = local_a8;
    lStack_128 = lStack_b0;
    local_130 = local_b8;
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lStack_148 = lStack_128;
    local_150 = local_130;
    local_140 = local_120;
    FUN_05d868f0(&local_150);
    lStack_188 = lStack_128;
    local_190 = local_130;
    local_180 = local_120;
    lStack_168 = lStack_128;
    local_170 = local_130;
    local_160 = local_120;
    FUN_05d86bcc(&local_170);
    lStack_1a8 = lStack_188;
    local_1b0 = local_190;
    local_1a0 = local_180;
    FUN_0360952c(&local_f0,&local_1b0,
                 *(undefined8 *)
                  Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                );
    lStack_78 = lStack_e8;
    local_80 = local_f0;
    lStack_68 = lStack_d8;
    plStack_70 = local_e0;
  }
LAB_05d7eb50:
  lVar3 = *(long *)puVar9;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar9;
  }
  lStack_1a8 = lStack_78;
  local_1b0 = local_80;
  lStack_198 = lStack_68;
  local_1a0 = plStack_70;
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lStack_e8 = lStack_78;
    local_f0 = local_80;
    lStack_d8 = lStack_68;
    local_e0 = plStack_70;
    FUN_0486ad54(**(long **)(lVar3 + 0xb8),param_2,&local_f0,
                 *(undefined8 *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetStateMachine__);
LAB_05d7eb98:
    param_1[1] = lStack_78;
    *param_1 = (long)local_80;
    param_1[3] = lStack_68;
    param_1[2] = (long)plStack_70;
    return;
  }
LAB_05d7ebc4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


