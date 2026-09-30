/*
FUNCTION_NAME: FUN_07523b78
ENTRY_POINT: 07523b78
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


void FUN_07523b78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((DAT_07ef4bfa & 1) == 0) {
    FUN_03642964(PTR_DAT_079fff00);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4bfa = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_03fc4dc8(*(undefined8 *)puVar2);
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03db0700(uVar4,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03db0700(uVar4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__;
    puVar1 = PTR_DAT_079fff00;
    lVar5 = *(long *)(param_1 + 0x10);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
      FUN_0751c658(*(long *)(lVar5 + 0x18),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(lVar5 + 0x10),uVar4,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(lVar5 + 0x28));
      uVar3 = FUN_03d9b58c(uVar4,*(undefined8 *)puVar1);
      FUN_074ee0ac(uVar3 & 1,0);
      FUN_03fc4850(uVar4,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07523cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


