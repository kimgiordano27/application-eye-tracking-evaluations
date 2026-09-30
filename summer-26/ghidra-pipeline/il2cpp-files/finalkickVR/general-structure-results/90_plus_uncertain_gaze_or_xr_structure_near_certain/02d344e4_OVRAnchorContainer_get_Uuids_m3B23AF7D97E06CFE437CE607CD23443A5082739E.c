/*
FUNCTION_NAME: OVRAnchorContainer_get_Uuids_m3B23AF7D97E06CFE437CE607CD23443A5082739E
ENTRY_POINT: 02d344e4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRAnchorContainer_get_Uuids_m3B23AF7D97E06CFE437CE607CD23443A5082739E
          (OVRAnchorContainer_t1E41E758EE68DE70B2915EA2CBFDE8E635A856A5 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  Il2CppClass *pIVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;
  undefined8 local_28;
  undefined8 local_20;
  OVRAnchorContainer_t1E41E758EE68DE70B2915EA2CBFDE8E635A856A5 *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRAnchorContainer_get_Uuids_m3B23AF7D97E06CFE437CE607CD23443A5082739E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<WaitForCompletion>d__54_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRAnchorContainer_get_Uuids_m3B23AF7D97E06CFE437CE607CD23443A5082739E::
    s_Il2CppMethodInitialized = 1;
  }
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<WaitForCompletion>d__54_System_Collections_IEnumerator_Reset__
            );
  uVar2 = OVRAnchorContainer_get_Handle_mDB637B42419542703142FD97CCD963C65B246D03_inline
                    (local_18,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_GetSpaceContainer_mA00171DEC1E52CC15AB98A20665472FF5EF01235(uVar2,&local_28,0);
  if ((bVar1 & 1) != 0) {
    return local_28;
  }
  pIVar3 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                     );
  pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
  uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__0__
                    );
  InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar4,uVar2,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar4,pMVar5);
}


