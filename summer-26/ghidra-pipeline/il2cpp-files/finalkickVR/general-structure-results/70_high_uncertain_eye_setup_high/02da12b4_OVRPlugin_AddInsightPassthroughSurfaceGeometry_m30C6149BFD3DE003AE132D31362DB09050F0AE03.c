/*
FUNCTION_NAME: OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03
ENTRY_POINT: 02da12b4
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
OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03
          (undefined4 param_1,undefined8 param_2,void *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_f4 [68];
  undefined8 *local_b0;
  undefined1 auStack_a8 [64];
  undefined8 local_68;
  undefined4 local_60;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
  ;
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = local_38;
  *local_38 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_50 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_58 = *puVar5;
  local_59 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_50,local_58,0);
  local_59 = local_59 & 1;
  if (local_59 == 0) {
    local_21 = 0;
  }
  else {
    local_60 = local_28;
    local_68 = local_30;
    memcpy(auStack_a8,param_3,0x40);
    local_b0 = local_38;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar3 = local_60;
    uVar2 = local_68;
    memcpy(auStack_f4,auStack_a8,0x40);
    iVar4 = OVRP_1_63_0_ovrp_AddInsightPassthroughSurfaceGeometry_mB62B61BFAD7E1DB0403A5F9B5BEDBD0E58BF4A98
                      (uVar3,uVar2,auStack_f4,local_b0,0);
    if (iVar4 == 0) {
      local_21 = 1;
    }
    else {
      local_21 = 0;
    }
  }
  return local_21;
}


