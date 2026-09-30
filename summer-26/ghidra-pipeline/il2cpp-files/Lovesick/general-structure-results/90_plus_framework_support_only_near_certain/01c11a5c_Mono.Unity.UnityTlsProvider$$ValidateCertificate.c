/*
FUNCTION_NAME: Mono.Unity.UnityTlsProvider$$ValidateCertificate
ENTRY_POINT: 01c11a5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_5
*/


void Mono_Unity_UnityTlsProvider__ValidateCertificate(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x19;
  long lVar12;
  ulong unaff_x20;
  uint uVar13;
  uint unaff_w21;
  long *plVar14;
  long unaff_x23;
  long *plVar15;
  long *unaff_x24;
  long lVar16;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar17;
  long *unaff_x29;
  undefined2 *in_stack_00000008;
  undefined4 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  byte bStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  
code_r0x01c11a5c:
  uVar17 = *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__;
  lVar9 = thunk_FUN_00d6225c(unaff_x26,uVar17);
  plVar8 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(unaff_x26,uVar17);
  }
  do {
    Method_System_Collections_Generic_List<char>__ctor__ = (undefined *)plVar8;
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00c3af4c(unaff_x25,unaff_x27,(int)unaff_x24[3],*(undefined8 *)System_Func<Decimal>_TypeInfo)
    ;
    do {
      do {
        do {
          do {
            uVar11 = *(uint *)(unaff_x23 + 0x18);
            unaff_w21 = unaff_w21 + 1;
            puVar2 = (undefined8 *)
                     Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRAnchorSubsystem>__ctor__
            ;
            if ((int)uVar11 <= (int)unaff_w21) {
LAB_01c11bfc:
              do {
                do {
                  in_stack_00000050 = in_stack_00000010;
                  puVar3 = StringLiteral_4800;
                  puVar4 = 
                  Field_<PrivateImplementationDetails>_08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
                  ;
                  unaff_x20 = unaff_x20 + 1;
                  if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
                    lVar9 = *(long *)
                             Field_<PrivateImplementationDetails>_08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
                    ;
                    lVar12 = *(long *)(*(long *)(*plVar8 + 0xb8) + 0x30);
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar9 = *(long *)puVar4;
                    }
                    uVar17 = **(undefined8 **)(lVar9 + 0xb8);
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if ((lVar9 != 0) &&
                       (FUN_01267c10(lVar9,uVar17,
                                     *(undefined8 *)
                                      System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo
                                     ,0),
                       puVar3 = 
                       Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c__DisplayClass0_0_<BevelEdges>b__8__
                       , lVar12 != 0)) {
                      FUN_0132508c(lVar12,lVar9,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__
                                  );
                      lVar12 = *(long *)(*(long *)(*plVar8 + 0xb8) + 0x28);
                      uVar17 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                      if ((lVar9 != 0) &&
                         (FUN_01267c10(lVar9,uVar17,*(undefined8 *)PTR_DAT_033f6478,0), lVar12 != 0)
                         ) {
                        FUN_0132508c(lVar12,lVar9,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputManager_StateChangeMonitorListener>__
                                    );
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar14 = *(long **)(unaff_x19 + unaff_x20 * 8 + 0x20);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar9 = (**(code **)(*plVar14 + 0x278))(plVar14,*(undefined8 *)(*plVar14 + 0x280))
                  ;
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar9 = *(long *)(lVar9 + 0x10);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar6 = FUN_015fe854(lVar9,*puVar2,0);
                  in_stack_00000010 = in_stack_00000050;
                } while (((((uVar6 & 1) != 0) ||
                          (uVar6 = FUN_015fe854(lVar9,*(undefined8 *)
                                                       Method_OVRPlugin_<>c_<_cctor>b__796_69__,0),
                          in_stack_00000010 = in_stack_00000050, (uVar6 & 1) != 0)) ||
                         (uVar6 = FUN_015fe854(lVar9,*(undefined8 *)StringLiteral_11827,0),
                         in_stack_00000010 = in_stack_00000050, (uVar6 & 1) != 0)) ||
                        (uVar6 = thunk_FUN_015fe514(lVar9,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>__ctor__
                                                  ,0), in_stack_00000010 = in_stack_00000050,
                        (uVar6 & 1) != 0));
                lVar9 = (**(code **)(*plVar14 + 0x278))(plVar14,*(undefined8 *)(*plVar14 + 0x280));
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar6 = thunk_FUN_015fe514(*(undefined8 *)(lVar9 + 0x10),
                                           *(undefined8 *)
                                            UnityEngine_Rendering_CommandBuffer_TypeInfo,0);
                if ((uVar6 & 1) == 0) {
                  uVar17 = *(undefined8 *)Method_RCG_Lovesick_ControllerMapping_TuneReleased__;
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_01780344(uVar17,0);
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar6 = FUN_01c678c4(plVar14,uVar17,1,0);
                  if ((uVar6 & 1) != 0) goto LAB_01c115ac;
                }
                else {
LAB_01c115ac:
                  if (*(int *)(*(long *)PTR_DAT_033ee8c0 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar6 = FUN_01c6c014(0);
                  in_stack_00000010 = in_stack_00000050;
                  if ((uVar6 & 1) != 0) goto LAB_01c11bfc;
                }
                uVar17 = *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo;
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01780344(uVar17,0);
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ +
                            0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar9 = FUN_01c4db54(plVar14,uVar17,1,0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar11 = *(uint *)(lVar9 + 0x18);
                if (0 < (int)uVar11) {
                  uVar13 = 0;
                  do {
                    if (uVar11 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    plVar15 = *(long **)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    bVar5 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Any<ProBuilderMesh>__ +
                                     300);
                    if ((*(byte *)(*plVar15 + 300) < bVar5) ||
                       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) !=
                        *(long *)Method_System_Linq_Enumerable_Any<ProBuilderMesh>__)) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar15);
                    }
                    if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar6 = FUN_0178be04(plVar15[2],0);
                    if ((uVar6 & 1) != 0) {
                      if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar6 = FUN_0178bdc4(plVar15[2],0);
                      if ((uVar6 & 1) == 0) {
                        lVar12 = plVar15[2];
                        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar17 = FUN_0178c180(lVar12,*(undefined8 *)
                                                      (*(long *)(*unaff_x29 + 0xb8) + 0x10),0);
                        if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar6 = FUN_016aa810(uVar17,0,0);
                        if ((uVar6 & 1) == 0) {
                          lVar12 = plVar15[2];
                          uVar17 = *(undefined8 *)
                                    Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__;
                          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar17 = FUN_01780344(uVar17,0);
                          if (*(int *)(*(long *)
                                        Method_System_Collections_Generic_List<Collider>_Clear__ +
                                      0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar6 = FUN_01c4afd0(lVar12,uVar17,0);
                          if ((uVar6 & 1) != 0) {
                            lVar16 = *(long *)(*(long *)(*plVar8 + 0xb8) + 0x30);
                            in_stack_00000058._4_2_ = 0;
                            in_stack_00000058._6_1_ = 0;
                            lVar12 = plVar15[2];
                            lVar1 = plVar15[3];
                            uVar17 = *(undefined8 *)
                                      Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__;
                            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar17 = FUN_01780344(uVar17,0);
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_List<Collider>_Clear__ +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            lVar7 = FUN_01c4b22c(lVar12,uVar17,0);
                            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            uVar17 = *(undefined8 *)(lVar7 + 0x20);
                            plVar8 = (long *)FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  System_Collections_Generic_IEnumerable<Object>_TypeInfo
                                                  ,0);
                            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            bVar5 = (**(code **)(*plVar8 + 0x2c8))
                                              (plVar8,plVar15[2],*(undefined8 *)(*plVar8 + 0x2d0));
                            lVar7 = plVar15[4];
                            in_stack_00000038._4_2_ = in_stack_00000058._4_2_;
                            in_stack_00000038._6_1_ = in_stack_00000058._6_1_;
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            bStack0000000000000030 = bVar5 & 1;
                            uVar10 = *(undefined8 *)UnityEngine_UIElements_UIRLayoutUpdater_TypeInfo
                            ;
                            *(undefined1 *)(in_stack_00000008 + 1) = in_stack_00000058._6_1_;
                            *in_stack_00000008 = in_stack_00000058._4_2_;
                            in_stack_00000018 = lVar12;
                            in_stack_00000020 = uVar17;
                            in_stack_00000028 = lVar1;
                            uStack0000000000000034 = (int)lVar7;
                            FUN_00c3ad5c(lVar16,&stack0x00000018,uVar10);
                            plVar8 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
                          }
                        }
                      }
                    }
                    uVar11 = *(uint *)(lVar9 + 0x18);
                    uVar13 = uVar13 + 1;
                  } while ((int)uVar13 < (int)uVar11);
                }
                uVar17 = *(undefined8 *)
                          Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_DeleteFaces__;
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01780344(uVar17,0);
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ +
                            0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                unaff_x23 = FUN_01c4db54(plVar14,uVar17,1,0);
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar11 = *(uint *)(unaff_x23 + 0x18);
                in_stack_00000010 = in_stack_00000050;
                puVar2 = (undefined8 *)
                         Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRAnchorSubsystem>__ctor__
                ;
              } while ((int)uVar11 < 1);
              unaff_w21 = 0;
            }
            if (uVar11 <= unaff_w21) {
              in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            unaff_x24 = *(long **)(unaff_x23 + (long)(int)unaff_w21 * 8 + 0x20);
            if (unaff_x24 == (long *)0x0) {
              in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            bVar5 = *(byte *)(*(long *)Method_System_Tuple<TextReader,_Memory<char>>__ctor__ + 300);
            if ((*(byte *)(*unaff_x24 + 300) < bVar5) ||
               (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar5 * 8 + -8) !=
                *(long *)Method_System_Tuple<TextReader,_Memory<char>>__ctor__)) {
              in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(unaff_x24);
            }
            if (unaff_x24[2] == 0) {
              in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar6 = FUN_0178be04(unaff_x24[2],0);
          } while ((uVar6 & 1) == 0);
          if (unaff_x24[2] == 0) {
            in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar6 = FUN_0178bdc4(unaff_x24[2],0);
        } while ((uVar6 & 1) != 0);
        lVar9 = unaff_x24[2];
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar9 == 0) {
          in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar17 = FUN_0178c180(lVar9,*(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x10),0);
        if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_016aa810(uVar17,0,0);
      } while ((uVar6 & 1) != 0);
      uVar17 = *(undefined8 *)StringLiteral_12437;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar14 = (long *)FUN_01780344(uVar17,0);
      if (plVar14 == (long *)0x0) {
        in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = (**(code **)(*plVar14 + 0x2c8))
                        (plVar14,unaff_x24[2],*(undefined8 *)(*plVar14 + 0x2d0));
    } while ((uVar6 & 1) == 0);
    unaff_x25 = *(long *)(*(long *)(*plVar8 + 0xb8) + 0x28);
    unaff_x26 = FUN_0179c590(unaff_x24[2],0);
    if (unaff_x26 != 0) break;
    unaff_x27 = 0;
    plVar8 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
  } while( true );
  uVar17 = *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__;
  unaff_x27 = thunk_FUN_00d6225c(unaff_x26,uVar17);
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(unaff_x26,uVar17);
  }
  goto code_r0x01c11a5c;
}


