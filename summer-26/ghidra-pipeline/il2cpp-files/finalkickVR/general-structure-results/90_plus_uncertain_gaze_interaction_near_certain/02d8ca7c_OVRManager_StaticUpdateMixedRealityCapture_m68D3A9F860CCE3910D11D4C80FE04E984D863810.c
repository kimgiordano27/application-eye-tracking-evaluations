/*
FUNCTION_NAME: OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
ENTRY_POINT: 02d8ca7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_14;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
               (Il2CppObject *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin_IsSame__
  ;
  puVar3 = Method_System_IO_Stream_NullStream_BeginWrite__;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMinLuminance>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMinLuminance>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoMaxLuminance>b__0__
              );
    OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  if ((*(byte *)(lVar6 + 0x1b0) & 1) != 0) {
    bVar5 = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
    if ((bVar5 & 1) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = Media_IsMrcActivated_m789D03726393864E19EE0516C7EA3773CA122844(0);
      bVar5 = bVar5 & 1;
    }
    NullCheck(param_1);
    InterfaceActionInvoker1<bool>::Invoke(1,*(Il2CppClass **)puVar3,param_1,bVar5 != 0);
    NullCheck(param_1);
    InterfaceActionInvoker1<int>::Invoke(9,*(Il2CppClass **)puVar3,param_1,0);
    bVar5 = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
    if ((bVar5 & 1) != 0) {
      Media_Update_m2059A835F3BE32366432FED120C16EAB71614D8B(0);
    }
    NullCheck(param_1);
    bVar5 = InterfaceFuncInvoker0<bool>::Invoke(0,*(Il2CppClass **)puVar3,param_1);
    if ((bVar5 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      if ((*(byte *)(lVar6 + 0x1b1) & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMinLuminance>b__1__
                  );
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        *(undefined1 *)(lVar6 + 0x1b1) = 0;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62(0);
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      uVar7 = OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49();
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
      bVar5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar7,0);
      if ((bVar5 & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        if ((*(byte *)(lVar6 + 0x1c0) & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                    (*(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMinLuminance>b__0__
                     ,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
          *(undefined1 *)(lVar6 + 0x1c0) = 1;
        }
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        if ((*(byte *)(lVar6 + 0x1b1) & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
          OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D
                    (*(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__2__
                     ,*(undefined8 *)
                       Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__
                    );
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                    (*(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoMaxLuminance>b__0__
                     ,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
          *(undefined1 *)(lVar6 + 0x1b1) = 1;
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10
                  (param_2,uVar7,param_1,param_3,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        *(undefined1 *)(lVar6 + 0x1c0) = 0;
      }
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    OVRMixedRealityCaptureConfigurationExtensions_ReadFrom_m585C78AFC92A80FE7A42CFC872B19375759C1E6D
              (*(undefined8 *)(lVar6 + 0x1b8),param_1,0);
  }
  return;
}


