/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.XRPass$$UpdateView
ENTRY_POINT: 0234ef6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 288
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;strong_file_logging_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02350878) */
/* WARNING: Removing unreachable block (ram,0x0235006c) */
/* WARNING: Removing unreachable block (ram,0x023507dc) */

undefined8 UnityEngine_Rendering_Universal_XRPass__UpdateView(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined4 uVar26;
  undefined4 uVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  int iStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 auStack_a8 [2];
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  undefined *puVar25;
  
  puVar25 = Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
  ;
  if ((DAT_03781d25 & 1) == 0) {
    thunk_FUN_00d48444(System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5269);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(StringLiteral_11630);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    thunk_FUN_00d48444(StringLiteral_8681);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                      );
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14358);
    thunk_FUN_00d48444(StringLiteral_12114);
    thunk_FUN_00d48444(System_Collections_Generic_List<ulong>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__);
    thunk_FUN_00d48444(StringLiteral_14183);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CalculatePropertyValues__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb5c8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<GameObject>__);
    thunk_FUN_00d48444(Method_System_Decimal_ToInt64__);
    thunk_FUN_00d48444(StringLiteral_2051);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_SByte_Parse__);
    thunk_FUN_00d48444(UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0610);
    thunk_FUN_00d48444(ContextMenuItemList_<>c__DisplayClass4_0_TypeInfo);
    thunk_FUN_00d48444(
                      Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_4424);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_2811);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11168);
    thunk_FUN_00d48444(StringLiteral_2447);
    thunk_FUN_00d48444(System_Collections_IComparer_TypeInfo);
    thunk_FUN_00d48444(Mono_X509PalImpl_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_Add__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(PTR_DAT_033eec38);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(
                      Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector2>_Equals__);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(StringLiteral_10196);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_4463);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11831);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<Quaternion>_get_Value__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_16__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                      );
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    thunk_FUN_00d48444(PTR_DAT_033f4958);
    DAT_03781d25 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  auStack_110._0_8_ = 0;
  auStack_110._8_8_ = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar25);
  puVar25 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar11 != 0) {
    FUN_017b46ec(lVar11,0);
    if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_0268b4e0(param_1,0,0);
    puVar6 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
    puVar25 = PTR_DAT_033f4958;
    if ((uVar12 & 1) == 0) {
      if (param_2 != 0) {
        if (0x1ff < param_3 - 1U) {
          if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_022f4428(*(undefined8 *)puVar25,0);
          return 0;
        }
        if (param_1 != 0) {
          uVar13 = FUN_0230bd48(param_1,0,0);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
          puVar25 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
          if (lVar14 != 0) {
            FUN_01320f6c(lVar14,uVar13,*(undefined8 *)StringLiteral_9754);
            lVar15 = FUN_0230fea8(param_1,0);
            lVar16 = FUN_0230ffd0(param_1,0);
            lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar25);
            puVar7 = Method_UnityEngine_Object_Instantiate<GameObject>__;
            puVar6 = 
            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CalculatePropertyValues__
            ;
            puVar25 = System_Collections_Generic_List<ulong>_TypeInfo;
            if (lVar17 != 0) {
              FUN_01320e50(lVar17,*(undefined8 *)PTR_DAT_033f6e48);
              uVar13 = FUN_022f8518(param_1,param_2,0);
              uVar13 = FUN_010d96e0(uVar13,*(undefined8 *)puVar6);
              lVar18 = FUN_010dfe04(uVar13,*(undefined8 *)puVar7);
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar25);
              if (lVar19 != 0) {
                FUN_01298da0(lVar19,*(undefined8 *)StringLiteral_8681);
                if (lVar15 != 0) {
                  iVar8 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                                    (lVar15,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                                    );
                  if (lVar18 != 0) {
                    FUN_01323390(lVar18,&lStack_160,*(undefined8 *)StringLiteral_2447);
                    uStack_c8 = uStack_158;
                    lStack_d0 = lStack_160;
                    uStack_c0 = uStack_150;
                    iStack_1c8 = iVar8;
                    while( true ) {
                      uVar12 = FUN_012b894c(&lStack_d0,
                                            *(undefined8 *)
                                             UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                           );
                      if ((uVar12 & 1) == 0) break;
                      uVar13 = FUN_00ca14c4(&lStack_d0,
                                            *(undefined8 *)
                                             ContextMenuItemList_<>c__DisplayClass4_0_TypeInfo);
                      uVar12 = UnityEngine_Rendering_Universal_RendererLighting__DisableAllKeywords
                                         (param_1,uVar13,0);
                      lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo
                                                 );
                      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01320ebc(lVar18,param_3,*(undefined8 *)PTR_DAT_033eec38);
                      for (iVar29 = 1;
                          puVar25 = 
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                          , iVar29 + -1 < param_3; iVar29 = iVar29 + 1) {
                        FUN_0132138c(lVar14,uVar12 & 0xffffffff,&uStack_180,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                    );
                        uVar13 = uStack_180;
                        FUN_0132138c(lVar14,uVar12 >> 0x20,&uStack_180,*(undefined8 *)puVar25);
                        uVar13 = FUN_0233bc34((float)iVar29 / ((float)param_3 + 1.0),uVar13,
                                              uStack_180,0);
                        FUN_00ca0af8(lVar18,uVar13,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                      }
                      if (*(int *)(*(long *)StringLiteral_14183 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar20 = FUN_0234e084(param_1,uVar12);
                      puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                      uVar26 = (undefined4)uVar12;
                      uStack_180._0_4_ = uVar26;
                      FUN_01299bc0(lVar15,&uStack_180,&uStack_b4,
                                   *(undefined8 *)
                                    Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                      uVar1 = uStack_b4;
                      uVar27 = (undefined4)(uVar12 >> 0x20);
                      uStack_180 = CONCAT44(uStack_180._4_4_,uVar27);
                      FUN_01299bc0(lVar15,&uStack_180,&uStack_b4,*(undefined8 *)puVar25);
                      uVar2 = uStack_b4;
                      if (*(int *)(*(long *)
                                    Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_022f6fa4(&uStack_d8,uVar1,uVar2,0);
                      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01323390(lVar20,&lStack_160,*(undefined8 *)StringLiteral_11168);
                      uStack_f8 = uStack_158;
                      lStack_100 = lStack_160;
                      uStack_e8 = uStack_148;
                      uStack_f0 = uStack_150;
                      while( true ) {
                        uVar12 = FUN_012b894c(&lStack_100,*(undefined8 *)PTR_DAT_033f0610);
                        if ((uVar12 & 1) == 0) break;
                        auVar32 = FUN_00ca15cc(&lStack_100,
                                               *(undefined8 *)
                                                Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                              );
                        auStack_110 = auVar32;
                        lVar20 = FUN_00ca13c0(auStack_110,
                                              *(undefined8 *)
                                               Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                                             );
                        uVar12 = FUN_0129eff4(lVar19,lVar20,&lStack_118,
                                              *(undefined8 *)StringLiteral_11630);
                        if ((uVar12 & 1) == 0) {
                          lVar21 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_022fb2d8(lVar21,0);
                          lStack_118 = lVar21;
                          uVar13 = FUN_00da4fb8(*(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                                ,0);
                          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          uVar1 = *(undefined4 *)(lVar20 + 0x48);
                          uStack_188 = *(undefined8 *)(lVar20 + 0x34);
                          uStack_190 = *(undefined8 *)(lVar20 + 0x2c);
                          uStack_198 = *(undefined8 *)(lVar20 + 0x24);
                          lStack_1a0 = *(long *)(lVar20 + 0x1c);
                          uStack_178 = 0;
                          uStack_180 = 0;
                          uStack_168 = 0;
                          uStack_170 = 0;
                          lStack_160 = lStack_1a0;
                          uStack_158 = uStack_198;
                          uStack_150 = uStack_190;
                          uStack_148 = uStack_188;
                          FUN_022eff30(&uStack_180,&lStack_1a0,0);
                          uVar2 = *(undefined4 *)(lVar20 + 0x18);
                          uVar3 = *(undefined4 *)(lVar20 + 0x54);
                          cVar4 = *(char *)(lVar20 + 0x4c);
                          lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                  );
                          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          uStack_1b8 = uStack_178;
                          uStack_1c0 = uStack_180;
                          uStack_1a8 = uStack_168;
                          uStack_1b0 = uStack_170;
                          FUN_022f986c(lVar22,uVar13,uVar1,&uStack_1c0,uVar2,uVar3,0xffffffff,
                                       cVar4 != '\0',0);
                          lVar23 = lStack_118;
                          *(long *)(lVar21 + 0x10) = lVar22;
                          uVar13 = FUN_022f8990(lVar20,0);
                          uVar13 = FUN_010b973c(lVar14,uVar13,
                                                *(undefined8 *)
                                                 System_Linq_Expressions_InstanceMethodCallExpression2_TypeInfo
                                               );
                          lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo
                                                  );
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320f6c(lVar21,uVar13,*(undefined8 *)StringLiteral_9754);
                          lVar22 = lStack_118;
                          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          *(long *)(lVar23 + 0x18) = lVar21;
                          lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320e50(lVar21,*(undefined8 *)PTR_DAT_033f6e48);
                          lVar23 = lStack_118;
                          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          *(long *)(lVar22 + 0x20) = lVar21;
                          lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320e50(lVar21,*(undefined8 *)PTR_DAT_033f6e48);
                          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          *(long *)(lVar23 + 0x28) = lVar21;
                          lVar21 = FUN_022f8990(lVar20,0);
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (0 < (int)*(ulong *)(lVar21 + 0x18)) {
                            uVar12 = 0;
                            uVar28 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                            do {
                              if (uVar28 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              uVar1 = *(undefined4 *)(lVar21 + 0x20 + uVar12 * 4);
                              uStack_b0 = uVar1;
                              uVar28 = FUN_0129eff4(lVar15,&uStack_b0,(long)&uStack_120 + 4,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__)
                              ;
                              if ((uVar28 & 1) != 0) {
                                if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                if (*(long *)(lStack_118 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                FUN_00ac20f0(*(long *)(lStack_118 + 0x20),uStack_120._4_4_,
                                             *(undefined8 *)StringLiteral_4747);
                              }
                              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              uStack_ac = uVar1;
                              uVar28 = FUN_0129eff4(lVar16,&uStack_ac,(long)&uStack_120 + 4,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__)
                              ;
                              if ((uVar28 & 1) != 0) {
                                if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                if (*(long *)(lStack_118 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                FUN_00ac20f0(*(long *)(lStack_118 + 0x28),uStack_120._4_4_,
                                             *(undefined8 *)StringLiteral_4747);
                              }
                              uVar28 = (ulong)*(uint *)(lVar21 + 0x18);
                              uVar12 = uVar12 + 1;
                            } while ((long)uVar12 < (long)(int)*(uint *)(lVar21 + 0x18));
                          }
                          uVar13 = FUN_022f8990(lVar20,0);
                          FUN_01322050(lVar17,uVar13,*(undefined8 *)StringLiteral_2811);
                          FUN_0129a054(lVar19,lVar20,lStack_118,*(undefined8 *)StringLiteral_5269);
                          lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo
                                                  );
                          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320e50(lVar21,*(undefined8 *)PTR_DAT_033ee588);
                          lVar22 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320e50(lVar22,*(undefined8 *)PTR_DAT_033f6e48);
                          lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01320e50(lVar23,*(undefined8 *)PTR_DAT_033f6e48);
                          if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0)
                              == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar20 = FUN_0233dbd8(lVar20,0);
                          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (0 < *(int *)(lVar20 + 0x18)) {
                            iVar29 = 0;
                            do {
                              puVar25 = Method_System_Collections_Generic_List<Grabbable>_Contains__
                              ;
                              FUN_0132138c(lVar20,iVar29,auStack_a8,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<Grabbable>_Contains__
                                          );
                              uVar1 = auStack_a8[0];
                              FUN_0132138c(lVar20,iVar29,auStack_a0,*(undefined8 *)puVar25);
                              uVar2 = uStack_9c;
                              FUN_0132138c(lVar14,uVar1,&uStack_98,
                                           *(undefined8 *)
                                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                          );
                              FUN_00ca0af8(lVar21,uStack_98,*(undefined8 *)OVRManager_XrApi_TypeInfo
                                          );
                              uStack_90 = uVar1;
                              uVar12 = FUN_0129eff4(lVar15,&uStack_90,&uStack_120,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__)
                              ;
                              if ((uVar12 & 1) != 0) {
                                FUN_00ac20f0(lVar22,uStack_120 & 0xffffffff,
                                             *(undefined8 *)StringLiteral_4747);
                              }
                              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              iStack_8c = iVar29;
                              uVar12 = FUN_0129eff4(lVar16,&iStack_8c,&uStack_120,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__)
                              ;
                              if ((uVar12 & 1) != 0) {
                                if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                if (*(long *)(lStack_118 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                FUN_00ac20f0(*(long *)(lStack_118 + 0x28),uStack_120 & 0xffffffff,
                                             *(undefined8 *)StringLiteral_4747);
                              }
                              iVar30 = (int)uStack_d8;
                              uStack_84 = uVar1;
                              FUN_01299bc0(lVar15,&uStack_84,&iStack_88,
                                           *(undefined8 *)
                                            Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                              if (iVar30 == iStack_88) {
                                iVar30 = uStack_d8._4_4_;
                                uStack_7c = uVar2;
                                FUN_01299bc0(lVar15,&uStack_7c,&iStack_80,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                if (iVar30 != iStack_80) goto LAB_0234ff44;
                                iVar30 = 0;
                                do {
                                  FUN_0132138c(lVar18,iVar30,&uStack_78,
                                               *(undefined8 *)
                                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                              );
                                  FUN_00ca0af8(lVar21,uStack_78,
                                               *(undefined8 *)OVRManager_XrApi_TypeInfo);
                                  puVar25 = StringLiteral_4747;
                                  FUN_00ac20f0(lVar22,iStack_1c8 + iVar30,
                                               *(undefined8 *)StringLiteral_4747);
                                  FUN_00ac20f0(lVar23,0xffffffff,*(undefined8 *)puVar25);
                                  iVar30 = iVar30 + 1;
                                } while (param_3 != iVar30);
                              }
                              else {
LAB_0234ff44:
                                iVar30 = (int)uStack_d8;
                                uStack_6c = uVar2;
                                FUN_01299bc0(lVar15,&uStack_6c,&iStack_70,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                if (iVar30 == iStack_70) {
                                  iVar30 = uStack_d8._4_4_;
                                  uStack_64 = uVar1;
                                  FUN_01299bc0(lVar15,&uStack_64,&iStack_68,
                                               *(undefined8 *)
                                                Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                                  ;
                                  uVar31 = param_3 - 1U;
                                  if (iVar30 == iStack_68) {
                                    for (; 0 < (int)(uVar31 + 1); uVar31 = uVar31 - 1) {
                                      FUN_0132138c(lVar18,uVar31,&uStack_60,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                                  );
                                      FUN_00ca0af8(lVar21,uStack_60,
                                                   *(undefined8 *)OVRManager_XrApi_TypeInfo);
                                      puVar25 = StringLiteral_4747;
                                      FUN_00ac20f0(lVar22,iStack_1c8 + uVar31,
                                                   *(undefined8 *)StringLiteral_4747);
                                      FUN_00ac20f0(lVar23,0xffffffff,*(undefined8 *)puVar25);
                                    }
                                  }
                                }
                              }
                              iVar29 = iVar29 + 1;
                            } while (iVar29 < *(int *)(lVar20 + 0x18));
                          }
                          if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          *(long *)(lStack_118 + 0x18) = lVar21;
                          *(long *)(lStack_118 + 0x20) = lVar22;
                          *(long *)(lStack_118 + 0x28) = lVar23;
                        }
                        else {
                          if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar20 = *(long *)(lStack_118 + 0x18);
                          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar21 = *(long *)(lStack_118 + 0x20);
                          lVar22 = *(long *)(lStack_118 + 0x28);
                          if (0 < *(int *)(lVar20 + 0x18)) {
                            iVar29 = 0;
                            do {
                              FUN_0132138c(lVar20,iVar29,&uStack_58,
                                           *(undefined8 *)
                                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                          );
                              iVar9 = FUN_01323730(lVar14,uStack_58,
                                                   *(undefined8 *)
                                                    System_Collections_IComparer_TypeInfo);
                              iVar10 = *(int *)(lVar20 + 0x18);
                              iVar30 = iVar29 + 1;
                              iVar5 = 0;
                              if (iVar10 != 0) {
                                iVar5 = iVar30 / iVar10;
                              }
                              FUN_0132138c(lVar20,iVar30 - iVar5 * iVar10,&uStack_50,
                                           *(undefined8 *)
                                            Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                          );
                              iVar10 = FUN_01323730(lVar14,uStack_50,
                                                    *(undefined8 *)
                                                     System_Collections_IComparer_TypeInfo);
                              puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                              if ((iVar9 != -1) && (iVar10 != -1)) {
                                iStack_40 = iVar9;
                                FUN_01299bc0(lVar15,&iStack_40,&iStack_44,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                iVar5 = iStack_44;
                                uStack_38 = uVar26;
                                FUN_01299bc0(lVar15,&uStack_38,&iStack_3c,*(undefined8 *)puVar25);
                                puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                                if (iVar5 == iStack_3c) {
                                  iStack_30 = iVar10;
                                  FUN_01299bc0(lVar15,&iStack_30,&iStack_34,
                                               *(undefined8 *)
                                                Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                                  ;
                                  iVar5 = iStack_34;
                                  uStack_28 = uVar27;
                                  FUN_01299bc0(lVar15,&uStack_28,&iStack_2c,*(undefined8 *)puVar25);
                                  if (iVar5 == iStack_2c) {
                                    FUN_01323e24(lVar20,iVar30,lVar18,
                                                 *(undefined8 *)Mono_X509PalImpl_TypeInfo);
                                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    iVar10 = 0;
                                    do {
                                      iStack_24 = iStack_1c8 + iVar10;
                                      FUN_01323a14(lVar21,iVar29 + iVar10 + 1,&iStack_24,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                                  );
                                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      FUN_00ac20f0(lVar22,0xffffffff,
                                                   *(undefined8 *)StringLiteral_4747);
                                      iVar10 = iVar10 + 1;
                                    } while (param_3 != iVar10);
                                    goto LAB_0234f9d0;
                                  }
                                }
                                puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                                iStack_1c = iVar9;
                                FUN_01299bc0(lVar15,&iStack_1c,&iStack_20,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                iVar29 = iStack_20;
                                uStack_14 = uVar27;
                                FUN_01299bc0(lVar15,&uStack_14,&iStack_18,*(undefined8 *)puVar25);
                                puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                                if (iVar29 == iStack_18) {
                                  iStack_c = iVar10;
                                  FUN_01299bc0(lVar15,&iStack_c,&iStack_10,
                                               *(undefined8 *)
                                                Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                                  ;
                                  iVar29 = iStack_10;
                                  uStack_4 = uVar26;
                                  FUN_01299bc0(lVar15,&uStack_4,&iStack_8,*(undefined8 *)puVar25);
                                  if (iVar29 == iStack_8) {
                                    FUN_01324d60(lVar18,*(undefined8 *)
                                                                                                                  
                                                  Method_System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_Add__
                                                );
                                    FUN_01323e24(lVar20,iVar30,lVar18,
                                                 *(undefined8 *)Mono_X509PalImpl_TypeInfo);
                                    iVar29 = param_3;
                                    while (0 < iVar29) {
                                      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      iStack0000000000000008 = iStack_1c8 + iVar29 + -1;
                                      FUN_01323a14(lVar21,iVar30,&stack0x00000008,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                                  );
                                      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      FUN_00ac20f0(lVar22,0xffffffff,
                                                   *(undefined8 *)StringLiteral_4747);
                                      iVar29 = iVar29 + -1;
                                    }
                                  }
                                }
                              }
LAB_0234f9d0:
                              iVar29 = iVar30;
                            } while (iVar30 < *(int *)(lVar20 + 0x18));
                          }
                          if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          *(long *)(lStack_118 + 0x18) = lVar20;
                          *(long *)(lStack_118 + 0x20) = lVar21;
                          *(long *)(lStack_118 + 0x28) = lVar22;
                        }
                      }
                      FUN_012b8948(&lStack_100,
                                   *(undefined8 *)
                                    Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                                  );
                      iStack_1c8 = iStack_1c8 + param_3;
                    }
                    FUN_012b8948(&lStack_d0,*(undefined8 *)Method_System_SByte_Parse__);
                    uVar13 = FUN_012998a8(lVar19,*(undefined8 *)StringLiteral_14358);
                    lVar18 = FUN_010dfe04(uVar13,*(undefined8 *)StringLiteral_2051);
                    uVar13 = FUN_01299a34(lVar19,*(undefined8 *)StringLiteral_12114);
                    lVar19 = FUN_010dfe04(uVar13,*(undefined8 *)Method_System_Decimal_ToInt64__);
                    lVar20 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11831);
                    if (lVar20 != 0) {
                      FUN_01320e50(lVar20,*(undefined8 *)
                                           Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__0__
                                  );
                      puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                      if (lVar18 != 0) {
                        if (0 < *(int *)(lVar18 + 0x18)) {
                          iVar29 = 0;
                          do {
                            FUN_0132138c(lVar18,iVar29,&lStack_160,
                                         *(undefined8 *)StringLiteral_10196);
                            lVar21 = lStack_160;
                            if (lVar19 == 0) goto LAB_02350870;
                            FUN_0132138c(lVar19,iVar29,&lStack_160,*(undefined8 *)StringLiteral_4463
                                        );
                            lVar22 = lStack_160;
                            if (lStack_160 == 0) goto LAB_02350870;
                            iVar30 = *(int *)(lVar14 + 0x18);
                            uVar12 = FUN_0237620c(*(undefined8 *)(lStack_160 + 0x18),&uStack_128,0,0
                                                  ,0);
                            uVar13 = uStack_128;
                            if ((uVar12 & 1) != 0) {
                              lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                      
                                                  Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                                  );
                              if (lVar23 == 0) goto LAB_02350870;
                              FUN_022f9708(lVar23,uVar13,0);
                              *(long *)(lVar22 + 0x10) = lVar23;
                              puVar6 = 
                              Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                              ;
                              if (lVar21 == 0) goto LAB_02350870;
                              *(undefined4 *)(lVar23 + 0x48) = *(undefined4 *)(lVar21 + 0x48);
                              FUN_022fa0bc(lVar23,iVar30,0);
                              FUN_022f9954(lVar21,*(undefined8 *)(lVar22 + 0x10),0);
                              lVar23 = *(long *)(lVar22 + 0x18);
                              if (lVar23 == 0) goto LAB_02350870;
                              iVar10 = 0;
                              while (iVar5 = *(int *)(lVar23 + 0x18), iVar10 < iVar5) {
                                if (*(long *)(lVar22 + 0x20) == 0) goto LAB_02350870;
                                FUN_0132138c(*(long *)(lVar22 + 0x20),iVar10,&lStack_160,
                                             *(undefined8 *)puVar6);
                                uStack000000000000000c = (undefined4)lStack_160;
                                lStack_160 = CONCAT44(lStack_160._4_4_,iVar30 + iVar10);
                                FUN_0129a054(lVar15,&lStack_160,(long)&stack0x00000008 + 4,
                                             *(undefined8 *)
                                              Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                                lVar23 = *(long *)(lVar22 + 0x18);
                                iVar10 = iVar10 + 1;
                                if (lVar23 == 0) goto LAB_02350870;
                              }
                              if (*(long *)(lVar22 + 0x28) == 0) goto LAB_02350870;
                              if ((*(int *)(*(long *)(lVar22 + 0x28) + 0x18) == iVar5) &&
                                 (0 < iVar5)) {
                                iVar10 = 0;
                                do {
                                  if (*(long *)(lVar22 + 0x28) == 0) goto LAB_02350870;
                                  FUN_0132138c(*(long *)(lVar22 + 0x28),iVar10,&lStack_160,
                                               *(undefined8 *)puVar6);
                                  if (lVar16 == 0) goto LAB_02350870;
                                  uStack000000000000000c = (undefined4)lStack_160;
                                  lStack_160 = CONCAT44(lStack_160._4_4_,iVar30 + iVar10);
                                  FUN_0129a054(lVar16,&lStack_160,(long)&stack0x00000008 + 4,
                                               *(undefined8 *)
                                                Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                                  lVar23 = *(long *)(lVar22 + 0x18);
                                  if (lVar23 == 0) goto LAB_02350870;
                                  iVar10 = iVar10 + 1;
                                } while (iVar10 < *(int *)(lVar23 + 0x18));
                              }
                              FUN_01322050(lVar14,lVar23,
                                           *(undefined8 *)
                                            Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
                              lVar21 = FUN_022f8edc(lVar21,0);
                              if (lVar21 == 0) goto LAB_02350870;
                              if (0 < (int)*(ulong *)(lVar21 + 0x18)) {
                                uVar12 = 0;
                                uVar28 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                                do {
                                  if (uVar28 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5194();
                                  }
                                  uVar13 = *(undefined8 *)(lVar21 + 0x20 + uVar12 * 8);
                                  lStack_160._0_4_ = (int)uVar13;
                                  FUN_01299bc0(lVar15,&lStack_160,(long)&stack0x00000008 + 4,
                                               *(undefined8 *)puVar25);
                                  uVar1 = uStack000000000000000c;
                                  lStack_160 = CONCAT44(lStack_160._4_4_,
                                                        (int)((ulong)uVar13 >> 0x20));
                                  FUN_01299bc0(lVar15,&lStack_160,(long)&stack0x00000008 + 4,
                                               *(undefined8 *)puVar25);
                                  lStack_160 = 0;
                                  FUN_022f6fa4(&lStack_160,uVar1,uStack000000000000000c,0);
                                  FUN_022f7b50(&uStack_138,lStack_160,uVar13,0);
                                  if ((iVar8 <= (int)uStack_130) ||
                                     (iVar8 <= (int)((ulong)uStack_130 >> 0x20))) {
                                    FUN_00ca16d4(lVar20,uStack_138,uStack_130,
                                                 *(undefined8 *)
                                                  System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo
                                                );
                                  }
                                  uVar28 = (ulong)*(uint *)(lVar21 + 0x18);
                                  uVar12 = uVar12 + 1;
                                } while ((long)uVar12 < (long)(int)*(uint *)(lVar21 + 0x18));
                              }
                            }
                            iVar29 = iVar29 + 1;
                          } while (iVar29 < *(int *)(lVar18 + 0x18));
                        }
                        uVar13 = FUN_010d96e0(lVar17,*(undefined8 *)PTR_DAT_033eb5c8);
                        lVar17 = FUN_010dfe04(uVar13,*(undefined8 *)
                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                             );
                        if (lVar17 != 0) {
                          *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar17 + 0x18);
                          uVar13 = FUN_010d96e0(lVar20,*(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                                               );
                          lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_4424);
                          if (lVar18 != 0) {
                            FUN_012d239c(lVar18,lVar11,
                                         *(undefined8 *)
                                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_16__
                                         ,0);
                            uVar13 = FUN_010dcdb8(uVar13,lVar18,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__
                                                 );
                            uVar13 = FUN_010dfe04(uVar13,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Object_Instantiate<GameObject>__
                                                 );
                            FUN_02310a38(param_1,lVar14,0,0);
                            FUN_0230ff4c(param_1,lVar15,0);
                            FUN_02310070(param_1,lVar16,0);
                            FUN_02350998(param_1,lVar17);
                            return uVar13;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_02350870;
      }
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar25 = Method_SubtitleManager_<>c_<RemoveEmptyLines>b__37_0__;
    }
    else {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar13 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar25 = 
      Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
    }
    uVar24 = thunk_FUN_00d48444(puVar25);
    FUN_016ec5b8(uVar13,uVar24,0);
    uVar24 = thunk_FUN_00d48444(System_Linq_Expressions_MethodCallExpression4_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar24);
  }
LAB_02350870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


