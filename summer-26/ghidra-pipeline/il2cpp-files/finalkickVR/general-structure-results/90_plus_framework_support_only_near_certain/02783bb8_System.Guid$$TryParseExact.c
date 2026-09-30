/*
FUNCTION_NAME: System.Guid$$TryParseExact
ENTRY_POINT: 02783bb8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_5
*/


void System_Guid__TryParseExact
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
               undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  Il2CppClass *pIVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  Exception_t *pEVar14;
  String_t *pSVar15;
  ulong *in_x9;
  void *pvVar16;
  long unaff_x29;
  ulong *in_stack_00000138;
  ulong *in_stack_00000140;
  ulong *puStack0000000000000148;
  ulong *puStack0000000000000150;
  ulong *puStack0000000000000158;
  ulong *puStack0000000000000160;
  ulong *puStack0000000000000168;
  ulong *puStack0000000000000170;
  undefined4 uStack000000000000018c;
  int iStack00000000000001c4;
  int iStack00000000000001cc;
  undefined4 uStack00000000000001dc;
  
  puStack0000000000000150 = (ulong *)Method_Oculus_Platform_IAP_LaunchCheckoutFlow__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02783b20 with catch @ 02783bd0
                        */
  puStack0000000000000158 = (ulong *)Method_Unity_Jobs_IJobExtensions_Schedule<Float4TweenJob>__;
  puStack0000000000000160 =
       (ulong *)Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
  ;
  puStack0000000000000168 =
       (ulong *)
       Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
  ;
  puStack0000000000000170 = (ulong *)Method_Virtence_OpenTypeCS_Gsub_ParseLookupType5__;
  *(undefined8 *)(unaff_x29 + -8) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  *(undefined4 *)(unaff_x29 + -0x14) = param_4;
  *(undefined4 *)(unaff_x29 + -0x18) = param_5;
  *(undefined4 *)(unaff_x29 + -0x1c) = param_6;
  *(undefined4 *)(unaff_x29 + -0x20) = param_7;
  *(byte *)(unaff_x29 + -0x21) = param_8 & 1;
  *(undefined4 *)(unaff_x29 + -0x28) = param_9;
  *(undefined8 *)(unaff_x29 + -0x30) = param_1;
  puStack0000000000000148 = in_x9;
  if ((FileStream__ctor_m16C2A184C2E9D43D0DC7ECFB1659F0299400E416::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000138);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000140);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_IAPManager_GetViewerPurchasesCallback__);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000148);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000150);
    FileStream__ctor_m16C2A184C2E9D43D0DC7ECFB1659F0299400E416::s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(ulong *)(*(long *)(unaff_x29 + -8) + 0x30) = *puStack0000000000000150;
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -8) + 0x30),(void *)*puStack0000000000000150);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000148);
  Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(*(undefined8 *)(unaff_x29 + -8),0);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x10);
  if (*(long *)(unaff_x29 + -0x88) == 0) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    uVar8 = il2cpp_codegen_object_new(pIVar7);
    *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
    uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                      );
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(uVar9,uVar8,0);
    pEVar14 = *(Exception_t **)(unaff_x29 + -0x90);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x98));
  uVar5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                    (*(String_t **)(unaff_x29 + -0x98),(MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x9c) = uVar5;
  if (*(int *)(unaff_x29 + -0x9c) == 0) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000160);
    uVar8 = il2cpp_codegen_object_new(pIVar7);
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
    uVar9 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_Unity_Jobs_IJobExtensions_Schedule<FloatTweenJob>__);
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(uVar9,uVar8,0);
    pEVar14 = *(Exception_t **)(unaff_x29 + -0xa8);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  *(byte *)(unaff_x29 + -0xa9) = *(byte *)(unaff_x29 + -0x21) & 1;
  *(byte *)(*(long *)(unaff_x29 + -8) + 0x57) = *(byte *)(unaff_x29 + -0xa9) & 1;
  *(undefined4 *)(unaff_x29 + -0xb0) = *(undefined4 *)(unaff_x29 + -0x1c);
  *(uint *)(unaff_x29 + -0x1c) = *(uint *)(unaff_x29 + -0xb0) & 0xffffffef;
  *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0x20);
  if (*(int *)(unaff_x29 + -0xb4) < 1) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000168);
    uVar8 = il2cpp_codegen_object_new(pIVar7);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar8;
    uVar13 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_get_Count__
                      );
    uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (uVar13,uVar8,uVar9,0);
    pEVar14 = *(Exception_t **)(unaff_x29 + -0xc0);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  *(undefined4 *)(unaff_x29 + -0xc4) = *(undefined4 *)(unaff_x29 + -0x14);
  if ((*(int *)(unaff_x29 + -0xc4) < 1) ||
     (*(undefined4 *)(unaff_x29 + -200) = *(undefined4 *)(unaff_x29 + -0x14),
     6 < *(int *)(unaff_x29 + -200))) {
    *(byte *)(unaff_x29 + -0xc9) = *(byte *)(unaff_x29 + -0x21) & 1;
    if ((*(byte *)(unaff_x29 + -0xc9) & 1) == 0) {
      pIVar7 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000168);
      uVar8 = il2cpp_codegen_object_new(pIVar7);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar8;
      uVar13 = *(undefined8 *)(unaff_x29 + -0xe0);
      uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_2__);
      uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000170);
      ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
                (uVar13,uVar8,uVar9,0);
      pEVar14 = *(Exception_t **)(unaff_x29 + -0xe0);
      pMVar10 = (MethodInfo *)
                il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar14,pMVar10);
    }
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000160);
    uVar8 = il2cpp_codegen_object_new(pIVar7);
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar8;
    uVar13 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_2__);
    uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000170);
    ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(uVar13,uVar8,uVar9,0);
    pEVar14 = *(Exception_t **)(unaff_x29 + -0xd8);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0x18);
  if ((*(int *)(unaff_x29 + -0xe4) < 1) ||
     (*(undefined4 *)(unaff_x29 + -0xe8) = *(undefined4 *)(unaff_x29 + -0x18),
     3 < *(int *)(unaff_x29 + -0xe8))) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000168);
    uVar8 = il2cpp_codegen_object_new(pIVar7);
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar8;
    uVar13 = *(undefined8 *)(unaff_x29 + -0xf0);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_Virtence_OpenTypeCS_Gsub_ParseLookupType4__);
    uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000170);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (uVar13,uVar8,uVar9,0);
    pEVar14 = *(Exception_t **)(unaff_x29 + -0xf0);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x1c);
  if ((*(int *)(unaff_x29 + -0xf4) < 0) ||
     (*(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0x1c),
     7 < *(int *)(unaff_x29 + -0xf8))) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000168);
    uVar8 = il2cpp_codegen_object_new(pIVar7);
    *(undefined8 *)(unaff_x29 + -0x100) = uVar8;
    uVar13 = *(undefined8 *)(unaff_x29 + -0x100);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_Unity_Jobs_IJobExtensions_Schedule<NativeArrayDisposeJob>__);
    uVar9 = il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000170);
    ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
              (uVar13,uVar8,uVar9,0);
    pEVar14 = *(Exception_t **)(unaff_x29 + -0x100);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  pvVar16 = *(void **)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
  uVar8 = *puVar11;
  NullCheck(pvVar16);
  iVar6 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(pvVar16,uVar8,0);
  if (iVar6 != -1) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000160);
    pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Jobs_IJobExtensions_Schedule<DecalCreateDrawCallSystem_DrawCallJob>__
                      );
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar14,uVar8,0);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  uVar8 = Path_InsecureGetFullPath_mCBBBAC7EEC4D096AE9CFDDD36C29F2EBD85948F3(uVar8);
  *(undefined8 *)(unaff_x29 + -0x10) = uVar8;
  bVar4 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7
                    (*(undefined8 *)(unaff_x29 + -0x10),0);
  if ((bVar4 & 1) != 0) {
    il2cpp_codegen_initialize_runtime_metadata_inline
              ((ulong *)Method_System_Globalization_Calendar_ToFourDigitYear__);
    uVar8 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600();
    uVar9 = FileStream_GetSecureFileName_mF870E05187521BE648D30DEE1D904958B8ADDBB7
                      (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),0,0);
    uVar8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(uVar8,uVar9,0);
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_Resolve__);
    pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(pEVar14,uVar8,0);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  if ((*(int *)(unaff_x29 + -0x14) == 6) && ((*(uint *)(unaff_x29 + -0x18) & 1) == 1)) {
    pIVar7 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000160);
    pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)
                       Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlane_GetBoundaryJob>__);
    ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar14,uVar8,0);
    pMVar10 = (MethodInfo *)
              il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar14,pMVar10);
  }
  uVar12 = *(uint *)(unaff_x29 + -0x18);
  if ((uVar12 >> 1 & 1) == 0) {
    if (*(int *)(unaff_x29 + -0x14) == 3) {
      uVar12 = 0;
    }
    else {
      if (*(int *)(unaff_x29 + -0x14) != 4) {
        il2cpp_codegen_initialize_runtime_metadata_inline
                  ((ulong *)
                   Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlane_GetBoundaryLengthJob>__);
        uVar8 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600();
        pIVar7 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlaneMeshFilter_TriangulateBoundaryJob>__
                           );
        uVar9 = Box(pIVar7,&stack0x000002f8);
        pIVar7 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            Method_Unity_Jobs_IJobExtensions_Schedule<OVRSceneVolumeMeshFilter_BakeMeshJob>__
                           );
        uVar13 = Box(pIVar7,&stack0x000002e8);
        uVar8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(uVar8,uVar9,uVar13,0);
        pIVar7 = (Il2CppClass *)
                 il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000160);
        pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
        ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar14,uVar8,0);
        pMVar10 = (MethodInfo *)
                  il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar14,pMVar10);
      }
      uVar12 = 0;
    }
  }
  SecurityManager_EnsureElevatedPermissions_m1593F921A822F1394153B96BC89221C16EE64488(uVar12);
  uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  uVar8 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(uVar8,0);
  *(undefined8 *)(unaff_x29 + -0x38) = uVar8;
  pSVar15 = *(String_t **)(unaff_x29 + -0x38);
  NullCheck(pSVar15);
  iVar6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                    (pSVar15,(MethodInfo *)0x0);
  if (0 < iVar6) {
    uVar8 = *(undefined8 *)(unaff_x29 + -0x38);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    uVar8 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(uVar8);
    bVar4 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(uVar8,0);
    if ((bVar4 & 1) == 0) {
      uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)
                         Method_Unity_Jobs_IJobExtensions_Schedule<OVRSceneVolumeMeshFilter_GetTriangleMeshCountsJob>__
                        );
      uVar8 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(uVar8,0);
      if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -0x68) = uVar8;
        uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
        pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000140)
        ;
        il2cpp_codegen_runtime_class_init_inline(pIVar7);
        uVar8 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(uVar8,0);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x68);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
      }
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x70);
      uVar8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                        (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x50));
      pIVar7 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                         );
      pEVar14 = (Exception_t *)il2cpp_codegen_object_new(pIVar7);
      DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235(pEVar14,uVar8,0);
      pMVar10 = (MethodInfo *)
                il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar14,pMVar10);
    }
  }
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    pvVar16 = *(void **)(unaff_x29 + -0x10);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x30) = pvVar16;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x30),pvVar16);
  }
  uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
  uVar5 = *(undefined4 *)(unaff_x29 + -0x14);
  uVar1 = *(undefined4 *)(unaff_x29 + -0x18);
  uVar2 = *(undefined4 *)(unaff_x29 + -0x1c);
  uVar3 = *(undefined4 *)(unaff_x29 + -0x28);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000138);
  uVar8 = MonoIO_Open_mC9778D633EF75F88DD96E796942750EAF8D80205
                    (uVar8,uVar5,uVar1,uVar2,uVar3,unaff_x29 + -0x3c);
  *(undefined8 *)(unaff_x29 + -0x48) = uVar8;
  uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
  puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000138);
  bVar4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(uVar8,*puVar11,0);
  if ((bVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
    pvVar16 = (void *)il2cpp_codegen_object_new
                                (*(Il2CppClass **)Method_IAPManager_GetViewerPurchasesCallback__);
    SafeFileHandle__ctor_mDF2AFEC596DE2F6BD8FBB977135DAC23703213A2(pvVar16,uVar8,0);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x38) = pvVar16;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x38),pvVar16);
    uStack00000000000001dc = *(undefined4 *)(unaff_x29 + -0x18);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x50) = uStack00000000000001dc;
    *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x54) = 1;
    uVar8 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000138);
    iStack00000000000001cc =
         MonoIO_GetFileType_mAD1F08206574390BCEA22BE5B90DF9C283E55602(uVar8,unaff_x29 + -0x3c,0);
    if (iStack00000000000001cc == 1) {
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x56) = 1;
      *(bool *)(*(long *)(unaff_x29 + -8) + 0x55) = (*(uint *)(unaff_x29 + -0x28) & 0x40000000) != 0
      ;
    }
    else {
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x56) = 0;
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x55) = 0;
    }
    iStack00000000000001c4 = *(int *)(unaff_x29 + -0x18);
    if (((iStack00000000000001c4 == 1) && ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x56) & 1) != 0))
       && (*(int *)(unaff_x29 + -0x20) == 0x1000)) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000148);
      uVar8 = VirtualFuncInvoker0<long>::Invoke(0xb,*(Il2CppObject **)(unaff_x29 + -8));
      *(undefined8 *)(unaff_x29 + -0x58) = uVar8;
      if (*(long *)(unaff_x29 + -0x58) < (long)*(int *)(unaff_x29 + -0x20)) {
        if (*(long *)(unaff_x29 + -0x58) < 1000) {
          *(undefined8 *)(unaff_x29 + -0x80) = 1000;
        }
        else {
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x58);
        }
        *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x80);
      }
    }
    uStack000000000000018c = *(undefined4 *)(unaff_x29 + -0x20);
    FileStream_InitBuffer_m7B4EBD9DB95CAA2D58BCBEEB1B1CA1CB07A80064
              (*(undefined8 *)(unaff_x29 + -8),uStack000000000000018c,0,0);
    if (*(int *)(unaff_x29 + -0x14) == 6) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000148);
      VirtualFuncInvoker2<long,long,int>::Invoke(0x1f,*(Il2CppObject **)(unaff_x29 + -8),0,2);
      uVar8 = VirtualFuncInvoker0<long>::Invoke(0xc,*(Il2CppObject **)(unaff_x29 + -8));
      *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48) = uVar8;
    }
    else {
      *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48) = 0;
    }
    return;
  }
  uVar8 = FileStream_GetSecureFileName_mFC0E9CB355A9AB8953E492D4BDB7ABE95ADFD636
                    (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10));
  uVar5 = *(undefined4 *)(unaff_x29 + -0x3c);
  pIVar7 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000138);
  il2cpp_codegen_runtime_class_init_inline(pIVar7);
  pEVar14 = (Exception_t *)
            MonoIO_GetException_m79DACEAB76A421F1BF73B8BF0336BE2FFEB53E84(uVar8,uVar5,0);
  pMVar10 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline(puStack0000000000000158)
  ;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar14,pMVar10);
}


