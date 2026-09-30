/*
FUNCTION_NAME: OVRTriangleMesh_TryGetCounts_m90D5DB26F13B47538FAF0800B1C1F210C80EACFC
ENTRY_POINT: 02d34f84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


byte OVRTriangleMesh_TryGetCounts_m90D5DB26F13B47538FAF0800B1C1F210C80EACFC
               (OVRTriangleMesh_t7910803FBB7BFF9C52A87059453ECCD75DFA4EBC *param_1,
               undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((OVRTriangleMesh_TryGetCounts_m90D5DB26F13B47538FAF0800B1C1F210C80EACFC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
              );
    OVRTriangleMesh_TryGetCounts_m90D5DB26F13B47538FAF0800B1C1F210C80EACFC::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
            );
  uVar2 = OVRTriangleMesh_get_Handle_m0008FF335D016327F2D76CD9527B54A8F4362EE5_inline
                    (param_1,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6
                    (uVar2,param_2,param_3,0);
  return bVar1 & 1;
}


