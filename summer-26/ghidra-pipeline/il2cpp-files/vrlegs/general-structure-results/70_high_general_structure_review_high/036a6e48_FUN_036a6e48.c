/*
FUNCTION_NAME: FUN_036a6e48
ENTRY_POINT: 036a6e48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_036a6e48(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int local_24;
  
  if ((DAT_04132af3 & 1) == 0) {
    FUN_01ab69ac(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<GetAppCodeTaskResult>_Create__
                );
    FUN_01ab69ac(System_Collections_Generic_List<TextureBlender>_TypeInfo);
    DAT_04132af3 = 1;
  }
  puVar2 = System_Collections_Generic_List<TextureBlender>_TypeInfo;
  if (-1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    puVar3 = 
    Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<GetAppCodeTaskResult>_Create__
    ;
    lVar8 = *(long *)puVar2;
    plVar7 = *(long **)(lVar8 + 0x38);
    if (plVar7 == (long *)0x0) {
      FUN_01a47054(lVar8);
      plVar7 = *(long **)(lVar8 + 0x38);
    }
    iVar1 = *(int *)(*plVar7 + 0xfc);
    uVar4 = FUN_02003f90(*(undefined8 *)puVar3);
    uVar5 = FUN_0366b7c8((long)(iVar1 * param_2),uVar4,4,0);
    *param_1 = uVar5;
    if (DAT_04132ad8 == (code *)0x0) {
      DAT_04132ad8 = (code *)FUN_01ab6968(
                                         "UnityEngine.Mesh/MeshDataArray::CreateNewMeshDatas(System.IntPtr*,System.Int32)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x036a6f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_04132ad8)(uVar5,param_2);
    return;
  }
  local_24 = param_2;
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
  uVar5 = thunk_FUN_01a89a98(uVar5,&local_24);
  uVar6 = thunk_FUN_01a6ca08(
                            Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<GetUserSessionTaskResult>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_GameSessionDataService_<HandleGetUserSessionResponseAsync>d__37>__
                            );
  uVar5 = FUN_025b4d3c(uVar6,uVar5,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
  uVar6 = thunk_FUN_01a89e68();
  FUN_0276a4a8(uVar6,uVar5,0);
  uVar5 = thunk_FUN_01a6ca08(
                            Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<GetUserSessionTaskResult>_Start<GameSessionDataService_<HandleGetUserSessionResponseAsync>d__37>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,uVar5);
}


