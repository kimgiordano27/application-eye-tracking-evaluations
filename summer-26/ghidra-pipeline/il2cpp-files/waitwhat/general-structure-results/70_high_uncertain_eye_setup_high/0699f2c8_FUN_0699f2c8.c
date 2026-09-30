/*
FUNCTION_NAME: FUN_0699f2c8
ENTRY_POINT: 0699f2c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0699f2c8(long param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  ulong local_38;
  
  if ((DAT_0755b54b & 1) == 0) {
                    /* try { // try from 0699f2f8 to 06a9f433 has its CatchHandler @ 0699f2f8
                       catch() { ... } // from try @ 0699f2f8 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f4bc with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f73c with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f7e4 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f8e0 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f8f8 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f96c with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f98c with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f9b0 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f9d0 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699f9f4 with catch @ 0699f2f8
                       catch() { ... } // from try @ 0699fa18 with catch @ 0699f2f8 */
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    DAT_0755b54b = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (param_3 == 0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      local_40 = param_3 + 0x20;
      local_38 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    }
    uVar1 = FUN_04ae61a8(&local_40,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_069ea1bc(&local_50,uVar1,local_38 & 0xffffffff,0);
    if (DAT_0755b5c0 == (code *)0x0) {
      DAT_0755b5c0 = (code *)FUN_03188a3c(
                                         "UnityEngine.MaterialPropertyBlock::SetVectorArrayImpl_Injected(System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)"
                                         );
    }
    (*DAT_0755b5c0)(lVar2,param_2,&local_50,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


