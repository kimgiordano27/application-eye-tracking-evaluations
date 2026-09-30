/*
FUNCTION_NAME: FileStream__ctor_m16C2A184C2E9D43D0DC7ECFB1659F0299400E416
ENTRY_POINT: 02783b84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 185
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_7
*/


void FileStream__ctor_m16C2A184C2E9D43D0DC7ECFB1659F0299400E416
               (Il2CppObject *param_1,String_t *param_2,int param_3,uint param_4,uint param_5,
               int param_6,byte param_7,uint param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  Il2CppClass *pIVar14;
  Exception_t *pEVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  MethodInfo *pMVar18;
  undefined8 *puVar19;
  String_t *pSVar20;
  void *pvVar21;
  uint uVar22;
  int local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  uint local_1b8;
  uint local_1b4;
  undefined8 local_1b0;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  Exception_t *local_198;
  uint local_190;
  int local_18c;
  Exception_t *local_188;
  undefined8 local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  byte local_159;
  void *local_158;
  void *local_150;
  String_t *local_148;
  Exception_t *local_140;
  int local_134;
  undefined8 local_130;
  String_t *local_128;
  Exception_t *local_120;
  uint local_118;
  uint local_114;
  Exception_t *local_110;
  uint local_108;
  uint local_104;
  Exception_t *local_100;
  Exception_t *local_f8;
  byte local_e9;
  int local_e8;
  int local_e4;
  Exception_t *local_e0;
  int local_d4;
  uint local_d0;
  Il2CppObject local_c9;
  Exception_t *local_c8;
  int local_bc;
  String_t *local_b8;
  Exception_t *local_b0;
  String_t *local_a8;
  long local_a0;
  undefined8 local_98;
  String_t *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  String_t *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  String_t *local_58;
  undefined8 local_50;
  uint local_48;
  byte local_41;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  String_t *local_30;
  Il2CppObject *local_28;
  
  puVar8 = Method_Unity_Jobs_IJobExtensions_Schedule<Float4TweenJob>__;
  puVar7 = Method_Oculus_Platform_IAP_LaunchCheckoutFlow__;
  puVar6 = Method_Virtence_OpenTypeCS_Gsub_ParseLookupType5__;
  puVar5 = Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__;
  puVar4 = Method_System_RuntimeType_ListBuilder<PropertyInfo>_CopyTo__;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
  ;
  puVar2 = Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__;
  puVar1 = Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>__ctor__;
  local_41 = param_7 & 1;
  local_50 = param_9;
  local_48 = param_8;
  local_40 = param_6;
  local_3c = param_5;
  local_38 = param_4;
  local_34 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((FileStream__ctor_m16C2A184C2E9D43D0DC7ECFB1659F0299400E416::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_IAPManager_GetViewerPurchasesCallback__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    FileStream__ctor_m16C2A184C2E9D43D0DC7ECFB1659F0299400E416::s_Il2CppMethodInitialized = 1;
  }
  local_58 = (String_t *)0x0;
  local_5c = 0;
  local_68 = 0;
  local_70 = (String_t *)0x0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = (String_t *)0x0;
  local_98 = 0;
  local_a0 = 0;
  *(undefined8 *)(local_28 + 0x30) = *(undefined8 *)puVar7;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x30),*(void **)puVar7);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(local_28,0);
  local_a8 = local_30;
  if (local_30 == (String_t *)0x0) {
    pIVar14 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                        );
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_b0 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                       );
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar15,uVar16,0);
    pEVar15 = local_b0;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_b8 = local_30;
  NullCheck(local_30);
  local_bc = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                       (local_b8,(MethodInfo *)0x0);
  if (local_bc == 0) {
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_c8 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_Unity_Jobs_IJobExtensions_Schedule<FloatTweenJob>__);
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar15,uVar16,0);
    pEVar15 = local_c8;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_c9 = (Il2CppObject)(local_41 & 1);
  local_28[0x57] = local_c9;
  local_d0 = local_3c;
  local_114 = local_3c & 0xffffffef;
  local_d4 = local_40;
  local_3c = local_114;
  if (local_40 < 1) {
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_e0 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_get_Count__
                       );
    uVar17 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__)
    ;
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (pEVar15,uVar16,uVar17,0);
    pEVar15 = local_e0;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_e4 = local_34;
  if ((local_34 < 1) || (local_e8 = local_34, 6 < local_34)) {
    local_e9 = local_41 & 1;
    if (local_e9 == 0) {
      pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
      pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
      local_100 = pEVar15;
      uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_2__)
      ;
      uVar17 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar6);
      ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
                (pEVar15,uVar16,uVar17,0);
      pEVar15 = local_100;
      pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar15,pMVar18);
    }
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_f8 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_2__);
    uVar17 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar6);
    ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar15,uVar16,uVar17,0);
    pEVar15 = local_f8;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_104 = local_38;
  if (((int)local_38 < 1) || (local_108 = local_38, 3 < (int)local_38)) {
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_110 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_Virtence_OpenTypeCS_Gsub_ParseLookupType4__);
    uVar17 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar6);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (pEVar15,uVar16,uVar17,0);
    pEVar15 = local_110;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  if (((int)local_114 < 0) || (local_118 = local_114, 7 < (int)local_114)) {
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar3);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_120 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_Unity_Jobs_IJobExtensions_Schedule<NativeArrayDisposeJob>__)
    ;
    uVar17 = il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar6);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (pEVar15,uVar16,uVar17,0);
    pEVar15 = local_120;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_128 = local_30;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar19 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_130 = *puVar19;
  NullCheck(local_128);
  local_134 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(local_128,local_130,0);
  if (local_134 != -1) {
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_140 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_Unity_Jobs_IJobExtensions_Schedule<DecalCreateDrawCallSystem_DrawCallJob>__
                       );
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar15,uVar16,0);
    pEVar15 = local_140;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_148 = local_30;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_158 = (void *)Path_InsecureGetFullPath_mCBBBAC7EEC4D096AE9CFDDD36C29F2EBD85948F3(local_148);
  local_150 = local_158;
  local_30 = local_158;
  local_159 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(local_158,0);
  local_159 = local_159 & 1;
  if (local_159 != 0) {
    il2cpp_codegen_initialize_runtime_metadata_inline
              ((ulong *)Method_System_Globalization_Calendar_ToFourDigitYear__);
    local_168 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600();
    local_170 = local_30;
    local_178 = FileStream_GetSecureFileName_mF870E05187521BE648D30DEE1D904958B8ADDBB7
                          (local_28,local_30,0,0);
    local_180 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(local_168,local_178,0);
    pIVar14 = (Il2CppClass *)
              il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_Resolve__);
    local_188 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6
              (local_188,local_180,0);
    pEVar15 = local_188;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_18c = local_34;
  if ((local_34 == 6) && (local_190 = local_38, (local_38 & 1) == 1)) {
    pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
    pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
    local_198 = pEVar15;
    uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlane_GetBoundaryJob>__);
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar15,uVar16,0);
    pEVar15 = local_198;
    pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar15,pMVar18);
  }
  local_19c = local_38;
  uVar22 = local_38;
  if ((local_38 >> 1 & 1) == 0) {
    local_1a0 = local_34;
    if (local_34 == 3) {
      uVar22 = 0;
    }
    else {
      local_1a4 = local_34;
      if (local_34 != 4) {
        il2cpp_codegen_initialize_runtime_metadata_inline
                  ((ulong *)
                   Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlane_GetBoundaryLengthJob>__);
        local_1b0 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600();
        local_1b4 = local_38;
        local_1b8 = local_38;
        pIVar14 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlaneMeshFilter_TriangulateBoundaryJob>__
                            );
        local_1c0 = Box(pIVar14,&local_1b8);
        local_1c4 = local_34;
        local_1c8 = local_34;
        pIVar14 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_Unity_Jobs_IJobExtensions_Schedule<OVRSceneVolumeMeshFilter_BakeMeshJob>__
                            );
        uVar16 = Box(pIVar14,&local_1c8);
        uVar16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987
                           (local_1b0,local_1c0,uVar16,0);
        pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
        pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
        ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar15,uVar16,0);
        pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar15,pMVar18);
      }
      uVar22 = 0;
    }
  }
  SecurityManager_EnsureElevatedPermissions_m1593F921A822F1394153B96BC89221C16EE64488(uVar22);
  pSVar20 = local_30;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pSVar20 = (String_t *)Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(pSVar20,0);
  local_58 = pSVar20;
  NullCheck(pSVar20);
  iVar13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                     (pSVar20,(MethodInfo *)0x0);
  pSVar20 = local_58;
  if (0 < iVar13) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar16 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(pSVar20);
    bVar12 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(uVar16,0);
    if ((bVar12 & 1) == 0) {
      uVar16 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_Unity_Jobs_IJobExtensions_Schedule<OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob>__
                         );
      uVar16 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(uVar16,0);
      pSVar20 = local_30;
      if ((local_41 & 1) == 0) {
        local_88 = uVar16;
        pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
        il2cpp_codegen_runtime_class_init_inline(pIVar14);
        local_90 = (String_t *)Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(pSVar20,0)
        ;
        local_98 = local_88;
      }
      else {
        local_90 = local_58;
        local_98 = uVar16;
        local_80 = uVar16;
      }
      local_70 = local_90;
      uVar16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(local_98,local_90);
      pIVar14 = (Il2CppClass *)
                il2cpp_codegen_initialize_runtime_metadata_inline
                          ((ulong *)
                           Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                          );
      pEVar15 = (Exception_t *)il2cpp_codegen_object_new(pIVar14);
      DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235(pEVar15,uVar16,0);
      pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar15,pMVar18);
    }
  }
  if ((local_41 & 1) == 0) {
    *(String_t **)(local_28 + 0x30) = local_30;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x30),local_30);
  }
  pSVar20 = local_30;
  iVar13 = local_34;
  uVar11 = local_38;
  uVar10 = local_3c;
  uVar22 = local_48;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
  uVar16 = MonoIO_Open_mC9778D633EF75F88DD96E796942750EAF8D80205
                     (pSVar20,iVar13,uVar11,uVar10,uVar22,&local_5c);
  local_68 = uVar16;
  puVar19 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar5);
  bVar12 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(uVar16,*puVar19,0);
  uVar16 = local_68;
  if ((bVar12 & 1) == 0) {
    pvVar21 = (void *)il2cpp_codegen_object_new
                                (*(Il2CppClass **)Method_IAPManager_GetViewerPurchasesCallback__);
    SafeFileHandle__ctor_mDF2AFEC596DE2F6BD8FBB977135DAC23703213A2(pvVar21,uVar16,0);
    *(void **)(local_28 + 0x38) = pvVar21;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x38),pvVar21);
    *(uint *)(local_28 + 0x50) = local_38;
    local_28[0x54] = (Il2CppObject)0x1;
    uVar16 = *(undefined8 *)(local_28 + 0x38);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar5);
    iVar13 = MonoIO_GetFileType_mAD1F08206574390BCEA22BE5B90DF9C283E55602(uVar16,&local_5c,0);
    if (iVar13 == 1) {
      local_28[0x56] = (Il2CppObject)0x1;
      local_28[0x55] = (Il2CppObject)((local_48 & 0x40000000) != 0);
    }
    else {
      local_28[0x56] = (Il2CppObject)0x0;
      local_28[0x55] = (Il2CppObject)0x0;
    }
    if (((local_38 == 1) && (((byte)local_28[0x56] & 1) != 0)) && (local_40 == 0x1000)) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      local_78 = VirtualFuncInvoker0<long>::Invoke(0xb,local_28);
      if (local_78 < local_40) {
        local_a0 = local_78;
        if (local_78 < 1000) {
          local_a0 = 1000;
        }
        local_40 = (int)local_a0;
      }
    }
    FileStream_InitBuffer_m7B4EBD9DB95CAA2D58BCBEEB1B1CA1CB07A80064(local_28,local_40,0,0);
    if (local_34 == 6) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      VirtualFuncInvoker2<long,long,int>::Invoke(0x1f,local_28,0,2);
      uVar16 = VirtualFuncInvoker0<long>::Invoke(0xc,local_28);
      *(undefined8 *)(local_28 + 0x48) = uVar16;
    }
    else {
      *(undefined8 *)(local_28 + 0x48) = 0;
    }
    return;
  }
  uVar16 = FileStream_GetSecureFileName_mFC0E9CB355A9AB8953E492D4BDB7ABE95ADFD636(local_28,local_30)
  ;
  uVar9 = local_5c;
  pIVar14 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar5);
  il2cpp_codegen_runtime_class_init_inline(pIVar14);
  pEVar15 = (Exception_t *)
            MonoIO_GetException_m79DACEAB76A421F1BF73B8BF0336BE2FFEB53E84(uVar16,uVar9,0);
  pMVar18 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar8);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar15,pMVar18);
}


