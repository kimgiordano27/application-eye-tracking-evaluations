/*
FUNCTION_NAME: VoxelPlay.VoxelPlaySaveThis.<WaitForChunk>d__4$$MoveNext
ENTRY_POINT: 064946e0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


float VoxelPlay_VoxelPlaySaveThis_<WaitForChunk>d__4__MoveNext
                (float param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000006e9c7c7 & 1) == 0) {
    FUN_02e3ca1c(VoxelPlay_VoxelPlayPostProcessingRenderFeature_CustomRenderPass_TypeInfo);
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RegionInfo>>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_Create__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<RegionHandler>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_SetException__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_get_Task__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_get_Task__
                );
    FUN_02e3ca1c(PTR_DAT_06a2ef88);
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_Start<FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    bRam0000000006e9c7c7 = 1;
  }
  if (param_1 <= 0.0) {
    return param_1;
  }
  lVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_Start<FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                            );
  FUN_05648568(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_2;
    thunk_FUN_02ee2be8((long *)(lVar3 + 0x18),param_2);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_Create__
                              );
    FUN_04c58008(uVar4,param_2,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RegionInfo>>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                 ,0);
    if (param_3 != 0) {
      FUN_03f2cfb8(param_3,uVar4,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_SetException__
                  );
      puVar1 = VoxelPlay_VoxelPlayPostProcessingRenderFeature_CustomRenderPass_TypeInfo;
      *(undefined4 *)(lVar3 + 0x10) = 0;
      uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
      FUN_04d318f4(uVar4,lVar3,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                   ,0);
      FUN_03f2bf50(param_3,uVar4,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<RegionHandler>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                  );
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_get_Task__
      ;
      puVar1 = PTR_DAT_06a2ef88;
      if (*(int *)(param_3 + 0x18) < 1) {
        return param_1;
      }
      iVar6 = 0;
      while( true ) {
        lVar5 = FUN_03f2b33c(param_3,iVar6,*(undefined8 *)puVar2);
        fVar7 = (float)FUN_06494250(param_2,lVar5);
        fVar8 = (float)FUN_06494250(param_2,lVar5);
        fVar12 = *(float *)(lVar3 + 0x10);
        fVar9 = (float)FUN_06494250(param_2,lVar5);
        if (lVar5 == 0) break;
        fVar11 = *(float *)(lVar5 + 0x4c);
        if (*(int *)(lVar5 + 0x50) != 0) {
          fVar11 = (*(float *)(param_2 + 0x50) * fVar11) / 100.0;
        }
        fVar10 = 0.0;
        if (fVar11 < fVar9) {
          fVar9 = (float)FUN_06494250(param_2,lVar5);
          fVar11 = *(float *)(lVar5 + 0x4c);
          if (*(int *)(lVar5 + 0x50) != 0) {
            fVar11 = (fVar11 * *(float *)(param_2 + 0x50)) / 100.0;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          fVar10 = (float)FUN_0560701c(param_1 * (fVar8 / fVar12),fVar9 - fVar11,0);
          if (0.0 < fVar10) {
            fVar8 = (float)FUN_06494250(param_2,lVar5);
            FUN_06494fa8(fVar8 - fVar10,param_2,lVar5,param_4 & 1);
          }
        }
        param_1 = param_1 - fVar10;
        *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) - fVar7;
        if (param_1 <= 0.0) {
          return param_1;
        }
        iVar6 = iVar6 + 1;
        if (*(int *)(param_3 + 0x18) <= iVar6) {
          return param_1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


