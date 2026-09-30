/*
FUNCTION_NAME: FUN_075298e4
ENTRY_POINT: 075298e4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075298e4(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((DAT_07ef4c37 & 1) == 0) {
    FUN_03642964(Method_UnityEngine_Pool_ObjectPool<RenderData>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4c37 = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_03fc4dc8(*(undefined8 *)puVar3);
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03db0700(uVar4,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03db0700(uVar4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__;
    if ((*(long *)(param_1 + 0x10) != 0) && (param_2 != 0)) {
      plVar5 = (long *)FUN_0751e480(param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),uVar4,
                                    0);
      FUN_03fc4850(uVar4,*(undefined8 *)puVar2);
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_Pool_ObjectPool<RenderData>__ctor__ + 0x130);
        if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_Pool_ObjectPool<RenderData>__ctor__)) {
                    /* WARNING: Could not recover jumptable at 0x07529a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x1a8))(plVar5,*(undefined8 *)(lVar6 + 0x1b0));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


