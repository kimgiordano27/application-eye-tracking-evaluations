/*
FUNCTION_NAME: OVRManager_OnDestroy_m2D1ABDF09DFE8617DFE1E7E7E2E4736DE1957CD4
ENTRY_POINT: 02d8d80c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVRManager_OnDestroy_m2D1ABDF09DFE8617DFE1E7E7E2E4736DE1957CD4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_OnDestroy_m2D1ABDF09DFE8617DFE1E7E7E2E4736DE1957CD4::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoMaxLuminance>b__1__
              );
    OVRManager_OnDestroy_m2D1ABDF09DFE8617DFE1E7E7E2E4736DE1957CD4::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
            (*(undefined8 *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoMaxLuminance>b__1__
             ,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(undefined1 *)(lVar2 + 0x180) = 0;
  return;
}


