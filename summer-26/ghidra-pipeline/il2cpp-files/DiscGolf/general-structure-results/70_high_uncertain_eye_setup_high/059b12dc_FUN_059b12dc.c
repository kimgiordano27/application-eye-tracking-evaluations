/*
FUNCTION_NAME: FUN_059b12dc
ENTRY_POINT: 059b12dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_059b12dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_06dc14a3 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_116_0_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_117_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_118_0_TypeInfo);
    DAT_06dc14a3 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_118_0_TypeInfo;
  if (param_2 != 0) {
    uVar3 = FUN_059b13f0(param_2);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar1 = OVRPlugin_OVRP_1_116_0_TypeInfo;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo)
      ;
      FUN_03b7820c(lVar7,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_117_0_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar7;
      LeanTween__value(plVar4,lVar7);
    }
    FUN_035f916c(uVar3,lVar7,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


