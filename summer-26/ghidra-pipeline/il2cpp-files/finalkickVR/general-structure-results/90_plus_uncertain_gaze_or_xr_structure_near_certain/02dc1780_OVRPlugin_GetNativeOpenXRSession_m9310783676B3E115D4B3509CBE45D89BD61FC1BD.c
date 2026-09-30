/*
FUNCTION_NAME: OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD
ENTRY_POINT: 02dc1780
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  puVar1 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  local_20 = param_1;
  if ((OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD::
    s_Il2CppMethodInitialized = 1;
  }
  local_28 = 0;
  local_30 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_55_0_ovrp_GetNativeOpenXRHandles_mB3A15EB19386343313029577213D7E7CBB5C5215
                      (&local_28,&local_30,0);
    if (iVar3 == 0) {
      return local_30;
    }
  }
  return 0;
}


