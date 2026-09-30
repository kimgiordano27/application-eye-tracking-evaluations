/*
FUNCTION_NAME: Meta.WitAi.CallbackHandlers.WitResponseHandler$$RefreshConfidenceRange
ENTRY_POINT: 01406d58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_WitAi_CallbackHandlers_WitResponseHandler__RefreshConfidenceRange(void)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  long lVar23;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int iVar24;
  long lVar25;
  long *in_stack_00000000;
  undefined8 in_stack_00000018;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000088;
  
  lVar10 = thunk_FUN_00d62348();
  if (lVar10 != 0) {
    FUN_01298da0(lVar10,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                );
    puVar8 = StringLiteral_5626;
    puVar6 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_Vector3TweenableVariable_TypeInfo
    ;
    puVar5 = Obi_ObiRopeChainRenderer_TypeInfo;
    puVar4 = System_Text_DecoderFallback_TypeInfo;
    lVar19 = *(long *)(in_stack_00000038 + 0x18);
    if (lVar19 != 0) {
      bVar3 = false;
      lVar25 = 0;
      while( true ) {
        puVar7 = Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector3>__;
        uVar20 = (uint)*(undefined8 *)(lVar19 + 0x18);
        if ((int)uVar20 <= (int)(uint)lVar25) break;
        if (uVar20 <= (uint)lVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar19 = *(long *)(lVar19 + lVar25 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_01406ed8;
        uVar11 = FUN_01406338(*(undefined8 *)(lVar19 + 0x20));
        uVar12 = FUN_0129eff4(lVar10,uVar11,&stack0x00000078,*(undefined8 *)puVar5);
        if ((uVar12 & 1) == 0) {
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5200);
          if (lVar13 == 0) goto LAB_01406ed8;
          FUN_01320e50(lVar13,*(undefined8 *)Method_SetGlobalTintOnMessage_<>c_<Activate>b__6_0__);
          in_stack_00000078 = lVar13;
          FUN_0129a054(lVar10,uVar11,lVar13,*(undefined8 *)PTR_DAT_033efbe8);
        }
        if ((in_stack_00000078 == 0) ||
           (FUN_00bbdeec(in_stack_00000078,lVar19,*(undefined8 *)puVar4), in_stack_00000078 == 0))
        goto LAB_01406ed8;
        if (1 < *(int *)(in_stack_00000078 + 0x18)) {
          FUN_0132138c(in_stack_00000078,0,&stack0x00000040,*(undefined8 *)puVar8);
          if (((in_stack_00000040 == 0) || (*(long *)(in_stack_00000040 + 0x30) == 0)) ||
             (*(long *)(lVar19 + 0x30) == 0)) goto LAB_01406ed8;
          if (*(int *)(*(long *)(in_stack_00000040 + 0x30) + 0x18) !=
              *(int *)(*(long *)(lVar19 + 0x30) + 0x18)) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)
                          Method_RoomServicePhone_<PersistentRinging>d__37_System_Collections_IEnumerator_Reset__
                         ,0);
            bVar3 = true;
          }
        }
        lVar25 = lVar25 + 1;
        lVar19 = *(long *)(in_stack_00000038 + 0x18);
        if (lVar19 == 0) goto LAB_01406ed8;
      }
      if (bVar3) {
        return;
      }
      lVar19 = *(long *)(in_stack_00000038 + 0x10);
      if ((lVar19 != 0) && (*(long *)(lVar19 + 0x1a0) != 0)) {
        if (*(uint *)(*(long *)(lVar19 + 0x1a0) + 0x18) != uVar20) {
          lVar25 = FUN_012998a8(lVar10,*(undefined8 *)
                                        Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector3>__
                               );
          if (lVar25 == 0) goto LAB_01406ed8;
          uVar9 = FUN_01311ac4(lVar25,*(undefined8 *)StringLiteral_6958);
          uVar11 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ee9b8,uVar9);
          *(undefined8 *)(lVar19 + 0x1a0) = uVar11;
        }
        lVar19 = FUN_012998a8(lVar10,*(undefined8 *)puVar7);
        if (lVar19 != 0) {
          FUN_01311764(lVar19,&stack0x00000040,*(undefined8 *)puVar6);
          uVar20 = 0;
          in_stack_00000068 = in_stack_00000048;
          in_stack_00000060 = in_stack_00000040;
          in_stack_00000070 = in_stack_00000050;
          while (uVar12 = FUN_012c2b80(&stack0x00000060,
                                       *(undefined8 *)
                                        Method_System_Xml_Linq_XElement_<GetAttributes>d__116_System_Collections_IEnumerator_Reset__
                                      ), (uVar12 & 1) != 0) {
            uVar11 = FUN_00bbe0dc(&stack0x00000060,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<ShadowCaster2D>__);
            FUN_01299bc0(lVar10,uVar11,&stack0x00000088,
                         *(undefined8 *)
                          Method_Autohand_Demo_GrabbableEventDebugger_<>c_<OnDisable>b__1_1__);
            lVar19 = in_stack_00000088;
            if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0132138c(in_stack_00000088,0,&stack0x00000088,*(undefined8 *)puVar8);
            lVar25 = in_stack_00000088;
            if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar13 = *(long *)(in_stack_00000088 + 0x30);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar1) {
              lVar23 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
              uVar21 = 0;
              while( true ) {
                if (*(uint *)(lVar13 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar13 = *(long *)(lVar13 + (long)(int)uVar21 * 8 + 0x20);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar9 = *(undefined4 *)(lVar13 + 0x10);
                if (0 < *(int *)(lVar19 + 0x18)) {
                  iVar24 = 0;
                  do {
                    FUN_0132138c(lVar19,iVar24,&stack0x00000088,*(undefined8 *)puVar8);
                    lVar13 = in_stack_00000088;
                    if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar14 = FUN_013fb5e4(*(long *)(in_stack_00000038 + 0x10),
                                          *(undefined8 *)(in_stack_00000088 + 0x18));
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iStack000000000000005c = *(int *)(lVar14 + 0x28);
                    lVar14 = *(long *)(lVar13 + 0x30);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    lVar14 = *(long *)(lVar14 + (long)(int)uVar21 * 8 + 0x20);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01795470(*(long *)(lVar14 + 0x18),0);
                    if (*(long *)(lVar14 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01795470(*(long *)(lVar14 + 0x20),0);
                    if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01795470(*(long *)(lVar14 + 0x28),0);
                    if (uVar21 == 0) {
                      if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if ((lVar23 != 0) &&
                         (lVar16 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar16 == 0)) {
                        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar11,0);
                      }
                      if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[4] = lVar23;
                      lVar13 = *(long *)(lVar13 + 0x18);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar13 = FUN_0268b6ac(lVar13,0);
                      if ((lVar13 != 0) &&
                         (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar23 == 0)) {
                        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar11,0);
                      }
                      uVar18 = *(uint *)(plVar15 + 3);
                      if (uVar18 < 2) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[5] = lVar13;
                      if (*(long *)StringLiteral_3287 != 0) {
                        lVar13 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                                    *(undefined8 *)(*plVar15 + 0x40));
                        if (lVar13 == 0) {
                          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar11,0);
                        }
                        uVar18 = *(uint *)(plVar15 + 3);
                      }
                      if (uVar18 < 3) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[6] = *(long *)StringLiteral_3287;
                      lVar13 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
                      if ((lVar13 != 0) &&
                         (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar23 == 0)) {
                        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar11,0);
                      }
                      uVar18 = *(uint *)(plVar15 + 3);
                      if (uVar18 < 4) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[7] = lVar13;
                      if (*(long *)
                           Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                          != 0) {
                        lVar13 = thunk_FUN_00d6225c(*(long *)
                                                  Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                                                  ,*(undefined8 *)(*plVar15 + 0x40));
                        if (lVar13 == 0) {
                          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar11,0);
                        }
                        uVar18 = *(uint *)(plVar15 + 3);
                      }
                      if (uVar18 < 5) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[8] = *(long *)
                                    Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                      ;
                      if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      iStack0000000000000058 =
                           iStack000000000000005c + *(int *)(*(long *)(lVar14 + 0x18) + 0x18);
                      lVar13 = FUN_0176eb1c(&stack0x00000058,0);
                      if ((lVar13 != 0) &&
                         (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar23 == 0)) {
                        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar11,0);
                      }
                      uVar18 = *(uint *)(plVar15 + 3);
                      if (uVar18 < 6) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[9] = lVar13;
                      if (*(long *)PTR_DAT_033f38b8 != 0) {
                        lVar13 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f38b8,
                                                    *(undefined8 *)(*plVar15 + 0x40));
                        if (lVar13 == 0) {
                          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar11,0);
                        }
                        uVar18 = *(uint *)(plVar15 + 3);
                      }
                      if (uVar18 < 7) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      plVar15[10] = *(long *)PTR_DAT_033f38b8;
                      lVar23 = FUN_01600844(plVar15,0);
                    }
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < *(int *)(lVar19 + 0x18));
                }
                FUN_013f4fc8(uVar9,in_stack_00000018,uVar11);
                if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0140637c();
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0140637c();
                if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0140637c();
                uVar21 = uVar21 + 1;
                if (uVar21 == uVar1) break;
                lVar13 = *(long *)(lVar25 + 0x30);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
            }
            if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar15 = *(long **)(*(long *)(in_stack_00000038 + 0x10) + 0x1a0);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar19 = thunk_FUN_00d6225c(lVar25,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar19 == 0) {
              uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar11,0);
            }
            if (*(uint *)(plVar15 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar19 = (long)(int)uVar20;
            uVar20 = uVar20 + 1;
            plVar15[lVar19 + 4] = lVar25;
          }
          FUN_012c2b7c(&stack0x00000060,
                       *(undefined8 *)Method_System_Collections_Generic_List<Component>_get_Item__);
          puVar4 = Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
          ;
          if (in_stack_00000000 == (long *)0x0) goto LAB_01406ed8;
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                           + 300);
          if ((*(byte *)(*in_stack_00000000 + 300) < bVar2) ||
             (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)
               Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__)) {
LAB_0140769c:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(in_stack_00000000);
          }
          FUN_02669a58(in_stack_00000000,0,0);
          bVar2 = *(byte *)(*(long *)puVar4 + 300);
          if ((*(byte *)(*in_stack_00000000 + 300) < bVar2) ||
             (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)puVar4)) goto LAB_0140769c;
          FUN_02669a58(in_stack_00000000,in_stack_00000018,0);
          if ((*(long *)(in_stack_00000038 + 0x10) == 0) ||
             (plVar15 = (long *)FUN_013eae18(*(long *)(in_stack_00000038 + 0x10),0),
             puVar4 = StringLiteral_13227, plVar15 == (long *)0x0)) goto LAB_01406ed8;
          lVar10 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 == 0) {
LAB_014074d4:
            puVar17 = (undefined8 *)
                      FUN_00d59724(plVar15,*(long *)
                                            Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                   ,0);
          }
          else {
            piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            while (*(long *)(piVar22 + -2) !=
                   *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
              uVar12 = uVar12 - 1;
              piVar22 = piVar22 + 4;
              if (uVar12 == 0) goto LAB_014074d4;
            }
            puVar17 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
          }
          uVar12 = (*(code *)*puVar17)(plVar15,puVar17[1]);
          if ((uVar12 & 1) == 0) {
            return;
          }
          FUN_010c2c5c(in_stack_00000000,&stack0x00000040,*(undefined8 *)puVar4);
          lVar10 = in_stack_00000040;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_0268b4e0(lVar10,0,0);
          if ((uVar12 & 1) != 0) {
            lVar10 = FUN_0268fd4c(in_stack_00000000,0);
            if (lVar10 == 0) goto LAB_01406ed8;
            lVar10 = FUN_010e5800(lVar10,*(undefined8 *)PTR_DAT_033f70e8);
          }
          if (lVar10 != 0) {
            uVar11 = FUN_014327c4(lVar10,0);
            lVar10 = *(long *)(in_stack_00000038 + 0x10);
            if (lVar10 != 0) {
              Meta_WitAi_Data_Entities_WitEntityIntData__op_Equality
                        (lVar10,uVar11,*(undefined8 *)(lVar10 + 0x1a0));
              return;
            }
          }
        }
      }
    }
  }
LAB_01406ed8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


