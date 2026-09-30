/*
FUNCTION_NAME: FUN_07e5b99c
ENTRY_POINT: 07e5b99c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_07e5b99c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long local_90;
  long *plStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  ulong local_50;
  long lStack_48;
  
  if ((DAT_0899a80a & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<LobbyHandler_<GetJoinedLobbiesAsync>d__82>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<SaveData_<RetrieveAllKeysAsync>d__0>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<SessionManager_<GetJoinedSessionIdsAsync>d__21>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetStateMachine__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<WrappedLobbyService_<GetJoinedLobbiesAsync>d__14>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetException__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetResult__
                );
    FUN_03a8a718(PTR_DAT_0848eab8);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetResult__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Create__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetException__
                );
    DAT_0899a80a = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<SaveData_<RetrieveAllKeysAsync>d__0>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<LobbyHandler_<GetJoinedLobbiesAsync>d__82>__
  ;
  local_70 = 0;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  lStack_48 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05026834(&local_90,*(long *)(param_1 + 0x40),
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<string>>_Start<WrappedLobbyService_<GetJoinedLobbiesAsync>d__14>__
              );
  local_60 = local_90;
  local_90 = 0;
  uStack_58 = plStack_88;
  lStack_48 = lStack_78;
  local_50 = uStack_80;
  plStack_88 = &local_60;
  do {
    uVar6 = FUN_06218d50(&local_60,*(undefined8 *)puVar2);
    lVar8 = lStack_48;
    if ((uVar6 & 1) == 0) goto LAB_07e5bbfc;
    local_70 = local_50;
    local_68 = lStack_48;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  } while (*(int *)(param_2 + 0x28) != (int)local_50);
  uVar6 = FUN_065cd268(param_3,0);
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetResult__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetException__;
  if ((uVar6 & 1) == 0) {
    lVar8 = FUN_07e5e464(&local_70,param_3,0);
    if (lVar8 != 0) {
      FUN_07e5b99c(param_1,lVar8,0,param_4);
    }
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar9 = *(int *)(lVar8 + 0x18);
    if (-1 < iVar9 + -1) {
      do {
        iVar9 = iVar9 + -1;
        lVar7 = FUN_04de82e0(lVar8,iVar9,*(undefined8 *)puVar2);
        lVar4 = local_68;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(char *)(lVar7 + 0x48) == '\0') {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_04de9d78(local_68,iVar9,*(undefined8 *)puVar3);
          lVar8 = lVar4;
        }
      } while (0 < iVar9);
      lVar8 = local_68;
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    FUN_04de87c0(lVar8,param_4,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_SetStateMachine__
                );
    uVar6 = local_70;
    if (*(int *)(lVar8 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar5 = FUN_050269d0(*(long *)(param_1 + 0x40),local_70,lVar8,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetException__
                          );
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      Unity_Collections_NativeArray<NetworkEndpoint>___ctor
                (*(long *)(param_1 + 0x40),uVar5,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<bool>>_SetResult__
                );
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04d8d900(*(long *)(param_1 + 0x48),uVar5,*(undefined8 *)PTR_DAT_0848eab8);
      FUN_07e5b484(param_1,uVar6 & 0xffffffff,1);
    }
  }
LAB_07e5bbfc:
  lVar8 = local_90;
  FUN_06218d4c(plStack_88,*(undefined8 *)puVar1);
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(lVar8);
  }
  return;
}


