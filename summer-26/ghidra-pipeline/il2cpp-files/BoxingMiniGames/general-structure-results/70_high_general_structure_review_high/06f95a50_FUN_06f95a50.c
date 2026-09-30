/*
FUNCTION_NAME: FUN_06f95a50
ENTRY_POINT: 06f95a50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


long FUN_06f95a50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = 
  Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticle_TypeInfo;
  if ((DAT_07eeb991 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5aa0);
    FUN_03642964(UnityEngine_UIElements_NavigationCancelEvent_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_NavigationMoveEvent_TypeInfo);
    FUN_03642964(UnityEditor_Analytics_NavmeshBakingAnalytic_TypeInfo);
    FUN_03642964(PTR_DAT_079fbc70);
    FUN_03642964(Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry_TypeInfo);
    FUN_03642964(UnityEngine_PostProcessing_DitheringComponent_Uniforms_TypeInfo);
    FUN_03642964(Unity_InferenceEngine_Layers_Div_<>c_TypeInfo);
    FUN_03642964(
                Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticle_TypeInfo
                );
    DAT_07eeb991 = 1;
  }
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar6,0);
  puVar3 = Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry_TypeInfo;
  puVar1 = UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = param_1;
    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x10),param_1);
    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_06ea66f4(lVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar5 = Unity_InferenceEngine_Layers_Div_<>c_TypeInfo;
    puVar4 = UnityEngine_PostProcessing_DitheringComponent_Uniforms_TypeInfo;
    puVar2 = PTR_DAT_079fbc70;
    puVar1 = PTR_DAT_079f5aa0;
    if (lVar7 != 0) {
      lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
      FUN_06e9b530(lVar7,*(undefined8 *)(lVar9 + 0x110),*(undefined8 *)(lVar9 + 0x118),0);
      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
      FUN_0414c60c(uVar8,lVar6,*(undefined8 *)puVar4,0);
      *(undefined8 *)(lVar7 + 0x50) = uVar8;
      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x50),uVar8);
      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                (uVar8,lVar6,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar7 + 0x58) = uVar8;
      thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x58),uVar8);
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


