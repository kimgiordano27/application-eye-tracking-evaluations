/*
FUNCTION_NAME: OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760
ENTRY_POINT: 02dafbec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760
               (void *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  byte local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  undefined8 local_30;
  undefined4 local_24;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_888B401F8D910154C25F410FF2032A9BDF9062B9B62A4D5046CC927159677815
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_3;
  local_24 = param_2;
  if ((OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_888B401F8D910154C25F410FF2032A9BDF9062B9B62A4D5046CC927159677815
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_90,0,0x60);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_98 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_a0 = *puVar3;
  local_a1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_98,local_a0,0);
  local_a1 = local_a1 & 1;
  if (local_a1 == 0) {
    local_b0 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRPlugin_GetControllerState2_mF786249CBA5D0B982D07F2166DCF1DA9573B5E90(local_b0);
    memcpy(auStack_f0,auStack_130,0x40);
    memset(param_1,0,0x60);
    memcpy(auStack_170,auStack_f0,0x40);
    ControllerState4__ctor_mA5FE4C52D5ED20979D9BF951EEF3BC8D469FF0BA(param_1,auStack_170,0);
  }
  else {
    il2cpp_codegen_initobj(auStack_90,0x60);
    local_a8 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_ac = OVRP_1_16_0_ovrp_GetControllerState4_m8D64E03AFE6015331731685D139E9A81D82C68D3
                         (local_a8,auStack_90,0);
    memcpy(param_1,auStack_90,0x60);
  }
  return;
}


