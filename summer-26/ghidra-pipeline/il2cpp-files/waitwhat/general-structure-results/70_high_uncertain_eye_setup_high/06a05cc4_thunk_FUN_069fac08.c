/*
FUNCTION_NAME: thunk_FUN_069fac08
ENTRY_POINT: 06a05cc4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_069fac08(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((DAT_0755d402 & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Concurrent_ConcurrentQueue<Breadcrumb>__ctor__);
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_03188a78(Method_System_Collections_Concurrent_ConcurrentQueue<Breadcrumb>_Enqueue__);
    DAT_0755d402 = 1;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
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
        lStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        lStack_40 = param_4 + 0x20;
        uStack_38 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
      }
      uStack_50 = FUN_04ae61a8(&lStack_40,
                               *(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                              );
      uStack_48 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_38);
      if (DAT_0755d590 == (code *)0x0) {
        DAT_0755d590 = (code *)FUN_03188a3c(
                                           "UnityEngine.Rendering.CommandBuffer::Internal_SetRayTracingVectorArrayParam_Injected(System.IntPtr,System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                           );
      }
      (*DAT_0755d590)(lVar1,lVar2,param_3,&uStack_50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_069ea2c8(param_2,*(undefined8 *)
                        Method_System_Collections_Concurrent_ConcurrentQueue<Breadcrumb>_Enqueue__);
}


