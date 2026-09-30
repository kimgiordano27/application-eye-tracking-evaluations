/*
FUNCTION_NAME: OVRManager_set_eyeTrackedFoveatedRenderingEnabled_m5E0F71B6638527B600B45DD21F185E1E9C56B659
ENTRY_POINT: 02d81dc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 266
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_19;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;strong_foveation_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_4
*/


void OVRManager_set_eyeTrackedFoveatedRenderingEnabled_m5E0F71B6638527B600B45DD21F185E1E9C56B659
               (byte param_1)

{
  undefined *puVar1;
  byte bVar2;
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar3;
  List_1_t4A8B0F90E751C8AC583261BB86BFDCE86073F074 *pLVar4;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRManager_set_eyeTrackedFoveatedRenderingEnabled_m5E0F71B6638527B600B45DD21F185E1E9C56B659::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_0__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_1__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_10__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_11__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_set_eyeTrackedFoveatedRenderingEnabled_m5E0F71B6638527B600B45DD21F185E1E9C56B659::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar2 = OVRManager_get_eyeTrackedFoveatedRenderingSupported_mDA31E46BA6B2DACE4DE3691200DD98F5E6BBAB9A
                    (0);
  if ((bVar2 & 1) != 0) {
    if ((param_1 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA
                (0,0);
    }
    else {
      bVar2 = OVRPermissionsRequester_IsPermissionGranted_m0F333D018C92051B8846EE686B5418BA728CF3D0
                        (2,0);
      if ((bVar2 & 1) == 0) {
        pAVar3 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__)
        ;
        Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
                  (pAVar3,(Il2CppObject *)0x0,
                   *(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_11__
                   ,(MethodInfo *)0x0);
        OVRPermissionsRequester_add_PermissionGranted_mB8BA0338FC764BFB8C104B82281E01C4C69980BA
                  (pAVar3,0);
        pLVar4 = (List_1_t4A8B0F90E751C8AC583261BB86BFDCE86073F074 *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_10__
                           );
        List_1__ctor_mCBDCAC783C5671B9A3145583C133B1BD46AB6FE7
                  (pLVar4,*(MethodInfo **)
                           Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_1__
                  );
        NullCheck(pLVar4);
        List_1_Add_m6AF02FC2D5E0D4A4C826C67C54A07525460EDA5E_inline
                  (pLVar4,2,*(MethodInfo **)
                             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_0__
                  );
        OVRPermissionsRequester_Request_mE24346F59325F8846898FF68A44ABE4295695906(pLVar4,0);
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA
                  (param_1 & 1,0);
      }
    }
  }
  return;
}


