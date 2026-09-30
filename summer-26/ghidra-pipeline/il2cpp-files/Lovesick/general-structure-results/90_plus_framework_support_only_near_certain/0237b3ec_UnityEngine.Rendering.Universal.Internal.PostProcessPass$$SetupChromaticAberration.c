/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.PostProcessPass$$SetupChromaticAberration
ENTRY_POINT: 0237b3ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 159
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


long UnityEngine_Rendering_Universal_Internal_PostProcessPass__SetupChromaticAberration(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar22;
  undefined8 *puVar23;
  long *plVar24;
  long unaff_x29;
  undefined4 unaff_s8;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  uint uStack0000000000000098;
  int iStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  lVar14 = thunk_FUN_00d62348(*unaff_x19);
  puVar7 = StringLiteral_13991;
  puVar6 = Method_System_Linq_Enumerable_Select<GUIContent,_string>__;
  puVar5 = Method_System_Collections_Generic_Stack<object>_Pop__;
  puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  puVar3 = System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo;
  if (lVar14 != 0) {
    FUN_0130cf5c(lVar14,3);
    FUN_012de890();
    in_stack_00000088 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
    in_stack_00000080 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    in_stack_00000090 = in_stack_00000048;
    while (uVar15 = FUN_012b69b4(&stack0x00000080,
                                 *(undefined8 *)System_Linq_Expressions_MemberAssignment_TypeInfo),
          (uVar15 & 1) != 0) {
      uVar8 = FUN_00ae9e5c(&stack0x00000080,
                           *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(unaff_x29 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar16 = *(long *)(unaff_x29 + (long)(int)uVar8 * 8 + 0x20);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = FUN_0232333c(lVar16,0,0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar16 = *(long *)(unaff_x20 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined4 *)(lVar16 + 0x10);
      uVar13 = *(undefined4 *)(lVar16 + 0x14);
      uVar1 = *(undefined4 *)(lVar16 + 0x18);
      lVar16 = FUN_00da4fb8(*(undefined8 *)puVar4,3);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = *(uint *)(lVar16 + 0x18);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined4 *)(lVar16 + 0x20) = uVar11;
      if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined4 *)(lVar16 + 0x24) = uVar13;
      if (uVar9 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined4 *)(lVar16 + 0x28) = uVar1;
      uStack0000000000000098 = uVar8;
      FUN_0130d000(lVar14,lVar16,&stack0x00000098,*(undefined8 *)puVar7);
    }
    FUN_012b69b0(&stack0x00000080,
                 *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
    puVar23 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
    ;
    lVar16 = FUN_00da4fb8(*(undefined8 *)puVar4,3);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
    if (lVar17 != 0) {
      FUN_01298da0(lVar17,*(undefined8 *)
                           Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerUpEvent__
                                 );
      if ((lVar18 != 0) &&
         (FUN_01298da0(lVar18,*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_get_Current__
                      ), unaff_x29 != 0)) {
        iVar22 = *(int *)(unaff_x29 + 0x18);
        FUN_012de890();
        in_stack_00000088 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000080 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        in_stack_00000090 = in_stack_00000048;
        do {
          do {
            uVar15 = FUN_012b69b4(&stack0x00000080,
                                  *(undefined8 *)System_Linq_Expressions_MemberAssignment_TypeInfo);
            if ((uVar15 & 1) == 0) {
              FUN_012b69b0(&stack0x00000080,
                           *(undefined8 *)
                            System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
              uVar11 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                                 (lVar17,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                                 );
              lVar14 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,uVar11);
              lVar16 = FUN_0230fea8(in_stack_00000020,0);
              FUN_0129b5d0(lVar17,&stack0x00000038,*(undefined8 *)PTR_DAT_033eae38);
              in_stack_00000068 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
              in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
              uVar8 = 0;
              in_stack_00000078 = in_stack_00000050;
              in_stack_00000070 = in_stack_00000048;
              do {
                uVar15 = FUN_012bf140(&stack0x00000060,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<DialogueButton>__
                                     );
                if ((uVar15 & 1) == 0) {
                  FUN_012bf83c(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<EdgeLookup,_Face>_get_Current__
                              );
                  FUN_0230ff4c(in_stack_00000020,lVar16,0);
                  FUN_02310a38(in_stack_00000020);
                  return lVar14;
                }
                in_stack_00000058 =
                     FUN_00bbd368(&stack0x00000060,
                                  *(undefined8 *)Method_System_Nullable<DateParseHandling>__ctor__);
                uVar9 = FUN_00bbd578(&stack0x00000058,
                                     *(undefined8 *)System_Action<string,_ulong>_TypeInfo);
                if (*(uint *)(unaff_x29 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar17 = *(long *)(unaff_x29 + (long)(int)uVar9 * 8 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar11 = FUN_0232333c(lVar17,0,0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar19 = (long)(int)uVar8;
                uVar8 = uVar8 + 1;
                *(undefined4 *)(lVar14 + lVar19 * 4 + 0x20) = uVar11;
                for (iVar22 = 0; iVar12 = FUN_0232ee20(lVar17,0), iVar22 < iVar12;
                    iVar22 = iVar22 + 1) {
                  uVar11 = FUN_0232333c(lVar17,iVar22,0);
                  uVar13 = FUN_00bbd470(&stack0x00000058,*(undefined8 *)puVar5);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uStack0000000000000038 = uVar11;
                  uStack00000000000000ac = uVar13;
                  FUN_01299e64(lVar16,&stack0x00000038,(long)&stack0x000000a8 + 4,
                               *(undefined8 *)puVar3);
                  uVar9 = FUN_0232333c(lVar17,iVar22,0);
                  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(uint *)(unaff_x20 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar19 = *(long *)(unaff_x20 + (long)(int)uVar9 * 8 + 0x20);
                  uStack00000000000000ac = FUN_00bbd470(&stack0x00000058,*(undefined8 *)puVar5);
                  FUN_01299bc0(lVar18,(long)&stack0x000000a8 + 4,&stack0x00000038,
                               *(undefined8 *)puVar6);
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_02338f44(uStack0000000000000038,uStack000000000000003c,uStack0000000000000040,
                               lVar19,0);
                }
              } while( true );
            }
            fVar10 = (float)FUN_00ae9e5c(&stack0x00000080,
                                         *(undefined8 *)
                                          Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
            fStack00000000000000a0 = fVar10;
            uVar15 = FUN_0129aa60(lVar17,&stack0x000000a0,*puVar23);
          } while ((uVar15 & 1) != 0);
          if ((uint)*(float *)(unaff_x29 + 0x18) <= (uint)fVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar19 = *(long *)(unaff_x29 + (long)(int)fVar10 * 8 + 0x20);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = FUN_0232333c(lVar19,0,0);
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(unaff_x20 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar19 = *(long *)(unaff_x20 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = *(uint *)(lVar16 + 0x18);
          if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar11 = *(undefined4 *)(lVar19 + 0x14);
          uVar13 = *(undefined4 *)(lVar19 + 0x18);
          *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(lVar19 + 0x10);
          if (uVar8 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined4 *)(lVar16 + 0x24) = uVar11;
          if (uVar8 < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined4 *)(lVar16 + 0x28) = uVar13;
          fStack00000000000000a0 = (float)unaff_s8;
          lVar19 = FUN_0130f52c(lVar14,lVar16,&stack0x000000a0,iStack000000000000001c,
                                *(undefined8 *)StringLiteral_13760);
          if (iStack000000000000001c < iStack0000000000000018) {
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (iStack000000000000001c <= *(int *)(lVar19 + 0x18)) {
              fStack00000000000000a0 = (float)unaff_s8;
              lVar19 = FUN_0130f52c(lVar14,lVar16,&stack0x000000a0,iStack0000000000000018,
                                    *(undefined8 *)StringLiteral_13760);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iVar2 = *(int *)(lVar19 + 0x18);
              iVar12 = iVar2;
              if (iVar2 < 0) {
                iVar12 = iVar2 + 1;
              }
              iStack000000000000001c = FUN_017726a0(iStack0000000000000018,iVar2 + (iVar12 >> 1),0);
            }
          }
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          pfVar21 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          uVar8 = *(uint *)(lVar19 + 0x18);
          fVar26 = pfVar21[1];
          fVar27 = pfVar21[2];
          fVar10 = *pfVar21;
          if ((int)uVar8 < 1) {
            fVar28 = 0.0;
          }
          else {
            uVar9 = 0;
            fVar28 = 0.0;
            do {
              if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar24 = (long *)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
              if (*plVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar11 = *(undefined4 *)(*plVar24 + 0x18);
              fStack00000000000000a0 = (float)uVar11;
              uVar15 = FUN_0129aa60(lVar17,&stack0x000000a0,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                   );
              if ((uVar15 & 1) == 0) {
                if (*(uint *)(lVar19 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                if (*plVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar20 = *(long *)(*plVar24 + 0x10);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar8 = *(uint *)(lVar20 + 0x18);
                if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                if (uVar8 == 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                if (uVar8 < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                fVar29 = *(float *)(lVar20 + 0x20);
                fVar30 = *(float *)(lVar20 + 0x24);
                fVar25 = *(float *)(lVar20 + 0x28);
                iStack000000000000009c = iVar22;
                fStack00000000000000a0 = (float)uVar11;
                FUN_0129a054(lVar17,&stack0x000000a0,(long)&stack0x00000098 + 4,
                             *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                if (*(uint *)(lVar19 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar20 = *plVar24;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                fVar10 = fVar10 + fVar29;
                fVar26 = fVar26 + fVar30;
                fVar27 = fVar27 + fVar25;
                fVar28 = fVar28 + 1.0;
                if (*(long *)(lVar20 + 0x20) != 0) {
                  iVar12 = 0;
                  while( true ) {
                    lVar20 = *(long *)(lVar20 + 0x20);
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(int *)(lVar20 + 0x18) <= iVar12) break;
                    FUN_0132138c(lVar20,iVar12,&stack0x000000a0,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                                );
                    iStack000000000000009c = iVar22;
                    FUN_0129a054(lVar17,&stack0x000000a0,(long)&stack0x00000098 + 4,
                                 *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    if (*(uint *)(lVar19 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    lVar20 = *plVar24;
                    iVar12 = iVar12 + 1;
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                  }
                }
              }
              uVar8 = *(uint *)(lVar19 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
          fStack00000000000000a8 = fVar27 / fVar28;
          fStack00000000000000a4 = fVar26 / fVar28;
          fStack00000000000000a0 = fVar10 / fVar28;
          iStack000000000000009c = iVar22;
          FUN_0129a054(lVar18,(long)&stack0x00000098 + 4,&stack0x000000a0,
                       *(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo);
          iVar22 = iVar22 + 1;
          puVar23 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
          ;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


