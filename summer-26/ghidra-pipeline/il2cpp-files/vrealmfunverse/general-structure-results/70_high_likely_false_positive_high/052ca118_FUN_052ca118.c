/*
FUNCTION_NAME: FUN_052ca118
ENTRY_POINT: 052ca118
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_052ca118(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_066d0195 & 1) == 0) {
    FUN_02b3c81c(Oculus_Platform_Callback_RequestCallback_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_Button_UxmlFactory_TypeInfo);
    FUN_02b3c81c(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo);
    FUN_02b3c81c(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo);
    FUN_02b3c81c(Unity_VRTemplate_Callout_<EndDelay>d__12_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo);
    DAT_066d0195 = 1;
  }
  puVar1 = OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo;
  if (param_1 != 0) {
    uVar3 = FUN_031a9210(*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)Oculus_Platform_Callback_RequestCallback_TypeInfo);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                );
      FUN_049c10fc(lVar7,uVar8,*(undefined8 *)Unity_VRTemplate_Callout_<EndDelay>d__12_TypeInfo,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar7;
      thunk_FUN_02bb0e9c(plVar4,lVar7);
    }
    uVar3 = FUN_031bf830(uVar3,lVar7,*(undefined8 *)puVar2);
    return uVar3;
  }
  lVar7 = *(long *)UnityEngine_UIElements_Button_UxmlFactory_TypeInfo;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_02b76274(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  return **(undefined8 **)(lVar5 + 0xb8);
}


