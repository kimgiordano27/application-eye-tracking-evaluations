/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.PostProcessPass$$SetupVignette
ENTRY_POINT: 0237b4dc
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


long UnityEngine_Rendering_Universal_Internal_PostProcessPass__SetupVignette(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x23;
  int iVar16;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *unaff_x27;
  undefined4 unaff_s8;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
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
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    lVar10 = FUN_00da4fb8(*unaff_x24,3);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = *(uint *)(lVar10 + 0x18);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(lVar10 + 0x20) = uVar5;
    if (uVar3 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(lVar10 + 0x24) = uVar8;
    if (uVar3 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(lVar10 + 0x28) = uVar1;
    uStack0000000000000098 = unaff_w21;
    FUN_0130d000(in_stack_00000028,lVar10,&stack0x00000098,*unaff_x25);
    uVar9 = FUN_012b69b4(&stack0x00000080,
                         *(undefined8 *)System_Linq_Expressions_MemberAssignment_TypeInfo);
    if ((uVar9 & 1) == 0) break;
    unaff_w21 = FUN_00ae9e5c(&stack0x00000080,
                             *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar10 = *(long *)(in_stack_00000030 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = FUN_0232333c(lVar10,0,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    param_1 = *(long *)(unaff_x20 + (long)(int)uVar3 * 8 + 0x20);
  }
  FUN_012b69b0(&stack0x00000080,
               *(undefined8 *)System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
  puVar17 = (undefined8 *)
            Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
  ;
  lVar10 = FUN_00da4fb8(*unaff_x24,3);
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
  if (lVar11 != 0) {
    FUN_01298da0(lVar11,*(undefined8 *)
                         Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerUpEvent__
                               );
    if ((lVar12 != 0) &&
       (FUN_01298da0(lVar12,*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_get_Current__
                    ), in_stack_00000030 != 0)) {
      iVar16 = *(int *)(in_stack_00000030 + 0x18);
      FUN_012de890();
      in_stack_00000088 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      in_stack_00000080 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      in_stack_00000090 = in_stack_00000048;
      do {
        do {
          uVar9 = FUN_012b69b4(&stack0x00000080,
                               *(undefined8 *)System_Linq_Expressions_MemberAssignment_TypeInfo);
          if ((uVar9 & 1) == 0) {
            FUN_012b69b0(&stack0x00000080,
                         *(undefined8 *)
                          System_Collections_Generic_List<HingedComboComponent>_TypeInfo);
            uVar5 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                              (lVar11,*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                              );
            lVar10 = FUN_00da4fb8(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,uVar5);
            lVar13 = FUN_0230fea8(in_stack_00000020,0);
            FUN_0129b5d0(lVar11,&stack0x00000038,*(undefined8 *)PTR_DAT_033eae38);
            in_stack_00000068 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
            in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            uVar3 = 0;
            in_stack_00000078 = in_stack_00000050;
            in_stack_00000070 = in_stack_00000048;
            do {
              uVar9 = FUN_012bf140(&stack0x00000060,
                                   *(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentsInChildren<DialogueButton>__
                                  );
              if ((uVar9 & 1) == 0) {
                FUN_012bf83c(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<EdgeLookup,_Face>_get_Current__
                            );
                FUN_0230ff4c(in_stack_00000020,lVar13,0);
                FUN_02310a38(in_stack_00000020);
                return lVar10;
              }
              in_stack_00000058 =
                   FUN_00bbd368(&stack0x00000060,
                                *(undefined8 *)Method_System_Nullable<DateParseHandling>__ctor__);
              uVar6 = FUN_00bbd578(&stack0x00000058,
                                   *(undefined8 *)System_Action<string,_ulong>_TypeInfo);
              if (*(uint *)(in_stack_00000030 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar11 = *(long *)(in_stack_00000030 + (long)(int)uVar6 * 8 + 0x20);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar5 = FUN_0232333c(lVar11,0,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar14 = (long)(int)uVar3;
              uVar3 = uVar3 + 1;
              *(undefined4 *)(lVar10 + lVar14 * 4 + 0x20) = uVar5;
              for (iVar16 = 0; iVar7 = FUN_0232ee20(lVar11,0), iVar16 < iVar7; iVar16 = iVar16 + 1)
              {
                uVar5 = FUN_0232333c(lVar11,iVar16,0);
                uVar8 = FUN_00bbd470(&stack0x00000058,*unaff_x27);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uStack0000000000000038 = uVar5;
                uStack00000000000000ac = uVar8;
                FUN_01299e64(lVar13,&stack0x00000038,(long)&stack0x000000a8 + 4,*unaff_x19);
                uVar6 = FUN_0232333c(lVar11,iVar16,0);
                if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(unaff_x20 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar14 = *(long *)(unaff_x20 + (long)(int)uVar6 * 8 + 0x20);
                uStack00000000000000ac = FUN_00bbd470(&stack0x00000058,*unaff_x27);
                FUN_01299bc0(lVar12,(long)&stack0x000000a8 + 4,&stack0x00000038,*unaff_x23);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_02338f44(uStack0000000000000038,uStack000000000000003c,uStack0000000000000040,
                             lVar14,0);
              }
            } while( true );
          }
          fVar4 = (float)FUN_00ae9e5c(&stack0x00000080,
                                      *(undefined8 *)
                                       Method_System_Xml_XmlSqlBinaryReader_FillAllowEOF__);
          fStack00000000000000a0 = fVar4;
          uVar9 = FUN_0129aa60(lVar11,&stack0x000000a0,*puVar17);
        } while ((uVar9 & 1) != 0);
        if ((uint)*(float *)(in_stack_00000030 + 0x18) <= (uint)fVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar13 = *(long *)(in_stack_00000030 + (long)(int)fVar4 * 8 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar3 = FUN_0232333c(lVar13,0,0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar13 = *(long *)(unaff_x20 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar3 = *(uint *)(lVar10 + 0x18);
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar5 = *(undefined4 *)(lVar13 + 0x14);
        uVar8 = *(undefined4 *)(lVar13 + 0x18);
        *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(lVar13 + 0x10);
        if (uVar3 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined4 *)(lVar10 + 0x24) = uVar5;
        if (uVar3 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined4 *)(lVar10 + 0x28) = uVar8;
        fStack00000000000000a0 = (float)unaff_s8;
        lVar13 = FUN_0130f52c(in_stack_00000028,lVar10,&stack0x000000a0,iStack000000000000001c,
                              *(undefined8 *)StringLiteral_13760);
        if (iStack000000000000001c < iStack0000000000000018) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (iStack000000000000001c <= *(int *)(lVar13 + 0x18)) {
            fStack00000000000000a0 = (float)unaff_s8;
            lVar13 = FUN_0130f52c(in_stack_00000028,lVar10,&stack0x000000a0,iStack0000000000000018,
                                  *(undefined8 *)StringLiteral_13760);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            iVar2 = *(int *)(lVar13 + 0x18);
            iVar7 = iVar2;
            if (iVar2 < 0) {
              iVar7 = iVar2 + 1;
            }
            iStack000000000000001c = FUN_017726a0(iStack0000000000000018,iVar2 + (iVar7 >> 1),0);
          }
        }
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        pfVar15 = *(float **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
        uVar3 = *(uint *)(lVar13 + 0x18);
        fVar20 = pfVar15[1];
        fVar21 = pfVar15[2];
        fVar4 = *pfVar15;
        if ((int)uVar3 < 1) {
          fVar22 = 0.0;
        }
        else {
          uVar6 = 0;
          fVar22 = 0.0;
          do {
            if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar18 = (long *)(lVar13 + (long)(int)uVar6 * 8 + 0x20);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar5 = *(undefined4 *)(*plVar18 + 0x18);
            fStack00000000000000a0 = (float)uVar5;
            uVar9 = FUN_0129aa60(lVar11,&stack0x000000a0,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                );
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(lVar13 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar14 = *(long *)(*plVar18 + 0x10);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar3 = *(uint *)(lVar14 + 0x18);
              if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (uVar3 == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (uVar3 < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              fVar23 = *(float *)(lVar14 + 0x20);
              fVar24 = *(float *)(lVar14 + 0x24);
              fVar19 = *(float *)(lVar14 + 0x28);
              iStack000000000000009c = iVar16;
              fStack00000000000000a0 = (float)uVar5;
              FUN_0129a054(lVar11,&stack0x000000a0,(long)&stack0x00000098 + 4,
                           *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
              if (*(uint *)(lVar13 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar14 = *plVar18;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar4 = fVar4 + fVar23;
              fVar20 = fVar20 + fVar24;
              fVar21 = fVar21 + fVar19;
              fVar22 = fVar22 + 1.0;
              if (*(long *)(lVar14 + 0x20) != 0) {
                iVar7 = 0;
                while( true ) {
                  lVar14 = *(long *)(lVar14 + 0x20);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(int *)(lVar14 + 0x18) <= iVar7) break;
                  FUN_0132138c(lVar14,iVar7,&stack0x000000a0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                              );
                  iStack000000000000009c = iVar16;
                  FUN_0129a054(lVar11,&stack0x000000a0,(long)&stack0x00000098 + 4,
                               *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                  if (*(uint *)(lVar13 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar14 = *plVar18;
                  iVar7 = iVar7 + 1;
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                }
              }
            }
            uVar3 = *(uint *)(lVar13 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar3);
        }
        fStack00000000000000a8 = fVar21 / fVar22;
        fStack00000000000000a4 = fVar20 / fVar22;
        fStack00000000000000a0 = fVar4 / fVar22;
        iStack000000000000009c = iVar16;
        FUN_0129a054(lVar12,(long)&stack0x00000098 + 4,&stack0x000000a0,
                     *(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo);
        iVar16 = iVar16 + 1;
        puVar17 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
        ;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


