/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetSeatedZeroPoseToStandingAbsoluteTrackingPose
ENTRY_POINT: 02daf670
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_CVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
  ;
  local_18 = param_2;
  if ((OVRPlugin_GetTrackingTransformRawPose_m2C557055AE8931607BEA55B0AD94C64DCD8B3135::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRPlugin_GetTrackingTransformRawPose_m2C557055AE8931607BEA55B0AD94C64DCD8B3135::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar5 = *puVar6;
    param_1[1] = puVar6[1];
    *param_1 = uVar5;
    uVar5 = *(undefined8 *)((long)puVar6 + 0xc);
    *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar6 + 0x14);
    *(undefined8 *)((long)param_1 + 0xc) = uVar5;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_30_0_ovrp_GetTrackingTransformRawPose_mB04FBB26C652ECCE00BFFB937D29D88106FCDE35
                      (&local_38,0);
    if (iVar4 == 0) {
      param_1[1] = CONCAT44(uStack_2c,uStack_30);
      *param_1 = local_38;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_20,uStack_24);
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_28,uStack_2c);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar5 = *puVar6;
      param_1[1] = puVar6[1];
      *param_1 = uVar5;
      uVar5 = *(undefined8 *)((long)puVar6 + 0xc);
      *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar6 + 0x14);
      *(undefined8 *)((long)param_1 + 0xc) = uVar5;
    }
  }
  return;
}


