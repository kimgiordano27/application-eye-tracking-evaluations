/*
FUNCTION_NAME: FUN_0752aeb8
ENTRY_POINT: 0752aeb8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0752aeb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_07ef4c44 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fff08);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4c44 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
    FUN_0751c658(*(long *)(lVar3 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x28),0);
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__;
    puVar1 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
    ;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_074ee0ac(*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0,0);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_03fc4850(uVar4,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0752af98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


