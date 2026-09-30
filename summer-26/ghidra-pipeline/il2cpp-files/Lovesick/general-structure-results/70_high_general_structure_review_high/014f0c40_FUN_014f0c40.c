/*
FUNCTION_NAME: FUN_014f0c40
ENTRY_POINT: 014f0c40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x014f1b2c) */

long * FUN_014f0c40(long *param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *puVar12;
  uint *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  short *psVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  
  if ((DAT_0377700f & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_BlockExpressionList_<GetEnumerator>d__18_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_IDictionaryKeyPathProvider>_ContainsKey__
                      );
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Enum_ToObject__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ebcc8);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1e30);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_Init__);
    thunk_FUN_00d48444(PTR_DAT_033ec518);
    DAT_0377700f = 1;
  }
  puVar8 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (param_2 == (long *)0x0) {
    bVar3 = true;
  }
  else {
    uVar24 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar5 = Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_Init__;
    uVar24 = FUN_01780344(uVar24,0);
    uVar10 = FUN_01789ac0(param_1,uVar24,0);
    if ((uVar10 & 1) != 0) {
      param_1 = (long *)thunk_FUN_00d93c64(param_2,0);
    }
    bVar2 = *(byte *)(*(long *)puVar5 + 300);
    if ((bVar2 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) {
      return param_2;
    }
    bVar3 = false;
  }
  if ((param_4 != 0) && (uVar1 = *(uint *)(param_4 + 0x18), 0 < (int)uVar1)) {
    lVar18 = 0;
    do {
      if (uVar1 <= (uint)lVar18) goto LAB_014f1acc;
      plVar11 = *(long **)(param_4 + 0x20 + lVar18 * 8);
      if (plVar11 == (long *)0x0) goto LAB_014f1ac8;
      uVar10 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      if (((uVar10 & 1) != 0) &&
         (uVar10 = (**(code **)(*plVar11 + 0x198))
                             (plVar11,param_1,*(undefined8 *)(*plVar11 + 0x1a0)), (uVar10 & 1) != 0)
         ) {
                    /* WARNING: Could not recover jumptable at 0x014f10d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar11 = (long *)(**(code **)(*plVar11 + 0x1b8))
                                    (plVar11,param_2,*(undefined8 *)(*plVar11 + 0x1c0));
        return plVar11;
      }
      uVar1 = *(uint *)(param_4 + 0x18);
      lVar18 = lVar18 + 1;
    } while ((int)lVar18 < (int)uVar1);
  }
  if (param_2 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_01789ac0(param_1,0,0);
  puVar5 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if ((uVar10 & 1) != 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar24 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar25 = thunk_FUN_00d48444(
                               Method_System_Text_Encoding_DefaultDecoder_System_Runtime_Serialization_ISerializable_GetObjectData__
                               );
    FUN_016f2f28(uVar24,uVar25,0);
    uVar25 = thunk_FUN_00d48444(
                               Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAccelerometer>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar24,uVar25);
  }
  uVar24 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
  ;
  puVar4 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  uVar24 = FUN_01780344(uVar24,0);
  uVar10 = FUN_01789ac0(param_1,uVar24,0);
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (plVar11 == (long *)0x0) goto LAB_014f1ac8;
    if ((!bVar3) && (*param_2 != *(long *)puVar4)) goto LAB_014f1b1c;
LAB_014f0f78:
    FUN_014f4d10(plVar11,param_2,0);
    return plVar11;
  }
  uVar24 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar24 = FUN_01780344(uVar24,0);
  uVar10 = FUN_01789ac0(param_1,uVar24,0);
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if ((plVar11 != (long *)0x0) && (!bVar3)) {
      if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)StringLiteral_9958 + 0x40)) {
        puVar12 = (undefined1 *)thunk_FUN_00d624a0(param_2);
        FUN_014f5f48(plVar11,*puVar12,0);
        return plVar11;
      }
LAB_014f1b1c:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2);
    }
    goto LAB_014f1ac8;
  }
  uVar24 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar24 = FUN_01780344(uVar24,0);
  uVar10 = FUN_01789ac0(param_1,uVar24,0);
  if ((uVar10 & 1) == 0) {
    uVar24 = *(undefined8 *)
              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_01780344(uVar24,0);
    uVar10 = FUN_01789ac0(param_1,uVar24,0);
    if ((uVar10 & 1) == 0) {
      uVar24 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_01780344(uVar24,0);
      uVar10 = FUN_01789ac0(param_1,uVar24,0);
      if ((uVar10 & 1) != 0) {
        plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if ((plVar11 != (long *)0x0) && (!bVar3)) {
          if (*(long *)(*param_2 + 0x40) == *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
            puVar15 = (undefined8 *)thunk_FUN_00d624a0(param_2);
            FUN_014f5f10(*puVar15,plVar11,0);
            return plVar11;
          }
          goto LAB_014f1b1c;
        }
        goto LAB_014f1ac8;
      }
      uVar24 = *(undefined8 *)StringLiteral_5228;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_01780344(uVar24,0);
      uVar10 = FUN_01789ac0(param_1,uVar24,0);
      if ((uVar10 & 1) != 0) {
        plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if ((plVar11 == (long *)0x0) || (bVar3)) goto LAB_014f1ac8;
        if (*(long *)(*param_2 + 0x40) !=
            *(long *)(*(long *)Method_System_Data_Common_UInt32Storage_Aggregate__ + 0x40))
        goto LAB_014f1b1c;
        psVar16 = (short *)thunk_FUN_00d624a0(param_2);
        uVar10 = (ulong)*psVar16;
        goto LAB_014f1094;
      }
      uVar24 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_01780344(uVar24,0);
      uVar10 = FUN_01789ac0(param_1,uVar24,0);
      if ((uVar10 & 1) == 0) {
        if (param_1 == (long *)0x0) goto LAB_014f1ac8;
        uVar10 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
        puVar7 = 
        Method_System_Collections_Generic_Dictionary<Type,_IDictionaryKeyPathProvider>_ContainsKey__
        ;
        if ((uVar10 & 1) == 0) {
          uVar24 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
          uVar25 = *(undefined8 *)puVar7;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar25 = FUN_01780344(uVar25,0);
          puVar9 = 
          Method_System_Linq_Expressions_BlockExpressionList_<GetEnumerator>d__18_System_Collections_IEnumerator_Reset__
          ;
          uVar10 = FUN_010d8654(uVar24,uVar25,
                                *(undefined8 *)
                                 Method_System_Linq_Expressions_BlockExpressionList_<GetEnumerator>d__18_System_Collections_IEnumerator_Reset__
                               );
          puVar7 = Method_System_Enum_ToObject__;
          if ((uVar10 & 1) != 0) {
            if (bVar3) {
              plVar11 = (long *)0x0;
            }
            else {
              uVar24 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
              plVar11 = (long *)thunk_FUN_00d6225c(param_2,uVar24);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(param_2,uVar24);
              }
            }
            plVar17 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1e30);
            puVar6 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
            if (plVar17 != (long *)0x0) {
              FUN_014f54a8(plVar17,0);
              lVar18 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
              if (lVar18 != 0) {
                if (*(uint *)(lVar18 + 0x18) < 2) {
LAB_014f1acc:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                if (plVar11 != (long *)0x0) {
                  lVar22 = *plVar11;
                  uVar24 = *(undefined8 *)(lVar18 + 0x28);
                  uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar10 != 0) {
                    piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) ==
                          *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                        puVar15 = (undefined8 *)(lVar22 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                        goto LAB_014f15dc;
                      }
                      uVar10 = uVar10 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar15 = (undefined8 *)
                            FUN_00d59724(plVar11,*(long *)
                                                  System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                         ,2);
LAB_014f15dc:
                  plVar19 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
                  if (plVar19 != (long *)0x0) {
                    lVar18 = *plVar19;
                    uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    if (uVar10 != 0) {
                      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == *(long *)puVar6) {
                          puVar15 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_014f163c;
                        }
                        uVar10 = uVar10 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar6,0);
LAB_014f163c:
                    plVar19 = (long *)(*(code *)*puVar15)(plVar19,puVar15[1]);
                    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    do {
                      lVar18 = *plVar19;
                      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                      if (uVar10 != 0) {
                        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) ==
                              *(long *)
                               Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ) {
                            puVar15 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                            goto LAB_014f16a4;
                          }
                          uVar10 = uVar10 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar15 = (undefined8 *)
                                FUN_00d59724(plVar19,*(long *)
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                             ,0);
LAB_014f16a4:
                      uVar10 = (*(code *)*puVar15)(plVar19,puVar15[1]);
                      puVar6 = StringLiteral_10310;
                      if ((uVar10 & 1) == 0) {
                        plVar11 = (long *)thunk_FUN_00d6225c(plVar19,*(undefined8 *)
                                                                      StringLiteral_10310);
                        if (plVar11 == (long *)0x0) {
                          return plVar17;
                        }
                        lVar18 = *plVar11;
                        uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                        if (uVar10 == 0) goto LAB_014f1894;
                        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        goto LAB_014f187c;
                      }
                      lVar18 = *plVar19;
                      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                      if (uVar10 != 0) {
                        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) ==
                              *(long *)
                               Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ) {
                            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                            goto LAB_014f170c;
                          }
                          uVar10 = uVar10 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar15 = (undefined8 *)
                                FUN_00d59724(plVar19,*(long *)
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                             ,1);
LAB_014f170c:
                      plVar20 = (long *)(*(code *)*puVar15)(plVar19,puVar15[1]);
                      lVar18 = *plVar11;
                      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                      if (uVar10 != 0) {
                        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) ==
                              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                            puVar15 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
                            goto LAB_014f1770;
                          }
                          uVar10 = uVar10 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar15 = (undefined8 *)
                                FUN_00d59724(plVar11,*(long *)
                                                  System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                             ,0);
LAB_014f1770:
                      lVar18 = (*(code *)*puVar15)(plVar11,plVar20,puVar15[1]);
                      if (lVar18 == 0) {
                        uVar25 = *(undefined8 *)puVar5;
                        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar25 = FUN_01780344(uVar25,0);
                        uVar10 = FUN_01789ac0(uVar24,uVar25,0);
                        if ((uVar10 & 1) == 0) {
                          lVar18 = FUN_0179c590(uVar24,0);
                        }
                        else {
                          lVar18 = **(long **)(*(long *)puVar4 + 0xb8);
                        }
                      }
                      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar25 = (**(code **)(*plVar20 + 0x168))
                                         (plVar20,*(undefined8 *)(*plVar20 + 0x170));
                      if (*(int *)(*(long *)PTR_DAT_033ebcc8 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar21 = FUN_014f0c40(uVar24,lVar18,param_3,param_4);
                      (**(code **)(*plVar17 + 0x178))
                                (plVar17,uVar25,uVar21,*(undefined8 *)(*plVar17 + 0x180));
                    } while( true );
                  }
                }
              }
            }
            goto LAB_014f1ac8;
          }
          uVar24 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
          uVar25 = *(undefined8 *)puVar7;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar25 = FUN_01780344(uVar25,0);
          uVar10 = FUN_010d8654(uVar24,uVar25,*(undefined8 *)puVar9);
          if ((uVar10 & 1) != 0) {
            plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                  Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                                                );
            if ((plVar11 != (long *)0x0) &&
               (FUN_014f5524(plVar11,0),
               puVar5 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__, !bVar3)) {
              uVar24 = *(undefined8 *)
                        Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
              lVar18 = thunk_FUN_00d6225c(param_2,uVar24);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(param_2,uVar24);
              }
              lVar18 = *(long *)puVar5;
              plVar17 = (long *)thunk_FUN_00d6225c(param_2,lVar18);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(param_2,lVar18);
              }
              lVar22 = *plVar17;
              uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
              if (uVar10 != 0) {
                piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar18) {
                    puVar15 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                    goto FUN_014f1924;
                  }
                  uVar10 = uVar10 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar10 != 0);
              }
              puVar15 = (undefined8 *)FUN_00d59724(plVar17,lVar18,0);
FUN_014f1924:
              plVar17 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
              uVar24 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar8);
              }
              uVar10 = FUN_01789ac0(uVar24,0,0);
              if ((((uVar10 & 1) != 0) &&
                  (lVar18 = (**(code **)(*param_1 + 0x488))
                                      (param_1,*(undefined8 *)(*param_1 + 0x490)), lVar18 != 0)) &&
                 (*(long *)(lVar18 + 0x18) != 0)) {
                if ((int)*(long *)(lVar18 + 0x18) == 0) goto LAB_014f1acc;
                uVar24 = *(undefined8 *)(lVar18 + 0x20);
              }
              puVar8 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
              if (plVar17 != (long *)0x0) {
                do {
                  lVar22 = *plVar17;
                  lVar18 = *(long *)puVar8;
                  uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar10 != 0) {
                    piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == lVar18) {
                        puVar15 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_014f19f4;
                      }
                      uVar10 = uVar10 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_00d59724(plVar17,lVar18,0);
LAB_014f19f4:
                  uVar10 = (*(code *)*puVar15)(plVar17,puVar15[1]);
                  if ((uVar10 & 1) == 0) {
                    return plVar11;
                  }
                  lVar22 = *plVar17;
                  lVar18 = *(long *)puVar8;
                  uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar10 != 0) {
                    piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == lVar18) {
                        puVar15 = (undefined8 *)(lVar22 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                        goto LAB_014f1a54;
                      }
                      uVar10 = uVar10 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_00d59724(plVar17,lVar18,1);
LAB_014f1a54:
                  uVar25 = (*(code *)*puVar15)(plVar17,puVar15[1]);
                  if (*(int *)(*(long *)PTR_DAT_033ebcc8 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)PTR_DAT_033ebcc8);
                  }
                  uVar25 = FUN_014ee7b4(uVar24,uVar25);
                  uVar21 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
                  uVar25 = FUN_014f0c40(uVar24,uVar25,param_3,param_4);
                  (**(code **)(*plVar11 + 0x178))
                            (plVar11,uVar21,uVar25,*(undefined8 *)(*plVar11 + 0x180));
                } while( true );
              }
            }
            goto LAB_014f1ac8;
          }
          uVar10 = FUN_0178be04(param_1,0);
          if (((uVar10 & 1) != 0) ||
             ((uVar10 = FUN_0178be4c(param_1,0), (uVar10 & 1) != 0 &&
              (uVar10 = FUN_0178c0dc(param_1,0), (uVar10 & 1) == 0)))) {
            if (*(int *)(*(long *)PTR_DAT_033ebcc8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar11 = (long *)FUN_014f1c48(param_1,param_2,param_3,param_4);
            return plVar11;
          }
          uVar24 = FUN_015f6780(*(undefined8 *)PTR_DAT_033ec518,param_1,0);
          if (param_3 == 0) goto LAB_014f1ac8;
          FUN_0160c8e8(param_3,uVar24,0);
        }
        param_2 = (long *)(**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170))
        ;
        plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (plVar11 == (long *)0x0) {
LAB_014f1ac8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        goto LAB_014f0f78;
      }
      plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if ((plVar11 == (long *)0x0) || (bVar3)) goto LAB_014f1ac8;
      if (*(long *)(*param_2 + 0x40) !=
          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
      goto LAB_014f1b1c;
      plVar17 = (long *)thunk_FUN_00d624a0(param_2);
      fVar26 = (float)*plVar17;
    }
    else {
      plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if ((plVar11 == (long *)0x0) || (bVar3)) goto LAB_014f1ac8;
      if (*(long *)(*param_2 + 0x40) !=
          *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
      goto LAB_014f1b1c;
      pfVar14 = (float *)thunk_FUN_00d624a0(param_2);
      fVar26 = *pfVar14;
    }
    FUN_014f5f80(fVar26,plVar11,0);
  }
  else {
    plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if ((plVar11 == (long *)0x0) || (bVar3)) goto LAB_014f1ac8;
    if (*(long *)(*param_2 + 0x40) !=
        *(long *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                 + 0x40)) goto LAB_014f1b1c;
    puVar13 = (uint *)thunk_FUN_00d624a0(param_2);
    uVar10 = (ulong)*puVar13;
LAB_014f1094:
    FUN_014f5ed8(plVar11,uVar10,0);
  }
  return plVar11;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar23 = piVar23 + 4;
    if (uVar10 == 0) break;
LAB_014f187c:
    if (*(long *)(piVar23 + -2) == *(long *)puVar6) {
      puVar15 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_014f1900;
    }
  }
LAB_014f1894:
  puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
LAB_014f1900:
  (*(code *)*puVar15)(plVar11,puVar15[1]);
  return plVar17;
}


