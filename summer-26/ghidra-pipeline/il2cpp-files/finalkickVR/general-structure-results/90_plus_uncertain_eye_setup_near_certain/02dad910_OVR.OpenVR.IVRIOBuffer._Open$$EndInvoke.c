/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Open$$EndInvoke
ENTRY_POINT: 02dad910
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 OVR_OpenVR_IVRIOBuffer__Open__EndInvoke(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack0000000000000008;
  ulong *puStack0000000000000010;
  byte bStack0000000000000027;
  byte bStack000000000000003b;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  puStack0000000000000008 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  puStack0000000000000010 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uStack0000000000000040 = param_2;
  uStack0000000000000048 = param_1;
  if ((OVRPlugin_GetLayerTextureStageCount_m7ACFF1E9AA4708B227460BB30021AA34347ED874::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000010);
    OVRPlugin_GetLayerTextureStageCount_m7ACFF1E9AA4708B227460BB30021AA34347ED874::
    s_Il2CppMethodInitialized = 1;
  }
  uStack000000000000003c = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  bStack000000000000003b = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  bStack000000000000003b = bStack000000000000003b & 1;
  if (bStack000000000000003b == 0) {
    uStack000000000000004c = 1;
  }
  else {
    uStack000000000000003c = 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008)
    ;
    bStack0000000000000027 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
    uVar1 = uStack0000000000000048;
    bStack0000000000000027 = bStack0000000000000027 & 1;
    if (bStack0000000000000027 != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
      OVRP_1_15_0_ovrp_GetLayerTextureStageCount_m5901B689D44D8E791FCE1D46A31504C6520DFA76
                (uVar1,&stack0x0000003c,0);
    }
    uStack000000000000004c = uStack000000000000003c;
  }
  return uStack000000000000004c;
}


