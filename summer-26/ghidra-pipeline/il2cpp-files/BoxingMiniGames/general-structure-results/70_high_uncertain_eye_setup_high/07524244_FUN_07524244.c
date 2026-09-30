/*
FUNCTION_NAME: FUN_07524244
ENTRY_POINT: 07524244
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x075243e0) */

void FUN_07524244(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined8 uVar6;
  long local_18;
  
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  local_18 = param_1;
  if ((DAT_07ef4bfe & 1) == 0) {
    FUN_03642964(PTR_DAT_079fff08);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4bfe = 1;
  }
  plVar3 = &local_18;
  uVar6 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar2 = FUN_03fc4dc8(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                      );
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
  if (*(long *)(local_18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_03db0700(lVar2,*(undefined8 *)(*(long *)(local_18 + 0x10) + 0x20),
               *(undefined8 *)
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
  FUN_03db0700(lVar2,*(undefined8 *)(local_18 + 0x18),*(undefined8 *)puVar1);
  lVar5 = *(long *)(local_18 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0751c658(*(long *)(lVar5 + 0x18),*(undefined8 *)(local_18 + 0x20),
               *(undefined8 *)(lVar5 + 0x10),lVar2,*(undefined8 *)(local_18 + 0x28),
               *(undefined8 *)(lVar5 + 0x28),in_x6,in_x7,uVar6,plVar3);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_074ee0ac(*(int *)(lVar2 + 0x18) == 0,0);
  FUN_03fc4850(lVar2,*(undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
  if (*(long *)(local_18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar2 = *(long *)(*(long *)(local_18 + 0x10) + 0x30);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(local_18 + 0x28),
               *(undefined8 *)(local_18 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  }
  if (*(char *)(local_18 + 0x30) != '\0') {
    plVar3 = *(long **)(local_18 + 0x10);
    if (plVar3 == (long *)0x0) {
LAB_075243fc:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar4 & 1) != 0) {
      if (*(long *)(local_18 + 0x38) == 0) goto LAB_075243fc;
      FUN_071c0d50(*(long *)(local_18 + 0x38),1,0);
    }
  }
  return;
}


