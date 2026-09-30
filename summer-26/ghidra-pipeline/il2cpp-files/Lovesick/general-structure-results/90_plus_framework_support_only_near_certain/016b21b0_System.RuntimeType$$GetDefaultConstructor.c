/*
FUNCTION_NAME: System.RuntimeType$$GetDefaultConstructor
ENTRY_POINT: 016b21b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_RuntimeType__GetDefaultConstructor(undefined8 param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  long *unaff_x27;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar7 = FUN_01789ac0(param_1,0,0);
  if ((uVar7 & 1) == 0) {
    plVar9 = (long *)*unaff_x19;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = (**(code **)(*plVar9 + 0x5c8))(plVar9,*(undefined8 *)(*plVar9 + 0x5d0));
    puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    puVar1 = (undefined8 *)Method_UnityEngine_Events_UnityEvent<Collision>_RemoveListener__;
    puVar3 = System_Action<Type>_TypeInfo;
    if ((uVar7 & 1) == 0) {
      if (unaff_x19[1] == 0) {
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_017319b4(0);
        puVar1 = (undefined8 *)
                 Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
        ;
        if ((unaff_x20 & 1) == 0) {
          puVar1 = (undefined8 *)System_Xml_Schema_LeafRangeNode_TypeInfo;
        }
        if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar15 = *puVar1;
        uVar10 = FUN_0178d3f0(*unaff_x19,0);
        FUN_01600c94(uVar8,uVar15,uVar10,0);
      }
      else {
        lVar16 = *unaff_x19;
        uVar8 = *(undefined8 *)
                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
        ;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        uVar7 = FUN_01789ac0(lVar16,uVar8,0);
        if ((uVar7 & 1) == 0) {
          lVar16 = *unaff_x19;
          uVar8 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_01780344(uVar8,0);
          uVar7 = FUN_01789ac0(lVar16,uVar8,0);
          if ((uVar7 & 1) == 0) {
            lVar16 = *unaff_x19;
            uVar8 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_01780344(uVar8,0);
            uVar7 = FUN_01789ac0(lVar16,uVar8,0);
            if ((uVar7 & 1) == 0) {
              if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar7 = FUN_0178b958(*unaff_x19,0);
              if ((uVar7 & 1) != 0) {
                plVar9 = (long *)thunk_FUN_00d6225c(unaff_x19[1],*(undefined8 *)PTR_DAT_033f74f8);
                plVar11 = (long *)*unaff_x19;
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                plVar11 = (long *)(**(code **)(*plVar11 + 0x448))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x450));
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_017319b4(0);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar7 = (**(code **)(*plVar11 + 0x5c8))(plVar11,*(undefined8 *)(*plVar11 + 0x5d0));
                uVar10 = *(undefined8 *)
                          Method_UnityEngine_UIElements_EventBase<FocusInEvent>_TypeId__;
                if ((uVar7 & 1) == 0) {
                  uVar15 = FUN_0178d3f0(plVar11,0);
                }
                else {
                  uVar15 = FUN_0178d2c8(plVar11,0);
                }
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar16 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar7 != 0) {
                  piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        *(long *)Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_016b25d8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar7 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_00d59724(plVar9,*(long *)
                                               Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                       ,0);
LAB_016b25d8:
                (*(code *)*puVar12)(plVar9,puVar12[1]);
                uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                           );
                uVar8 = FUN_01600ce8(uVar8,uVar10,uVar15,uVar13,0);
                iVar17 = 0;
                do {
                  lVar16 = *plVar9;
                  uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar7 != 0) {
                    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) ==
                          *(long *)Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__) {
                        puVar12 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_016b2674;
                      }
                      uVar7 = uVar7 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar12 = (undefined8 *)
                            FUN_00d59724(plVar9,*(long *)
                                                 Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                         ,0);
LAB_016b2674:
                  iVar5 = (*(code *)*puVar12)(plVar9,puVar12[1]);
                  if (iVar5 <= iVar17) {
                    FUN_015f5b28(uVar8,*(undefined8 *)StringLiteral_11420,0);
                    return;
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar10 = FUN_017319b4(0);
                  lVar16 = *plVar9;
                  puVar12 = puVar1;
                  if (iVar17 != 0) {
                    puVar12 = (undefined8 *)Method_System_Text_UTF32Encoding_GetBytes__;
                  }
                  uVar15 = *puVar12;
                  uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar7 != 0) {
                    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_033f74f8) {
                        puVar12 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_016b270c;
                      }
                      uVar7 = uVar7 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)PTR_DAT_033f74f8,0);
LAB_016b270c:
                  auVar18 = (*(code *)*puVar12)(plVar9,iVar17,puVar12[1]);
                  uVar13 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
                  _in_stack_00000010 = auVar18;
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x27);
                  }
                  uVar13 = FUN_01780344(uVar13,0);
                  uVar6 = FUN_0178a8c4(plVar11,uVar13,0);
                  uVar13 = FUN_016b2064(&stack0x00000010,uVar6 & 1);
                  uVar10 = FUN_01600c94(uVar10,uVar15,uVar13,0);
                  uVar8 = FUN_015f5b28(uVar8,uVar10,0);
                  iVar17 = iVar17 + 1;
                } while( true );
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_017319b4(0);
              if ((unaff_x20 & 1) == 0) {
                puVar1 = (undefined8 *)puVar3;
              }
              if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar15 = *puVar1;
              lVar16 = unaff_x19[1];
              uVar10 = FUN_0178d3f0(*unaff_x19,0);
              FUN_01600ce8(uVar8,uVar15,lVar16,uVar10,0);
            }
            else {
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_017319b4(0);
              plVar9 = (long *)unaff_x19[1];
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              bVar2 = *(byte *)(*unaff_x27 + 300);
              if ((*(byte *)(*plVar9 + 300) < bVar2) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              uVar10 = FUN_0178d2c8(plVar9,0);
              FUN_01600c94(uVar8,*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60>_SliceWithStride<Color32>__
                           ,uVar10,0);
            }
          }
          else {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_017319b4(0);
            FUN_01600c94(uVar8,*(undefined8 *)
                                Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_GetAddReferenceImageJobStatus__
                         ,unaff_x19[1],0);
          }
        }
        else {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_017319b4(0);
          FUN_01600c94(uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_88__,unaff_x19[1],0)
          ;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_017319b4(0);
      if ((unaff_x20 & 1) == 0) {
        puVar1 = (undefined8 *)puVar3;
      }
      if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = *puVar1;
      lVar16 = unaff_x19[1];
      uVar10 = FUN_0178d2c8(*unaff_x19,0);
      FUN_01600ce8(uVar8,uVar15,lVar16,uVar10,0);
    }
  }
  else {
    uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_11__);
    FUN_017cc6f4(uVar8,0);
  }
  return;
}


