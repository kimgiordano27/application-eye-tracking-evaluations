/*
FUNCTION_NAME: OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB
ENTRY_POINT: 02db5374
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


undefined4
OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_24;
  undefined8 local_20;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* try { // try from 02db5380 to 02eb5393 has its CatchHandler @ 02db53a0 */
  local_20 = param_1;
  if ((OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_312748FBDD26553EF984AB827A029BA4371D46EB654C3323F7FDDC1135F284CD
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
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
      OVRP_1_21_0_ovrp_GetTiledMultiResLevel_m246E37CB5071A0914E5BD2A4B7227892CA6F47C5(&local_24,0);
      return local_24;
    }
  }
  return 0;
}


