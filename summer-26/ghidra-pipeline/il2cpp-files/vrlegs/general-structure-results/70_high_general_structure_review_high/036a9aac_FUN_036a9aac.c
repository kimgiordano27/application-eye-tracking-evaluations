/*
FUNCTION_NAME: FUN_036a9aac
ENTRY_POINT: 036a9aac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_036a9aac(undefined8 param_1,long param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int local_44;
  uint local_38;
  uint local_34;
  
  puVar3 = PTR_DAT_03cbeda8;
  if ((param_2 == 0) && (0 < (int)param_4)) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(
                              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UsePromoCodeTaskResult>_SetStateMachine__
                              );
    uVar6 = thunk_FUN_01a6ca08(
                              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UserPresenceInfo>_AwaitUnsafeOnCompleted<UniTask_Awaiter<ValueTuple<GetUserSessionTaskResult,_ErrorInfo>>,_GameSessionDataService_<GetUserSessionInfoAsync>d__35>__
                              );
    FUN_026b3f24(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_01a6ca08(
                              Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UsePromoCodeTaskResult>_get_Task__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar5);
  }
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x18);
  }
  local_34 = param_3;
  if ((-1 < (int)(param_4 | param_3)) && ((int)(param_4 + param_3) <= iVar8)) {
    if ((int)param_3 < (int)(param_4 + param_3)) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = param_4;
      do {
        if (*(uint *)(param_2 + 0x18) <= local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar1 = *(uint *)(param_2 + (long)(int)local_34 * 0x30 + 0x38);
        if (5 < uVar1) {
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
          uVar4 = thunk_FUN_01a89a98(uVar4,&local_34);
          local_38 = uVar1;
          uVar5 = thunk_FUN_01a6ca08(puVar3);
          uVar5 = thunk_FUN_01a89a98(uVar5,&local_38);
          uVar6 = thunk_FUN_01a6ca08(
                                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UsePromoCodeTaskResult>_SetException__
                                    );
          uVar5 = FUN_025be86c(uVar6,uVar4,uVar5,0);
LAB_036a9c2c:
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar4 = thunk_FUN_01a89e68();
          uVar6 = thunk_FUN_01a6ca08(
                                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UsePromoCodeTaskResult>_SetStateMachine__
                                    );
          FUN_026a7658(uVar4,uVar6,uVar5,0);
          goto LAB_036a9c64;
        }
        if (uVar1 == 1) {
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
          uVar4 = thunk_FUN_01a89a98(uVar4,&local_34);
          uVar5 = thunk_FUN_01a6ca08(
                                    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UsePromoCodeTaskResult>_SetResult__
                                    );
          uVar5 = FUN_025b4d3c(uVar5,uVar4,0);
          goto LAB_036a9c2c;
        }
        uVar2 = uVar2 - 1;
        local_34 = local_34 + 1;
      } while (uVar2 != 0);
    }
    if (DAT_04132920 == (code *)0x0) {
      DAT_04132920 = (code *)FUN_01ab6968(
                                         "UnityEngine.Mesh::SetAllSubMeshesAtOnceFromArray(UnityEngine.Rendering.SubMeshDescriptor[],System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x036a9b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_04132920)(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
  uVar4 = thunk_FUN_01a89a98(uVar4,&local_34);
  local_38 = param_4;
  uVar5 = thunk_FUN_01a6ca08(puVar3);
  uVar5 = thunk_FUN_01a89a98(uVar5,&local_38);
  local_44 = iVar8;
  uVar6 = thunk_FUN_01a6ca08(puVar3);
  uVar6 = thunk_FUN_01a89a98(uVar6,&local_44);
  uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cd86f0);
  uVar5 = FUN_025be8b0(uVar7,uVar4,uVar5,uVar6,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar4 = thunk_FUN_01a89e68();
  FUN_026b3fc8(uVar4,uVar5,0);
LAB_036a9c64:
  uVar5 = thunk_FUN_01a6ca08(
                            Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<UsePromoCodeTaskResult>_get_Task__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar5);
}


