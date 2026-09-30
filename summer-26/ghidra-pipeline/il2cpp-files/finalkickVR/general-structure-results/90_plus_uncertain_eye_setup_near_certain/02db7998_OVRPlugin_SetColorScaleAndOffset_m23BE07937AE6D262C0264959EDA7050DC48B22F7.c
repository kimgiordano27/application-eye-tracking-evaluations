/*
FUNCTION_NAME: OVRPlugin_SetColorScaleAndOffset_m23BE07937AE6D262C0264959EDA7050DC48B22F7
ENTRY_POINT: 02db7998
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_SetColorScaleAndOffset_m23BE07937AE6D262C0264959EDA7050DC48B22F7
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               byte param_9)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_E71405C8E1133A3D8DC30352ECE9A1604168FA96651CB6E5491FFC98E9CA92C2
  ;
  if ((OVRPlugin_SetColorScaleAndOffset_m23BE07937AE6D262C0264959EDA7050DC48B22F7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_E71405C8E1133A3D8DC30352ECE9A1604168FA96651CB6E5491FFC98E9CA92C2
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SetColorScaleAndOffset_m23BE07937AE6D262C0264959EDA7050DC48B22F7::
    s_Il2CppMethodInitialized = 1;
  }
  OculusXRPlugin_SetColorScale_m20DAD44814E22C9614ADE7C0C6F1C2F0A7DF601F
            (param_1,param_2,param_3,param_4);
  OculusXRPlugin_SetColorOffset_m8219BBE3032A4978D7133616EFA86B64F2D8956A
            (param_5,param_6,param_7,param_8,0);
  if ((param_9 & 1) == 0) {
    local_21 = true;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0)
    ;
    if ((bVar2 & 1) == 0) {
      local_21 = false;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      iVar3 = OVRP_1_31_0_ovrp_SetColorScaleAndOffset_m1A6187F4CB500529EB889E50FF5A08E6751AE3CE
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,1,0);
      local_21 = iVar3 == 0;
    }
  }
  return local_21;
}


