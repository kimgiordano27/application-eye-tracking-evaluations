/*
FUNCTION_NAME: System.Collections.CollectionBase$$System.Collections.IList.set_Item
ENTRY_POINT: 02735fa0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Collections_CollectionBase__System_Collections_IList_set_Item
          (undefined8 param_1,byte param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 uVar15;
  Il2CppObject *pIVar16;
  long unaff_x29;
  undefined1 auVar17 [16];
  undefined4 uStack_330;
  undefined4 uStack_32c;
  Il2CppObject *pIStack_328;
  undefined8 uStack_320;
  void *pvStack_318;
  undefined8 uStack_310;
  void *pvStack_308;
  byte bStack_2f9;
  Il2CppObject *pIStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  Il2CppObject *pIStack_2e0;
  Il2CppObject *pIStack_2d8;
  byte bStack_2c9;
  void *pvStack_2c8;
  undefined8 uStack_2b8;
  Il2CppObject *pIStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_299;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  byte bStack_259;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  byte bStack_219;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  void *pvStack_1e8;
  byte bStack_1d9;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  void *pvStack_1b8;
  undefined8 uStack_1b0;
  byte bStack_1a1;
  undefined8 uStack_1a0;
  byte bStack_195;
  Il2CppObject *pIStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_149;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_60 [16];
  
  puVar9 = Method_System_Net_FtpControlStream_GetPortCommandLine__;
  puVar8 = Method_System_Net_FtpControlStream_GetContentLengthFrom213Response__;
  puVar7 = Method_System_Net_FtpControlStream_CreateFtpListenerSocket__;
  puVar6 = Method_System_Net_FtpControlStream_ConnectCallback__;
  puVar5 = Method_UnityEngine_Rendering_Universal_ForwardRendererData_set_opaqueLayerMask__;
  puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
  ;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  *(byte *)(unaff_x29 + -0x11) = param_2 & 1;
  *(undefined8 *)(unaff_x29 + -0x20) = param_3;
  if ((CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Instruction>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_GetPortV4__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_GetPortV6__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_ContainsKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_PipelineCallback__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_QueueOrCreateDataConection__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar9);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Key__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__);
    CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined4 *)(unaff_x29 + -0x44) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x70));
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xd8) = 0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 0;
  *(undefined8 *)(unaff_x29 + -0xe8) = 0;
  *(undefined8 *)(unaff_x29 + -0xf0) = 0;
  *(undefined8 *)(unaff_x29 + -0xf8) = 0;
  *(undefined8 *)(unaff_x29 + -0x100) = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                         (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                            **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bStack_149 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(uStack_148,0);
  bStack_149 = bStack_149 & 1;
  if (bStack_149 == 0) {
    pIStack_188 = (Il2CppObject *)
                  CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                            (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                               **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
    NullCheck(pIStack_188);
    bVar10 = VirtualFuncInvoker0<bool>::Invoke(0x47,pIStack_188);
    bStack_195 = bVar10 & 1;
    if ((bVar10 & 1) == 0) {
      lStack_1d0 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                             (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
      if (lStack_1d0 == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        uStack_1d8 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
        bStack_1d9 = *(byte *)(unaff_x29 + -0x11) & 1;
        if (bStack_1d9 == 0) {
          *(undefined8 *)(unaff_x29 + -0xa0) = uStack_1d8;
          *(undefined8 *)(unaff_x29 + -0xa8) =
               *(undefined8 *)Method_System_Net_FtpControlStream_GetPortV6__;
          *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
        }
        else {
          *(undefined8 *)(unaff_x29 + -0x98) = uStack_1d8;
          *(undefined8 *)(unaff_x29 + -0xa8) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_ContainsKey__;
          *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x98);
        }
        pvStack_1e8 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                        (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                           **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
        NullCheck(pvStack_1e8);
        uStack_1f0 = Type_get_NameOrDefault_mA66279601E5D9042F465DD802D3202CC3099AF1C(pvStack_1e8,0)
        ;
        uVar13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                           (*(undefined8 *)(unaff_x29 + -0xb0),*(undefined8 *)(unaff_x29 + -0xa8),
                            uStack_1f0,0);
        *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
      }
      else {
        uStack_200 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                               (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                  **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
        uStack_208 = *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        uStack_218 = uStack_208;
        uStack_210 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uStack_208,0);
        bVar10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(uStack_200,uStack_210,0)
        ;
        bStack_219 = bVar10 & 1;
        if ((bVar10 & 1) == 0) {
          uStack_240 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                 (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                    **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
          uStack_248 = *(undefined8 *)
                        Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__
          ;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          uStack_258 = uStack_248;
          uStack_250 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                                 (uStack_248,0);
          bVar10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                             (uStack_240,uStack_250,0);
          bStack_259 = bVar10 & 1;
          if ((bVar10 & 1) == 0) {
            uStack_280 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                   (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                      **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
            uStack_288 = *(undefined8 *)Method_System_Net_FtpControlStream_GetPortV4__;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            uStack_298 = uStack_288;
            uStack_290 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                                   (uStack_288,0);
            bVar10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                               (uStack_280,uStack_290,0);
            bStack_299 = bVar10 & 1;
            if ((bVar10 & 1) == 0) {
              pvStack_2c8 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                              (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                                 **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
              NullCheck(pvStack_2c8);
              bVar10 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(pvStack_2c8,0);
              bStack_2c9 = bVar10 & 1;
              if ((bVar10 & 1) == 0) {
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                uStack_140 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                       (0);
                if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
                  uStack_138 = *(undefined8 *)puVar8;
                  uStack_130 = uStack_140;
                }
                else {
                  uStack_138 = *(undefined8 *)puVar4;
                  uStack_128 = uStack_140;
                }
                uVar13 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                   (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                      **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
                pvVar14 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                            (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                               **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
                NullCheck(pvVar14);
                uVar15 = Type_get_NameOrDefault_mA66279601E5D9042F465DD802D3202CC3099AF1C(pvVar14,0)
                ;
                uVar13 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56
                                   (uStack_140,uStack_138,uVar13,uVar15,0);
                *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
              }
              else {
                *(undefined8 *)(unaff_x29 + -0x30) = 0;
                pIStack_2d8 = (Il2CppObject *)
                              CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                        (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                           **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
                uVar13 = IsInst(pIStack_2d8,*(Il2CppClass **)puVar7);
                *(undefined8 *)(unaff_x29 + -0x38) = uVar13;
                pIStack_2e0 = (Il2CppObject *)
                              CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                        (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                           **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
                NullCheck(pIStack_2e0);
                uStack_2e8 = VirtualFuncInvoker0<Type_t*>::Invoke(0x30,pIStack_2e0);
                *(undefined8 *)(unaff_x29 + -0x40) = uStack_2e8;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                uStack_2f0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                       (0);
                pIStack_2f8 = *(Il2CppObject **)(unaff_x29 + -0x40);
                NullCheck(pIStack_2f8);
                bVar10 = VirtualFuncInvoker0<bool>::Invoke(0x47,pIStack_2f8);
                bStack_2f9 = bVar10 & 1;
                if ((bVar10 & 1) == 0) {
                  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)puVar9;
                  *(undefined8 *)(unaff_x29 + -0xd0) = uStack_2f0;
                  pvStack_308 = *(void **)(unaff_x29 + -0x40);
                  NullCheck(pvStack_308);
                  uStack_310 = Type_get_NameOrDefault_mA66279601E5D9042F465DD802D3202CC3099AF1C
                                         (pvStack_308,0);
                  *(undefined8 *)(unaff_x29 + -0xd8) = uStack_310;
                  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -200);
                  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xd0);
                }
                else {
                  *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)puVar9;
                  *(undefined8 *)(unaff_x29 + -0xc0) = uStack_2f0;
                  pvStack_318 = *(void **)(unaff_x29 + -0x40);
                  NullCheck(pvStack_318);
                  uStack_320 = Type_get_FullNameOrDefault_m34768A4C7E7D23D93954F24BDD741463FCEEE8B4
                                         (pvStack_318,0);
                  *(undefined8 *)(unaff_x29 + -0xd8) = uStack_320;
                  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xb8);
                  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xc0);
                }
                pIStack_328 = *(Il2CppObject **)(unaff_x29 + -0x38);
                NullCheck(pIStack_328);
                uStack_330 = InterfaceFuncInvoker0<int>::Invoke
                                       (0,*(Il2CppClass **)puVar6,pIStack_328);
                uStack_32c = uStack_330;
                uVar13 = Box(*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                             ,&uStack_330);
                uVar13 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56
                                   (*(undefined8 *)(unaff_x29 + -0xe8),
                                    *(undefined8 *)(unaff_x29 + -0xe0),
                                    *(undefined8 *)(unaff_x29 + -0xd8),uVar13,0);
                *(undefined8 *)(unaff_x29 + -0x30) = uVar13;
                *(undefined4 *)(unaff_x29 + -0x44) = 0;
                while( true ) {
                  iVar1 = *(int *)(unaff_x29 + -0x44);
                  pIVar16 = *(Il2CppObject **)(unaff_x29 + -0x38);
                  NullCheck(pIVar16);
                  iVar12 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar6,pIVar16);
                  if (iVar12 <= iVar1) break;
                  uVar15 = *(undefined8 *)(unaff_x29 + -0x30);
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
                  uVar13 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                     (0);
                  if (*(int *)(unaff_x29 + -0x44) == 0) {
                    *(undefined8 *)(unaff_x29 + -0xf0) = uVar13;
                    *(undefined8 *)(unaff_x29 + -0xf8) = uVar15;
                    uStack_110 = *(undefined8 *)puVar4;
                    uStack_118 = *(undefined8 *)(unaff_x29 + -0xf0);
                    uStack_120 = *(undefined8 *)(unaff_x29 + -0xf8);
                  }
                  else {
                    *(undefined8 *)(unaff_x29 + -0x100) = uVar13;
                    uStack_110 = *(undefined8 *)
                                  Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Key__
                    ;
                    uStack_118 = *(undefined8 *)(unaff_x29 + -0x100);
                    uStack_120 = uVar15;
                    uStack_108 = uVar15;
                  }
                  pIVar16 = *(Il2CppObject **)(unaff_x29 + -0x38);
                  iVar1 = *(int *)(unaff_x29 + -0x44);
                  NullCheck(pIVar16);
                  auVar17 = InterfaceFuncInvoker1<CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F,int>
                            ::Invoke(0,*(Il2CppClass **)puVar7,pIVar16,iVar1);
                  uVar15 = *(undefined8 *)(unaff_x29 + -0x40);
                  uVar13 = *(undefined8 *)
                            Method_System_Collections_Generic_List<Instruction>_get_Item__;
                  auStack_60 = auVar17;
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                  uVar13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                                     (uVar13,0);
                  bVar10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172
                                     (uVar15,uVar13,0);
                  uVar13 = CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229
                                     (unaff_x29 + -0x60,bVar10 & 1,0);
                  uVar13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                                     (uStack_118,uStack_110,uVar13,0);
                  uVar13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                                     (uStack_120,uVar13,0);
                  *(undefined8 *)(unaff_x29 + -0x30) = uVar13;
                  uVar11 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x44),1);
                  *(undefined4 *)(unaff_x29 + -0x44) = uVar11;
                }
                uVar13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                                   (*(undefined8 *)(unaff_x29 + -0x30),
                                    *(undefined8 *)
                                     Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__
                                    ,0);
                *(undefined8 *)(unaff_x29 + -0x30) = uVar13;
                *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
              }
            }
            else {
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
              uStack_2a8 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                     (0);
              pIStack_2b0 = (Il2CppObject *)
                            CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                      (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                         **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
              pvVar14 = (void *)CastclassClass(pIStack_2b0,*(Il2CppClass **)puVar2);
              NullCheck(pvVar14);
              uVar13 = CastclassClass(pIStack_2b0,*(Il2CppClass **)puVar2);
              uStack_2b8 = Type_get_FullNameOrDefault_m34768A4C7E7D23D93954F24BDD741463FCEEE8B4
                                     (uVar13,0);
              uVar13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                                 (uStack_2a8,
                                  *(undefined8 *)
                                   Method_System_Net_FtpControlStream_QueueOrCreateDataConection__,
                                  uStack_2b8,0);
              *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
            }
          }
          else {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
            uStack_268 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0)
            ;
            uStack_270 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                   (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                      **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
            uVar13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                               (uStack_268,
                                *(undefined8 *)Method_System_Net_FtpControlStream_PipelineCallback__
                                ,uStack_270,0);
            *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
          }
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          uStack_228 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
          uStack_230 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                 (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                    **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
          uVar13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                             (uStack_228,
                              *(undefined8 *)
                               Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__,
                              uStack_230,0);
          *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
        }
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      uStack_1a0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
      bStack_1a1 = *(byte *)(unaff_x29 + -0x11) & 1;
      if (bStack_1a1 == 0) {
        *(undefined8 *)(unaff_x29 + -0x80) = uStack_1a0;
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)puVar8;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x80);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x78) = uStack_1a0;
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)puVar4;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
      }
      uStack_1b0 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                             (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
      pvStack_1b8 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                      (*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                         **)(unaff_x29 + -0x10),(MethodInfo *)0x0);
      NullCheck(pvStack_1b8);
      uStack_1c0 = Type_get_FullNameOrDefault_m34768A4C7E7D23D93954F24BDD741463FCEEE8B4
                             (pvStack_1b8,0);
      uVar13 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56
                         (*(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0x88),
                          uStack_1b0,uStack_1c0,0);
      *(undefined8 *)(unaff_x29 + -0x28) = uVar13;
    }
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x28);
  }
  else {
    uStack_168 = (*(undefined8 **)(unaff_x29 + -0x10))[1];
    uStack_170 = **(undefined8 **)(unaff_x29 + -0x10);
    uStack_160 = uStack_170;
    uStack_158 = uStack_168;
    uStack_178 = Box(*(Il2CppClass **)puVar5,&uStack_170);
    uVar13 = ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D(uStack_178,0);
    *(undefined8 *)(unaff_x29 + -8) = uVar13;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


