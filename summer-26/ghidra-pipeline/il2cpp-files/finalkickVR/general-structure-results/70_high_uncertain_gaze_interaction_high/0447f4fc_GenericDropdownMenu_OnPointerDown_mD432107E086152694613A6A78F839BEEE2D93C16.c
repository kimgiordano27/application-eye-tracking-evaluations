/*
FUNCTION_NAME: GenericDropdownMenu_OnPointerDown_mD432107E086152694613A6A78F839BEEE2D93C16
ENTRY_POINT: 0447f4fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void GenericDropdownMenu_OnPointerDown_mD432107E086152694613A6A78F839BEEE2D93C16
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               PointerEventBase_1_t7591EB7533D2DA4AE63C7E535343F090911843C9 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_get_Item__;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
  ;
  if ((GenericDropdownMenu_OnPointerDown_mD432107E086152694613A6A78F839BEEE2D93C16::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_PointerEventBase_1_get_position_m62A6C6E4573AD8DEA94462498F258D10792B8E86_RuntimeMethod_var_048d94d0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    GenericDropdownMenu_OnPointerDown_mD432107E086152694613A6A78F839BEEE2D93C16::
    s_Il2CppMethodInitialized = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  NullCheck(param_5);
  uVar8 = PointerEventBase_1_get_position_m62A6C6E4573AD8DEA94462498F258D10792B8E86_inline
                    (param_5,*(MethodInfo **)
                              PTR_PointerEventBase_1_get_position_m62A6C6E4573AD8DEA94462498F258D10792B8E86_RuntimeMethod_var_048d94d0
                    );
  uVar8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline
                    (uVar8,param_2,param_3);
  uVar8 = VisualElementExtensions_WorldToLocal_m9AB4674D3198B2C87E9D53DB56077BA769059EF9
                    (uVar8,uVar6,0);
  *(ulong *)(param_4 + 0x5c) = CONCAT44(param_2,uVar8);
  NullCheck(param_5);
  pIVar4 = (Il2CppObject *)EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_5,0)
  ;
  uVar6 = IsInstClass(pIVar4,*(Il2CppClass **)
                              Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  GenericDropdownMenu_UpdateSelection_mF26C079D6B983FD9874E4EF200F7E139CB2091DD(param_4,uVar6,0);
  NullCheck(param_5);
  iVar3 = PointerEventBase_1_get_pointerId_m2666488A68716BD85D3277905899BDE7CF3826C8_inline
                    (param_5,*(MethodInfo **)puVar2);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (iVar3 != *(int *)(lVar5 + 8)) {
    pvVar7 = *(void **)(param_4 + 0x18);
    NullCheck(pvVar7);
    uVar6 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar7);
    NullCheck(param_5);
    uVar8 = PointerEventBase_1_get_pointerId_m2666488A68716BD85D3277905899BDE7CF3826C8_inline
                      (param_5,*(MethodInfo **)puVar2);
    PointerCaptureHelper_PreventCompatibilityMouseEvents_m96F0763D51B20EE438DE8C927CBD1EB480F7A751
              (uVar6,uVar8,0);
  }
  NullCheck(param_5);
  EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(param_5,0);
  return;
}


