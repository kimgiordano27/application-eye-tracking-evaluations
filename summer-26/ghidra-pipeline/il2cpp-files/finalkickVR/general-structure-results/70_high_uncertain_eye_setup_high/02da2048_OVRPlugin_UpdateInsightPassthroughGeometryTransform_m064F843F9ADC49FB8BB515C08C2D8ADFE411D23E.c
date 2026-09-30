/*
FUNCTION_NAME: OVRPlugin_UpdateInsightPassthroughGeometryTransform_m064F843F9ADC49FB8BB515C08C2D8ADFE411D23E
ENTRY_POINT: 02da2048
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_UpdateInsightPassthroughGeometryTransform_m064F843F9ADC49FB8BB515C08C2D8ADFE411D23E
          (undefined8 param_1,void *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_dc [68];
  undefined1 auStack_98 [64];
  undefined8 local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
  ;
  local_38 = param_3;
  local_30 = param_1;
  if ((OVRPlugin_UpdateInsightPassthroughGeometryTransform_m064F843F9ADC49FB8BB515C08C2D8ADFE411D23E
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_UpdateInsightPassthroughGeometryTransform_m064F843F9ADC49FB8BB515C08C2D8ADFE411D23E::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_40 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_48 = *puVar4;
  local_49 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_40,local_48,0);
  local_49 = local_49 & 1;
  if (local_49 == 0) {
    local_21 = 0;
  }
  else {
    local_58 = local_30;
    memcpy(auStack_98,param_2,0x40);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar2 = local_58;
    memcpy(auStack_dc,auStack_98,0x40);
    iVar3 = OVRP_1_63_0_ovrp_UpdateInsightPassthroughGeometryTransform_mED84B75A3797790C375611ADD748958CA8FA698C
                      (uVar2,auStack_dc,0);
    if (iVar3 == 0) {
      local_21 = 1;
    }
    else {
      local_21 = 0;
    }
  }
  return local_21;
}


