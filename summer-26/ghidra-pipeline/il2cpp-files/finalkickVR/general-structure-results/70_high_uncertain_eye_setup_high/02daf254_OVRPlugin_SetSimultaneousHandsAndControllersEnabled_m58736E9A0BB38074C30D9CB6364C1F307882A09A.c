/*
FUNCTION_NAME: OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A
ENTRY_POINT: 02daf254
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


undefined1
OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A
          (byte param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_766EEB3BC468555A4F85DD2E33F18CE324C48F4B51D7ECD3488D747DE87A4F8F
  ;
  if ((OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_766EEB3BC468555A4F85DD2E33F18CE324C48F4B51D7ECD3488D747DE87A4F8F
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SetSimultaneousHandsAndControllersEnabled_m58736E9A0BB38074C30D9CB6364C1F307882A09A::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_88_0_ovrp_SetSimultaneousHandsAndControllersEnabled_m5DB126BB47D0750D123F5AE31CADFDB90B4F0ECC
                      ((param_1 & 1) != 0,0);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}


