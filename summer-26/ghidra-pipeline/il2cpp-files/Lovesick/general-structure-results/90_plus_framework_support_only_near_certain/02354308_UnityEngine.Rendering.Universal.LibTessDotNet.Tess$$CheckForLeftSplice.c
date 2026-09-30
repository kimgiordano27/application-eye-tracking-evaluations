/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.Tess$$CheckForLeftSplice
ENTRY_POINT: 02354308
PROGRAM: Lovesick-libil2cpp.so
SCORE: 193
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023554c4) */
/* WARNING: Removing unreachable block (ram,0x02355848) */
/* WARNING: Removing unreachable block (ram,0x02354914) */
/* WARNING: Removing unreachable block (ram,0x023551ec) */
/* WARNING: Removing unreachable block (ram,0x023554dc) */
/* WARNING: Removing unreachable block (ram,0x02355394) */
/* WARNING: Removing unreachable block (ram,0x02355468) */
/* WARNING: Removing unreachable block (ram,0x02354570) */
/* WARNING: Removing unreachable block (ram,0x02354574) */
/* WARNING: Removing unreachable block (ram,0x0235512c) */
/* WARNING: Removing unreachable block (ram,0x023542f4) */

undefined8
UnityEngine_Rendering_Universal_LibTessDotNet_Tess__CheckForLeftSplice
          (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x26;
  long lVar17;
  undefined8 *unaff_x28;
  undefined1 auVar18 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  
  puVar4 = StringLiteral_10310;
  if (param_2 == 1) {
    plVar8 = (long *)__cxa_begin_catch();
    lVar17 = *plVar8;
    __cxa_end_catch();
    if (unaff_x26 != (long *)0x0) {
      lVar10 = *unaff_x26;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_023542d8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724();
LAB_023542d8:
      (*(code *)*puVar7)();
    }
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00dbe778(lVar17);
    }
    uVar6 = FUN_0236487c(System_Linq_Expressions_MemberAssignment_TypeInfo);
    return uVar6;
  }
  if (unaff_x26 != (long *)0x0) {
    lVar17 = *unaff_x26;
    uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_10310) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x02355384;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724();
code_r0x02355384:
    (*(code *)*puVar7)();
  }
  if (param_2 != 1) {
    FUN_012b69b0(&stack0x000001d0,
                 *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar8 = (long *)__cxa_begin_catch(param_1);
  lVar17 = *plVar8;
  __cxa_end_catch();
  FUN_012b69b0(&stack0x000001d0,
               *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
  puVar4 = StringLiteral_7647;
  if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar17);
  }
  FUN_0129b5d0();
  puVar3 = Method_System_Array_Empty<WitConfigurationAssetData>__;
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_GSTU_Cell>_get_Current__;
  puVar1 = UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_TypeInfo;
  in_stack_000001a8 = in_stack_00000098;
  in_stack_000001a0 = in_stack_00000090;
  in_stack_000001b8 = in_stack_000000a8;
  in_stack_000001b0 = in_stack_000000a0;
  in_stack_000001c0 = in_stack_000000b0;
  while( true ) {
    uVar12 = FUN_012bf140(&stack0x000001a0,
                          *(undefined8 *)Mono_Security_Cryptography_KeyPairPersistence_TypeInfo);
    if ((uVar12 & 1) == 0) break;
    auVar18 = FUN_00ca1ae0(&stack0x000001a0,*(undefined8 *)PTR_DAT_033f0cb8);
    _in_stack_00000190 = auVar18;
    FUN_00ca1be8(&stack0x00000190,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vdups_lane_s32__);
    lVar17 = FUN_0237bee4();
    if (lVar17 != 0) {
      FUN_00ca11d0(in_stack_00000028,lVar17,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
      if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129b5d0(in_stack_00000188,&stack0x00000090,*(undefined8 *)StringLiteral_12143);
      in_stack_00000168 = in_stack_00000098;
      in_stack_00000160 = in_stack_00000090;
      in_stack_00000178 = in_stack_000000a8;
      in_stack_00000170 = in_stack_000000a0;
      in_stack_00000180 = in_stack_000000b0;
      while( true ) {
        uVar12 = FUN_012bf140(&stack0x00000160,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Length>__
                             );
        if ((uVar12 & 1) == 0) break;
        auVar18 = FUN_00ca1cf0(&stack0x00000160,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
        _in_stack_00000150 = auVar18;
        FUN_00ca1df8(&stack0x00000150,*(undefined8 *)PTR_DAT_033f5e48);
        uVar6 = FUN_00ca1efc(&stack0x00000150,
                             *(undefined8 *)Method_System_Collections_Generic_List<Purchase>__ctor__
                            );
        in_stack_00000090 = 0;
        in_stack_00000098 = 0;
        FUN_013a23f0(&stack0x00000090,lVar17,uVar6,*(undefined8 *)StringLiteral_5259);
        FUN_010b6ab0(in_stack_00000010,&stack0x0000028c,&stack0x00000290,
                     *(undefined8 *)Method_Meta_Voice_NLayer_Decoder_MpegStreamReader_ReadByte__);
      }
      FUN_012bf83c(&stack0x00000160,
                   *(undefined8 *)Method_System_Collections_Generic_List<VolumeComponent>_RemoveAt__
                  );
    }
  }
  FUN_012bf83c(&stack0x000001a0,
               *(undefined8 *)
                System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator_TypeInfo);
  FUN_022fabf0(in_stack_00000028,in_stack_00000008);
  uVar6 = FUN_012998a8();
  lVar17 = FUN_023563ac(in_stack_00000008,uVar6);
  if (lVar17 != 0) {
    uVar6 = FUN_00da4fb8(*(undefined8 *)
                          System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo,0);
    FUN_0230ffc8(in_stack_00000008,uVar6,0);
    uVar6 = FUN_0232e128(*(undefined8 *)(in_stack_00000008 + 0x50),0);
    FUN_0230fc64(in_stack_00000008,uVar6,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = *(undefined8 *)(in_stack_00000008 + 0x28);
    lVar17 = FUN_0230fea8(in_stack_00000008,0);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<MedleyArcadeDoorRing>_get_Current__
                               );
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshrn_high_n_s16__);
      FUN_0129b5d0(in_stack_00000010,&stack0x00000090,
                   *(undefined8 *)Method_System_Nullable<InputControlScheme>__ctor__);
      in_stack_00000128 = in_stack_00000098;
      in_stack_00000120 = in_stack_00000090;
      in_stack_00000138 = in_stack_000000a8;
      in_stack_00000130 = in_stack_000000a0;
      in_stack_00000140 = in_stack_000000b0;
      while( true ) {
        uVar12 = FUN_012bf140(&stack0x00000120,*(undefined8 *)puVar2);
        if ((uVar12 & 1) == 0) break;
        auVar18 = FUN_00ca2004(&stack0x00000120,*(undefined8 *)puVar1);
        _in_stack_00000110 = auVar18;
        uVar6 = FUN_00ca210c(&stack0x00000110,
                             *(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_laneq_s16__);
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar11 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (lVar14 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar11);
            lVar11 = *(long *)puVar3;
          }
          uVar16 = **(undefined8 **)(lVar11 + 0xb8);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_512);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012d239c(lVar14,uVar16,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_u32__,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar14;
        }
        iVar5 = FUN_010df44c(uVar6,lVar14,
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARMeshManager_OnEnable__);
        if (2 < iVar5) {
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_BandhouseFeedbackManager_<>c_<SetFeedbackShaderData>b__26_0__
                                     );
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012dd38c(lVar11,*(undefined8 *)Method_System_Collections_Generic_List<Edge>_set_Item__
                      );
          lVar14 = FUN_00ca210c(&stack0x00000110,
                                *(undefined8 *)
                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_laneq_s16__);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01323390(lVar14,&stack0x00000090,
                       *(undefined8 *)
                        UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_TypeInfo);
          in_stack_000000f8 = in_stack_00000098;
          in_stack_000000f0 = in_stack_00000090;
          in_stack_00000108 = in_stack_000000a8;
          in_stack_00000100 = in_stack_000000a0;
          while( true ) {
            uVar12 = FUN_012b894c(&stack0x000000f0,
                                  *(undefined8 *)
                                   Method_Newtonsoft_Json_Linq_JsonPath_JPath_ParseOperator__);
            if ((uVar12 & 1) == 0) break;
            auVar18 = FUN_00ca2214(&stack0x000000f0,
                                   *(undefined8 *)
                                    Method_RCG_Lovesick_Powers_Tempo_TempoPower_<>c_<HideEffects>b__24_3__
                                  );
            _in_stack_000000e0 = auVar18;
            lVar14 = FUN_00ca231c(&stack0x000000e0,
                                  *(undefined8 *)
                                   Method_Sirenix_Serialization_ProperBitConverter_ToInt16__);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            iVar5 = 0;
            while( true ) {
              lVar14 = FUN_00ca2420(&stack0x000000e0,*unaff_x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(int *)(lVar14 + 0x18) <= iVar5) break;
              lVar14 = FUN_00ca2420(&stack0x000000e0,*unaff_x28);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132138c(lVar14,iVar5,&stack0x000002a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                          );
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01299bc0(lVar17,&stack0x000002a8,&stack0x000002a4,
                           *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
              FUN_012df150(lVar11,&stack0x000002ac,*(undefined8 *)puVar4);
              iVar5 = iVar5 + 1;
            }
          }
          FUN_012b8948(&stack0x000000f0,*(undefined8 *)System_Xml_XmlNamedNodeMap_TypeInfo);
          FUN_00ca0ce8(lVar10,lVar11,
                       *(undefined8 *)Method_System_ComponentModel_ArrayConverter_ConvertTo__);
        }
      }
      FUN_012bf83c(&stack0x00000120,
                   *(undefined8 *)Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
      plVar8 = (long *)StringLiteral_10310;
      puVar4 = Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__;
      lVar17 = *(long *)puVar3;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar17);
        lVar17 = *(long *)puVar3;
      }
      lVar11 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
      if (lVar11 == 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar17);
          lVar17 = *(long *)puVar3;
        }
        uVar6 = **(undefined8 **)(lVar17 + 0xb8);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
        if (lVar11 == 0) goto LAB_02355414;
        FUN_012d239c(lVar11,uVar6,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__,
                     0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar11;
      }
      uVar6 = FUN_010dcdb8(in_stack_00000028,lVar11,
                           *(undefined8 *)
                            Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                          );
      if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__);
      }
      uVar6 = FUN_0233e5f4(in_stack_00000008,uVar6,0,0);
      uVar16 = FUN_0230bd48(in_stack_00000008,0,0);
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo)
      ;
      if (lVar17 != 0) {
        FUN_01320f6c(lVar17,uVar16,*(undefined8 *)StringLiteral_9754);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                                   );
        if (lVar11 != 0) {
          FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_11214);
          FUN_01323390(lVar10,&stack0x00000090,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<TransformFeature,_FeatureDescription>_TypeInfo
                      );
          puVar1 = Method_System_Decimal_DecCalc_VarDecFromR4__;
          in_stack_000000c8 = in_stack_00000098;
          in_stack_000000c0 = in_stack_00000090;
          in_stack_000000d0 = in_stack_000000a0;
          while( true ) {
            uVar12 = FUN_012b894c(&stack0x000000c0,
                                  *(undefined8 *)UnityEngine_TextCore_Text_MaterialManager_TypeInfo)
            ;
            if ((uVar12 & 1) == 0) break;
            lVar10 = FUN_00ca2528(&stack0x000000c0,
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1q_s16__
                                 );
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (2 < *(int *)(lVar10 + 0x20)) {
              if (*(int *)(lVar10 + 0x20) == 3) {
                lVar14 = *(long *)(in_stack_00000038 + 0x20);
                if (lVar14 == 0) {
                  lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                             );
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_012d239c(lVar14,in_stack_00000038,*(undefined8 *)PTR_DAT_033ecb58,0);
                  *(long *)(in_stack_00000038 + 0x20) = lVar14;
                }
                uVar16 = FUN_010dcdb8(lVar10,lVar14,
                                      *(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                     );
                uVar16 = FUN_010dfe04(uVar16,*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                     );
                uVar16 = FUN_0230bd48(in_stack_00000008,uVar16,0);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                             Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01320f6c(lVar10,uVar16,*(undefined8 *)StringLiteral_9754);
                uVar16 = FUN_0234aad8(lVar10,1);
                FUN_00ca11d0(lVar11,uVar16,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
              }
              else {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar10 = FUN_0233e20c(uVar6,lVar10,0);
                if (lVar10 != 0) {
                  lVar14 = *(long *)(in_stack_00000038 + 0x28);
                  if (lVar14 == 0) {
                    lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                               );
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_012d239c(lVar14,in_stack_00000038,
                                 *(undefined8 *)
                                  Meta_WitAi_Json_WitResponseClass_<>c__DisplayClass15_0_TypeInfo,0)
                    ;
                    *(long *)(in_stack_00000038 + 0x28) = lVar14;
                  }
                  uVar16 = FUN_010dcdb8(lVar10,lVar14,
                                        *(undefined8 *)
                                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                       );
                  uVar16 = FUN_010dfe04(uVar16,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                       );
                  uVar16 = FUN_0230bd48(in_stack_00000008,uVar16,0);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                               Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01320f6c(lVar10,uVar16,*(undefined8 *)StringLiteral_9754);
                  uVar16 = FUN_0234caf8(lVar10);
                  FUN_01322050(lVar11,uVar16,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<BoxCollider>__);
                }
              }
            }
          }
          FUN_012b8948(&stack0x000000c0,
                       *(undefined8 *)UnityEngine_InputSystem_InputControl<float>_TypeInfo);
          FUN_022fabf0(lVar11,in_stack_00000008,lVar17,0,0);
          uVar6 = FUN_0232e128(*(undefined8 *)(in_stack_00000008 + 0x50),0);
          FUN_0230fc64(in_stack_00000008,uVar6,0);
          puVar2 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
          lVar17 = *(long *)puVar3;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar17);
            lVar17 = *(long *)puVar3;
          }
          lVar10 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x20);
          if (lVar10 == 0) {
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar17);
              lVar17 = *(long *)puVar3;
            }
            uVar6 = **(undefined8 **)(lVar17 + 0xb8);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
            if (lVar10 == 0) goto LAB_02355414;
            FUN_012d239c(lVar10,uVar6,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OculusTrackingReference>__
                         ,0);
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar10;
          }
          uVar6 = FUN_010dcdb8(lVar11,lVar10,
                               *(undefined8 *)
                                Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                              );
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eefc0);
          if (lVar17 != 0) {
            FUN_012dd468(lVar17,uVar6,*(undefined8 *)StringLiteral_10898);
            FUN_012df294(lVar17,in_stack_00000048,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                        );
            FUN_01322050(in_stack_00000028,lVar11,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponents<BoxCollider>__);
            puVar3 = Method_System_Array_Empty<WitConfigurationAssetData>__;
            lVar10 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar3;
            }
            lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
            if (lVar11 == 0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
              }
              uVar6 = **(undefined8 **)(lVar10 + 0xb8);
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
              if (lVar11 == 0) goto LAB_02355414;
              FUN_012d239c(lVar11,uVar6,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__
                           ,0);
              *(long *)(*(long *)(*(long *)Method_System_Array_Empty<WitConfigurationAssetData>__ +
                                 0xb8) + 0x28) = lVar11;
            }
            uVar6 = FUN_010dcdb8(in_stack_00000028,lVar11,
                                 *(undefined8 *)
                                  Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                                );
            lVar10 = *(long *)puVar1;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar10);
            }
            lVar10 = FUN_0233e5f4(in_stack_00000008,uVar6,0,0);
            if (lVar10 != 0) {
              if (0 < *(int *)(lVar10 + 0x18)) {
                iVar5 = 0;
                do {
                  if (*(int *)(lVar17 + 0x20) < 1) break;
                  FUN_0132138c(lVar10,iVar5,&stack0x00000090,*(undefined8 *)puVar2);
                  lVar11 = in_stack_00000090;
                  if (in_stack_00000090 == 0) goto LAB_02355414;
                  uVar12 = FUN_012ddcec(lVar17,*(undefined8 *)(in_stack_00000090 + 0x20),
                                        *(undefined8 *)puVar4);
                  if ((uVar12 & 1) != 0) {
                    FUN_012de18c(lVar17,*(undefined8 *)(lVar11 + 0x20),
                                 *(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo);
                    plVar9 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4c00);
                    if (plVar9 == (long *)0x0) goto LAB_02355414;
                    FUN_0233eebc(plVar9,lVar11,0);
                    do {
                      do {
                        uVar12 = FUN_0233eee4(plVar9,0);
                        if ((uVar12 & 1) == 0) goto LAB_023550c0;
                        lVar11 = FUN_0233ef28(plVar9,0);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                      } while (*(long *)(lVar11 + 0x38) == 0);
                      uVar12 = FUN_012ddcec(lVar17,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20),
                                            *(undefined8 *)puVar4);
                    } while ((uVar12 & 1) != 0);
                    if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 0x20);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar15 = *(long *)(lVar11 + 0x20);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar14 + 0x48);
                    in_stack_00000068 = *(undefined8 *)(lVar14 + 0x34);
                    in_stack_00000060 = *(undefined8 *)(lVar14 + 0x2c);
                    in_stack_00000058 = *(undefined8 *)(lVar14 + 0x24);
                    in_stack_00000050 = *(long *)(lVar14 + 0x1c);
                    in_stack_00000078 = 0;
                    in_stack_00000070 = 0;
                    in_stack_00000088 = 0;
                    in_stack_00000080 = 0;
                    in_stack_00000090 = in_stack_00000050;
                    in_stack_00000098 = in_stack_00000058;
                    in_stack_000000a0 = in_stack_00000060;
                    in_stack_000000a8 = in_stack_00000068;
                    FUN_022eff30(&stack0x00000070,&stack0x00000050,0);
                    *(undefined8 *)(lVar15 + 0x34) = in_stack_00000088;
                    *(undefined8 *)(lVar15 + 0x2c) = in_stack_00000080;
                    *(undefined8 *)(lVar15 + 0x24) = in_stack_00000078;
                    *(undefined8 *)(lVar15 + 0x1c) = in_stack_00000070;
                    FUN_02375014(*(undefined8 *)(lVar11 + 0x38),0);
                    plVar8 = (long *)StringLiteral_10310;
LAB_023550c0:
                    lVar11 = *plVar9;
                    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *plVar8) {
                          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                          goto LAB_02355114;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_00d59724(plVar9,*plVar8,0);
LAB_02355114:
                    (*(code *)*puVar7)(plVar9,puVar7[1]);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(lVar10 + 0x18));
              }
              FUN_023135a0(in_stack_00000008,0,0);
              return in_stack_00000048;
            }
          }
        }
      }
    }
  }
LAB_02355414:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


