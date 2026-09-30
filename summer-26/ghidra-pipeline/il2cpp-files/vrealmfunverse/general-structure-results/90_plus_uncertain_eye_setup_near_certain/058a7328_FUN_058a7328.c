/*
FUNCTION_NAME: FUN_058a7328
ENTRY_POINT: 058a7328
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 131
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_058a7328(long param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar4 = Method_OVRTaskBuilder<OVRPlugin_Result>_Create__;
  puVar5 = (undefined8 *)
           Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
  ;
  if ((DAT_066d31b5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetException__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetStateMachine__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_get_Task__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<ProcessBatch>d__44>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>,_OVRSceneManager_<ProcessBatch>d__44>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Create__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_Metrics>_SetException__);
    FUN_02b3c81c(PTR_DAT_0631a648);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_Metrics>_SetResult__);
    DAT_066d31b5 = 1;
  }
  if (param_4 != 0xd) {
    puVar5 = (undefined8 *)puVar4;
  }
  if (param_1 == 0) {
LAB_058a7ccc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar12 = *puVar5;
  uVar1 = *param_2;
  if (DAT_066d31dc == '\0') {
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    DAT_066d31dc = '\x01';
  }
  puVar4 = 
  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
  ;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_058a7ccc;
  puVar5 = (undefined8 *)
           FUN_0463ca1c(*(long *)(param_1 + 0x28),uVar1,
                        *(undefined8 *)
                         Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                       );
  lVar6 = FUN_058a7d14(*puVar5);
  uVar1 = *param_3;
  if (DAT_066d31dc == '\0') {
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    DAT_066d31dc = '\x01';
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_058a7ccc;
  puVar5 = (undefined8 *)FUN_0463ca1c(*(long *)(param_1 + 0x28),uVar1,*(undefined8 *)puVar4);
  lVar7 = FUN_058a7d14(*puVar5);
  puVar4 = PTR_DAT_06313048;
  if (param_4 < 7) {
    if (3 < param_4) {
      if (param_4 == 4) {
        local_54 = param_3[1];
        uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__,
                            &local_54);
        uVar11 = FUN_04c0af28(*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__,
                              lVar7,uVar11,0);
        goto LAB_058a7a48;
      }
      if (param_4 != 5) {
        if (param_4 != 6) goto LAB_058a7ce0;
        local_54 = 8;
        uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_54);
        puVar5 = (undefined8 *)
                 Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetStateMachine__;
        goto LAB_058a79f4;
      }
      lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar8 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar8 + 0x20) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20),uVar12);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar8 + 0x28) = lVar7;
      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar7);
      uVar2 = *(uint *)(lVar8 + 0x18);
      puVar5 = (undefined8 *)
               Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
      ;
      goto joined_r0x058a7ad4;
    }
    if (param_4 == 1) {
      plVar9 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
      if (plVar9 == (long *)0x0) goto LAB_058a7ccc;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0)) {
LAB_058a7cd4:
        uVar12 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar12,0);
      }
      if ((int)plVar9[3] != 0) {
        plVar9[4] = lVar7;
        thunk_FUN_02bb0e9c(plVar9 + 4,lVar7);
        puVar3 = PTR_DAT_06312310;
        local_54 = param_3[0x19];
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_54);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
        goto LAB_058a7cd4;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
          plVar9[5] = lVar7;
          thunk_FUN_02bb0e9c(plVar9 + 5,lVar7);
          local_58 = param_3[0x1a];
          lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(puVar3 + 0x48),&local_58);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
          goto LAB_058a7cd4;
          if (2 < *(uint *)(plVar9 + 3)) {
            plVar9[6] = lVar7;
            thunk_FUN_02bb0e9c(plVar9 + 6,lVar7);
            local_5c = param_3[0x1c];
            lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(puVar3 + 0x48),&local_5c);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
            goto LAB_058a7cd4;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
              plVar9[7] = lVar7;
              thunk_FUN_02bb0e9c(plVar9 + 7,lVar7);
              uVar11 = FUN_04c0afb0(*(undefined8 *)
                                     Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetException__
                                    ,plVar9,0);
              plVar9 = (long *)FUN_02b3c908(*(undefined8 *)puVar4,4);
              if (plVar9 == (long *)0x0) goto LAB_058a7ccc;
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
              goto LAB_058a7cd4;
              if ((int)plVar9[3] != 0) {
                plVar9[4] = lVar6;
                thunk_FUN_02bb0e9c(plVar9 + 4,lVar6);
                local_60 = param_2[0x19];
                lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(puVar3 + 0x48),&local_60);
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
                goto LAB_058a7cd4;
                if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                  plVar9[5] = lVar6;
                  thunk_FUN_02bb0e9c(plVar9 + 5,lVar6);
                  local_64 = param_2[0x1a];
                  lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(puVar3 + 0x48),&local_64);
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)
                     ) goto LAB_058a7cd4;
                  if (2 < *(uint *)(plVar9 + 3)) {
                    plVar9[6] = lVar6;
                    thunk_FUN_02bb0e9c(plVar9 + 6,lVar6);
                    local_68 = param_2[0x1c];
                    lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(puVar3 + 0x48),&local_68);
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar7 == 0)) goto LAB_058a7cd4;
                    if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                      plVar9[7] = lVar6;
                      thunk_FUN_02bb0e9c(plVar9 + 7,lVar6);
                      uVar10 = FUN_04c0afb0(*(undefined8 *)
                                             Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_get_Task__
                                            ,plVar9,0);
                      FUN_04c0ab28(uVar12,*(undefined8 *)
                                           Method_OVRTaskBuilder<OVRSceneManager_Metrics>_SetException__
                                   ,uVar11,uVar10,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_058a7cd0;
    }
    if (param_4 == 2) {
      lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar8 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar8 + 0x20) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20),uVar12);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar8 + 0x28) = lVar7;
      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar7);
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_058a7cd0;
      *(undefined8 *)(lVar8 + 0x30) =
           *(undefined8 *)
            Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
      ;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30));
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_058a7cd0;
      *(long *)(lVar8 + 0x38) = lVar6;
      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x38),lVar6);
      puVar5 = (undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_058a7cd0;
      goto LAB_058a7c5c;
    }
    if (param_4 != 3) {
LAB_058a7ce0:
      thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
      uVar12 = thunk_FUN_02b79644();
      FUN_04cf6044(uVar12,0);
      uVar11 = thunk_FUN_02ba3594(Method_OVRTaskBuilder<OVRSceneManager_Metrics>_SetStateMachine__);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar12,uVar11);
    }
    lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
    if (lVar8 == 0) goto LAB_058a7ccc;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_058a7cd0;
    *(undefined8 *)(lVar8 + 0x20) = uVar12;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20),uVar12);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
    *(long *)(lVar8 + 0x28) = lVar7;
    thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar7);
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_058a7cd0;
    *(undefined8 *)(lVar8 + 0x30) =
         *(undefined8 *)
          Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
    ;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30));
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_058a7cd0;
    *(long *)(lVar8 + 0x38) = lVar6;
    thunk_FUN_02bb0e9c((long *)(lVar8 + 0x38),lVar6);
    uVar2 = *(uint *)(lVar8 + 0x18);
    puVar5 = (undefined8 *)
             Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>,_OVRSceneManager_<ProcessBatch>d__44>__
    ;
  }
  else {
    if (param_4 < 0xb) {
      if (param_4 == 7) {
        local_54 = 8;
        uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_54);
        puVar5 = (undefined8 *)
                 Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<ProcessBatch>d__44>__
        ;
LAB_058a79f4:
        uVar11 = FUN_04c00984(*puVar5,uVar11,0);
LAB_058a7a48:
        FUN_04bffdac(uVar12,uVar11,0);
        return;
      }
      puVar5 = (undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__;
      if (param_4 == 8) goto LAB_058a7ca4;
      if (param_4 != 10) goto LAB_058a7ce0;
      lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar8 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar8 + 0x20) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20),uVar12);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar8 + 0x28) = lVar7;
      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar7);
      uVar2 = *(uint *)(lVar8 + 0x18);
      puVar5 = (undefined8 *)
               Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
      ;
    }
    else {
      if (param_4 != 0xb) {
        puVar5 = (undefined8 *)
                 Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
        if (param_4 != 0xc) {
          if (param_4 != 0xd) goto LAB_058a7ce0;
          puVar5 = (undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_Metrics>_SetResult__;
          if ((param_2[8] == param_3[8]) && (param_2[7] != -1)) {
            puVar5 = (undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Create__;
          }
        }
LAB_058a7ca4:
        FUN_04bffdac(uVar12,*puVar5,0);
        return;
      }
      lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar8 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar8 + 0x20) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20),uVar12);
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar8 + 0x28) = lVar7;
      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar7);
      uVar2 = *(uint *)(lVar8 + 0x18);
      puVar5 = (undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
    }
joined_r0x058a7ad4:
    if (uVar2 < 3) goto LAB_058a7cd0;
    *(undefined8 *)(lVar8 + 0x30) = *puVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30));
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_058a7cd0;
    *(long *)(lVar8 + 0x38) = lVar6;
    thunk_FUN_02bb0e9c((long *)(lVar8 + 0x38),lVar6);
    uVar2 = *(uint *)(lVar8 + 0x18);
    puVar5 = (undefined8 *)PTR_DAT_0631a648;
  }
  if (4 < uVar2) {
LAB_058a7c5c:
    *(undefined8 *)(lVar8 + 0x40) = *puVar5;
    thunk_FUN_02bb0e9c();
    FUN_04c0ac30(lVar8,0);
    return;
  }
LAB_058a7cd0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


