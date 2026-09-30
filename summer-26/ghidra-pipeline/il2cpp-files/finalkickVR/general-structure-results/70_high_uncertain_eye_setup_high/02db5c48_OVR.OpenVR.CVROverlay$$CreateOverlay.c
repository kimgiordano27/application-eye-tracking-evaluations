/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$CreateOverlay
ENTRY_POINT: 02db5c48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 OVR_OpenVR_CVROverlay__CreateOverlay(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_24;
  undefined8 local_20;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_20 = param_1;
  if ((OVRPlugin_get_gpuUtilLevel_m12DED52CD5A80E85355D1847ADDFFDD9A2F333F9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_get_gpuUtilLevel_m12DED52CD5A80E85355D1847ADDFFDD9A2F333F9::s_Il2CppMethodInitialized
         = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar3 = OVRPlugin_get_gpuUtilSupported_m1D267F4837B77A2294C4697796433D213E316863(0);
    if ((bVar3 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar4 = OVRP_1_21_0_ovrp_GetGPUUtilLevel_m9367D44D6FA5DE611C88F1AFF91B98416A2F1E2E
                        (&local_24,0);
      if (iVar4 != 0) {
        return 0;
      }
      return local_24;
    }
  }
  return 0;
}


