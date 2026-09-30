/*
FUNCTION_NAME: FUN_07527d50
ENTRY_POINT: 07527d50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07527d50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  if ((DAT_07ef4c22 & 1) == 0) {
    FUN_03642964(PTR_DAT_079ffdf0);
    FUN_03642964(PTR_DAT_079ffdf8);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4c22 = 1;
  }
  puVar5 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__;
  puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  puVar1 = PTR_DAT_079ffdf8;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    iVar9 = 0;
    while( true ) {
      if (*(int *)(lVar6 + 0x18) <= iVar9) {
        return;
      }
      uVar7 = FUN_0459ed6c(lVar6,iVar9,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar2);
      }
      uVar8 = FUN_03fc4dc8(*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x18) == 0) break;
      FUN_03db0700(uVar8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),*(undefined8 *)puVar3);
      FUN_03db0700(uVar8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar3);
      lVar6 = *(long *)(param_1 + 0x18);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) break;
      FUN_0751c658(*(long *)(lVar6 + 0x10),uVar7,*(undefined8 *)(lVar6 + 0x18),uVar8,
                   *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar6 + 0x30));
      FUN_03fc4850(uVar8,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0x18) == 0) break;
      lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x38);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(param_1 + 0x28),uVar7,
                   *(undefined8 *)(lVar6 + 0x28));
      }
      lVar6 = *(long *)(param_1 + 0x10);
      iVar9 = iVar9 + 1;
      if (lVar6 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


