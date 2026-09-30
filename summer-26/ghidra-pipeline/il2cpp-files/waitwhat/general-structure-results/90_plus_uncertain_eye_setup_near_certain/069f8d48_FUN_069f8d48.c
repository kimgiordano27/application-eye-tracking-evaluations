/*
FUNCTION_NAME: FUN_069f8d48
ENTRY_POINT: 069f8d48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_069f8d48(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
  if ((DAT_0755d3eb & 1) == 0) {
    FUN_03188a78(Method_UnityEngine_Pool_CollectionPool<List<Vector3>,_Vector3>_Get__);
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_03188a78(Method_System_Collections_Concurrent_ConcurrentQueue<Action>_get_IsEmpty__);
    DAT_0755d3eb = 1;
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
      local_50 = FUN_04ae61a8(&local_40,
                              *(undefined8 *)
                               Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                             );
      local_48 = CONCAT44(local_48._4_4_,(undefined4)local_38);
      if (DAT_0755d4d8 == (code *)0x0) {
        DAT_0755d4d8 = (code *)FUN_03188a3c(
                                           "UnityEngine.Rendering.CommandBuffer::SetComputeVectorArrayParam_Injected(System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                           );
      }
      (*DAT_0755d4d8)(lVar1,lVar2,param_3,&local_50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_069ea2c8(param_2,*(undefined8 *)
                        Method_System_Collections_Concurrent_ConcurrentQueue<Action>_get_IsEmpty__);
}


