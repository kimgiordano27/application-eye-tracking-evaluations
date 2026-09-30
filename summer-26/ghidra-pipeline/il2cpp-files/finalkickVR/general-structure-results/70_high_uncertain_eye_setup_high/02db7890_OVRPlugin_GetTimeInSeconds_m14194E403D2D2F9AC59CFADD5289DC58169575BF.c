/*
FUNCTION_NAME: OVRPlugin_GetTimeInSeconds_m14194E403D2D2F9AC59CFADD5289DC58169575BF
ENTRY_POINT: 02db7890
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined1  [16]
OVRPlugin_GetTimeInSeconds_m14194E403D2D2F9AC59CFADD5289DC58169575BF(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_E71405C8E1133A3D8DC30352ECE9A1604168FA96651CB6E5491FFC98E9CA92C2
  ;
  local_20 = param_1;
  if ((OVRPlugin_GetTimeInSeconds_m14194E403D2D2F9AC59CFADD5289DC58169575BF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_E71405C8E1133A3D8DC30352ECE9A1604168FA96651CB6E5491FFC98E9CA92C2
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetTimeInSeconds_m14194E403D2D2F9AC59CFADD5289DC58169575BF::s_Il2CppMethodInitialized
         = 1;
  }
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) == 0) {
    local_18 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_31_0_ovrp_GetTimeInSeconds_m5FA5C6BEC85E089A9C5E406936E13B1CDF6EDAC6(&local_28,0)
    ;
    if (iVar3 == 0) {
      local_18 = local_28;
    }
    else {
      local_18 = 0;
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_18;
  return auVar6;
}


