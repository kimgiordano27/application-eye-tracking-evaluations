/*
FUNCTION_NAME: CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229
ENTRY_POINT: 02735f94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 110
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229
          (undefined8 *param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  Il2CppObject *pIVar10;
  byte bVar11;
  int iVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined4 local_350;
  undefined4 local_34c;
  Il2CppObject *local_348;
  undefined8 local_340;
  Il2CppObject *local_338;
  undefined8 local_330;
  Il2CppObject *local_328;
  byte local_319;
  Il2CppObject *local_318;
  undefined8 local_310;
  Il2CppObject *local_308;
  Il2CppObject *local_300;
  Il2CppObject *local_2f8;
  byte local_2e9;
  void *local_2e8;
  undefined8 local_2d8;
  Il2CppObject *local_2d0;
  undefined8 local_2c8;
  byte local_2b9;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 local_288;
  byte local_279;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 local_248;
  byte local_239;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_210;
  void *local_208;
  byte local_1f9;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  byte local_1c1;
  undefined8 local_1c0;
  byte local_1b5;
  Il2CppObject *local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  byte local_169;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_90 [16];
  undefined1 local_80 [16];
  int local_64;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_31;
  undefined8 *local_30;
  undefined8 local_28;
  
  puVar8 = Method_System_Net_FtpControlStream_GetPortCommandLine__;
  puVar7 = Method_System_Net_FtpControlStream_GetContentLengthFrom213Response__;
  puVar6 = Method_System_Net_FtpControlStream_CreateFtpListenerSocket__;
  puVar5 = Method_System_Net_FtpControlStream_ConnectCallback__;
  puVar4 = Method_UnityEngine_Rendering_Universal_ForwardRendererData_set_opaqueLayerMask__;
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
  ;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
  local_31 = param_2 & 1;
  local_40 = param_3;
  local_30 = param_1;
  if ((CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
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
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_GetPortV6__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_ContainsKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_PipelineCallback__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_QueueOrCreateDataConection__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Key__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__);
    CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  local_50 = 0;
  local_58 = (Il2CppObject *)0x0;
  local_60 = (Il2CppObject *)0x0;
  local_64 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_90);
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                        ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F *)
                         local_30,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(local_168,0);
  local_169 = local_169 & 1;
  if (local_169 == 0) {
    local_1a8 = (Il2CppObject *)
                CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                          ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F *
                           )local_30,(MethodInfo *)0x0);
    NullCheck(local_1a8);
    bVar11 = VirtualFuncInvoker0<bool>::Invoke(0x47,local_1a8);
    local_1b5 = bVar11 & 1;
    if ((bVar11 & 1) == 0) {
      local_1f0 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                            ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                              *)local_30,(MethodInfo *)0x0);
      if (local_1f0 == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        local_1f8 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
        local_1f9 = local_31 & 1;
        if (local_1f9 == 0) {
          local_c8 = *(undefined8 *)Method_System_Net_FtpControlStream_GetPortV6__;
          local_c0 = local_1f8;
        }
        else {
          local_c8 = *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_ContainsKey__
          ;
          local_b8 = local_1f8;
        }
        local_d0 = local_1f8;
        local_208 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                      ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                        *)local_30,(MethodInfo *)0x0);
        NullCheck(local_208);
        local_210 = Type_get_NameOrDefault_mA66279601E5D9042F465DD802D3202CC3099AF1C(local_208,0);
        local_48 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                             (local_d0,local_c8,local_210,0);
      }
      else {
        local_220 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                              ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                *)local_30,(MethodInfo *)0x0);
        local_228 = *(undefined8 *)
                     Method_System_Collections_Generic_HashSet<IXRGroupMember>_Contains__;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_238 = local_228;
        local_230 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_228,0);
        bVar11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(local_220,local_230,0);
        local_239 = bVar11 & 1;
        if ((bVar11 & 1) == 0) {
          local_260 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                  *)local_30,(MethodInfo *)0x0);
          local_268 = *(undefined8 *)
                       Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__
          ;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          local_278 = local_268;
          local_270 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_268,0);
          bVar11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(local_260,local_270,0)
          ;
          local_279 = bVar11 & 1;
          if ((bVar11 & 1) == 0) {
            local_2a0 = CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                  ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                    *)local_30,(MethodInfo *)0x0);
            local_2a8 = *(undefined8 *)Method_System_Net_FtpControlStream_GetPortV4__;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
            local_2b8 = local_2a8;
            local_2b0 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                                  (local_2a8,0);
            bVar11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC
                               (local_2a0,local_2b0,0);
            local_2b9 = bVar11 & 1;
            if ((bVar11 & 1) == 0) {
              local_2e8 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                            ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                              *)local_30,(MethodInfo *)0x0);
              NullCheck(local_2e8);
              bVar11 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(local_2e8,0);
              local_2e9 = bVar11 & 1;
              if ((bVar11 & 1) == 0) {
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                local_160 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                      (0);
                if ((local_31 & 1) == 0) {
                  local_158 = *(undefined8 *)puVar7;
                  local_150 = local_160;
                }
                else {
                  local_158 = *(undefined8 *)puVar3;
                  local_148 = local_160;
                }
                uVar13 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                   ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                     *)local_30,(MethodInfo *)0x0);
                pvVar14 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                            ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                              *)local_30,(MethodInfo *)0x0);
                NullCheck(pvVar14);
                uVar15 = Type_get_NameOrDefault_mA66279601E5D9042F465DD802D3202CC3099AF1C(pvVar14,0)
                ;
                local_48 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56
                                     (local_160,local_158,uVar13,uVar15,0);
              }
              else {
                local_50 = 0;
                local_2f8 = (Il2CppObject *)
                            CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                      ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                        *)local_30,(MethodInfo *)0x0);
                local_58 = (Il2CppObject *)IsInst(local_2f8,*(Il2CppClass **)puVar6);
                local_300 = (Il2CppObject *)
                            CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                      ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                        *)local_30,(MethodInfo *)0x0);
                NullCheck(local_300);
                local_308 = (Il2CppObject *)VirtualFuncInvoker0<Type_t*>::Invoke(0x30,local_300);
                local_60 = local_308;
                il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                local_310 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                      (0);
                local_318 = local_60;
                NullCheck(local_60);
                bVar11 = VirtualFuncInvoker0<bool>::Invoke(0x47,local_318);
                local_319 = bVar11 & 1;
                if ((bVar11 & 1) == 0) {
                  local_e8 = *(undefined8 *)puVar8;
                  local_f0 = local_310;
                  local_328 = local_60;
                  NullCheck(local_60);
                  local_330 = Type_get_NameOrDefault_mA66279601E5D9042F465DD802D3202CC3099AF1C
                                        (local_328,0);
                  local_100 = local_e8;
                  local_108 = local_f0;
                  local_f8 = local_330;
                }
                else {
                  local_d8 = *(undefined8 *)puVar8;
                  local_e0 = local_310;
                  local_338 = local_60;
                  NullCheck(local_60);
                  local_340 = Type_get_FullNameOrDefault_m34768A4C7E7D23D93954F24BDD741463FCEEE8B4
                                        (local_338,0);
                  local_100 = local_d8;
                  local_108 = local_e0;
                  local_f8 = local_340;
                }
                local_348 = local_58;
                NullCheck(local_58);
                local_350 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar5,local_348);
                local_34c = local_350;
                uVar13 = Box(*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                             ,&local_350);
                local_50 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56
                                     (local_108,local_100,local_f8,uVar13,0);
                local_64 = 0;
                while( true ) {
                  pIVar10 = local_58;
                  iVar9 = local_64;
                  NullCheck(local_58);
                  iVar12 = InterfaceFuncInvoker0<int>::Invoke(0,*(Il2CppClass **)puVar5,pIVar10);
                  uVar13 = local_50;
                  if (iVar12 <= iVar9) break;
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
                  local_138 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                        (0);
                  pIVar10 = local_58;
                  iVar9 = local_64;
                  if (local_64 == 0) {
                    local_118 = uVar13;
                    local_130 = *(undefined8 *)puVar3;
                    local_110 = local_138;
                  }
                  else {
                    local_128 = uVar13;
                    local_130 = *(undefined8 *)
                                 Method_System_Collections_Generic_KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>_get_Key__
                    ;
                    local_120 = local_138;
                  }
                  local_140 = uVar13;
                  NullCheck(local_58);
                  auVar16 = InterfaceFuncInvoker1<CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F,int>
                            ::Invoke(0,*(Il2CppClass **)puVar6,pIVar10,iVar9);
                  pIVar10 = local_60;
                  uVar13 = *(undefined8 *)
                            Method_System_Collections_Generic_List<Instruction>_get_Item__;
                  local_80 = auVar16;
                  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
                  uVar13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                                     (uVar13,0);
                  bVar11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172
                                     (pIVar10,uVar13,0);
                  uVar13 = CustomAttributeTypedArgument_ToString_m9B974C3EFAEC6FC2336E3B841495E1985AEFF229
                                     (local_80,bVar11 & 1,0);
                  uVar13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                                     (local_138,local_130,uVar13,0);
                  local_50 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                                       (local_140,uVar13,0);
                  local_64 = il2cpp_codegen_add<int,int>(local_64,1);
                }
                local_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                                     (local_50,*(undefined8 *)
                                                Method_System_Net_FtpControlStream_QueueOrCreateFtpDataStream__
                                      ,0);
              }
            }
            else {
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
              local_2c8 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5
                                    (0);
              local_2d0 = (Il2CppObject *)
                          CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                    ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                      *)local_30,(MethodInfo *)0x0);
              pvVar14 = (void *)CastclassClass(local_2d0,*(Il2CppClass **)puVar1);
              NullCheck(pvVar14);
              uVar13 = CastclassClass(local_2d0,*(Il2CppClass **)puVar1);
              local_2d8 = Type_get_FullNameOrDefault_m34768A4C7E7D23D93954F24BDD741463FCEEE8B4
                                    (uVar13,0);
              local_48 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                                   (local_2c8,
                                    *(undefined8 *)
                                     Method_System_Net_FtpControlStream_QueueOrCreateDataConection__
                                    ,local_2d8,0);
            }
          }
          else {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            local_288 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
            local_290 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                  ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                    *)local_30,(MethodInfo *)0x0);
            local_48 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                                 (local_288,
                                  *(undefined8 *)
                                   Method_System_Net_FtpControlStream_PipelineCallback__,local_290,0
                                 );
          }
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          local_248 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
          local_250 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                                ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                  *)local_30,(MethodInfo *)0x0);
          local_48 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744
                               (local_248,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__
                                ,local_250,0);
        }
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_1c0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(0);
      local_1c1 = local_31 & 1;
      if (local_1c1 == 0) {
        local_a8 = *(undefined8 *)puVar7;
        local_a0 = local_1c0;
      }
      else {
        local_a8 = *(undefined8 *)puVar3;
        local_98 = local_1c0;
      }
      local_b0 = local_1c0;
      local_1d0 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline
                            ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                              *)local_30,(MethodInfo *)0x0);
      local_1d8 = (void *)CustomAttributeTypedArgument_get_ArgumentType_mB4C26597EC39B2BA19868FA53EA666C3FCE73AF5_inline
                                    ((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F
                                      *)local_30,(MethodInfo *)0x0);
      NullCheck(local_1d8);
      local_1e0 = Type_get_FullNameOrDefault_m34768A4C7E7D23D93954F24BDD741463FCEEE8B4(local_1d8,0);
      local_48 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56
                           (local_b0,local_a8,local_1d0,local_1e0,0);
    }
    local_28 = local_48;
  }
  else {
    uStack_188 = local_30[1];
    local_190 = *local_30;
    local_180 = local_190;
    uStack_178 = uStack_188;
    local_198 = Box(*(Il2CppClass **)puVar4,&local_190);
    local_28 = ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D(local_198,0);
  }
  return local_28;
}


