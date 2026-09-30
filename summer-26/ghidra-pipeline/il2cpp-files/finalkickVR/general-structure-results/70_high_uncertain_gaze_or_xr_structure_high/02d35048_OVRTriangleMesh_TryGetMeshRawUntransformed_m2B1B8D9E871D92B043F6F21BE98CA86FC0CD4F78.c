/*
FUNCTION_NAME: OVRTriangleMesh_TryGetMeshRawUntransformed_m2B1B8D9E871D92B043F6F21BE98CA86FC0CD4F78
ENTRY_POINT: 02d35048
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


byte OVRTriangleMesh_TryGetMeshRawUntransformed_m2B1B8D9E871D92B043F6F21BE98CA86FC0CD4F78
               (OVRTriangleMesh_t7910803FBB7BFF9C52A87059453ECCD75DFA4EBC *param_1,
               undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((OVRTriangleMesh_TryGetMeshRawUntransformed_m2B1B8D9E871D92B043F6F21BE98CA86FC0CD4F78::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
              );
    OVRTriangleMesh_TryGetMeshRawUntransformed_m2B1B8D9E871D92B043F6F21BE98CA86FC0CD4F78::
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
  bVar1 = OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669
                    (uVar2,param_2,param_3,param_4,param_5,0);
  return bVar1 & 1;
}


