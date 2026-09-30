/*
FUNCTION_NAME: FUN_07528640
ENTRY_POINT: 07528640
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


long FUN_07528640(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_07ef4c2b & 1) == 0) {
    FUN_03642964(Method_UnityEngine_Pool_ObjectPool<RenderData>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4c2b = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = FUN_07510ae0(*(long *)(param_1 + 0x18),0);
    FUN_075287c0(*(undefined8 *)(param_1 + 0x28),lVar5);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_03fc4dc8(*(undefined8 *)puVar4);
    FUN_03db0700(uVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar3);
    FUN_03db0700(uVar6,param_2,*(undefined8 *)puVar3);
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__;
    if (lVar5 != 0) {
      plVar7 = (long *)FUN_0751e480(lVar5,*(undefined8 *)(param_1 + 0x10),uVar6,0);
      FUN_03fc4850(uVar6,*(undefined8 *)puVar2);
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_Pool_ObjectPool<RenderData>__ctor__ + 0x130);
        if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_Pool_ObjectPool<RenderData>__ctor__)) {
          (**(code **)(lVar8 + 0x1a8))(plVar7,*(undefined8 *)(lVar8 + 0x1b0));
          FUN_07511148(lVar5,0);
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


