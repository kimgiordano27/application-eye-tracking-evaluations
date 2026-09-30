/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch0startPositiony
ENTRY_POINT: 05653c44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch0startPositiony
          (undefined8 *param_1)

{
  long lVar1;
  long *unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_04d8a7b0(*param_1);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<BoxColliderSerializationFixer_ColliderData>_get_Current__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e420,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_Dispose__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0632ce70,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0632ceb8,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(undefined8 *)PTR_DAT_06336f88,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ControllerButtonsMapper_ButtonClickAction>_MoveNext__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(long *)(unaff_x22 + 0xa0) + 0x20,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Awaitable_AwaitableAndFrameIndex>_get_Current__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<BoxColliderSerializationFixer_ColliderData>_Dispose__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(long *)(unaff_x22 + 0x98) + 0x20,0);
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<ControllerButtonsMapper_ButtonClickAction>_Dispose__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_Dispose__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  FUN_04d8a7b0(*(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_get_Current__
               ,0);
  (**(code **)(*unaff_x19 + 0x318))();
  thunk_FUN_02b4aae0();
  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_02bb0e9c();
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *unaff_x21;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  thunk_FUN_02b4aae0();
  return uVar2;
}


