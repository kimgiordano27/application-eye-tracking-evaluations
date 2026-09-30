/*
FUNCTION_NAME: UnityEngine.UIElements.ComputedStyle$$ApplyStyleCursor
ENTRY_POINT: 05e59b08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_ComputedStyle__ApplyStyleCursor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x21;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x19 + 0x610) = 1;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_121__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_120__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_12__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_119__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_108__;
  lVar6 = *unaff_x21;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *unaff_x21;
  }
  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_049b7e3c(uVar7,uVar9,*(undefined8 *)puVar4,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar7;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar7);
  uVar9 = **(undefined8 **)(*unaff_x21 + 0xb8);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbf2e8(uVar7,uVar9,*(undefined8 *)puVar5,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_02bb0e9c(puVar8,uVar7);
  return;
}


