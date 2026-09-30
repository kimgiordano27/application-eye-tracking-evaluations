/*
FUNCTION_NAME: UnityEngine.UI.Graphic$$get_defaultGraphicMaterial
ENTRY_POINT: 075c3f9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8 UnityEngine_UI_Graphic__get_defaultGraphicMaterial(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_0373b518(OVRPlugin_OVRP_1_61_0_TypeInfo);
  FUN_0373b518(OVRPlugin_OVRP_1_62_0_TypeInfo);
  FUN_0373b518(OVRPlugin_OVRP_1_63_0_TypeInfo);
  FUN_0373b518(OVRPlugin_OVRP_1_64_0_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x855) = 1;
  lStack0000000000000008 = 0;
  FUN_075c52bc();
  if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_075c412c;
  uVar2 = FUN_059ec97c();
  if ((uVar2 & 1) == 0) {
    lStack0000000000000008 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_075c5650();
    if (lStack0000000000000008 == 0) goto LAB_075c412c;
    in_stack_00000010 = unaff_x20;
    in_stack_00000018 = unaff_x19;
    uVar3 = FUN_0623cf1c(&stack0x00000010,0);
    *(undefined8 *)(lStack0000000000000008 + 0x10) = uVar3;
    thunk_FUN_037aeb94();
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_075c56f4();
    *(undefined8 *)(lStack0000000000000008 + 0x20) = uVar3;
    thunk_FUN_037aeb94((undefined8 *)(lStack0000000000000008 + 0x20),uVar3);
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_075c412c;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)OVRPlugin_OVRP_1_62_0_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_075c412c;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = lStack0000000000000008;
      thunk_FUN_037aeb94(plVar6,lStack0000000000000008);
    }
    else {
      FUN_049ceef4(lVar4,lStack0000000000000008,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_075c412c;
    FUN_059eaf08();
  }
  if (lStack0000000000000008 != 0) {
    *(int *)(lStack0000000000000008 + 0x18) = *(int *)(lStack0000000000000008 + 0x18) + 1;
    return *(undefined8 *)(lStack0000000000000008 + 0x20);
  }
LAB_075c412c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


