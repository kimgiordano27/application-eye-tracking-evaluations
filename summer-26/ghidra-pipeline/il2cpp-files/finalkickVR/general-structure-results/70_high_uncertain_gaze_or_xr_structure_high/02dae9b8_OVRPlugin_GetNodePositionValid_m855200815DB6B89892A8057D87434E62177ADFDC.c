/*
FUNCTION_NAME: OVRPlugin_GetNodePositionValid_m855200815DB6B89892A8057D87434E62177ADFDC
ENTRY_POINT: 02dae9b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin_GetNodePositionValid_m855200815DB6B89892A8057D87434E62177ADFDC
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int local_24;
  undefined8 local_20;
  undefined4 local_18;
  bool local_11;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRPlugin_GetNodePositionValid_m855200815DB6B89892A8057D87434E62177ADFDC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetNodePositionValid_m855200815DB6B89892A8057D87434E62177ADFDC::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  uVar3 = local_18;
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    bVar4 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(uVar3,0);
    local_11 = (bool)(bVar4 & 1);
  }
  else {
    local_24 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_38_0_ovrp_GetNodePositionValid_m3B9B001F003C4BFF90A1892F2E0762031897DE46
                      (uVar3,&local_24,0);
    if (iVar5 == 0) {
      local_11 = local_24 == 1;
    }
    else {
      local_11 = false;
    }
  }
  return local_11;
}


