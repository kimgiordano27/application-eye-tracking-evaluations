/*
FUNCTION_NAME: OVRCustomFace$$get_Mappings
ENTRY_POINT: 02d34fc8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


byte OVRCustomFace__get_Mappings(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x29;
  
  OVRTriangleMesh_TryGetCounts_m90D5DB26F13B47538FAF0800B1C1F210C80EACFC::s_Il2CppMethodInitialized
       = in_w8;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
            );
  uVar2 = OVRTriangleMesh_get_Handle_m0008FF335D016327F2D76CD9527B54A8F4362EE5_inline
                    (*(OVRTriangleMesh_t7910803FBB7BFF9C52A87059453ECCD75DFA4EBC **)(unaff_x29 + -8)
                     ,(MethodInfo *)0x0);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_GetSpaceTriangleMeshCounts_m43E36DD8000C847ADD49469117ABB3B1D8352DF6
                    (uVar2,uVar3,uVar4,0);
  return bVar1 & 1;
}


