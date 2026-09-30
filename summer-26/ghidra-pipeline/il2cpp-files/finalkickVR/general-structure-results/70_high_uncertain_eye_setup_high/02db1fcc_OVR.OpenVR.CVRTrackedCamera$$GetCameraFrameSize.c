/*
FUNCTION_NAME: OVR.OpenVR.CVRTrackedCamera$$GetCameraFrameSize
ENTRY_POINT: 02db1fcc
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


int OVR_OpenVR_CVRTrackedCamera__GetCameraFrameSize(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack0000000000000010;
  byte bStack0000000000000027;
  int iStack000000000000003c;
  undefined8 uStack0000000000000040;
  int iStack000000000000004c;
  
  puStack0000000000000010 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_22CDB0218DF95C2FE34F5B86A85B3FF904B5E7374399C45AD383B9CF010EAD25
  ;
  uStack0000000000000040 = param_1;
  if ((OVRPlugin_GetDesiredEyeTextureFormat_m7C94FE67F60CB7B0A4AAAF2D8E3B0A0F1CCC4FEF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_22CDB0218DF95C2FE34F5B86A85B3FF904B5E7374399C45AD383B9CF010EAD25
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetDesiredEyeTextureFormat_m7C94FE67F60CB7B0A4AAAF2D8E3B0A0F1CCC4FEF::
    s_Il2CppMethodInitialized = 1;
  }
  iStack000000000000003c = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar1,*puVar2,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 == 0) {
    iStack000000000000004c = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    iStack000000000000003c =
         OVRP_1_11_0_ovrp_GetDesiredEyeTextureFormat_m697BCCCC3DCA0DA37877D7F481990BA4DB9BDEF4(0);
    if (iStack000000000000003c == 1) {
      iStack000000000000003c = 0;
    }
    iStack000000000000004c = iStack000000000000003c;
  }
  return iStack000000000000004c;
}


