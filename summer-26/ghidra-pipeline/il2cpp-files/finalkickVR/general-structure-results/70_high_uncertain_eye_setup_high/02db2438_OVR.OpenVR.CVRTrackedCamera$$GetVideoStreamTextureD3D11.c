/*
FUNCTION_NAME: OVR.OpenVR.CVRTrackedCamera$$GetVideoStreamTextureD3D11
ENTRY_POINT: 02db2438
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool OVR_OpenVR_CVRTrackedCamera__GetVideoStreamTextureD3D11(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong *puStack0000000000000010;
  byte bStack000000000000001f;
  undefined8 uStack0000000000000030;
  bool bStack000000000000003f;
  
  puStack0000000000000010 =
       (ulong *)
       Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
  ;
  uStack0000000000000030 = param_1;
  if ((OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    bStack000000000000003f = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
              );
    iVar1 = OVRP_1_15_0_ovrp_GetMixedRealityInitialized_m39519D2322102197BAC9CD03622BE3E67EF4410B(0)
    ;
    bStack000000000000003f = iVar1 == 1;
  }
  return bStack000000000000003f;
}


