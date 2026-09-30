/*
FUNCTION_NAME: FUN_0688d0bc
ENTRY_POINT: 0688d0bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_0688d0bc(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_06d37188;
  if ((DAT_071d6dc7 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37130);
    FUN_02f07e70(MagicaCloth2_TeamManager_<>c_TypeInfo);
    FUN_02f07e70(TMPro_Examples_TeleType_<Start>d__4_TypeInfo);
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Telemetry_Method_TypeInfo);
    FUN_02f07e70(TMPro_TMP_TextEventHandler_LineSelectionEvent_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Telemetry_State_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37188);
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_TemplateContainer_UxmlFactory_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_Universal_TemporalAA_<>c_TypeInfo);
    DAT_071d6dc7 = 1;
  }
  puVar2 = PTR_DAT_06d37130;
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = Meta_XR_ImmersiveDebugger_Telemetry_Method_TypeInfo;
  puVar3 = TMPro_TMP_TextEventHandler_LineSelectionEvent_TypeInfo;
  uVar10 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_06d01e20;
  FUN_068b0c40(param_1,param_2,uVar10,0);
  uVar10 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_06889ea0(uVar6,uVar10);
  uVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_06888920(uVar10,uVar6);
  (**(code **)(*param_1 + 0x288))(param_1,uVar10,*(undefined8 *)(*param_1 + 0x290));
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    param_1[0x3d] = 0;
  }
  else {
    lVar5 = *(long *)Meta_XR_ImmersiveDebugger_Telemetry_State_TypeInfo;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar8 = (long *)0x0;
      }
    }
    param_1[0x3d] = (long)plVar8;
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
      param_2 = (long *)0x0;
    }
  }
  plVar8 = param_1 + 0x3d;
  thunk_FUN_02f411dc(plVar8,param_2);
  lVar5 = *plVar8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_066c971c(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)UnityEngine_Rendering_Universal_TemporalAA_<>c_TypeInfo;
  }
  else {
    if (*plVar8 == 0) goto LAB_0688d3f4;
    lVar5 = FUN_066cd398(*plVar8,0);
  }
  puVar3 = UnityEngine_UIElements_TemplateContainer_UxmlFactory_TypeInfo;
  param_1[0x18] = lVar5;
  thunk_FUN_02f411dc();
  FUN_06896090(param_1);
  lVar5 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar9);
    lVar9 = *(long *)puVar3;
  }
  lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar9);
      lVar9 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar9 + 0xb8);
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)TMPro_Examples_TeleType_<Start>d__4_TypeInfo);
    FUN_05026138(lVar11,uVar10,
                 *(undefined8 *)Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar8 = lVar11;
    thunk_FUN_02f411dc(plVar8,lVar11);
  }
  if (lVar5 != 0) {
    FUN_037e9548(lVar5,lVar11,param_1,1,*(undefined8 *)MagicaCloth2_TeamManager_<>c_TypeInfo);
    return;
  }
LAB_0688d3f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


