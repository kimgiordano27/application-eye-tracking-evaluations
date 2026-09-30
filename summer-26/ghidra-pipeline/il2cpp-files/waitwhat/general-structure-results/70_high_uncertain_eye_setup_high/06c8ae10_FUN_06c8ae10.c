/*
FUNCTION_NAME: FUN_06c8ae10
ENTRY_POINT: 06c8ae10
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06c8ae10(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_07560d58 & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_List<Recorder>_Add__);
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    DAT_07560d58 = 1;
  }
  puVar1 = Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (DAT_07560e00 == (code *)0x0) {
      DAT_07560e00 = (code *)FUN_03188a3c(
                                         "UnityEngine.CanvasRenderer::GetMaterial_Injected(System.IntPtr,System.Int32)"
                                         );
    }
    uVar2 = (*DAT_07560e00)(lVar3,param_2);
    FUN_0695e17c(uVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


