/*
FUNCTION_NAME: Mono.Unity.UnityTlsProvider$$get_Name
ENTRY_POINT: 01c11878
PROGRAM: Lovesick-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5
*/


void Mono_Unity_UnityTlsProvider__get_Name(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint in_w8;
  uint uVar12;
  long unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  uint uVar13;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *unaff_x27;
  long *unaff_x29;
  undefined2 *in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  byte bStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    unaff_w21 = unaff_w21 + 1;
    if ((int)in_w8 <= (int)unaff_w21) {
      do {
        uVar14 = *(undefined8 *)
                  Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_DeleteFaces__;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar14,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        lVar6 = FUN_01c4db54(unaff_x22,uVar14,1,0);
        uVar4 = in_stack_00000050;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = *(uint *)(lVar6 + 0x18);
        puVar1 = (undefined8 *)
                 Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRAnchorSubsystem>__ctor__
        ;
        if (0 < (int)uVar12) {
          uVar13 = 0;
          do {
            if (uVar12 <= uVar13) {
              in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar15 = *(long **)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
            if (plVar15 == (long *)0x0) {
              in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            bVar5 = *(byte *)(*(long *)Method_System_Tuple<TextReader,_Memory<char>>__ctor__ + 300);
            if ((*(byte *)(*plVar15 + 300) < bVar5) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) !=
                *(long *)Method_System_Tuple<TextReader,_Memory<char>>__ctor__)) {
              in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar15);
            }
            if (plVar15[2] == 0) {
              in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar7 = FUN_0178be04(plVar15[2],0);
            if ((uVar7 & 1) != 0) {
              if (plVar15[2] == 0) {
                in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar7 = FUN_0178bdc4(plVar15[2],0);
              if ((uVar7 & 1) == 0) {
                lVar16 = plVar15[2];
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (lVar16 == 0) {
                  in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar14 = FUN_0178c180(lVar16,*(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x10),0)
                ;
                if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar7 = FUN_016aa810(uVar14,0,0);
                if ((uVar7 & 1) == 0) {
                  uVar14 = *(undefined8 *)StringLiteral_12437;
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar8 = (long *)FUN_01780344(uVar14,0);
                  if (plVar8 == (long *)0x0) {
                    in_stack_00000050 = uVar4;
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar7 = (**(code **)(*plVar8 + 0x2c8))
                                    (plVar8,plVar15[2],*(undefined8 *)(*plVar8 + 0x2d0));
                  if ((uVar7 & 1) != 0) {
                    lVar17 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x28);
                    lVar16 = FUN_0179c590(plVar15[2],0);
                    if (lVar16 == 0) {
                      lVar9 = 0;
                      unaff_x27 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
                    }
                    else {
                      uVar14 = *(undefined8 *)
                                Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__
                      ;
                      lVar9 = thunk_FUN_00d6225c(lVar16,uVar14);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da544c(lVar16,uVar14);
                      }
                      uVar14 = *(undefined8 *)
                                Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__
                      ;
                      lVar10 = thunk_FUN_00d6225c(lVar16,uVar14);
                      unaff_x27 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da544c(lVar16,uVar14);
                      }
                    }
                    Method_System_Collections_Generic_List<char>__ctor__ = (undefined *)unaff_x27;
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_00c3af4c(lVar17,lVar9,(int)plVar15[3],
                                 *(undefined8 *)System_Func<Decimal>_TypeInfo);
                  }
                }
              }
            }
            uVar12 = *(uint *)(lVar6 + 0x18);
            uVar13 = uVar13 + 1;
            puVar1 = (undefined8 *)
                     Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRAnchorSubsystem>__ctor__
            ;
          } while ((int)uVar13 < (int)uVar12);
        }
        do {
          do {
            in_stack_00000050 = uVar4;
            puVar2 = StringLiteral_4800;
            puVar3 = 
            Field_<PrivateImplementationDetails>_08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
            ;
            unaff_x20 = unaff_x20 + 1;
            if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
              lVar6 = *(long *)
                       Field_<PrivateImplementationDetails>_08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
              ;
              lVar16 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x30);
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar6 = *(long *)puVar3;
              }
              uVar14 = **(undefined8 **)(lVar6 + 0xb8);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if ((lVar6 != 0) &&
                 (FUN_01267c10(lVar6,uVar14,
                               *(undefined8 *)
                                System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo
                               ,0),
                 puVar2 = 
                 Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c__DisplayClass0_0_<BevelEdges>b__8__
                 , lVar16 != 0)) {
                FUN_0132508c(lVar16,lVar6,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__
                            );
                lVar16 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x28);
                uVar14 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar6 != 0) &&
                   (FUN_01267c10(lVar6,uVar14,*(undefined8 *)PTR_DAT_033f6478,0), lVar16 != 0)) {
                  FUN_0132508c(lVar16,lVar6,
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
            unaff_x22 = *(long **)(unaff_x19 + unaff_x20 * 8 + 0x20);
            if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar6 = (**(code **)(*unaff_x22 + 0x278))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x280))
            ;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar7 = FUN_015fe854(lVar6,*puVar1,0);
            uVar4 = in_stack_00000050;
          } while (((((uVar7 & 1) != 0) ||
                    (uVar7 = FUN_015fe854(lVar6,*(undefined8 *)
                                                 Method_OVRPlugin_<>c_<_cctor>b__796_69__,0),
                    uVar4 = in_stack_00000050, (uVar7 & 1) != 0)) ||
                   (uVar7 = FUN_015fe854(lVar6,*(undefined8 *)StringLiteral_11827,0),
                   uVar4 = in_stack_00000050, (uVar7 & 1) != 0)) ||
                  (uVar7 = thunk_FUN_015fe514(lVar6,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>__ctor__
                                              ,0), uVar4 = in_stack_00000050, (uVar7 & 1) != 0));
          lVar6 = (**(code **)(*unaff_x22 + 0x278))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x280));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = thunk_FUN_015fe514(*(undefined8 *)(lVar6 + 0x10),
                                     *(undefined8 *)UnityEngine_Rendering_CommandBuffer_TypeInfo,0);
          if ((uVar7 & 1) == 0) {
            uVar14 = *(undefined8 *)Method_RCG_Lovesick_ControllerMapping_TuneReleased__;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01780344(uVar14,0);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0)
                == 0) {
              thunk_FUN_00d32864();
            }
            uVar7 = FUN_01c678c4(unaff_x22,uVar14,1,0);
            if ((uVar7 & 1) == 0) break;
          }
          if (*(int *)(*(long *)PTR_DAT_033ee8c0 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01c6c014(0);
          uVar4 = in_stack_00000050;
        } while ((uVar7 & 1) != 0);
        uVar14 = *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar14,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        unaff_x23 = FUN_01c4db54(unaff_x22,uVar14,1,0);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_w8 = *(uint *)(unaff_x23 + 0x18);
      } while ((int)in_w8 < 1);
      unaff_w21 = 0;
    }
    if (in_w8 <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar15 = *(long **)(unaff_x23 + (long)(int)unaff_w21 * 8 + 0x20);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar5 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Any<ProBuilderMesh>__ + 300);
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
    uVar7 = FUN_0178be04(plVar15[2],0);
    if ((uVar7 & 1) != 0) {
      if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = FUN_0178bdc4(plVar15[2],0);
      if ((uVar7 & 1) == 0) {
        lVar6 = plVar15[2];
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar14 = FUN_0178c180(lVar6,*(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x10),0);
        if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_016aa810(uVar14,0,0);
        if ((uVar7 & 1) == 0) {
          lVar6 = plVar15[2];
          uVar14 = *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_01780344(uVar14,0);
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) ==
              0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01c4afd0(lVar6,uVar14,0);
          if ((uVar7 & 1) != 0) {
            lVar17 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x30);
            in_stack_00000058._4_2_ = 0;
            in_stack_00000058._6_1_ = 0;
            lVar6 = plVar15[2];
            lVar16 = plVar15[3];
            uVar14 = *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01780344(uVar14,0);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0)
                == 0) {
              thunk_FUN_00d32864();
            }
            lVar9 = FUN_01c4b22c(lVar6,uVar14,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar14 = *(undefined8 *)(lVar9 + 0x20);
            plVar8 = (long *)FUN_01780344(*(undefined8 *)
                                           System_Collections_Generic_IEnumerable<Object>_TypeInfo,0
                                         );
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            bVar5 = (**(code **)(*plVar8 + 0x2c8))
                              (plVar8,plVar15[2],*(undefined8 *)(*plVar8 + 0x2d0));
            lVar9 = plVar15[4];
            in_stack_00000038._4_2_ = in_stack_00000058._4_2_;
            in_stack_00000038._6_1_ = in_stack_00000058._6_1_;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            bStack0000000000000030 = bVar5 & 1;
            uVar11 = *(undefined8 *)UnityEngine_UIElements_UIRLayoutUpdater_TypeInfo;
            *(undefined1 *)(in_stack_00000008 + 1) = in_stack_00000058._6_1_;
            *in_stack_00000008 = in_stack_00000058._4_2_;
            in_stack_00000018 = lVar6;
            in_stack_00000020 = uVar14;
            in_stack_00000028 = lVar16;
            uStack0000000000000034 = (int)lVar9;
            FUN_00c3ad5c(lVar17,&stack0x00000018,uVar11);
            unaff_x27 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
          }
        }
      }
    }
    in_w8 = *(uint *)(unaff_x23 + 0x18);
  } while( true );
}


