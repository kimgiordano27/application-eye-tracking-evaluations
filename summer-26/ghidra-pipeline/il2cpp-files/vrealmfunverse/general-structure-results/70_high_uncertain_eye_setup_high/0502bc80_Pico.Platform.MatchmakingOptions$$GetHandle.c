/*
FUNCTION_NAME: Pico.Platform.MatchmakingOptions$$GetHandle
ENTRY_POINT: 0502bc80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Pico_Platform_MatchmakingOptions__GetHandle(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined1 uStack0000000000000024;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = param_1;
  uVar5 = FUN_03ae4294(param_2,0,0,0);
  FUN_04bffdac(*unaff_x22,uVar5,0);
  puVar1 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo;
  puVar2 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
  puVar3 = OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
  if (unaff_x20 != (long *)0x0) {
    FUN_04c16810();
    uStack0000000000000028 = *(undefined8 *)(unaff_x21 + 8);
    uVar5 = FUN_03ae4294(&stack0x00000028,0,0,0);
    FUN_04bffdac(*(undefined8 *)puVar1,uVar5,0);
    FUN_04c16810();
    puVar1 = PTR_DAT_06312310;
    uStack0000000000000024 = *(undefined1 *)(unaff_x19 + 0x138);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar4 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo;
    uVar5 = FUN_04cf7810(&stack0x00000024,0);
    FUN_04bffdac(*(undefined8 *)puVar2,uVar5,0);
    FUN_04c16810();
    plVar6 = *(long **)(unaff_x19 + 0x20);
    uVar5 = *(undefined8 *)puVar3;
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    puVar3 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo;
    FUN_04bffdac(uVar5,uVar7,0);
    FUN_04c16810();
    plVar6 = *(long **)(unaff_x19 + 0x28);
    uVar5 = *(undefined8 *)puVar4;
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    puVar2 = UnityEngine_UIElements_ObjectPool<RenderTreeCompositor_DrawOperation>_TypeInfo;
    FUN_04bffdac(uVar5,uVar7,0);
    FUN_04c16810();
    plVar6 = *(long **)(unaff_x19 + 0x30);
    uVar5 = *(undefined8 *)puVar3;
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    puVar4 = UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo;
    puVar3 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
    FUN_04bffdac(uVar5,uVar7,0);
    FUN_04c16810();
    plVar6 = *(long **)(unaff_x19 + 0x40);
    uVar5 = *(undefined8 *)puVar2;
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    puVar2 = UnityEngine_Rendering_ObservableList<Volume>_TypeInfo;
    FUN_04bffdac(uVar5,uVar7,0);
    FUN_04c16810();
    uVar5 = FUN_03ae4188();
    FUN_04bffdac(*(undefined8 *)puVar3,uVar5,0);
    FUN_04c16810();
    uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x1d8);
    uVar5 = FUN_03ae4294(&stack0x00000028,0,0,0);
    FUN_04bffdac(*(undefined8 *)puVar4,uVar5,0);
    FUN_04c16810();
    uStack0000000000000024 = *(undefined1 *)(unaff_x19 + 0x184);
    if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_04cf7810(&stack0x00000024,0);
    FUN_04bffdac(*(undefined8 *)puVar2,uVar5,0);
    FUN_04c16810();
    (**(code **)(*unaff_x20 + 0x168))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


