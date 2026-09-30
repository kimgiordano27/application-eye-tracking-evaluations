/*
FUNCTION_NAME: OVRSystemPerfMetricsTcpServer_GatherPerfMetrics_mA4904AB1773EA262EA5F9DDF1FA7770F99131A38
ENTRY_POINT: 02e67b28
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_14
*/


void * OVRSystemPerfMetricsTcpServer_GatherPerfMetrics_mA4904AB1773EA262EA5F9DDF1FA7770F99131A38
                 (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  byte bVar7;
  undefined4 uVar8;
  void *pvVar9;
  long lVar10;
  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4 *this;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *this_00;
  float fVar11;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar5 = Method_System_Reflection_AssemblyName_InternalGetPublicKeyToken__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_get_Item__;
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = Method_System_Collections_Generic_List<InputActionMap>_get_Count__;
  puVar1 = Method_System_Collections_Generic_List<InputActionMap>__ctor__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRSystemPerfMetricsTcpServer_GatherPerfMetrics_mA4904AB1773EA262EA5F9DDF1FA7770F99131A38::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Reflection_AssemblyName_InternalGetPublicKeyToken__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_980);
    OVRSystemPerfMetricsTcpServer_GatherPerfMetrics_mA4904AB1773EA262EA5F9DDF1FA7770F99131A38::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = (void *)0x0;
  local_40 = 0;
  local_48 = 0;
  pvVar9 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_980);
  PerfMetrics__ctor_m5C066EEE93436C41DE625A4544B451D4F8561EDF(pvVar9,0);
  local_38 = pvVar9;
  uVar8 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(0);
  NullCheck(pvVar9);
  pvVar6 = local_38;
  *(undefined4 *)((long)pvVar9 + 0x10) = uVar8;
  uVar8 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(0);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(undefined4 *)((long)pvVar6 + 0x14) = uVar8;
  uVar8 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(0);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x18) = uVar8;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(0,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x1c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x20) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(1,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x24) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x28) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(3,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x2c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x30) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(4,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x34) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x38) = uVar8;
  local_48 = OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C(5,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar1);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x3c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar2);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x40) = uVar8;
  local_48 = OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C(0xe,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar1);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x44) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar2);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x48) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(7,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x4c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x50) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(8,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x54) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x58) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(9,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x5c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x60) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(10,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 100) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x68) = uVar8;
  local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(0xb,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar4);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x6c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                    ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                     *(MethodInfo **)puVar5);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x70) = uVar8;
  local_48 = OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C(0xc,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar1);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x74) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar2);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x78) = uVar8;
  local_48 = OVRPlugin_GetPerfMetricsInt_m2041024026E708EEEAC78795E45C2D747F26DC7C(0xd,0);
  pvVar6 = local_38;
  bVar7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar1);
  NullCheck(pvVar6);
  pvVar9 = local_38;
  *(byte *)((long)pvVar6 + 0x7c) = bVar7 & 1;
  uVar8 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline
                    ((Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 *)&local_48,
                     *(MethodInfo **)puVar2);
  NullCheck(pvVar9);
  *(undefined4 *)((long)pvVar9 + 0x80) = uVar8;
  local_4c = 0;
  while( true ) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar10 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(int *)(lVar10 + 0x18) <= local_4c) break;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_40 = OVRPlugin_GetPerfMetricsFloat_m81670F46771F8955B03943A98EE3D97A54A84B93(0x20,0);
    pvVar6 = local_38;
    NullCheck(local_38);
    this = *(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4 **)((long)pvVar6 + 0x88);
    bVar7 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline
                      ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                       *(MethodInfo **)puVar4);
    NullCheck(this);
    BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4::SetAt
              (this,(long)local_4c,(bool)(bVar7 & 1));
    pvVar6 = local_38;
    NullCheck(local_38);
    this_00 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)((long)pvVar6 + 0x90);
    fVar11 = (float)Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline
                              ((Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 *)&local_40,
                               *(MethodInfo **)puVar5);
    NullCheck(this_00);
    SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(this_00,(long)local_4c,fVar11);
    local_4c = il2cpp_codegen_add<int,int>(local_4c,1);
  }
  return local_38;
}


