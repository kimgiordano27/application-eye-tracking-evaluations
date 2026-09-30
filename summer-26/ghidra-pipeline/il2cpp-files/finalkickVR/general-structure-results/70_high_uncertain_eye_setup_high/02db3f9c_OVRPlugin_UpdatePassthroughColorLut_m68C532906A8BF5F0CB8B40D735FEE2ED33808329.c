/*
FUNCTION_NAME: OVRPlugin_UpdatePassthroughColorLut_m68C532906A8BF5F0CB8B40D735FEE2ED33808329
ENTRY_POINT: 02db3f9c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


byte OVRPlugin_UpdatePassthroughColorLut_m68C532906A8BF5F0CB8B40D735FEE2ED33808329
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  byte local_11;
  
  puVar2 = 
  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_<ToLayout>b__24_1__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_UpdatePassthroughColorLut_m68C532906A8BF5F0CB8B40D735FEE2ED33808329::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_<ToLayout>b__24_1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_UpdatePassthroughColorLut_m68C532906A8BF5F0CB8B40D735FEE2ED33808329::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uVar4 = OVRP_1_84_0_ovrp_UpdatePassthroughColorLut_m79ADC74EA655FD287F6E5988EEE5D1EDF3E749D8
                      (param_1,param_2,param_3);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_11 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(uVar4,0);
    local_11 = local_11 & 1;
  }
  return local_11;
}


