/*
FUNCTION_NAME: OVRPlugin_GetHandNodePoseStateLatency_m28B5B2E04415BD93C9475BFC6BD3356A312B813D
ENTRY_POINT: 02db19a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined1  [16]
OVRPlugin_GetHandNodePoseStateLatency_m28B5B2E04415BD93C9475BFC6BD3356A312B813D(undefined8 param_1)

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
  
  puVar1 = Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator_get_Current__;
  local_20 = param_1;
  if ((OVRPlugin_GetHandNodePoseStateLatency_m28B5B2E04415BD93C9475BFC6BD3356A312B813D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Xml_XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetHandNodePoseStateLatency_m28B5B2E04415BD93C9475BFC6BD3356A312B813D::
    s_Il2CppMethodInitialized = 1;
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
    local_28 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_18_0_ovrp_GetHandNodePoseStateLatency_m2C983B994C70931B4B2CB726483FCEA832243869
                      (&local_28,0);
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


