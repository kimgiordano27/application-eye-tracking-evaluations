/*
FUNCTION_NAME: OVRManager_ReturnToLauncher_m64B09A054CC401504D8BE35DADBD86E272959D2B
ENTRY_POINT: 02d8dab4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager_ReturnToLauncher_m64B09A054CC401504D8BE35DADBD86E272959D2B(void)

{
  if ((OVRManager_ReturnToLauncher_m64B09A054CC401504D8BE35DADBD86E272959D2B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_ReturnToLauncher_m64B09A054CC401504D8BE35DADBD86E272959D2B::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_PlatformUIConfirmQuit_m535F93DC2CAE215773CB4B8A10F47E921086FBC3(0);
  return;
}


