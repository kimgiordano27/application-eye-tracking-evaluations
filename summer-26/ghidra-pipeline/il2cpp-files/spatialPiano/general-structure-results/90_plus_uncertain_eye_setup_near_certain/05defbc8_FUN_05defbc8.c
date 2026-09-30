/*
FUNCTION_NAME: FUN_05defbc8
ENTRY_POINT: 05defbc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05defbc8(long param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_e8 [136];
  
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc3d81 & 1) == 0) {
    FUN_02f08768(Method_Oculus_Interaction_Input_ScrollInputProvider_HandlePointerUpdated__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cc450);
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067d13f0);
    FUN_02f08768(Method_Meta_XR_MRUtilityKit_SceneDebugger_<RayCastDebugger>b__59_0__);
    FUN_02f08768(Method_Meta_XR_MRUtilityKit_SceneDebugger_<ShowDebugAnchorsDebugger>b__61_0__);
    FUN_02f08768(Method_UnityEngine_UI_ScrollRect_SetHorizontalNormalizedPosition__);
    FUN_02f08768(Method_UnityEngine_UI_ScrollRect_SetVerticalNormalizedPosition__);
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_<_ctor>b__140_0__);
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_<_ctor>b__140_1__);
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_OnAttachToPanel__);
    FUN_02f08768(Method_Meta_XR_MRUtilityKit_SceneNavigation_BuildSceneNavMeshForRoom__);
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_OnDetachFromPanel__);
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_OnGeometryChanged__);
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollDragElementChanged__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollerSetValueWithoutNotify__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_ScrollView_OnHorizontalSliderViewDataRestored__);
    DAT_06bc3d81 = 1;
  }
  puVar9 = Method_UnityEngine_UIElements_ScrollView_OnGeometryChanged__;
  puVar8 = Method_UnityEngine_UIElements_ScrollView_<_ctor>b__140_1__;
  puVar7 = Method_Oculus_Interaction_Input_ScrollInputProvider_HandlePointerUpdated__;
  puVar6 = Method_Meta_XR_MRUtilityKit_SceneNavigation_BuildSceneNavMeshForRoom__;
  puVar5 = Method_Meta_XR_MRUtilityKit_SceneDebugger_<ShowDebugAnchorsDebugger>b__61_0__;
  puVar4 = Method_Meta_XR_MRUtilityKit_SceneDebugger_<RayCastDebugger>b__59_0__;
  FUN_05116b38(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar10 = FUN_05dab444(0);
  uVar12 = *(undefined8 *)puVar6;
  *(byte *)(param_1 + 0x50) = bVar10 & 1;
  *(byte *)(param_1 + 0x51) = param_3 & 1;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar4;
  **(undefined4 **)(*(long *)puVar7 + 0xb8) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  cVar2 = *(char *)(param_1 + 0x50);
  *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10) = uVar11;
  puVar3 = Method_UnityEngine_UIElements_ScrollView_OnDetachFromPanel__;
  if (cVar2 == '\0') {
    uVar11 = FUN_060ba26c(*(undefined8 *)
                           Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollDragElementChanged__
                          ,0);
    uVar12 = *(undefined8 *)Method_UnityEngine_UI_ScrollRect_SetVerticalNormalizedPosition__;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x14) = uVar11;
    uVar11 = FUN_060ba26c(uVar12,0);
    uVar12 = *(undefined8 *)
              Method_UnityEngine_UIElements_ScrollView_OnHorizontalSliderViewDataRestored__;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18) = uVar11;
    uVar11 = FUN_060ba26c(uVar12,0);
    uVar12 = *(undefined8 *)Method_UnityEngine_UIElements_ScrollView_<_ctor>b__140_0__;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x1c) = uVar11;
    uVar11 = FUN_060ba26c(uVar12,0);
    uVar12 = *(undefined8 *)Method_UnityEngine_UI_ScrollRect_SetHorizontalNormalizedPosition__;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20) = uVar11;
    uVar11 = FUN_060ba26c(uVar12,0);
    uVar12 = *(undefined8 *)Method_UnityEngine_UIElements_ScrollView_OnAttachToPanel__;
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x24) = uVar11;
    uVar11 = FUN_060ba26c(uVar12,0);
    lVar13 = *(long *)PTR_DAT_067cb280;
    iVar1 = *(int *)(lVar13 + 0xe4);
    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28) = uVar11;
    if (iVar1 == 0) {
      thunk_FUN_02f6670c(lVar13);
    }
    uVar11 = FUN_05dd2e14(0);
    puVar3 = PTR_DAT_067d13f0;
    uVar12 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067d13f0,uVar11);
    uVar14 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    uVar12 = FUN_02f0880c(uVar14,uVar11);
    uVar14 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    uVar12 = FUN_02f0880c(uVar14,uVar11);
    uVar14 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    uVar12 = FUN_02f0880c(uVar14,uVar11);
    uVar14 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    uVar12 = FUN_02f0880c(uVar14,uVar11);
    puVar3 = PTR_DAT_067cc450;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    uVar12 = FUN_02f0880c(*(undefined8 *)puVar3,uVar11);
    *(undefined8 *)(param_1 + 0x48) = uVar12;
  }
  else {
    uVar11 = FUN_060ba26c(*(undefined8 *)
                           Method_UnityEngine_UIElements_ScrollView_OnHorizontalScrollerSetValueWithoutNotify__
                          ,0);
    uVar12 = *(undefined8 *)puVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar11;
    uVar11 = FUN_060ba26c(uVar12,0);
    *(undefined4 *)(param_1 + 0x14) = uVar11;
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    FUN_05deffe4(param_1);
    FUN_05da26ac(auStack_e8,0);
    memcpy((void *)(param_1 + 0xb0),auStack_e8,0x88);
  }
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}


