/*
FUNCTION_NAME: FUN_07e5a744
ENTRY_POINT: 07e5a744
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07e5aa80) */
/* WARNING: Removing unreachable block (ram,0x07e5aa84) */
/* WARNING: Removing unreachable block (ram,0x07e5ab50) */
/* WARNING: Removing unreachable block (ram,0x07e5aaec) */
/* WARNING: Removing unreachable block (ram,0x07e5ab6c) */

void FUN_07e5a744(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  long local_68;
  
  if ((DAT_0899a808 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<DoReadAsBooleanAsync>d__40>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBooleanAsync>d__40>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_Start<JsonTextReader_<DoReadAsBooleanAsync>d__40>__
                );
    FUN_03a8a718(PTR_DAT_084937f8);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<LobbyHandler_<GetJoinedLobbiesAsync>d__82>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<SaveData_<RetrieveAllKeysAsync>d__0>__
                );
    FUN_03a8a718(PTR_DAT_08493800);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<SessionManager_<GetJoinedSessionIdsAsync>d__21>__
                );
    FUN_03a8a718(PTR_DAT_08493808);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_Create__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<WrappedLobbyService_<GetJoinedLobbiesAsync>d__14>__
                );
    FUN_03a8a718(PTR_DAT_08493810);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetException__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetResult__
                );
    FUN_03a8a718(PTR_DAT_0848eab8);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_SetException__
                );
    DAT_0899a808 = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<DoReadAsBooleanAsync>d__40>__
  ;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x40) + 0x18) == 0) {
      return;
    }
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_Start<JsonTextReader_<DoReadAsBooleanAsync>d__40>__
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar11 = FUN_059691bc(*(undefined8 *)puVar2);
    puVar9 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetResult__;
    puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_Create__;
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<WrappedLobbyService_<GetJoinedLobbiesAsync>d__14>__
    ;
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<SaveData_<RetrieveAllKeysAsync>d__0>__
    ;
    puVar5 = PTR_DAT_08493810;
    puVar4 = PTR_DAT_08493800;
    puVar3 = PTR_DAT_084937f8;
    puVar2 = PTR_DAT_0848eab8;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_05026834(&local_e0,*(long *)(param_1 + 0x40),
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<WrappedLobbyService_<GetJoinedLobbiesAsync>d__14>__
                  );
      local_80 = local_e0;
      local_e0 = 0;
      puStack_78 = puStack_d8;
      local_68 = lStack_c8;
      local_70 = local_d0;
      puStack_d8 = &local_80;
LAB_07e5a8f4:
      uVar12 = FUN_06218d50(&local_80,*(undefined8 *)puVar6);
      if ((uVar12 & 1) != 0) {
        if ((int)local_70 == param_2) {
          if (lVar11 != 0) {
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar15 = *(long *)puVar8;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar14 + 0x28);
                *plVar13 = local_68;
                *(long *)(lVar14 + 0x20) = local_70;
                thunk_FUN_03afed3c(plVar13,0);
              }
              else {
                Unity_Collections_NativeArray<NetcodeGameObjectsPlayer>__Copy
                          (lVar11,local_70,local_68,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_07e5a8f4;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_07e5a8f4;
      }
      FUN_06218d4c(&local_80,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<LobbyHandler_<GetJoinedLobbiesAsync>d__82>__
                  );
      if (lVar11 != 0) {
        FUN_05026834(&local_e0,lVar11,*(undefined8 *)puVar7);
        puStack_98 = puStack_d8;
        local_a0 = local_e0;
        lStack_88 = lStack_c8;
        local_90 = local_d0;
        while( true ) {
          uVar12 = FUN_06218d50(&local_a0,*(undefined8 *)puVar6);
          lVar14 = lStack_88;
          if ((uVar12 & 1) == 0) {
            FUN_06218d4c(&local_a0,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<LobbyHandler_<GetJoinedLobbiesAsync>d__82>__
                        );
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_Start<JsonTextReader_<DoReadAsBooleanAsync>d__40>__
                        + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_05969324(lVar11,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBooleanAsync>d__40>__
                        );
            return;
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar10 = FUN_050269d0(*(long *)(param_1 + 0x40),local_90,lStack_88,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetException__
                               );
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          Unity_Collections_NativeArray<NetworkEndpoint>___ctor
                    (*(long *)(param_1 + 0x40),uVar10,*(undefined8 *)puVar9);
          if (*(long *)(param_1 + 0x48) == 0) break;
          FUN_04d8d900(*(long *)(param_1 + 0x48),uVar10,*(undefined8 *)puVar2);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_04de90b8(&local_e0,lVar14,*(undefined8 *)puVar5);
          local_c0 = local_e0;
          local_e0 = 0;
          puStack_b8 = puStack_d8;
          local_b0 = local_d0;
          puStack_d8 = &local_c0;
          while (uVar12 = FUN_061c1964(&local_c0,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
            if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            FUN_07e5a744(param_1,*(undefined4 *)(local_b0 + 0x28));
          }
          FUN_061c1960(&local_c0,*(undefined8 *)puVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


