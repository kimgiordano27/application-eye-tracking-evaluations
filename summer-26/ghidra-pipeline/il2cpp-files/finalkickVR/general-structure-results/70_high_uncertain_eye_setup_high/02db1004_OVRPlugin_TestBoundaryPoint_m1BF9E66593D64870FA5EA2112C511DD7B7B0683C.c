/*
FUNCTION_NAME: OVRPlugin_TestBoundaryPoint_m1BF9E66593D64870FA5EA2112C511DD7B7B0683C
ENTRY_POINT: 02db1004
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_TestBoundaryPoint_m1BF9E66593D64870FA5EA2112C511DD7B7B0683C
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  ulong local_70;
  undefined4 local_68;
  byte local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
  ;
  local_28 = param_6;
  local_20 = param_5;
  local_1c = param_2;
  uStack_18 = param_3;
  local_14 = param_4;
  if ((OVRPlugin_TestBoundaryPoint_m1BF9E66593D64870FA5EA2112C511DD7B7B0683C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_TestBoundaryPoint_m1BF9E66593D64870FA5EA2112C511DD7B7B0683C::s_Il2CppMethodInitialized
         = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_58 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_60 = *puVar2;
  local_61 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_58,local_60,0);
  local_61 = local_61 & 1;
  if (local_61 == 0) {
    il2cpp_codegen_initobj(&local_50,0x20);
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = uStack_38;
    param_1[2] = local_40;
  }
  else {
    local_70 = CONCAT44(uStack_18,local_1c);
    local_68 = local_14;
    local_74 = local_20;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uStack_9c = (undefined4)(local_70 >> 0x20);
    OVRP_1_8_0_ovrp_TestBoundaryPoint_m8358A7595BA12BB9E8BE2BC438ED0E1CD572C0B5
              (&local_94,local_70 & 0xffffffff,uStack_9c,local_68,local_74,0);
    param_1[1] = uStack_8c;
    *param_1 = local_94;
    param_1[3] = uStack_7c;
    param_1[2] = local_84;
  }
  return;
}


