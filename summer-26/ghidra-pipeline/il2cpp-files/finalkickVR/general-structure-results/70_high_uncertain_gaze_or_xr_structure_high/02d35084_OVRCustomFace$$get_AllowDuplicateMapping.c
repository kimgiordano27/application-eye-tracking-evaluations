/*
FUNCTION_NAME: OVRCustomFace$$get_AllowDuplicateMapping
ENTRY_POINT: 02d35084
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


byte OVRCustomFace__get_AllowDuplicateMapping(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
            );
  OVRTriangleMesh_TryGetMeshRawUntransformed_m2B1B8D9E871D92B043F6F21BE98CA86FC0CD4F78::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
            );
  uVar2 = OVRTriangleMesh_get_Handle_m0008FF335D016327F2D76CD9527B54A8F4362EE5_inline
                    (*(OVRTriangleMesh_t7910803FBB7BFF9C52A87059453ECCD75DFA4EBC **)
                      (unaff_x29 + -0x28),(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
  uVar4 = *(undefined8 *)(unaff_x29 + -8);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669
                    (*(undefined8 *)(unaff_x29 + -0x38),uVar2,uVar4,uVar3,uVar5,0);
  return bVar1 & 1;
}


