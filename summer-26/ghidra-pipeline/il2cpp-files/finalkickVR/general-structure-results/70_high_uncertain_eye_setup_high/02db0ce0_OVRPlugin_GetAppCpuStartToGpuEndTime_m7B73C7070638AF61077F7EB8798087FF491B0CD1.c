/*
FUNCTION_NAME: OVRPlugin_GetAppCpuStartToGpuEndTime_m7B73C7070638AF61077F7EB8798087FF491B0CD1
ENTRY_POINT: 02db0ce0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 OVRPlugin_GetAppCpuStartToGpuEndTime_m7B73C7070638AF61077F7EB8798087FF491B0CD1(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_14;
  
  puVar1 = Method_UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_<_cctor>b__9_0__;
  if ((OVRPlugin_GetAppCpuStartToGpuEndTime_m7B73C7070638AF61077F7EB8798087FF491B0CD1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_<_cctor>b__9_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetAppCpuStartToGpuEndTime_m7B73C7070638AF61077F7EB8798087FF491B0CD1::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  if ((bVar2 & 1) == 0) {
    local_14 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_14 = OVRP_1_6_0_ovrp_GetAppCpuStartToGpuEndTime_mF79D451117E6E4C4D20B36EFE3D35F8098C91CCC
                         (0);
  }
  return local_14;
}


