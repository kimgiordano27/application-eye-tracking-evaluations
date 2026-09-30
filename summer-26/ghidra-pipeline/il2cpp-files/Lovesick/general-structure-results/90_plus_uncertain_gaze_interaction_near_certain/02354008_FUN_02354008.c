/*
FUNCTION_NAME: FUN_02354008
ENTRY_POINT: 02354008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 213
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0235512c) */
/* WARNING: Removing unreachable block (ram,0x02354914) */
/* WARNING: Removing unreachable block (ram,0x023551ec) */
/* WARNING: Removing unreachable block (ram,0x023554c4) */
/* WARNING: Removing unreachable block (ram,0x023554dc) */
/* WARNING: Removing unreachable block (ram,0x02355468) */
/* WARNING: Removing unreachable block (ram,0x023542f0) */
/* WARNING: Removing unreachable block (ram,0x023542f4) */
/* WARNING: Removing unreachable block (ram,0x02354570) */
/* WARNING: Removing unreachable block (ram,0x02354574) */
/* WARNING: Removing unreachable block (ram,0x02355448) */

undefined8 FUN_02354008(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long *unaff_x21;
  long lVar17;
  undefined8 *unaff_x24;
  undefined8 uVar18;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar19 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
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
  
  uVar8 = FUN_012b69b4(&stack0x000001d0);
  if ((uVar8 & 1) != 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__1__
                              );
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar9,0);
    *(long *)(lVar9 + 0x18) = in_stack_00000038;
    uVar5 = FUN_00ae9e5c(&stack0x000001d0,
                         *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
    *(undefined4 *)(lVar9 + 0x10) = uVar5;
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)System_Action<FocusEnterEventArgs>_TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar10,lVar9,*(undefined8 *)StringLiteral_3099,0);
    plVar11 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                (in_stack_00000030,lVar10,
                                 *(undefined8 *)
                                  Method_PathOfTheTrickster_<>c__DisplayClass25_0_<Awake>b__1__);
    lVar9 = thunk_FUN_00d62348(*unaff_x24);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012dd38c(lVar9,*(undefined8 *)StringLiteral_3420);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)UnityEngine_TextCore_GlyphMetrics_TypeInfo) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02354124;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_00d59724(plVar11,*(long *)UnityEngine_TextCore_GlyphMetrics_TypeInfo,0);
LAB_02354124:
    plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar10 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0235418c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_00d59724(plVar11,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ,0);
LAB_0235418c:
      uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_023542e4;
        lVar9 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 == 0) goto LAB_023542bc;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_023542a4;
      }
      lVar10 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_10477) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_023541f0;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10477,0);
LAB_023541f0:
      lVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_012df150(lVar9,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)StringLiteral_3082);
      if ((uVar8 & 1) != 0) {
        in_stack_00000090 = 0;
        in_stack_00000098 = 0;
        FUN_013a23f0(&stack0x00000090,lVar10,&stack0x00000274,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_s64__);
        FUN_010b6ab0();
      }
    } while( true );
  }
  FUN_012b69b0(&stack0x000001d0,
               *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
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
    uVar8 = FUN_012bf140(&stack0x000001a0,
                         *(undefined8 *)Mono_Security_Cryptography_KeyPairPersistence_TypeInfo);
    if ((uVar8 & 1) == 0) break;
    auVar19 = FUN_00ca1ae0(&stack0x000001a0,*(undefined8 *)PTR_DAT_033f0cb8);
    _in_stack_00000190 = auVar19;
    FUN_00ca1be8(&stack0x00000190,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vdups_lane_s32__);
    lVar9 = FUN_0237bee4();
    if (lVar9 != 0) {
      FUN_00ca11d0();
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
        uVar8 = FUN_012bf140(&stack0x00000160,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Length>__
                            );
        if ((uVar8 & 1) == 0) break;
        auVar19 = FUN_00ca1cf0(&stack0x00000160,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                              );
        _in_stack_00000150 = auVar19;
        FUN_00ca1df8(&stack0x00000150,*(undefined8 *)PTR_DAT_033f5e48);
        uVar7 = FUN_00ca1efc(&stack0x00000150,
                             *(undefined8 *)Method_System_Collections_Generic_List<Purchase>__ctor__
                            );
        in_stack_00000090 = 0;
        in_stack_00000098 = 0;
        FUN_013a23f0(&stack0x00000090,lVar9,uVar7,*(undefined8 *)StringLiteral_5259);
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
  FUN_022fabf0();
  uVar7 = FUN_012998a8();
  lVar9 = FUN_023563ac(in_stack_00000008,uVar7);
  if (lVar9 != 0) {
    uVar7 = FUN_00da4fb8(*(undefined8 *)
                          System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo,0);
    FUN_0230ffc8(in_stack_00000008,uVar7,0);
    uVar7 = FUN_0232e128(*(undefined8 *)(in_stack_00000008 + 0x50),0);
    FUN_0230fc64(in_stack_00000008,uVar7,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = *(undefined8 *)(in_stack_00000008 + 0x28);
    lVar9 = FUN_0230fea8(in_stack_00000008,0);
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
        uVar8 = FUN_012bf140(&stack0x00000120,*(undefined8 *)puVar2);
        if ((uVar8 & 1) == 0) break;
        auVar19 = FUN_00ca2004(&stack0x00000120,*(undefined8 *)puVar1);
        _in_stack_00000110 = auVar19;
        uVar7 = FUN_00ca210c(&stack0x00000110,
                             *(undefined8 *)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_laneq_s16__);
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar14);
          lVar14 = *(long *)puVar3;
        }
        lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
        if (lVar16 == 0) {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar14);
            lVar14 = *(long *)puVar3;
          }
          uVar18 = **(undefined8 **)(lVar14 + 0xb8);
          lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_512);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012d239c(lVar16,uVar18,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_u32__,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar16;
        }
        iVar6 = FUN_010df44c(uVar7,lVar16,
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARMeshManager_OnEnable__);
        if (2 < iVar6) {
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_BandhouseFeedbackManager_<>c_<SetFeedbackShaderData>b__26_0__
                                     );
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_012dd38c(lVar14,*(undefined8 *)Method_System_Collections_Generic_List<Edge>_set_Item__
                      );
          lVar16 = FUN_00ca210c(&stack0x00000110,
                                *(undefined8 *)
                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_laneq_s16__);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01323390(lVar16,&stack0x00000090,
                       *(undefined8 *)
                        UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_TypeInfo);
          in_stack_000000f8 = in_stack_00000098;
          in_stack_000000f0 = in_stack_00000090;
          in_stack_00000108 = in_stack_000000a8;
          in_stack_00000100 = in_stack_000000a0;
          while( true ) {
            uVar8 = FUN_012b894c(&stack0x000000f0,
                                 *(undefined8 *)
                                  Method_Newtonsoft_Json_Linq_JsonPath_JPath_ParseOperator__);
            if ((uVar8 & 1) == 0) break;
            auVar19 = FUN_00ca2214(&stack0x000000f0,
                                   *(undefined8 *)
                                    Method_RCG_Lovesick_Powers_Tempo_TempoPower_<>c_<HideEffects>b__24_3__
                                  );
            _in_stack_000000e0 = auVar19;
            lVar16 = FUN_00ca231c(&stack0x000000e0,
                                  *(undefined8 *)
                                   Method_Sirenix_Serialization_ProperBitConverter_ToInt16__);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            iVar6 = 0;
            while( true ) {
              lVar16 = FUN_00ca2420(&stack0x000000e0,*unaff_x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(int *)(lVar16 + 0x18) <= iVar6) break;
              lVar16 = FUN_00ca2420(&stack0x000000e0,*unaff_x28);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132138c(lVar16,iVar6,&stack0x000002a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                          );
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01299bc0(lVar9,&stack0x000002a8,&stack0x000002a4,
                           *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
              FUN_012df150(lVar14,&stack0x000002ac,*unaff_x29);
              iVar6 = iVar6 + 1;
            }
          }
          FUN_012b8948(&stack0x000000f0,*(undefined8 *)System_Xml_XmlNamedNodeMap_TypeInfo);
          FUN_00ca0ce8(lVar10,lVar14,
                       *(undefined8 *)Method_System_ComponentModel_ArrayConverter_ConvertTo__);
        }
      }
      FUN_012bf83c(&stack0x00000120,
                   *(undefined8 *)Method_System_Nullable<JsonSchemaType>_GetValueOrDefault__);
      plVar11 = (long *)StringLiteral_10310;
      puVar1 = Method_UnityEngine_EventSystems_EventSystem_CreateUIToolkitPanelGameObject__;
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *(long *)puVar3;
      }
      lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar14 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar9 = *(long *)puVar3;
        }
        uVar7 = **(undefined8 **)(lVar9 + 0xb8);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
        if (lVar14 == 0) goto LAB_02355414;
        FUN_012d239c(lVar14,uVar7,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__,
                     0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar14;
      }
      uVar7 = FUN_010dcdb8(in_stack_00000028,lVar14,
                           *(undefined8 *)
                            Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                          );
      if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__);
      }
      uVar7 = FUN_0233e5f4(in_stack_00000008,uVar7,0,0);
      uVar18 = FUN_0230bd48(in_stack_00000008,0,0);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
      if (lVar9 != 0) {
        FUN_01320f6c(lVar9,uVar18,*(undefined8 *)StringLiteral_9754);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                                   );
        if (lVar14 != 0) {
          FUN_01320e50(lVar14,*(undefined8 *)StringLiteral_11214);
          FUN_01323390(lVar10,&stack0x00000090,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<TransformFeature,_FeatureDescription>_TypeInfo
                      );
          puVar2 = Method_System_Decimal_DecCalc_VarDecFromR4__;
          in_stack_000000c8 = in_stack_00000098;
          in_stack_000000c0 = in_stack_00000090;
          in_stack_000000d0 = in_stack_000000a0;
          while( true ) {
            uVar8 = FUN_012b894c(&stack0x000000c0,
                                 *(undefined8 *)UnityEngine_TextCore_Text_MaterialManager_TypeInfo);
            if ((uVar8 & 1) == 0) break;
            lVar10 = FUN_00ca2528(&stack0x000000c0,
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1q_s16__
                                 );
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (2 < *(int *)(lVar10 + 0x20)) {
              if (*(int *)(lVar10 + 0x20) == 3) {
                lVar16 = *(long *)(in_stack_00000038 + 0x20);
                if (lVar16 == 0) {
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                             );
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_012d239c(lVar16,in_stack_00000038,*(undefined8 *)PTR_DAT_033ecb58,0);
                  *(long *)(in_stack_00000038 + 0x20) = lVar16;
                }
                uVar18 = FUN_010dcdb8(lVar10,lVar16,
                                      *(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                     );
                uVar18 = FUN_010dfe04(uVar18,*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                     );
                uVar18 = FUN_0230bd48(in_stack_00000008,uVar18,0);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                             Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01320f6c(lVar10,uVar18,*(undefined8 *)StringLiteral_9754);
                uVar18 = FUN_0234aad8(lVar10,1);
                FUN_00ca11d0(lVar14,uVar18,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
              }
              else {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar10 = FUN_0233e20c(uVar7,lVar10,0);
                if (lVar10 != 0) {
                  lVar16 = *(long *)(in_stack_00000038 + 0x28);
                  if (lVar16 == 0) {
                    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                               );
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_012d239c(lVar16,in_stack_00000038,
                                 *(undefined8 *)
                                  Meta_WitAi_Json_WitResponseClass_<>c__DisplayClass15_0_TypeInfo,0)
                    ;
                    *(long *)(in_stack_00000038 + 0x28) = lVar16;
                  }
                  uVar18 = FUN_010dcdb8(lVar10,lVar16,
                                        *(undefined8 *)
                                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<UIHoverEventArgs>_System_IDisposable_Dispose__
                                       );
                  uVar18 = FUN_010dfe04(uVar18,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                                       );
                  uVar18 = FUN_0230bd48(in_stack_00000008,uVar18,0);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                               Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01320f6c(lVar10,uVar18,*(undefined8 *)StringLiteral_9754);
                  uVar18 = FUN_0234caf8(lVar10);
                  FUN_01322050(lVar14,uVar18,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<BoxCollider>__);
                }
              }
            }
          }
          FUN_012b8948(&stack0x000000c0,
                       *(undefined8 *)UnityEngine_InputSystem_InputControl<float>_TypeInfo);
          FUN_022fabf0(lVar14,in_stack_00000008,lVar9,0,0);
          uVar7 = FUN_0232e128(*(undefined8 *)(in_stack_00000008 + 0x50),0);
          FUN_0230fc64(in_stack_00000008,uVar7,0);
          puVar4 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar9);
            lVar9 = *(long *)puVar3;
          }
          lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
          if (lVar10 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar9);
              lVar9 = *(long *)puVar3;
            }
            uVar7 = **(undefined8 **)(lVar9 + 0xb8);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
            if (lVar10 == 0) goto LAB_02355414;
            FUN_012d239c(lVar10,uVar7,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<OculusTrackingReference>__
                         ,0);
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar10;
          }
          uVar7 = FUN_010dcdb8(lVar14,lVar10,
                               *(undefined8 *)
                                Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                              );
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eefc0);
          if (lVar9 != 0) {
            FUN_012dd468(lVar9,uVar7,*(undefined8 *)StringLiteral_10898);
            FUN_012df294(lVar9,in_stack_00000048,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                        );
            FUN_01322050(in_stack_00000028,lVar14,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponents<BoxCollider>__);
            puVar3 = Method_System_Array_Empty<WitConfigurationAssetData>__;
            lVar10 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar3;
            }
            lVar14 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
            if (lVar14 == 0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)Method_System_Array_Empty<WitConfigurationAssetData>__;
              }
              uVar7 = **(undefined8 **)(lVar10 + 0xb8);
              lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5105);
              if (lVar14 == 0) goto LAB_02355414;
              FUN_012d239c(lVar14,uVar7,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<ProbeBrickPool_BrickChunkAlloc>__ctor__
                           ,0);
              *(long *)(*(long *)(*(long *)Method_System_Array_Empty<WitConfigurationAssetData>__ +
                                 0xb8) + 0x28) = lVar14;
            }
            uVar7 = FUN_010dcdb8(in_stack_00000028,lVar14,
                                 *(undefined8 *)
                                  Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                                );
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar10);
            }
            lVar10 = FUN_0233e5f4(in_stack_00000008,uVar7,0,0);
            if (lVar10 != 0) {
              if (0 < *(int *)(lVar10 + 0x18)) {
                iVar6 = 0;
                do {
                  if (*(int *)(lVar9 + 0x20) < 1) break;
                  FUN_0132138c(lVar10,iVar6,&stack0x00000090,*(undefined8 *)puVar4);
                  lVar14 = in_stack_00000090;
                  if (in_stack_00000090 == 0) goto LAB_02355414;
                  uVar8 = FUN_012ddcec(lVar9,*(undefined8 *)(in_stack_00000090 + 0x20),
                                       *(undefined8 *)puVar1);
                  if ((uVar8 & 1) != 0) {
                    FUN_012de18c(lVar9,*(undefined8 *)(lVar14 + 0x20),
                                 *(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo);
                    plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4c00);
                    if (plVar13 == (long *)0x0) goto LAB_02355414;
                    FUN_0233eebc(plVar13,lVar14,0);
                    do {
                      do {
                        uVar8 = FUN_0233eee4(plVar13,0);
                        if ((uVar8 & 1) == 0) goto LAB_023550c0;
                        lVar14 = FUN_0233ef28(plVar13,0);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                      } while (*(long *)(lVar14 + 0x38) == 0);
                      uVar8 = FUN_012ddcec(lVar9,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x20),
                                           *(undefined8 *)puVar1);
                    } while ((uVar8 & 1) != 0);
                    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar16 = *(long *)(*(long *)(lVar14 + 0x38) + 0x20);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar17 = *(long *)(lVar14 + 0x20);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    *(undefined4 *)(lVar17 + 0x48) = *(undefined4 *)(lVar16 + 0x48);
                    in_stack_00000068 = *(undefined8 *)(lVar16 + 0x34);
                    in_stack_00000060 = *(undefined8 *)(lVar16 + 0x2c);
                    in_stack_00000058 = *(undefined8 *)(lVar16 + 0x24);
                    in_stack_00000050 = *(long *)(lVar16 + 0x1c);
                    in_stack_00000078 = 0;
                    in_stack_00000070 = 0;
                    in_stack_00000088 = 0;
                    in_stack_00000080 = 0;
                    in_stack_00000090 = in_stack_00000050;
                    in_stack_00000098 = in_stack_00000058;
                    in_stack_000000a0 = in_stack_00000060;
                    in_stack_000000a8 = in_stack_00000068;
                    FUN_022eff30(&stack0x00000070,&stack0x00000050,0);
                    *(undefined8 *)(lVar17 + 0x34) = in_stack_00000088;
                    *(undefined8 *)(lVar17 + 0x2c) = in_stack_00000080;
                    *(undefined8 *)(lVar17 + 0x24) = in_stack_00000078;
                    *(undefined8 *)(lVar17 + 0x1c) = in_stack_00000070;
                    FUN_02375014(*(undefined8 *)(lVar14 + 0x38),0);
                    plVar11 = (long *)StringLiteral_10310;
LAB_023550c0:
                    lVar14 = *plVar13;
                    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar8 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *plVar11) {
                          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_02355114;
                        }
                        uVar8 = uVar8 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_00d59724(plVar13,*plVar11,0);
LAB_02355114:
                    (*(code *)*puVar12)(plVar13,puVar12[1]);
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(lVar10 + 0x18));
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
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_023542a4:
    if (*(long *)(piVar15 + -2) == *unaff_x21) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_023542d8;
    }
  }
LAB_023542bc:
  puVar12 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x21,0);
LAB_023542d8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_023542e4:
  uVar7 = FUN_0236487c(System_Linq_Expressions_MemberAssignment_TypeInfo);
  return uVar7;
}


