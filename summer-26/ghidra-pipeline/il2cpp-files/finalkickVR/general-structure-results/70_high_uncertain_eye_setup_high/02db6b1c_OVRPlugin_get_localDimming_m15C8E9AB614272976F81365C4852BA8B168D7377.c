/*
FUNCTION_NAME: OVRPlugin_get_localDimming_m15C8E9AB614272976F81365C4852BA8B168D7377
ENTRY_POINT: 02db6b1c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined1 OVRPlugin_get_localDimming_m15C8E9AB614272976F81365C4852BA8B168D7377(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int local_24;
  undefined8 local_20;
  
  puVar2 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_20 = param_1;
  if ((OVRPlugin_get_localDimming_m15C8E9AB614272976F81365C4852BA8B168D7377::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_get_localDimming_m15C8E9AB614272976F81365C4852BA8B168D7377::s_Il2CppMethodInitialized
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
    bVar3 = OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
    if ((bVar3 & 1) != 0) {
      local_24 = 0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar4 = OVRP_1_78_0_ovrp_GetLocalDimming_m544B32C4D969BA777A83CE2300AF99C766673EBF
                        (&local_24,0);
      if (iVar4 == 0) {
        if (local_24 == 1) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


