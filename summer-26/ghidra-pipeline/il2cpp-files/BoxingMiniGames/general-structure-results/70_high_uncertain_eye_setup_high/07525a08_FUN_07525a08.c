/*
FUNCTION_NAME: FUN_07525a08
ENTRY_POINT: 07525a08
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07525bd0) */

undefined8 FUN_07525a08(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((DAT_07ef4c0f & 1) == 0) {
    FUN_03642964(PTR_DAT_079ffb70);
    FUN_03642964(PTR_DAT_079ffdf0);
    FUN_03642964(PTR_DAT_079ffdf8);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__);
    DAT_07ef4c0f = 1;
  }
  puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__;
  puVar1 = PTR_DAT_079ffb70;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar4 = FUN_03fc4cf8(*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_07525634(param_1,param_2,param_3,lVar4);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_074ef3c8(0 < *(int *)(lVar4 + 0x18),
               *(undefined8 *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__,
               *(undefined8 *)(param_2 + 0x10),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_074ef3c8(*(int *)(lVar4 + 0x18) == 1,
               *(undefined8 *)
                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__,
               *(undefined8 *)(param_2 + 0x10),0);
  if (lVar4 != 0) {
    uVar5 = FUN_0459ed6c(lVar4,0,*(undefined8 *)PTR_DAT_079ffdf8);
    puVar1 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_03fc4778(lVar4,*(undefined8 *)puVar1);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


