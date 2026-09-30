/*
FUNCTION_NAME: OVRPlugin_GetNodePoseStateAtTime_mED0C74C8CFDDD726EC01F9B1E142553A527306B3
ENTRY_POINT: 02daee14
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


void OVRPlugin_GetNodePoseStateAtTime_mED0C74C8CFDDD726EC01F9B1E142553A527306B3
               (void *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *__src;
  undefined1 auStack_80 [88];
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_613798E7D5ADF1D5F068C711014A858C462A0CF903AD2828BD3C452D50C22D39
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_59E206D89A8F4C6E716EF9FE5952FE234E8AC13038EB5E46CBB352771C6E2333
  ;
  local_28 = param_4;
  local_1c = param_3;
  local_18 = param_2;
  if ((OVRPlugin_GetNodePoseStateAtTime_mED0C74C8CFDDD726EC01F9B1E142553A527306B3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_613798E7D5ADF1D5F068C711014A858C462A0CF903AD2828BD3C452D50C22D39
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetNodePoseStateAtTime_mED0C74C8CFDDD726EC01F9B1E142553A527306B3::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_80,0,0x58);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  uVar6 = local_18;
  uVar3 = local_1c;
  if ((bVar4 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_76_0_ovrp_GetNodePoseStateAtTime_m38FA250EA4D1891635F41BD0F2586045B82201BD
                      (uVar6,uVar3,auStack_80,0);
    if (iVar5 == 0) {
      memcpy(param_1,auStack_80,0x58);
      return;
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  __src = (void *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  memcpy(param_1,__src,0x58);
  return;
}


