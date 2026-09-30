/*
FUNCTION_NAME: OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54
ENTRY_POINT: 02db5494
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;strong_foveation_hits_5;functionality_foveated_rendering
*/


void OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54
               (undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar3 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar3 = OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(0);
    if ((bVar3 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRP_1_21_0_ovrp_SetTiledMultiResLevel_m053D016AA4CB643999F8E9A3A37455ED62D7E1E2(param_1,0);
    }
  }
  return;
}


