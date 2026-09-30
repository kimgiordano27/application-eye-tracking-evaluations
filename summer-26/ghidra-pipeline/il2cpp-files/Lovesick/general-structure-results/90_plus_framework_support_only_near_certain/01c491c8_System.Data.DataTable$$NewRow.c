/*
FUNCTION_NAME: System.Data.DataTable$$NewRow
ENTRY_POINT: 01c491c8
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

void System_Data_DataTable__NewRow(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  undefined8 *unaff_x21;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 *puVar17;
  long unaff_x23;
  undefined8 *puVar18;
  int iVar19;
  long unaff_x24;
  undefined8 *puVar20;
  undefined8 *unaff_x25;
  long *plVar21;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 *puVar22;
  long *plVar23;
  undefined2 uStack0000000000000018;
  undefined6 uStack000000000000001a;
  
  puVar20 = *(undefined8 **)(unaff_x24 + 0x1b0);
  puVar18 = *(undefined8 **)(unaff_x23 + 0xb8);
  puVar17 = *(undefined8 **)(unaff_x22 + 0xde0);
  puVar22 = *(undefined8 **)(unaff_x29 + 0x90);
  FUN_012dd38c(param_2,*param_1);
  uVar15 = *unaff_x20;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_01780344(uVar15,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*unaff_x27,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*unaff_x26,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*unaff_x25,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*puVar20,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*puVar18,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*puVar17,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*puVar22,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                        ,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*(undefined8 *)
                         System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  uVar15 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
  FUN_012df150(param_2,uVar15,*unaff_x21);
  plVar8 = (long *)StringLiteral_7194;
  *(undefined8 *)(*(long *)(*(long *)StringLiteral_7194 + 0xb8) + 8) = param_2;
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
    *(long *)(*(long *)(*plVar8 + 0xb8) + 0x10) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_List<char>_get_Item__;
    if (lVar5 != 0) {
      FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_5631);
      *(long *)(*(long *)(*plVar8 + 0xb8) + 0x18) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = StringLiteral_10141;
      if (lVar5 != 0) {
        FUN_01298da0(lVar5,*(undefined8 *)
                            Method_System_Collections_Generic_List<Renderer>_Contains__);
        *(long *)(*(long *)(*plVar8 + 0xb8) + 0x20) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_System_Nullable<InputDeviceMatcher>__ctor__;
        if (lVar5 != 0) {
          FUN_01298da0(lVar5,*(undefined8 *)StringLiteral_11959);
          *(long *)(*(long *)(*plVar8 + 0xb8) + 0x28) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = StringLiteral_286;
          if (lVar5 != 0) {
            FUN_01298da0(lVar5,*(undefined8 *)PTR_DAT_033ed100);
            *(long *)(*(long *)(*plVar8 + 0xb8) + 0x30) = lVar5;
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar5 != 0) {
              FUN_01298da0(lVar5,*(undefined8 *)PTR_DAT_033f35c8);
              lVar12 = *(long *)(*plVar8 + 0xb8);
              *(long *)(lVar12 + 0x38) = lVar5;
              *(undefined8 *)(lVar12 + 0x40) = 0;
              lVar5 = thunk_FUN_00d92814(0);
              puVar2 = 
              Method_Sirenix_Utilities_LinqExtensions_<PrependWith>d__6<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
              ;
              puVar1 = System_Func<JObject,_IEnumerable<JProperty>>_TypeInfo;
              if (lVar5 != 0) {
                uVar15 = FUN_017b69d4(lVar5,0);
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar5);
                  lVar5 = *(long *)puVar1;
                }
                uVar16 = **(undefined8 **)(lVar5 + 0xb8);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrd_n_u64__;
                puVar2 = UnityEngine_InputSystem_RemoteInputPlayerConnection_Subscriber_TypeInfo;
                if (lVar5 != 0) {
                  FUN_012d239c(lVar5,uVar16,
                               *(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhs_lane_s32__,0);
                  uVar15 = FUN_010dd0f4(uVar15,lVar5,*(undefined8 *)puVar2);
                  uVar16 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                  if (lVar5 != 0) {
                    FUN_012d239c(lVar5,uVar16,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<OVRTriangleMesh>,_RoomMeshAnchor_<Initialize>d__14>__
                                 ,0);
                    plVar6 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                               (uVar15,lVar5,*(undefined8 *)puVar1);
                    if (plVar6 != (long *)0x0) {
                      lVar5 = *plVar6;
                      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) ==
                              *(long *)UnityEngine_UIElements_TemplateContainer_TypeInfo) {
                            puVar17 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                            goto LAB_01c496ec;
                          }
                          uVar13 = uVar13 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar17 = (undefined8 *)
                                FUN_00d59724(plVar6,*(long *)
                                                  UnityEngine_UIElements_TemplateContainer_TypeInfo,
                                             0);
LAB_01c496ec:
                      plVar21 = (long *)StringLiteral_10310;
                      plVar6 = (long *)(*(code *)*puVar17)(plVar6,puVar17[1]);
                      puVar3 = StringLiteral_2378;
                      puVar2 = 
                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
                      puVar1 = 
                      Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TryGetValue__
                      ;
                      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      do {
                        lVar5 = *plVar6;
                        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                              puVar17 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_01c49770;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar17 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01c49770:
                        uVar13 = (*(code *)*puVar17)(plVar6,puVar17[1]);
                        if ((uVar13 & 1) == 0) {
                          if (plVar6 == (long *)0x0) {
                            return;
                          }
                          lVar5 = *plVar6;
                          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
                          if (uVar13 == 0) goto LAB_01c4a794;
                          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          goto LAB_01c4a77c;
                        }
                        lVar5 = *plVar6;
                        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                *(long *)Method_System_Collections_Generic_List<ObiActor>_IndexOf__)
                            {
                              puVar17 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_01c497d4;
                            }
                            uVar13 = uVar13 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar17 = (undefined8 *)
                                  FUN_00d59724(plVar6,*(long *)
                                                  Method_System_Collections_Generic_List<ObiActor>_IndexOf__
                                               ,0);
LAB_01c497d4:
                        lVar5 = (*(code *)*puVar17)(plVar6,puVar17[1]);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        plVar7 = (long *)FUN_00c3be6c(lVar5,*(undefined8 *)puVar3);
                        lVar5 = FUN_00c3bf58(lVar5,*(undefined8 *)puVar1);
                        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        plVar23 = *(long **)(lVar5 + 0x10);
                        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar13 = FUN_0178bdc4(plVar23,0);
                        if ((uVar13 & 1) == 0) {
                          uVar13 = FUN_0178b0b0(plVar23,0);
                          if ((uVar13 & 1) == 0) {
                            uVar15 = *(undefined8 *)Method_OVRSpatialAnchor_SaveAnchorsAsync__;
                            if (*(int *)(*(long *)
                                          Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0
                                        ) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar15 = FUN_01780344(uVar15,0);
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_List<Collider>_Clear__ +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar13 = FUN_01c4afd0(plVar23,uVar15);
                            if ((uVar13 & 1) == 0) {
                              uVar15 = *(undefined8 *)Method_OVRSpatialAnchor_SaveAnchorsAsync__;
                              if (*(int *)(*(long *)
                                            Method_TMPro_TMP_TextProcessingStack<float>__ctor__ +
                                          0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar15 = FUN_01780344(uVar15,0);
                              if (*(int *)(*(long *)
                                            Method_System_Collections_Generic_List<Collider>_Clear__
                                          + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar15 = FUN_01c4b13c(uVar15);
                              uVar15 = FUN_01600424(*(undefined8 *)StringLiteral_7490,uVar15,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>__
                                                  ,0);
                              FUN_01c4ad94(plVar23,plVar7,uVar15);
                            }
                            else {
                              uVar13 = (**(code **)(*plVar23 + 1000))
                                                 (plVar23,*(undefined8 *)(*plVar23 + 0x3f0));
                              if ((uVar13 & 1) == 0) {
                                lVar5 = *(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__
                                ;
                                if (*(int *)(lVar5 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar5 = *(long *)
                                           Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
                                }
                                uVar15 = FUN_0178c180(plVar23,*(undefined8 *)
                                                               (*(long *)(lVar5 + 0xb8) + 0x10),0);
                                if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) ==
                                    0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar13 = FUN_016aa810(uVar15,0,0);
                                if ((uVar13 & 1) == 0) {
                                  uVar15 = *(undefined8 *)Method_OVRSpatialAnchor_SaveAnchorsAsync__
                                  ;
                                  if (*(int *)(*(long *)
                                                Method_TMPro_TMP_TextProcessingStack<float>__ctor__
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar15 = FUN_01780344(uVar15,0);
                                  if (*(int *)(*(long *)
                                                Method_System_Collections_Generic_List<Collider>_Clear__
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  lVar5 = FUN_01c4b22c(plVar23,uVar15);
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
                                  uVar13 = FUN_0178be4c(lVar5,0);
                                  if ((uVar13 & 1) == 0) {
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar15 = FUN_01c4b4e0(lVar5);
                                    uVar15 = FUN_01600424(*(undefined8 *)
                                                           Method_System_Memory<byte>_Pin__,uVar15,
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vpadalq_s8__
                                                  ,0);
                                    FUN_01c4ad94(plVar23,plVar7,uVar15);
                                  }
                                  else {
                                    lVar12 = *(long *)(*(long *)(*plVar8 + 0xb8) + 0x18);
                                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    uVar13 = FUN_0129aa60(lVar12,lVar5,
                                                          *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo
                                                  );
                                    if ((uVar13 & 1) == 0) {
                                      lVar12 = FUN_0179c590(plVar23,0);
                                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      uVar15 = *(undefined8 *)StringLiteral_6712;
                                      plVar8 = (long *)thunk_FUN_00d6225c(lVar12,uVar15);
                                      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da544c(lVar12,uVar15);
                                      }
                                      lVar12 = *plVar8;
                                      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                      if (uVar13 != 0) {
                                        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_6712
                                             ) {
                                            puVar17 = (undefined8 *)
                                                      (lVar12 + (long)*piVar14 * 0x10 + 0x138);
                                            goto LAB_01c49e50;
                                          }
                                          uVar13 = uVar13 - 1;
                                          piVar14 = piVar14 + 4;
                                        } while (uVar13 != 0);
                                      }
                                      puVar17 = (undefined8 *)
                                                FUN_00d59724(plVar8,*(long *)StringLiteral_6712,0);
LAB_01c49e50:
                                      lVar12 = (*(code *)*puVar17)(plVar8,puVar17[1]);
                                      plVar21 = (long *)StringLiteral_10310;
                                      if (lVar12 == 0) {
                                        FUN_01c4ad94(plVar23,plVar7,
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_Events_UnityAction<Component>_TypeInfo
                                                  );
                                        plVar8 = (long *)StringLiteral_7194;
                                      }
                                      else if (*(int *)(lVar12 + 0x10) == 0) {
                                        FUN_01c4ad94(plVar23,plVar7,
                                                     *(undefined8 *)StringLiteral_10645);
                                        plVar8 = (long *)StringLiteral_7194;
                                      }
                                      else {
                                        if (0 < *(int *)(lVar12 + 0x10)) {
                                          iVar19 = 0;
                                          do {
                                            uVar4 = FUN_015fa29c(lVar12,iVar19,0);
                                            if (*(int *)(*(long *)
                                                  Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                                == 0) {
                                              thunk_FUN_00d32864();
                                            }
                                            uVar13 = FUN_016f9468(uVar4,0);
                                            if ((uVar13 & 1) == 0) {
                                              uVar15 = FUN_01600424(*(undefined8 *)
                                                                     StringLiteral_9144,lVar12,
                                                                    *(undefined8 *)
                                                                     Method_System_String_ToUpper__,
                                                                    0);
                                              FUN_01c4ad94(plVar23,plVar7,uVar15);
                                            }
                                            iVar19 = iVar19 + 1;
                                          } while (iVar19 < *(int *)(lVar12 + 0x10));
                                        }
                                        lVar9 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                   0xb8) + 0x20);
                                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_00da518c();
                                        }
                                        uVar13 = FUN_0129aa60(lVar9,lVar12,
                                                              *(undefined8 *)StringLiteral_9230);
                                        if ((uVar13 & 1) == 0) {
                                          lVar9 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x18);
                                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299e64(lVar9,lVar5,plVar8,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Sirenix_Serialization_Utilities_ImmutableList<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<TElement>_Add__
                                                  );
                                          lVar5 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x20);
                                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299e64(lVar5,lVar12,plVar8,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<WingedEdge>_get_Current__
                                                  );
                                          plVar21 = (long *)StringLiteral_10310;
                                          lVar5 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x28);
                                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299e64(lVar5,plVar8,lVar12,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>__ctor__
                                                  );
                                          plVar8 = (long *)StringLiteral_7194;
                                        }
                                        else {
                                          plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                          PTR_DAT_033ea8a0,5);
                                          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          if ((*(long *)StringLiteral_9144 != 0) &&
                                             (lVar5 = thunk_FUN_00d6225c(*(long *)StringLiteral_9144
                                                                         ,*(undefined8 *)
                                                                           (*plVar10 + 0x40)),
                                             lVar5 == 0)) {
                                            uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(uVar15,0);
                                          }
                                          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar10[4] = *(long *)StringLiteral_9144;
                                          lVar5 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                             (*plVar10 + 0x40));
                                          if (lVar5 == 0) {
                                            uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(uVar15,0);
                                          }
                                          uVar11 = *(uint *)(plVar10 + 3);
                                          if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar10[5] = lVar12;
                                          if (*(long *)
                                               Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                              != 0) {
                                            lVar5 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                                  ,*(undefined8 *)(*plVar10 + 0x40));
                                            if (lVar5 == 0) {
                                              uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                              FUN_00da5038(uVar15,0);
                                            }
                                            uVar11 = *(uint *)(plVar10 + 3);
                                          }
                                          if (uVar11 < 3) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar10[6] = *(long *)
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                          ;
                                          lVar5 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                     0xb8) + 0x20);
                                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_01299bc0(lVar5,lVar12,&stack0x00000018,
                                                       *(undefined8 *)
                                                                                                                
                                                  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukMesh2f_TypeInfo
                                                  );
                                          plVar21 = (long *)StringLiteral_10310;
                                          plVar8 = (long *)StringLiteral_7194;
                                          if (CONCAT62(uStack000000000000001a,uStack0000000000000018
                                                      ) == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          uVar15 = thunk_FUN_00d93c64(CONCAT62(
                                                  uStack000000000000001a,uStack0000000000000018),0);
                                          if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                          }
                                          lVar5 = FUN_01c4b4e0(uVar15);
                                          if ((lVar5 != 0) &&
                                             (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                 (*plVar10 + 0x40)),
                                             lVar12 == 0)) {
                                            uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(uVar15,0);
                                          }
                                          uVar11 = *(uint *)(plVar10 + 3);
                                          if (uVar11 < 4) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar10[7] = lVar5;
                                          if (*(long *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                              != 0) {
                                            lVar5 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                                  ,*(undefined8 *)(*plVar10 + 0x40));
                                            if (lVar5 == 0) {
                                              uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                              FUN_00da5038(uVar15,0);
                                            }
                                            uVar11 = *(uint *)(plVar10 + 3);
                                          }
                                          if (uVar11 < 5) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5194();
                                          }
                                          plVar10[8] = *(long *)
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                          ;
                                          uVar15 = FUN_01600844(plVar10,0);
                                          FUN_01c4ad94(plVar23,plVar7,uVar15);
                                        }
                                      }
                                    }
                                    else {
                                      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                                                    9);
                                      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      if ((*(long *)StringLiteral_9177 != 0) &&
                                         (lVar12 = thunk_FUN_00d6225c(*(long *)StringLiteral_9177,
                                                                      *(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                         lVar12 == 0)) {
                                        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar15,0);
                                      }
                                      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[4] = *(long *)StringLiteral_9177;
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      lVar12 = FUN_01c4b4e0(plVar23);
                                      if ((lVar12 != 0) &&
                                         (lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar9 == 0)) {
                                        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar15,0);
                                      }
                                      uVar11 = *(uint *)(plVar8 + 3);
                                      if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[5] = lVar12;
                                      if (*(long *)
                                           Method_System_Collections_Generic_List<fsConverter>_Add__
                                          != 0) {
                                        lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<fsConverter>_Add__
                                                  ,*(undefined8 *)(*plVar8 + 0x40));
                                        if (lVar12 == 0) {
                                          uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar15,0);
                                        }
                                        uVar11 = *(uint *)(plVar8 + 3);
                                      }
                                      if (uVar11 < 3) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[6] = *(long *)
                                                  Method_System_Collections_Generic_List<fsConverter>_Add__
                                      ;
                                      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      lVar12 = (**(code **)(*plVar7 + 0x278))
                                                         (plVar7,*(undefined8 *)(*plVar7 + 0x280));
                                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      lVar12 = *(long *)(lVar12 + 0x10);
                                      if ((lVar12 != 0) &&
                                         (lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar9 == 0)) {
                                        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar15,0);
                                      }
                                      uVar11 = *(uint *)(plVar8 + 3);
                                      if (uVar11 < 4) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[7] = lVar12;
                                      if (*(long *)
                                           Method_Obi_ObiRopeCursor_Actor_OnElementsGenerated__ != 0
                                         ) {
                                        lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Obi_ObiRopeCursor_Actor_OnElementsGenerated__
                                                  ,*(undefined8 *)(*plVar8 + 0x40));
                                        if (lVar12 == 0) {
                                          uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar15,0);
                                        }
                                        uVar11 = *(uint *)(plVar8 + 3);
                                      }
                                      if (uVar11 < 5) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[8] = *(long *)
                                                  Method_Obi_ObiRopeCursor_Actor_OnElementsGenerated__
                                      ;
                                      lVar12 = *(long *)(*(long *)(*(long *)StringLiteral_7194 +
                                                                  0xb8) + 0x18);
                                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      FUN_01299bc0(lVar12,lVar5,&stack0x00000018,
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
                                      lVar12 = FUN_01c4b4e0();
                                      if ((lVar12 != 0) &&
                                         (lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar9 == 0)) {
                                        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar15,0);
                                      }
                                      uVar11 = *(uint *)(plVar8 + 3);
                                      if (uVar11 < 6) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[9] = lVar12;
                                      if (*(long *)StringLiteral_4806 != 0) {
                                        lVar12 = thunk_FUN_00d6225c(*(long *)StringLiteral_4806,
                                                                    *(undefined8 *)(*plVar8 + 0x40))
                                        ;
                                        if (lVar12 == 0) {
                                          uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar15,0);
                                        }
                                        uVar11 = *(uint *)(plVar8 + 3);
                                      }
                                      if (uVar11 < 7) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[10] = *(long *)StringLiteral_4806;
                                      lVar5 = FUN_01c4b4e0(lVar5);
                                      if ((lVar5 != 0) &&
                                         (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar12 == 0)) {
                                        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5038(uVar15,0);
                                      }
                                      uVar11 = *(uint *)(plVar8 + 3);
                                      if (uVar11 < 8) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[0xb] = lVar5;
                                      if (*(long *)PTR_DAT_033ecaa0 != 0) {
                                        lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ecaa0,
                                                                   *(undefined8 *)(*plVar8 + 0x40));
                                        if (lVar5 == 0) {
                                          uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(uVar15,0);
                                        }
                                        uVar11 = *(uint *)(plVar8 + 3);
                                      }
                                      if (uVar11 < 9) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      plVar8[0xc] = *(long *)PTR_DAT_033ecaa0;
                                      plVar21 = (long *)StringLiteral_10310;
                                      uVar15 = FUN_01600844(plVar8,0);
                                      plVar8 = (long *)StringLiteral_7194;
                                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      FUN_02661754(uVar15,0);
                                    }
                                  }
                                }
                                else {
                                  FUN_01c4ad94(plVar23,plVar7,
                                               *(undefined8 *)
                                                Method_Meta_XR_ImmersiveDebugger_DebugInspectorManager_RegisterManager<DebugInspectorManager_WatchManagerFromInspector>__
                                              );
                                }
                              }
                              else {
                                FUN_01c4ad94(plVar23,plVar7,
                                             *(undefined8 *)Method_System_IO_File_ReadAllText__);
                              }
                            }
                          }
                          else {
                            FUN_01c4ad94(plVar23,plVar7,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<HashSet<int>>_MoveNext__
                                        );
                          }
                        }
                        else {
                          FUN_01c4ad94(plVar23,plVar7,
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
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_01c4a77c:
    if (*(long *)(piVar14 + -2) == *plVar21) {
      puVar17 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_01c4a7b0;
    }
  }
LAB_01c4a794:
  puVar17 = (undefined8 *)FUN_00d59724(plVar6,*plVar21,0);
LAB_01c4a7b0:
  (*(code *)*puVar17)(plVar6,puVar17[1]);
  return;
}


