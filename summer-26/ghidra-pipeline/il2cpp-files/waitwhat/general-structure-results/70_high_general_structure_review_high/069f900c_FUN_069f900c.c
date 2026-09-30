/*
FUNCTION_NAME: FUN_069f900c
ENTRY_POINT: 069f900c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void FUN_069f900c(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
  if ((DAT_0755d3ed & 1) == 0) {
    FUN_03188a78(Method_UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_Get__);
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_get_Task__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_AwaitUnsafeOnCompleted<TaskAwaiter<OvrAvatarManager_AvatarRequestBoolResults>,_OvrAvatarManager_<UserHasAvatarAsync>d__153>__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_Start<OvrAvatarManager_<UserHasAvatarAsync>d__153>__
                );
    FUN_03188a78(Method_System_Collections_Concurrent_ConcurrentQueue<Action>_get_IsEmpty__);
    DAT_0755d3ed = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1);
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 != 0) {
      if (param_4 == 0) {
        local_40 = 0;
        local_38 = 0;
      }
      else {
        local_40 = param_4 + 0x20;
        local_38 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
      }
      local_50 = FUN_04ac8220(&local_40,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_get_Task__
                             );
      local_48 = CONCAT44(local_48._4_4_,(undefined4)local_38);
      if (DAT_0755d4e8 == (code *)0x0) {
        DAT_0755d4e8 = (code *)FUN_03188a3c(
                                           "UnityEngine.Rendering.CommandBuffer::SetComputeMatrixArrayParam_Injected(System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                           );
      }
      (*DAT_0755d4e8)(lVar1,lVar2,param_3,&local_50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_069ea2c8(param_2,*(undefined8 *)
                        Method_System_Collections_Concurrent_ConcurrentQueue<Action>_get_IsEmpty__);
}


