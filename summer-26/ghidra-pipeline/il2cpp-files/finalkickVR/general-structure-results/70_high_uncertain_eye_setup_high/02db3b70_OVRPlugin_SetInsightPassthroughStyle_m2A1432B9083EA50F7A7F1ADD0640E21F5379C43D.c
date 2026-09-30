/*
FUNCTION_NAME: OVRPlugin_SetInsightPassthroughStyle_m2A1432B9083EA50F7A7F1ADD0640E21F5379C43D
ENTRY_POINT: 02db3b70
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


byte OVRPlugin_SetInsightPassthroughStyle_m2A1432B9083EA50F7A7F1ADD0640E21F5379C43D
               (undefined4 param_1,void *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_90 [44];
  undefined4 local_64;
  undefined1 auStack_60 [40];
  undefined4 local_38;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  byte local_11;
  
  puVar2 = 
  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* try { // try from 02db3b7c to 02eb3b87 has its CatchHandler @ 02db3a70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02db3b5c with catch @ 02db3b84
                        */
  local_20 = param_3;
  local_18 = param_1;
  if ((OVRPlugin_SetInsightPassthroughStyle_m2A1432B9083EA50F7A7F1ADD0640E21F5379C43D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_SetInsightPassthroughStyle_m2A1432B9083EA50F7A7F1ADD0640E21F5379C43D::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_28 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_30 = *puVar4;
  local_31 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_28,local_30,0);
  local_31 = local_31 & 1;
  if (local_31 == 0) {
    local_11 = 0;
  }
  else {
    local_38 = local_18;
    memcpy(auStack_60,param_2,0x28);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uVar3 = local_38;
    memcpy(auStack_90,auStack_60,0x28);
    local_64 = OVRP_1_63_0_ovrp_SetInsightPassthroughStyle_m6FB7611B50B6759CEC8F2AD92B7A8D1EDA754AC6
                         (uVar3,auStack_90);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_11 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_64,0);
    local_11 = local_11 & 1;
  }
  return local_11;
}


