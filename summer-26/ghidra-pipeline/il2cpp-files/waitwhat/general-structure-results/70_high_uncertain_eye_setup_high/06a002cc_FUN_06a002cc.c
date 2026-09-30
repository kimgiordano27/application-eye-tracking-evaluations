/*
FUNCTION_NAME: FUN_06a002cc
ENTRY_POINT: 06a002cc
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


void FUN_06a002cc(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((bRam000000000755d425 & 1) == 0) {
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_03188a78(PTR_DAT_070d2e28);
    bRam000000000755d425 = 1;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_069ea2c8(0,*(undefined8 *)PTR_DAT_070d2e28);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lStack_40 = param_3 + 0x20;
    uStack_38 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    uStack_50 = FUN_04ae61a8(&lStack_40,
                             *(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__)
    ;
    uStack_48 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_38);
    if (pcRam000000000755d7c8 == (code *)0x0) {
      pcRam000000000755d7c8 =
           (code *)FUN_03188a3c(
                               "UnityEngine.Rendering.CommandBuffer::SetGlobalVectorArray_Injected(System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                               );
    }
    (*pcRam000000000755d7c8)(lVar1,param_2,&uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_069ed9b0(param_1);
}


