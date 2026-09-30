/*
FUNCTION_NAME: FUN_0752ac44
ENTRY_POINT: 0752ac44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0752ac44(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar2 = 
  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
  ;
  if ((DAT_07ef4c43 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5050);
    FUN_03642964(PTR_DAT_079f4938);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__);
    FUN_03642964(
                Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                );
    FUN_03642964(
                Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                );
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4c43 = 1;
  }
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_036b7ad0((long *)(lVar5 + 0x10),param_1);
    plVar9 = (long *)(lVar5 + 0x30);
    *plVar9 = param_2;
    thunk_FUN_036b7ad0(plVar9,param_2);
    FUN_074eeee0(*plVar9,0);
    puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_get_localPosition__;
    puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>__ctor__;
    puVar2 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
    ;
    if (*plVar9 != 0) {
      uVar6 = FUN_0750cc40(*plVar9,0);
      uVar6 = FUN_07527454(uVar6,*(undefined8 *)(param_1 + 0x18),0);
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      thunk_FUN_036b7ad0();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar6 = FUN_03fc4dc8(*(undefined8 *)puVar4);
      puVar8 = (undefined8 *)(lVar5 + 0x28);
      *puVar8 = uVar6;
      thunk_FUN_036b7ad0(puVar8,uVar6);
      FUN_03db0700(*puVar8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar3);
      FUN_03db0700(*puVar8,param_3,*(undefined8 *)puVar3);
      puVar3 = 
      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
      ;
      puVar2 = PTR_DAT_079f5050;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar6 = FUN_0752102c(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar5 + 0x20),0,
                             *(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),
                             *(undefined8 *)(param_1 + 0x28),0);
        puVar8 = (undefined8 *)(lVar5 + 0x18);
        *puVar8 = uVar6;
        thunk_FUN_036b7ad0(puVar8,uVar6);
        uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
        FUN_05d84434(uVar6,lVar5,*(undefined8 *)puVar3,0);
        *param_4 = uVar6;
        thunk_FUN_036b7ad0(param_4,uVar6);
        if (param_5 != 0) {
          lVar5 = *(long *)(param_5 + 0x10);
          uVar6 = *puVar8;
          lVar7 = *(long *)PTR_DAT_079f4938;
          *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(param_5 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(param_5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_036b7ad0();
              return;
            }
            FUN_0459f03c(param_5,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


