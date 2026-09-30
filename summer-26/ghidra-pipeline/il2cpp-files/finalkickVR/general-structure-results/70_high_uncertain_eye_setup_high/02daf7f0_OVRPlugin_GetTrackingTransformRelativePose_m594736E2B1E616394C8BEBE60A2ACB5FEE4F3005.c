/*
FUNCTION_NAME: OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005
ENTRY_POINT: 02daf7f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
  ;
  local_20 = param_3;
  local_14 = param_2;
  if ((OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_552B0C4E510BE0FD990E7741B090FB92F729FE203A47053A0FF5756237CFD616
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar6 = *puVar7;
    param_1[1] = puVar7[1];
    *param_1 = uVar6;
    uVar6 = *(undefined8 *)((long)puVar7 + 0xc);
    *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar7 + 0x14);
    *(undefined8 *)((long)param_1 + 0xc) = uVar6;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar3 = local_14;
    local_40 = *puVar7;
    uStack_68 = (undefined4)puVar7[1];
    uStack_64 = (undefined4)*(undefined8 *)((long)puVar7 + 0xc);
    uStack_38 = uStack_68;
    uStack_2c = (undefined4)*(undefined8 *)((long)puVar7 + 0x14);
    local_28 = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0x14) >> 0x20);
    local_30 = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0xc) >> 0x20);
    uStack_34 = uStack_64;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar5 = OVRP_1_38_0_ovrp_GetTrackingTransformRelativePose_m33EB97B76A3574A3411EE3EC6A052B77035FB000
                      (&local_40,uVar3,0);
    if (iVar5 == 0) {
      param_1[1] = CONCAT44(uStack_34,uStack_38);
      *param_1 = local_40;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_28,uStack_2c);
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_30,uStack_34);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      uVar6 = *puVar7;
      param_1[1] = puVar7[1];
      *param_1 = uVar6;
      uVar6 = *(undefined8 *)((long)puVar7 + 0xc);
      *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar7 + 0x14);
      *(undefined8 *)((long)param_1 + 0xc) = uVar6;
    }
  }
  return;
}


