/*
FUNCTION_NAME: System.Data.DataTable$$NewRowCreated
ENTRY_POINT: 01c491fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 192
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x01c4aa60) */

void System_Data_DataTable__NewRowCreated(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 uVar17;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int iVar18;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar19;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  long *plVar20;
  undefined2 uStack0000000000000018;
  undefined6 uStack000000000000001a;
  
  FUN_01780344(param_1,0);
  FUN_012df150();
  FUN_01780344(*unaff_x27,0);
  FUN_012df150();
  FUN_01780344(*unaff_x26,0);
  FUN_012df150();
  FUN_01780344(*unaff_x25,0);
  FUN_012df150();
  FUN_01780344(*unaff_x24,0);
  FUN_012df150();
  FUN_01780344(*unaff_x23,0);
  FUN_012df150();
  FUN_01780344(*unaff_x22,0);
  FUN_012df150();
  FUN_01780344(*unaff_x29,0);
  FUN_012df150();
  FUN_01780344(*(undefined8 *)
                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
               ,0);
  FUN_012df150();
  FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
  FUN_012df150();
  FUN_01780344(*(undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo,0
              );
  FUN_012df150();
  FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
  FUN_012df150();
  FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
  FUN_012df150();
  FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
  FUN_012df150();
  plVar10 = (long *)StringLiteral_7194;
  *(undefined8 *)(*(long *)(*(long *)StringLiteral_7194 + 0xb8) + 8) = unaff_x19;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eaef0);
  puVar2 = Method_UnityEngine_Object_FindObjectsOfType<SkinnedMeshRenderer>__;
  puVar1 = Method_System_Collections_Generic_List<HandGrabPose>__ctor__;
  if (lVar5 != 0) {
    FUN_012dd38c(lVar5,*(undefined8 *)Method_UnityEngine_Component_GetComponent<DynamicBone>__);
    uStack0000000000000018 = 0x2c;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    uStack0000000000000018 = 0x28;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    uStack0000000000000018 = 0x29;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    uStack0000000000000018 = 0x5c;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    uStack0000000000000018 = 0x7c;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    uStack0000000000000018 = 0x2d;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    uStack0000000000000018 = 0x2b;
    FUN_012df150(lVar5,&stack0x00000018,*(undefined8 *)puVar2);
    *(long *)(*(long *)(*plVar10 + 0xb8) + 0x10) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_List<char>_get_Item__;
    if (lVar5 != 0) {
      FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_5631);
      *(long *)(*(long *)(*plVar10 + 0xb8) + 0x18) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = StringLiteral_10141;
      if (lVar5 != 0) {
        FUN_01298da0(lVar5,*(undefined8 *)
                            Method_System_Collections_Generic_List<Renderer>_Contains__);
        *(long *)(*(long *)(*plVar10 + 0xb8) + 0x20) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_System_Nullable<InputDeviceMatcher>__ctor__;
        if (lVar5 != 0) {
          FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_11959);
          *(long *)(*(long *)(*plVar10 + 0xb8) + 0x28) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = StringLiteral_286;
          if (lVar5 != 0) {
            FUN_01298da0(lVar5,*(undefined8 *)PTR_DAT_033ed100);
            *(long *)(*(long *)(*plVar10 + 0xb8) + 0x30) = lVar5;
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              FUN_01298da0(lVar5,*(undefined8 *)PTR_DAT_033f35c8);
              lVar14 = *(long *)(*plVar10 + 0xb8);
              *(long *)(lVar14 + 0x38) = lVar5;
              *(undefined8 *)(lVar14 + 0x40) = 0;
              lVar5 = thunk_FUN_00d92814(0);
              puVar2 = 
              Method_Sirenix_Utilities_LinqExtensions_<PrependWith>d__6<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
              ;
              puVar1 = System_Func<JObject,_IEnumerable<JProperty>>_TypeInfo;
              if (lVar5 != 0) {
                uVar6 = FUN_017b69d4(lVar5,0);
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar5);
                  lVar5 = *(long *)puVar1;
                }
                uVar17 = **(undefined8 **)(lVar5 + 0xb8);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrd_n_u64__;
                puVar2 = UnityEngine_InputSystem_RemoteInputPlayerConnection_Subscriber_TypeInfo;
                if (lVar5 != 0) {
                  FUN_012d239c(lVar5,uVar17,
                               *(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhs_lane_s32__,0);
                  uVar6 = FUN_010dd0f4(uVar6,lVar5,*(undefined8 *)puVar2);
                  uVar17 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                  if (lVar5 != 0) {
                    FUN_012d239c(lVar5,uVar17,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRTriangleMesh>,_RoomMeshAnchor_<Initialize>d__14>__
                                 ,0);
                    plVar7 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                               (uVar6,lVar5,*(undefined8 *)puVar1);
                    if (plVar7 != (long *)0x0) {
                      lVar5 = *plVar7;
                      uVar15 = (ulong)*(ushort *)(lVar5 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) ==
                              *(long *)UnityEngine_UIElements_TemplateContainer_TypeInfo) {
                            puVar8 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_01c496ec;
                          }
                          uVar15 = uVar15 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar15 != 0);
                      }
                      puVar8 = (undefined8 *)
                               FUN_00d59724(plVar7,*(long *)
                                                  UnityEngine_UIElements_TemplateContainer_TypeInfo,
                                            0);
LAB_01c496ec:
                      plVar19 = (long *)StringLiteral_10310;
                      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                      puVar3 = StringLiteral_2378;
                      puVar2 = 
                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
                      puVar1 = 
                      Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TryGetValue__
                      ;
                      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      do {
                        lVar5 = *plVar7;
                        uVar15 = (ulong)*(ushort *)(lVar5 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                              puVar8 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                              goto LAB_01c49770;
                            }
                            uVar15 = uVar15 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar15 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_01c49770:
                        uVar15 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                        if ((uVar15 & 1) == 0) {
                          if (plVar7 == (long *)0x0) {
                            return;
                          }
                          lVar5 = *plVar7;
                          uVar15 = (ulong)*(ushort *)(lVar5 + 0x12a);
                          if (uVar15 == 0) goto LAB_01c4a794;
                          piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          goto LAB_01c4a77c;
                        }
                        lVar5 = *plVar7;
                        uVar15 = (ulong)*(ushort *)(lVar5 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) ==
                                *(long *)Method_System_Collections_Generic_List<ObiActor>_IndexOf__)
                            {
                              puVar8 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                              goto LAB_01c497d4;
                            }
                            uVar15 = uVar15 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar15 != 0);
                        }
                        puVar8 = (undefined8 *)
                                 FUN_00d59724(plVar7,*(long *)
                                                  Method_System_Collections_Generic_List<ObiActor>_IndexOf__
                                              ,0);
LAB_01c497d4:
                        lVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        plVar9 = (long *)FUN_00c3be6c(lVar5,*(undefined8 *)puVar3);
                        lVar5 = FUN_00c3bf58(lVar5,*(undefined8 *)puVar1);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        plVar20 = *(long **)(lVar5 + 0x10);
                        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar15 = FUN_0178bdc4(plVar20,0);
                        if ((uVar15 & 1) == 0) {
                          uVar15 = FUN_0178b0b0(plVar20,0);
                          if ((uVar15 & 1) == 0) {
                            uVar6 = *(undefined8 *)Method_OVRSpatialAnchor_SaveAnchorsAsync__;
                            if (*(int *)(*(long *)
                                          Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                        ) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar6 = FUN_01780344(uVar6,0);
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_List<Collider>_Clear__ +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar15 = FUN_01c4afd0(plVar20,uVar6);
                            if ((uVar15 & 1) == 0) {
                              uVar6 = *(undefined8 *)Method_OVRSpatialAnchor_SaveAnchorsAsync__;
                              if (*(int *)(*(long *)
                                            Method_TMPro_TMP_TextProcessingStack<float>__ctor__ +
                                          0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar6 = FUN_01780344(uVar6,0);
                              if (*(int *)(*(long *)
                                            Method_System_Collections_Generic_List<Collider>_Clear__
                                          + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar6 = FUN_01c4b13c(uVar6);
                              uVar6 = FUN_01600424(*(undefined8 *)StringLiteral_7490,uVar6,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>__
                                                  ,0);
                              FUN_01c4ad94(plVar20,plVar9,uVar6);
                            }
                            else {
                              uVar15 = (**(code **)(*plVar20 + 1000))
                                                 (plVar20,*(undefined8 *)(*plVar20 + 0x3f0));
                              if ((uVar15 & 1) == 0) {
                                lVar5 = *(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__
                                ;
                                if (*(int *)(lVar5 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar5 = *(long *)
                                           Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
                                }
                                uVar6 = FUN_0178c180(plVar20,*(undefined8 *)
                                                              (*(long *)(lVar5 + 0xb8) + 0x10),0);
                                if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) ==
                                    0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar15 = FUN_016aa810(uVar6,0,0);
                                if ((uVar15 & 1) == 0) {
                                  uVar6 = *(undefined8 *)Method_OVRSpatialAnchor_SaveAnchorsAsync__;
                                  if (*(int *)(*(long *)
                                                Method_TMPro_TMP_TextProcessingStack<float>__ctor__
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar6 = FUN_01780344(uVar6,0);
                                  if (*(int *)(*(long *)
                                                Method_System_Collections_Generic_List<Collider>_Clear__
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  lVar5 = FUN_01c4b22c(plVar20,uVar6);
                                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da518c();
                                  }
                                  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5194();
                                  }
                                  lVar5 = *(long *)(lVar5 + 0x20);
                                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da518c();
                                  }
                                  uVar15 = FUN_0178be4c(lVar5,0);
                                  if ((uVar15 & 1) == 0) {
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar6 = FUN_01c4b4e0(lVar5);
                                    uVar6 = FUN_01600424(*(undefined8 *)
                                                          Method_System_Memory<byte>_Pin__,uVar6,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vpadalq_s8__
                                                  ,0);
                                    FUN_01c4ad94(plVar20,plVar9,uVar6);
                                  }
                                  else {
                                    lVar14 = *(long *)(*(long *)(*plVar10 + 0xb8) + 0x18);
                                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    uVar15 = FUN_0129aa60(lVar14,lVar5,
                                                          *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo
                                                  );
                                    if ((uVar15 & 1) == 0) {
                                      lVar14 = FUN_0179c590(plVar20,0);
                                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      uVar6 = *(undefined8 *)StringLiteral_6712;
                                      plVar10 = (long *)thunk_FUN_00d6225c(lVar14,uVar6);
                                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da544c(lVar14,uVar6);
                                      }
                                      lVar14 = *plVar10;
                                      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                                      if (uVar15 != 0) {
                                        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_6712
                                             ) {
                                            puVar8 = (undefined8 *)
                                                     (lVar14 + (long)*piVar16 * 0x10 + 0x138);
                                            goto LAB_01c49e50;
                                          }
                                          uVar15 = uVar15 - 1;
                                          piVar16 = piVar16 + 4;
                                        } while (uVar15 != 0);
                                      }
                                      puVar8 = (undefined8 *)
                                               FUN_00d59724(plVar10,*(long *)StringLiteral_6712,0);
LAB_01c49e50:
                                      lVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                                      plVar19 = (long *)StringLiteral_10310;
                                      if (lVar14 == 0) {
                                        FUN_01c4ad94(plVar20,plVar9,
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_Events_UnityAction<Component>_TypeInfo
                                                  );
                                        plVar10 = (long *)StringLiteral_7194;
                                      }
                                      else if (*(int *)(lVar14 + 0x10) == 0) {
                                        FUN_01c4ad94(plVar20,plVar9,
                                                     *(undefined8 *)StringLiteral_10645);
                                        plVar10 = (long *)StringLiteral_7194;
                                      }
                                      else {
                                        if (0 < *(int *)(lVar14 + 0x10)) {
                                          iVar18 = 0;
                                          do {
                                            uVar4 = FUN_015fa29c(lVar14,iVar18,0);
                                            if (*(int *)(*(long *)
                                                  Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                                == 0) {
                                              thunk_FUN_00d32864();
                                            }
                                            uVar15 = FUN_016f9468(uVar4,0);
                                            if ((uVar15 & 1) == 0) {
                                              uVar6 = FUN_01600424(*(undefined8 *)StringLiteral_9144
                                                                   ,lVar14,*(undefined8 *)
                                                                                                                                                        
                                                  Method_System_String_ToUpper__,0);
                                              FUN_01c4ad94(plVar20,plVar9,uVar6);
                                            }
                                            iVar18 = iVar18 + 1;
                                          } while (iVar18 < *(int *)(lVar14 + 0x10));
                                        }
                                        lVar11 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                    0xb8) + 0x20);
                                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_00da518c();
                                        }
                                        uVar15 = FUN_0129aa60(lVar11,lVar14,
                                                              *(undefined8 *)StringLiteral_9230);
                                        if ((uVar15 & 1) == 0) {
                                          lVar11 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                      0xb8) + 0x18);
                                          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299e64(lVar11,lVar5,plVar10,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Sirenix_Serialization_Utilities_ImmutableList<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<TElement>_Add__
                                                  );
                                          lVar5 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x20);
                                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299e64(lVar5,lVar14,plVar10,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<WingedEdge>_get_Current__
                                                  );
                                          plVar19 = (long *)StringLiteral_10310;
                                          lVar5 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x28);
                                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299e64(lVar5,plVar10,lVar14,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>__ctor__
                                                  );
                                          plVar10 = (long *)StringLiteral_7194;
                                        }
                                        else {
                                          plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                          PTR_DAT_033ea8a0,5);
                                          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          if ((*(long *)StringLiteral_9144 != 0) &&
                                             (lVar5 = thunk_FUN_00d6225c(*(long *)StringLiteral_9144
                                                                         ,*(undefined8 *)
                                                                           (*plVar12 + 0x40)),
                                             lVar5 == 0)) {
                                            uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(uVar6,0);
                                          }
                                          if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar12[4] = *(long *)StringLiteral_9144;
                                          lVar5 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                             (*plVar12 + 0x40));
                                          if (lVar5 == 0) {
                                            uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(uVar6,0);
                                          }
                                          uVar13 = *(uint *)(plVar12 + 3);
                                          if (uVar13 < 2) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar12[5] = lVar14;
                                          if (*(long *)
                                               Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                              != 0) {
                                            lVar5 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                                  ,*(undefined8 *)(*plVar12 + 0x40));
                                            if (lVar5 == 0) {
                                              uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                              FUN_00da5038(uVar6,0);
                                            }
                                            uVar13 = *(uint *)(plVar12 + 3);
                                          }
                                          if (uVar13 < 3) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar12[6] = *(long *)
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                          ;
                                          lVar5 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x20);
                                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299bc0(lVar5,lVar14,&stack0x00000018,
                                                       *(undefined8 *)
                                                                                                                
                                                  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukMesh2f_TypeInfo
                                                  );
                                          plVar19 = (long *)StringLiteral_10310;
                                          plVar10 = (long *)StringLiteral_7194;
                                          if (CONCAT62(uStack000000000000001a,uStack0000000000000018
                                                      ) == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          uVar6 = thunk_FUN_00d93c64(CONCAT62(uStack000000000000001a
                                                                              ,
                                                  uStack0000000000000018),0);
                                          if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                          }
                                          lVar5 = FUN_01c4b4e0(uVar6);
                                          if ((lVar5 != 0) &&
                                             (lVar14 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                 (*plVar12 + 0x40)),
                                             lVar14 == 0)) {
                                            uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(uVar6,0);
                                          }
                                          uVar13 = *(uint *)(plVar12 + 3);
                                          if (uVar13 < 4) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar12[7] = lVar5;
                                          if (*(long *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                              != 0) {
                                            lVar5 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                                  ,*(undefined8 *)(*plVar12 + 0x40));
                                            if (lVar5 == 0) {
                                              uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                              FUN_00da5038(uVar6,0);
                                            }
                                            uVar13 = *(uint *)(plVar12 + 3);
                                          }
                                          if (uVar13 < 5) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar12[8] = *(long *)
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                          ;
                                          uVar6 = FUN_01600844(plVar12,0);
                                          FUN_01c4ad94(plVar20,plVar9,uVar6);
                                        }
                                      }
                                    }
                                    else {
                                      plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0
                                                                     ,9);
                                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      if ((*(long *)StringLiteral_9177 != 0) &&
                                         (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_9177,
                                                                      *(undefined8 *)
                                                                       (*plVar10 + 0x40)),
                                         lVar14 == 0)) {
                                        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar6,0);
                                      }
                                      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[4] = *(long *)StringLiteral_9177;
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      lVar14 = FUN_01c4b4e0(plVar20);
                                      if ((lVar14 != 0) &&
                                         (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                              (*plVar10 + 0x40)),
                                         lVar11 == 0)) {
                                        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar6,0);
                                      }
                                      uVar13 = *(uint *)(plVar10 + 3);
                                      if (uVar13 < 2) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[5] = lVar14;
                                      if (*(long *)
                                           Method_System_Collections_Generic_List<fsConverter>_Add__
                                          != 0) {
                                        lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<fsConverter>_Add__
                                                  ,*(undefined8 *)(*plVar10 + 0x40));
                                        if (lVar14 == 0) {
                                          uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar6,0);
                                        }
                                        uVar13 = *(uint *)(plVar10 + 3);
                                      }
                                      if (uVar13 < 3) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[6] = *(long *)
                                                  Method_System_Collections_Generic_List<fsConverter>_Add__
                                      ;
                                      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      lVar14 = (**(code **)(*plVar9 + 0x278))
                                                         (plVar9,*(undefined8 *)(*plVar9 + 0x280));
                                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      lVar14 = *(long *)(lVar14 + 0x10);
                                      if ((lVar14 != 0) &&
                                         (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                              (*plVar10 + 0x40)),
                                         lVar11 == 0)) {
                                        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar6,0);
                                      }
                                      uVar13 = *(uint *)(plVar10 + 3);
                                      if (uVar13 < 4) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[7] = lVar14;
                                      if (*(long *)
                                           Method_Obi_ObiRopeCursor_Actor_OnElementsGenerated__ != 0
                                         ) {
                                        lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Obi_ObiRopeCursor_Actor_OnElementsGenerated__
                                                  ,*(undefined8 *)(*plVar10 + 0x40));
                                        if (lVar14 == 0) {
                                          uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar6,0);
                                        }
                                        uVar13 = *(uint *)(plVar10 + 3);
                                      }
                                      if (uVar13 < 5) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[8] = *(long *)
                                                  Method_Obi_ObiRopeCursor_Actor_OnElementsGenerated__
                                      ;
                                      lVar14 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                  0xb8) + 0x18);
                                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      FUN_01299bc0(lVar14,lVar5,&stack0x00000018,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Reflection_SignatureType_get_BaseType__
                                                  );
                                      if (CONCAT62(uStack000000000000001a,uStack0000000000000018) ==
                                          0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      thunk_FUN_00d93c64(CONCAT62(uStack000000000000001a,
                                                                  uStack0000000000000018),0);
                                      lVar14 = FUN_01c4b4e0();
                                      if ((lVar14 != 0) &&
                                         (lVar11 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                              (*plVar10 + 0x40)),
                                         lVar11 == 0)) {
                                        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar6,0);
                                      }
                                      uVar13 = *(uint *)(plVar10 + 3);
                                      if (uVar13 < 6) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[9] = lVar14;
                                      if (*(long *)StringLiteral_4806 != 0) {
                                        lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_4806,
                                                                    *(undefined8 *)(*plVar10 + 0x40)
                                                                   );
                                        if (lVar14 == 0) {
                                          uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar6,0);
                                        }
                                        uVar13 = *(uint *)(plVar10 + 3);
                                      }
                                      if (uVar13 < 7) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[10] = *(long *)StringLiteral_4806;
                                      lVar5 = FUN_01c4b4e0(lVar5);
                                      if ((lVar5 != 0) &&
                                         (lVar14 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                             (*plVar10 + 0x40)),
                                         lVar14 == 0)) {
                                        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar6,0);
                                      }
                                      uVar13 = *(uint *)(plVar10 + 3);
                                      if (uVar13 < 8) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[0xb] = lVar5;
                                      if (*(long *)PTR_DAT_033ecaa0 != 0) {
                                        lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ecaa0,
                                                                   *(undefined8 *)(*plVar10 + 0x40))
                                        ;
                                        if (lVar5 == 0) {
                                          uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar6,0);
                                        }
                                        uVar13 = *(uint *)(plVar10 + 3);
                                      }
                                      if (uVar13 < 9) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar10[0xc] = *(long *)PTR_DAT_033ecaa0;
                                      plVar19 = (long *)StringLiteral_10310;
                                      uVar6 = FUN_01600844(plVar10,0);
                                      plVar10 = (long *)StringLiteral_7194;
                                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      FUN_02661754(uVar6,0);
                                    }
                                  }
                                }
                                else {
                                  FUN_01c4ad94(plVar20,plVar9,
                                               *(undefined8 *)
                                                Method_Meta_XR_ImmersiveDebugger_DebugInspectorManager_RegisterManager<DebugInspectorManager_WatchManagerFromInspector>__
                                              );
                                }
                              }
                              else {
                                FUN_01c4ad94(plVar20,plVar9,
                                             *(undefined8 *)Method_System_IO_File_ReadAllText__);
                              }
                            }
                          }
                          else {
                            FUN_01c4ad94(plVar20,plVar9,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<HashSet<int>>_MoveNext__
                                        );
                          }
                        }
                        else {
                          FUN_01c4ad94(plVar20,plVar9,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<Vector2>_AddRange__);
                        }
                      } while( true );
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01c4a77c:
    if (*(long *)(piVar16 + -2) == *plVar19) {
      puVar8 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01c4a7b0;
    }
  }
LAB_01c4a794:
  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*plVar19,0);
LAB_01c4a7b0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


