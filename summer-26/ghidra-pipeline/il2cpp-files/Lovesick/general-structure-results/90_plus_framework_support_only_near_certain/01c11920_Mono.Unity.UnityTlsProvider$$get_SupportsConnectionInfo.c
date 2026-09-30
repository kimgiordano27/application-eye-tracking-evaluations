/*
FUNCTION_NAME: Mono.Unity.UnityTlsProvider$$get_SupportsConnectionInfo
ENTRY_POINT: 01c11920
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


void Mono_Unity_UnityTlsProvider__get_SupportsConnectionInfo(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined **in_x9;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar14;
  uint unaff_w21;
  long unaff_x23;
  long *plVar15;
  long *unaff_x24;
  long lVar16;
  long lVar17;
  long *unaff_x27;
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
  
  do {
    bVar4 = *(byte *)(*(long *)in_x9[0x130] + 300);
    if ((*(byte *)(*unaff_x24 + 300) < bVar4) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)in_x9[0x130])) {
      in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(unaff_x24);
    }
    if (unaff_x24[2] == 0) {
      in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_0178be04(unaff_x24[2],0);
    if ((uVar7 & 1) != 0) {
      if (unaff_x24[2] == 0) {
        in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = FUN_0178bdc4(unaff_x24[2],0);
      if ((uVar7 & 1) == 0) {
        lVar16 = unaff_x24[2];
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar16 == 0) {
          in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = FUN_0178c180(lVar16,*(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x10),0);
        if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_016aa810(uVar8,0,0);
        if ((uVar7 & 1) == 0) {
          uVar8 = *(undefined8 *)StringLiteral_12437;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar9 = (long *)FUN_01780344(uVar8,0);
          if (plVar9 == (long *)0x0) {
            in_stack_00000050 = in_stack_00000010;
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = (**(code **)(*plVar9 + 0x2c8))
                            (plVar9,unaff_x24[2],*(undefined8 *)(*plVar9 + 0x2d0));
          if ((uVar7 & 1) != 0) {
            lVar17 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x28);
            lVar16 = FUN_0179c590(unaff_x24[2],0);
            if (lVar16 == 0) {
              lVar10 = 0;
              unaff_x27 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
            }
            else {
              uVar8 = *(undefined8 *)
                       Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__;
              lVar10 = thunk_FUN_00d6225c(lVar16,uVar8);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(lVar16,uVar8);
              }
              uVar8 = *(undefined8 *)
                       Method_UnityEngine_Component_GetComponentInChildren<IronMaidenPedistal>__;
              lVar11 = thunk_FUN_00d6225c(lVar16,uVar8);
              unaff_x27 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(lVar16,uVar8);
              }
            }
            Method_System_Collections_Generic_List<char>__ctor__ = (undefined *)unaff_x27;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00c3af4c(lVar17,lVar10,(int)unaff_x24[3],
                         *(undefined8 *)System_Func<Decimal>_TypeInfo);
          }
        }
      }
    }
    uVar13 = *(uint *)(unaff_x23 + 0x18);
    unaff_w21 = unaff_w21 + 1;
    puVar1 = (undefined8 *)
             Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRAnchorSubsystem>__ctor__
    ;
    if ((int)uVar13 <= (int)unaff_w21) {
LAB_01c11bfc:
      do {
        do {
          in_stack_00000050 = in_stack_00000010;
          puVar2 = StringLiteral_4800;
          puVar3 = 
          Field_<PrivateImplementationDetails>_08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
          ;
          unaff_x20 = unaff_x20 + 1;
          if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
            lVar16 = *(long *)
                      Field_<PrivateImplementationDetails>_08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
            ;
            lVar17 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x30);
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar16 = *(long *)puVar3;
            }
            uVar8 = **(undefined8 **)(lVar16 + 0xb8);
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if ((lVar16 != 0) &&
               (FUN_01267c10(lVar16,uVar8,
                             *(undefined8 *)
                              System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo
                             ,0),
               puVar2 = 
               Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c__DisplayClass0_0_<BevelEdges>b__8__
               , lVar17 != 0)) {
              FUN_0132508c(lVar17,lVar16,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__
                          );
              lVar17 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x28);
              uVar8 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if ((lVar16 != 0) &&
                 (FUN_01267c10(lVar16,uVar8,*(undefined8 *)PTR_DAT_033f6478,0), lVar17 != 0)) {
                FUN_0132508c(lVar17,lVar16,
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
          plVar9 = *(long **)(unaff_x19 + unaff_x20 * 8 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar16 = (**(code **)(*plVar9 + 0x278))(plVar9,*(undefined8 *)(*plVar9 + 0x280));
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar16 = *(long *)(lVar16 + 0x10);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = FUN_015fe854(lVar16,*puVar1,0);
          in_stack_00000010 = in_stack_00000050;
        } while (((((uVar7 & 1) != 0) ||
                  (uVar7 = FUN_015fe854(lVar16,*(undefined8 *)
                                                Method_OVRPlugin_<>c_<_cctor>b__796_69__,0),
                  in_stack_00000010 = in_stack_00000050, (uVar7 & 1) != 0)) ||
                 (uVar7 = FUN_015fe854(lVar16,*(undefined8 *)StringLiteral_11827,0),
                 in_stack_00000010 = in_stack_00000050, (uVar7 & 1) != 0)) ||
                (uVar7 = thunk_FUN_015fe514(lVar16,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>__ctor__
                                            ,0), in_stack_00000010 = in_stack_00000050,
                (uVar7 & 1) != 0));
        lVar16 = (**(code **)(*plVar9 + 0x278))(plVar9,*(undefined8 *)(*plVar9 + 0x280));
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = thunk_FUN_015fe514(*(undefined8 *)(lVar16 + 0x10),
                                   *(undefined8 *)UnityEngine_Rendering_CommandBuffer_TypeInfo,0);
        if ((uVar7 & 1) == 0) {
          uVar8 = *(undefined8 *)Method_RCG_Lovesick_ControllerMapping_TuneReleased__;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_01780344(uVar8,0);
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) ==
              0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01c678c4(plVar9,uVar8,1,0);
          if ((uVar7 & 1) != 0) goto LAB_01c115ac;
        }
        else {
LAB_01c115ac:
          if (*(int *)(*(long *)PTR_DAT_033ee8c0 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_01c6c014(0);
          in_stack_00000010 = in_stack_00000050;
          if ((uVar7 & 1) != 0) goto LAB_01c11bfc;
        }
        uVar8 = *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        lVar16 = FUN_01c4db54(plVar9,uVar8,1,0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar13 = *(uint *)(lVar16 + 0x18);
        if (0 < (int)uVar13) {
          uVar14 = 0;
          do {
            if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar15 = *(long **)(lVar16 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            bVar4 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Any<ProBuilderMesh>__ + 300);
            if ((*(byte *)(*plVar15 + 300) < bVar4) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar4 * 8 + -8) !=
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
                lVar17 = plVar15[2];
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar8 = FUN_0178c180(lVar17,*(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x10),0);
                if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar7 = FUN_016aa810(uVar8,0,0);
                if ((uVar7 & 1) == 0) {
                  lVar17 = plVar15[2];
                  uVar8 = *(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__
                  ;
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar8 = FUN_01780344(uVar8,0);
                  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ +
                              0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar7 = FUN_01c4afd0(lVar17,uVar8,0);
                  if ((uVar7 & 1) != 0) {
                    lVar11 = *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x30);
                    in_stack_00000058._4_2_ = 0;
                    in_stack_00000058._6_1_ = 0;
                    lVar17 = plVar15[2];
                    lVar10 = plVar15[3];
                    uVar8 = *(undefined8 *)
                             Method_System_Xml_Schema_XsdBuilder_BuildElement_Nillable__;
                    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar8 = FUN_01780344(uVar8,0);
                    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ +
                                0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar5 = FUN_01c4b22c(lVar17,uVar8,0);
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    uVar8 = *(undefined8 *)(lVar5 + 0x20);
                    plVar6 = (long *)FUN_01780344(*(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_IEnumerable<Object>_TypeInfo
                                                  ,0);
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    bVar4 = (**(code **)(*plVar6 + 0x2c8))
                                      (plVar6,plVar15[2],*(undefined8 *)(*plVar6 + 0x2d0));
                    lVar5 = plVar15[4];
                    in_stack_00000038._4_2_ = in_stack_00000058._4_2_;
                    in_stack_00000038._6_1_ = in_stack_00000058._6_1_;
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    bStack0000000000000030 = bVar4 & 1;
                    uVar12 = *(undefined8 *)UnityEngine_UIElements_UIRLayoutUpdater_TypeInfo;
                    *(undefined1 *)(in_stack_00000008 + 1) = in_stack_00000058._6_1_;
                    *in_stack_00000008 = in_stack_00000058._4_2_;
                    in_stack_00000018 = lVar17;
                    in_stack_00000020 = uVar8;
                    in_stack_00000028 = lVar10;
                    uStack0000000000000034 = (int)lVar5;
                    FUN_00c3ad5c(lVar11,&stack0x00000018,uVar12);
                    unaff_x27 = (long *)Method_System_Collections_Generic_List<char>__ctor__;
                  }
                }
              }
            }
            uVar13 = *(uint *)(lVar16 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar13);
        }
        uVar8 = *(undefined8 *)
                 Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_DeleteFaces__;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        unaff_x23 = FUN_01c4db54(plVar9,uVar8,1,0);
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar13 = *(uint *)(unaff_x23 + 0x18);
        in_stack_00000010 = in_stack_00000050;
        puVar1 = (undefined8 *)
                 Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRAnchorSubsystem>__ctor__
        ;
      } while ((int)uVar13 < 1);
      unaff_w21 = 0;
    }
    if (uVar13 <= unaff_w21) {
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
    in_x9 = &Method_TMPro_TMP_TextProcessingStack<WordWrapState>_Clear__;
  } while( true );
}


