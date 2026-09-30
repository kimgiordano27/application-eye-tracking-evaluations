/*
FUNCTION_NAME: Pico.Platform.MatchmakingOptions$$SetCreateRoomDataStore
ENTRY_POINT: 0502bb98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Pico_Platform_MatchmakingOptions__SetCreateRoomDataStore(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uStack0000000000000024;
  undefined8 in_stack_00000028;
  
  puVar3 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
  puVar2 = PTR_DAT_0631c5b8;
  if ((DAT_066cc1a0 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<RenderTreeCompositor_DrawOperation>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_ObservableList<Volume>_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
    FUN_02b3c81c(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo);
    DAT_066cc1a0 = 1;
  }
  in_stack_00000028 = 0;
  uStack0000000000000024 = 0;
  plVar5 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_04c149dc(plVar5,0);
  in_stack_00000028 = *(undefined8 *)(param_1 + 0x144);
  uVar6 = FUN_03ae4294(&stack0x00000028,0,0,0);
  uVar6 = FUN_04bffdac(*(undefined8 *)puVar3,uVar6,0);
  puVar1 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo;
  puVar3 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
  puVar2 = OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
  if (plVar5 != (long *)0x0) {
    FUN_04c16810(plVar5,uVar6,0);
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x14c);
    uVar6 = FUN_03ae4294(&stack0x00000028,0,0,0);
    uVar6 = FUN_04bffdac(*(undefined8 *)puVar1,uVar6,0);
    FUN_04c16810(plVar5,uVar6,0);
    puVar1 = PTR_DAT_06312310;
    uStack0000000000000024 = *(undefined1 *)(param_1 + 0x138);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar4 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo;
    uVar6 = FUN_04cf7810(&stack0x00000024,0);
    uVar6 = FUN_04bffdac(*(undefined8 *)puVar3,uVar6,0);
    FUN_04c16810(plVar5,uVar6,0);
    plVar7 = *(long **)(param_1 + 0x20);
    uVar6 = *(undefined8 *)puVar2;
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    puVar2 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo;
    uVar6 = FUN_04bffdac(uVar6,uVar8,0);
    FUN_04c16810(plVar5,uVar6,0);
    plVar7 = *(long **)(param_1 + 0x28);
    uVar6 = *(undefined8 *)puVar4;
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    puVar3 = UnityEngine_UIElements_ObjectPool<RenderTreeCompositor_DrawOperation>_TypeInfo;
    uVar6 = FUN_04bffdac(uVar6,uVar8,0);
    FUN_04c16810(plVar5,uVar6,0);
    plVar7 = *(long **)(param_1 + 0x30);
    uVar6 = *(undefined8 *)puVar2;
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    puVar4 = UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo;
    puVar2 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
    uVar6 = FUN_04bffdac(uVar6,uVar8,0);
    FUN_04c16810(plVar5,uVar6,0);
    plVar7 = *(long **)(param_1 + 0x40);
    uVar6 = *(undefined8 *)puVar3;
    if (plVar7 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    puVar3 = UnityEngine_Rendering_ObservableList<Volume>_TypeInfo;
    uVar6 = FUN_04bffdac(uVar6,uVar8,0);
    FUN_04c16810(plVar5,uVar6,0);
    uVar6 = FUN_03ae4188();
    uVar6 = FUN_04bffdac(*(undefined8 *)puVar2,uVar6,0);
    FUN_04c16810(plVar5,uVar6,0);
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x1d8);
    uVar6 = FUN_03ae4294(&stack0x00000028,0,0,0);
    uVar6 = FUN_04bffdac(*(undefined8 *)puVar4,uVar6,0);
    FUN_04c16810(plVar5,uVar6,0);
    uStack0000000000000024 = *(undefined1 *)(param_1 + 0x184);
    if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_04cf7810(&stack0x00000024,0);
    uVar6 = FUN_04bffdac(*(undefined8 *)puVar3,uVar6,0);
    FUN_04c16810(plVar5,uVar6,0);
    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


