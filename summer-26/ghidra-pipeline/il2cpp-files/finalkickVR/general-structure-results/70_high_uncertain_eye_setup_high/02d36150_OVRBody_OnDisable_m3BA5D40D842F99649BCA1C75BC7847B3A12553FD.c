/*
FUNCTION_NAME: OVRBody_OnDisable_m3BA5D40D842F99649BCA1C75BC7847B3A12553FD
ENTRY_POINT: 02d36150
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBody_OnDisable_m3BA5D40D842F99649BCA1C75BC7847B3A12553FD(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  if ((OVRBody_OnDisable_m3BA5D40D842F99649BCA1C75BC7847B3A12553FD::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRBody_OnDisable_m3BA5D40D842F99649BCA1C75BC7847B3A12553FD::s_Il2CppMethodInitialized = 1;
  }
  piVar3 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  iVar2 = il2cpp_codegen_subtract<int,int>(*piVar3,1);
  piVar3 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StopBodyTracking_m28770144503DED133C614336EC6799291234060B(0);
  }
  return;
}


