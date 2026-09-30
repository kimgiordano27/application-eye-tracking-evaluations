/*
FUNCTION_NAME: OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375
ENTRY_POINT: 02da0f6c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375
          (undefined4 param_1,void *param_2,void *param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  void *local_38;
  void *local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
  ;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375::
    s_Il2CppMethodInitialized = 1;
  }
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  *local_40 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar6 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar8,*puVar9,0);
  pvVar4 = local_30;
  if ((bVar6 & 1) == 0) {
    local_21 = 0;
  }
  else if ((((local_30 == (void *)0x0) || (local_38 == (void *)0x0)) ||
           (NullCheck(local_30), pvVar3 = local_38, *(long *)((long)pvVar4 + 0x18) == 0)) ||
          (NullCheck(local_38), pvVar4 = local_30, *(long *)((long)pvVar3 + 0x18) == 0)) {
    local_21 = 0;
  }
  else {
    NullCheck(local_30);
    pvVar3 = local_38;
    local_4c = (undefined4)*(undefined8 *)((long)pvVar4 + 0x18);
    NullCheck(local_38);
    local_50 = (int)*(undefined8 *)((long)pvVar3 + 0x18) / 3;
    local_58 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(local_30);
    local_60 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(&local_58,0);
    local_68 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(local_38,3,0);
    uVar10 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(&local_68,0);
    uVar5 = local_28;
    puVar9 = local_40;
    uVar2 = local_4c;
    iVar7 = local_50;
    uVar8 = local_60;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar7 = OVRP_1_63_0_ovrp_CreateInsightTriangleMesh_m06F6D38A3C5F3AD5DEFF2116535BD4B41FF27404
                      (uVar5,uVar8,uVar2,uVar10,iVar7,puVar9,0);
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(&local_68,0);
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(&local_58,0);
    if (iVar7 == 0) {
      local_21 = 1;
    }
    else {
      local_21 = 0;
    }
  }
  return local_21;
}


