/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.XRPass$$AddViewInternal
ENTRY_POINT: 0234f21c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02350878) */
/* WARNING: Removing unreachable block (ram,0x0235006c) */
/* WARNING: Removing unreachable block (ram,0x023507dc) */

undefined8 UnityEngine_Rendering_Universal_XRPass__AddViewInternal(long param_1)

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
  ulong uVar26;
  long unaff_x19;
  int iVar27;
  undefined8 *unaff_x20;
  int iVar28;
  uint uVar29;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar30;
  float fVar31;
  undefined1 auVar32 [16];
  int iStack000000000000004c;
  int iStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  int iStack0000000000000168;
  int iStack000000000000016c;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  int iStack00000000000001b4;
  int iStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  int iStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined8 in_stack_000001c8;
  int iStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  int iStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  int in_stack_000001fc;
  int in_stack_00000204;
  int in_stack_0000020c;
  int in_stack_00000214;
  int in_stack_00000220;
  int in_stack_00000228;
  int in_stack_00000230;
  int in_stack_00000238;
  undefined4 in_stack_0000024c;
  undefined *puVar25;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x7f8));
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
  *(undefined1 *)(unaff_x21 + 0xd25) = 1;
  in_stack_00000178 = 0;
  in_stack_00000180 = 0;
  _iStack0000000000000168 = 0;
  in_stack_00000170 = 0;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_00000108 = 0;
  lVar11 = thunk_FUN_00d62348(*unaff_x20);
  puVar25 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar11 == 0) {
LAB_02350870:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017b46ec(lVar11,0);
  if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_0268b4e0();
  puVar6 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  puVar25 = PTR_DAT_033f4958;
  if ((uVar12 & 1) == 0) {
    if (unaff_x19 != 0) {
      if (0x1ff < unaff_w23 - 1U) {
        if (*(int *)(*(long *)Method_System_Nullable<Quaternion>_get_Value__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_022f4428(*(undefined8 *)puVar25,0);
        return 0;
      }
      if (unaff_x22 != 0) {
        uVar13 = FUN_0230bd48();
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        puVar25 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
        if (lVar14 != 0) {
          iStack000000000000004c = unaff_w23;
          FUN_01320f6c(lVar14,uVar13,*(undefined8 *)StringLiteral_9754);
          lVar15 = FUN_0230fea8();
          lVar16 = FUN_0230ffd0();
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar25);
          puVar7 = Method_UnityEngine_Object_Instantiate<GameObject>__;
          puVar6 = 
          Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_CalculatePropertyValues__
          ;
          puVar25 = System_Collections_Generic_List<ulong>_TypeInfo;
          if (lVar17 != 0) {
            FUN_01320e50(lVar17,*(undefined8 *)PTR_DAT_033f6e48);
            uVar13 = FUN_022f8518();
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
                  FUN_01323390(lVar18,&stack0x000000e0,*(undefined8 *)StringLiteral_2447);
                  fVar31 = (float)iStack000000000000004c;
                  in_stack_00000178 = in_stack_000000e8;
                  in_stack_00000170 = _uStack00000000000000e0;
                  in_stack_00000180 = in_stack_000000f0;
                  iVar30 = iStack000000000000004c;
                  iStack0000000000000078 = iVar8;
                  while( true ) {
                    uVar12 = FUN_012b894c(&stack0x00000170,
                                          *(undefined8 *)
                                           UnityEngine_Animations_AnimationRemoveScalePlayable_TypeInfo
                                         );
                    if ((uVar12 & 1) == 0) break;
                    uVar13 = FUN_00ca14c4(&stack0x00000170,
                                          *(undefined8 *)
                                           ContextMenuItemList_<>c__DisplayClass4_0_TypeInfo);
                    uVar12 = UnityEngine_Rendering_Universal_RendererLighting__DisableAllKeywords
                                       (unaff_x22,uVar13,0);
                    lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo)
                    ;
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320ebc(lVar18,iVar30,*(undefined8 *)PTR_DAT_033eec38);
                    for (iVar27 = 1;
                        puVar25 = 
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        , iVar27 + -1 < iVar30; iVar27 = iVar27 + 1) {
                      FUN_0132138c(lVar14,uVar12 & 0xffffffff,&stack0x000000c0,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                  );
                      uVar13 = _uStack00000000000000c0;
                      FUN_0132138c(lVar14,uVar12 >> 0x20,&stack0x000000c0,*(undefined8 *)puVar25);
                      uVar13 = FUN_0233bc34((float)iVar27 / (fVar31 + 1.0),uVar13,
                                            _uStack00000000000000c0,0);
                      FUN_00ca0af8(lVar18,uVar13,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                    }
                    if (*(int *)(*(long *)StringLiteral_14183 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar20 = FUN_0234e084(unaff_x22,uVar12);
                    puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                    uStack00000000000000c0 = (int)uVar12;
                    FUN_01299bc0(lVar15,&stack0x000000c0,(long)&stack0x00000188 + 4,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    uVar1 = in_stack_00000188._4_4_;
                    _uStack00000000000000c0 = CONCAT44(uStack00000000000000c4,(int)(uVar12 >> 0x20))
                    ;
                    FUN_01299bc0(lVar15,&stack0x000000c0,(long)&stack0x00000188 + 4,
                                 *(undefined8 *)puVar25);
                    uVar2 = in_stack_00000188._4_4_;
                    if (*(int *)(*(long *)
                                  Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Write__
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_022f6fa4(&stack0x00000168,uVar1,uVar2,0);
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01323390(lVar20,&stack0x000000e0,*(undefined8 *)StringLiteral_11168);
                    in_stack_00000148 = in_stack_000000e8;
                    in_stack_00000140 = _uStack00000000000000e0;
                    in_stack_00000158 = in_stack_000000f8;
                    in_stack_00000150 = in_stack_000000f0;
                    while( true ) {
                      uVar12 = FUN_012b894c(&stack0x00000140,*(undefined8 *)PTR_DAT_033f0610);
                      if ((uVar12 & 1) == 0) break;
                      auVar32 = FUN_00ca15cc(&stack0x00000140,
                                             *(undefined8 *)
                                              Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter_ValueWriteCommand_TypeInfo
                                            );
                      _in_stack_00000130 = auVar32;
                      lVar20 = FUN_00ca13c0(&stack0x00000130,
                                            *(undefined8 *)
                                             Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_WavelengthObjectReleased__
                                           );
                      uVar12 = FUN_0129eff4(lVar19,lVar20,&stack0x00000128,
                                            *(undefined8 *)StringLiteral_11630);
                      if ((uVar12 & 1) == 0) {
                        lVar21 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        FUN_022fb2d8(lVar21,0);
                        in_stack_00000128 = lVar21;
                        uVar13 = FUN_00da4fb8(*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                              0);
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar1 = *(undefined4 *)(lVar20 + 0x48);
                        in_stack_000000b8 = *(undefined8 *)(lVar20 + 0x34);
                        in_stack_000000b0 = *(undefined8 *)(lVar20 + 0x2c);
                        in_stack_000000a8 = *(undefined8 *)(lVar20 + 0x24);
                        in_stack_000000a0 = *(long *)(lVar20 + 0x1c);
                        in_stack_000000c8 = 0;
                        _uStack00000000000000c0 = 0;
                        in_stack_000000d8 = 0;
                        in_stack_000000d0 = 0;
                        _uStack00000000000000e0 = in_stack_000000a0;
                        in_stack_000000e8 = in_stack_000000a8;
                        in_stack_000000f0 = in_stack_000000b0;
                        in_stack_000000f8 = in_stack_000000b8;
                        FUN_022eff30(&stack0x000000c0,&stack0x000000a0,0);
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
                        in_stack_00000088 = in_stack_000000c8;
                        in_stack_00000080 = _uStack00000000000000c0;
                        in_stack_00000098 = in_stack_000000d8;
                        in_stack_00000090 = in_stack_000000d0;
                        FUN_022f986c(lVar22,uVar13,uVar1,&stack0x00000080,uVar2,uVar3,0xffffffff,
                                     cVar4 != '\0');
                        lVar23 = in_stack_00000128;
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
                        lVar22 = in_stack_00000128;
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
                        lVar23 = in_stack_00000128;
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
                          uVar26 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                          do {
                            if (uVar26 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            uVar1 = *(undefined4 *)(lVar21 + 0x20 + uVar12 * 4);
                            uStack0000000000000190 = uVar1;
                            uVar26 = FUN_0129eff4(lVar15,&stack0x00000190,(long)&stack0x00000120 + 4
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__)
                            ;
                            if ((uVar26 & 1) != 0) {
                              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(long *)(in_stack_00000128 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00ac20f0(*(long *)(in_stack_00000128 + 0x20),
                                           in_stack_00000120._4_4_,*(undefined8 *)StringLiteral_4747
                                          );
                            }
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            uStack0000000000000194 = uVar1;
                            uVar26 = FUN_0129eff4(lVar16,(long)&stack0x00000190 + 4,
                                                  (long)&stack0x00000120 + 4,
                                                  *(undefined8 *)
                                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__
                                                 );
                            if ((uVar26 & 1) != 0) {
                              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(long *)(in_stack_00000128 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00ac20f0(*(long *)(in_stack_00000128 + 0x28),
                                           in_stack_00000120._4_4_,*(undefined8 *)StringLiteral_4747
                                          );
                            }
                            uVar26 = (ulong)*(uint *)(lVar21 + 0x18);
                            uVar12 = uVar12 + 1;
                          } while ((long)uVar12 < (long)(int)*(uint *)(lVar21 + 0x18));
                        }
                        uVar13 = FUN_022f8990(lVar20,0);
                        FUN_01322050(lVar17,uVar13,*(undefined8 *)StringLiteral_2811);
                        FUN_0129a054(lVar19,lVar20,in_stack_00000128,
                                     *(undefined8 *)StringLiteral_5269);
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
                          iVar27 = 0;
                          do {
                            puVar25 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
                            FUN_0132138c(lVar20,iVar27,&stack0x00000198,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<Grabbable>_Contains__
                                        );
                            uVar1 = in_stack_00000198;
                            FUN_0132138c(lVar20,iVar27,&stack0x000001a0,*(undefined8 *)puVar25);
                            uVar2 = in_stack_000001a0._4_4_;
                            FUN_0132138c(lVar14,uVar1,&stack0x000001a8,
                                         *(undefined8 *)
                                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                        );
                            FUN_00ca0af8(lVar21,in_stack_000001a8,
                                         *(undefined8 *)OVRManager_XrApi_TypeInfo);
                            uStack00000000000001b0 = uVar1;
                            uVar12 = FUN_0129eff4(lVar15,&stack0x000001b0,&stack0x00000120,
                                                  *(undefined8 *)
                                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__
                                                 );
                            if ((uVar12 & 1) != 0) {
                              FUN_00ac20f0(lVar22,in_stack_00000120 & 0xffffffff,
                                           *(undefined8 *)StringLiteral_4747);
                            }
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            iStack00000000000001b4 = iVar27;
                            uVar12 = FUN_0129eff4(lVar16,(long)&stack0x000001b0 + 4,&stack0x00000120
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__)
                            ;
                            if ((uVar12 & 1) != 0) {
                              if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(long *)(in_stack_00000128 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00ac20f0(*(long *)(in_stack_00000128 + 0x28),
                                           in_stack_00000120 & 0xffffffff,
                                           *(undefined8 *)StringLiteral_4747);
                            }
                            iVar28 = iStack0000000000000168;
                            uStack00000000000001bc = uVar1;
                            FUN_01299bc0(lVar15,(long)&stack0x000001b8 + 4,&stack0x000001b8,
                                         *(undefined8 *)
                                          Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                            if (iVar28 == iStack00000000000001b8) {
                              iVar28 = iStack000000000000016c;
                              uStack00000000000001c4 = uVar2;
                              FUN_01299bc0(lVar15,(long)&stack0x000001c0 + 4,&stack0x000001c0,
                                           *(undefined8 *)
                                            Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                              if (iVar28 != iStack00000000000001c0) goto LAB_0234ff44;
                              iVar28 = 0;
                              do {
                                FUN_0132138c(lVar18,iVar28,&stack0x000001c8,
                                             *(undefined8 *)
                                              Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                            );
                                FUN_00ca0af8(lVar21,in_stack_000001c8,
                                             *(undefined8 *)OVRManager_XrApi_TypeInfo);
                                puVar25 = StringLiteral_4747;
                                FUN_00ac20f0(lVar22,iStack0000000000000078 + iVar28,
                                             *(undefined8 *)StringLiteral_4747);
                                FUN_00ac20f0(lVar23,0xffffffff,*(undefined8 *)puVar25);
                                iVar28 = iVar28 + 1;
                              } while (iVar30 != iVar28);
                            }
                            else {
LAB_0234ff44:
                              iVar28 = iStack0000000000000168;
                              uStack00000000000001d4 = uVar2;
                              FUN_01299bc0(lVar15,(long)&stack0x000001d0 + 4,&stack0x000001d0,
                                           *(undefined8 *)
                                            Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                              if (iVar28 == iStack00000000000001d0) {
                                iVar28 = iStack000000000000016c;
                                uStack00000000000001dc = uVar1;
                                FUN_01299bc0(lVar15,(long)&stack0x000001d8 + 4,&stack0x000001d8,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                uVar29 = unaff_w23 - 1U;
                                if (iVar28 == iStack00000000000001d8) {
                                  for (; 0 < (int)(uVar29 + 1); uVar29 = uVar29 - 1) {
                                    FUN_0132138c(lVar18,uVar29,&stack0x000001e0,
                                                 *(undefined8 *)
                                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                                );
                                    FUN_00ca0af8(lVar21,in_stack_000001e0,
                                                 *(undefined8 *)OVRManager_XrApi_TypeInfo);
                                    puVar25 = StringLiteral_4747;
                                    FUN_00ac20f0(lVar22,iStack0000000000000078 + uVar29,
                                                 *(undefined8 *)StringLiteral_4747);
                                    FUN_00ac20f0(lVar23,0xffffffff,*(undefined8 *)puVar25);
                                  }
                                }
                              }
                            }
                            iVar27 = iVar27 + 1;
                          } while (iVar27 < *(int *)(lVar20 + 0x18));
                        }
                        if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        *(long *)(in_stack_00000128 + 0x18) = lVar21;
                        *(long *)(in_stack_00000128 + 0x20) = lVar22;
                        *(long *)(in_stack_00000128 + 0x28) = lVar23;
                      }
                      else {
                        if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar20 = *(long *)(in_stack_00000128 + 0x18);
                        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar21 = *(long *)(in_stack_00000128 + 0x20);
                        lVar22 = *(long *)(in_stack_00000128 + 0x28);
                        if (0 < *(int *)(lVar20 + 0x18)) {
                          iVar27 = 0;
                          do {
                            FUN_0132138c(lVar20,iVar27,&stack0x000001e8,
                                         *(undefined8 *)
                                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                        );
                            iVar9 = FUN_01323730(lVar14,in_stack_000001e8,
                                                 *(undefined8 *)
                                                  System_Collections_IComparer_TypeInfo);
                            iVar10 = *(int *)(lVar20 + 0x18);
                            iVar28 = iVar27 + 1;
                            iVar5 = 0;
                            if (iVar10 != 0) {
                              iVar5 = iVar28 / iVar10;
                            }
                            FUN_0132138c(lVar20,iVar28 - iVar5 * iVar10,&stack0x000001f0,
                                         *(undefined8 *)
                                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                        );
                            iVar10 = FUN_01323730(lVar14,in_stack_000001f0,
                                                  *(undefined8 *)
                                                   System_Collections_IComparer_TypeInfo);
                            puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                            if ((iVar9 != -1) && (iVar10 != -1)) {
                              FUN_01299bc0(lVar15,&stack0x00000200,&stack0x000001fc,
                                           *(undefined8 *)
                                            Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                              FUN_01299bc0(lVar15,&stack0x00000208,&stack0x00000204,
                                           *(undefined8 *)puVar25);
                              puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                              if (in_stack_000001fc == in_stack_00000204) {
                                FUN_01299bc0(lVar15,&stack0x00000210,&stack0x0000020c,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                FUN_01299bc0(lVar15,&stack0x00000218,&stack0x00000214,
                                             *(undefined8 *)puVar25);
                                iVar30 = iStack000000000000004c;
                                if (in_stack_0000020c == in_stack_00000214) {
                                  FUN_01323e24(lVar20,iVar28,lVar18,
                                               *(undefined8 *)Mono_X509PalImpl_TypeInfo);
                                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da518c();
                                  }
                                  iVar10 = 0;
                                  do {
                                    FUN_01323a14(lVar21,iVar27 + iVar10 + 1,&stack0x0000021c,
                                                 *(undefined8 *)
                                                  Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                                );
                                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    FUN_00ac20f0(lVar22,0xffffffff,*(undefined8 *)StringLiteral_4747
                                                );
                                    iVar10 = iVar10 + 1;
                                  } while (iVar30 != iVar10);
                                  goto LAB_0234f9d0;
                                }
                              }
                              puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                              FUN_01299bc0(lVar15,&stack0x00000224,&stack0x00000220,
                                           *(undefined8 *)
                                            Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                              FUN_01299bc0(lVar15,&stack0x0000022c,&stack0x00000228,
                                           *(undefined8 *)puVar25);
                              puVar25 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                              iVar30 = iStack000000000000004c;
                              if (in_stack_00000220 == in_stack_00000228) {
                                FUN_01299bc0(lVar15,&stack0x00000234,&stack0x00000230,
                                             *(undefined8 *)
                                              Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
                                FUN_01299bc0(lVar15,&stack0x0000023c,&stack0x00000238,
                                             *(undefined8 *)puVar25);
                                iVar30 = iStack000000000000004c;
                                if (in_stack_00000230 == in_stack_00000238) {
                                  FUN_01324d60(lVar18,*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_Add__
                                              );
                                  FUN_01323e24(lVar20,iVar28,lVar18,
                                               *(undefined8 *)Mono_X509PalImpl_TypeInfo);
                                  iVar27 = iVar30;
                                  while (0 < iVar27) {
                                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    FUN_01323a14(lVar21,iVar28,&stack0x00000248,
                                                 *(undefined8 *)
                                                  Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                                                );
                                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    FUN_00ac20f0(lVar22,0xffffffff,*(undefined8 *)StringLiteral_4747
                                                );
                                    iVar27 = iVar27 + -1;
                                  }
                                }
                              }
                            }
LAB_0234f9d0:
                            iVar27 = iVar28;
                          } while (iVar28 < *(int *)(lVar20 + 0x18));
                        }
                        if (in_stack_00000128 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        *(long *)(in_stack_00000128 + 0x18) = lVar20;
                        *(long *)(in_stack_00000128 + 0x20) = lVar21;
                        *(long *)(in_stack_00000128 + 0x28) = lVar22;
                      }
                    }
                    FUN_012b8948(&stack0x00000140,
                                 *(undefined8 *)
                                  Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                                );
                    iStack0000000000000078 = iStack0000000000000078 + iVar30;
                  }
                  FUN_012b8948(&stack0x00000170,*(undefined8 *)Method_System_SByte_Parse__);
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
                        iVar30 = 0;
                        do {
                          FUN_0132138c(lVar18,iVar30,&stack0x000000e0,
                                       *(undefined8 *)StringLiteral_10196);
                          lVar21 = _uStack00000000000000e0;
                          if (lVar19 == 0) goto LAB_02350870;
                          FUN_0132138c(lVar19,iVar30,&stack0x000000e0,
                                       *(undefined8 *)StringLiteral_4463);
                          lVar22 = _uStack00000000000000e0;
                          if (_uStack00000000000000e0 == 0) goto LAB_02350870;
                          iVar27 = *(int *)(lVar14 + 0x18);
                          uVar12 = FUN_0237620c(*(undefined8 *)(_uStack00000000000000e0 + 0x18),
                                                &stack0x00000118,0,0,0);
                          uVar13 = in_stack_00000118;
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
                            FUN_022fa0bc(lVar23,iVar27,0);
                            FUN_022f9954(lVar21,*(undefined8 *)(lVar22 + 0x10),0);
                            lVar23 = *(long *)(lVar22 + 0x18);
                            if (lVar23 == 0) goto LAB_02350870;
                            iVar28 = 0;
                            while (iVar10 = *(int *)(lVar23 + 0x18), iVar28 < iVar10) {
                              if (*(long *)(lVar22 + 0x20) == 0) goto LAB_02350870;
                              FUN_0132138c(*(long *)(lVar22 + 0x20),iVar28,&stack0x000000e0,
                                           *(undefined8 *)puVar6);
                              in_stack_0000024c = uStack00000000000000e0;
                              _uStack00000000000000e0 =
                                   CONCAT44(uStack00000000000000e4,iVar27 + iVar28);
                              FUN_0129a054(lVar15,&stack0x000000e0,&stack0x0000024c,
                                           *(undefined8 *)
                                            Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                              lVar23 = *(long *)(lVar22 + 0x18);
                              iVar28 = iVar28 + 1;
                              if (lVar23 == 0) goto LAB_02350870;
                            }
                            if (*(long *)(lVar22 + 0x28) == 0) goto LAB_02350870;
                            if ((*(int *)(*(long *)(lVar22 + 0x28) + 0x18) == iVar10) &&
                               (0 < iVar10)) {
                              iVar28 = 0;
                              do {
                                if (*(long *)(lVar22 + 0x28) == 0) goto LAB_02350870;
                                FUN_0132138c(*(long *)(lVar22 + 0x28),iVar28,&stack0x000000e0,
                                             *(undefined8 *)puVar6);
                                if (lVar16 == 0) goto LAB_02350870;
                                in_stack_0000024c = uStack00000000000000e0;
                                _uStack00000000000000e0 =
                                     CONCAT44(uStack00000000000000e4,iVar27 + iVar28);
                                FUN_0129a054(lVar16,&stack0x000000e0,&stack0x0000024c,
                                             *(undefined8 *)
                                              Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                                lVar23 = *(long *)(lVar22 + 0x18);
                                if (lVar23 == 0) goto LAB_02350870;
                                iVar28 = iVar28 + 1;
                              } while (iVar28 < *(int *)(lVar23 + 0x18));
                            }
                            FUN_01322050(lVar14,lVar23,
                                         *(undefined8 *)
                                          Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
                            lVar21 = FUN_022f8edc(lVar21,0);
                            if (lVar21 == 0) goto LAB_02350870;
                            if (0 < (int)*(ulong *)(lVar21 + 0x18)) {
                              uVar12 = 0;
                              uVar26 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                              do {
                                if (uVar26 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da5194();
                                }
                                uVar13 = *(undefined8 *)(lVar21 + 0x20 + uVar12 * 8);
                                uStack00000000000000e0 = (int)uVar13;
                                FUN_01299bc0(lVar15,&stack0x000000e0,&stack0x0000024c,
                                             *(undefined8 *)puVar25);
                                _uStack00000000000000e0 =
                                     CONCAT44(uStack00000000000000e4,(int)((ulong)uVar13 >> 0x20));
                                FUN_01299bc0(lVar15,&stack0x000000e0,&stack0x0000024c,
                                             *(undefined8 *)puVar25);
                                _uStack00000000000000e0 = 0;
                                FUN_022f6fa4(&stack0x000000e0,in_stack_0000024c,in_stack_0000024c,0)
                                ;
                                FUN_022f7b50(&stack0x00000108,_uStack00000000000000e0,uVar13,0);
                                if ((iVar8 <= (int)in_stack_00000110) ||
                                   (iVar8 <= (int)((ulong)in_stack_00000110 >> 0x20))) {
                                  FUN_00ca16d4(lVar20,in_stack_00000108,in_stack_00000110,
                                               *(undefined8 *)
                                                System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo
                                              );
                                }
                                uVar26 = (ulong)*(uint *)(lVar21 + 0x18);
                                uVar12 = uVar12 + 1;
                              } while ((long)uVar12 < (long)(int)*(uint *)(lVar21 + 0x18));
                            }
                          }
                          iVar30 = iVar30 + 1;
                        } while (iVar30 < *(int *)(lVar18 + 0x18));
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
                          FUN_02310a38(unaff_x22,lVar14,0,0);
                          FUN_0230ff4c(unaff_x22,lVar15,0);
                          FUN_02310070(unaff_x22,lVar16,0);
                          FUN_02350998(unaff_x22,lVar17);
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
    puVar25 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar24 = thunk_FUN_00d48444(puVar25);
  FUN_016ec5b8(uVar13,uVar24,0);
  uVar24 = thunk_FUN_00d48444(System_Linq_Expressions_MethodCallExpression4_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar13,uVar24);
}


