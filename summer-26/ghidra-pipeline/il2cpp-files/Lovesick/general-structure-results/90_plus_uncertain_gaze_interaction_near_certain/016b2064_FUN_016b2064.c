/*
FUNCTION_NAME: FUN_016b2064
ENTRY_POINT: 016b2064
PROGRAM: Lovesick-libil2cpp.so
SCORE: 219
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_016b2064(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  int iVar19;
  undefined1 auVar20 [16];
  long local_80;
  long lStack_78;
  undefined1 local_70 [16];
  
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_0377863d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_11__);
    thunk_FUN_00d48444(Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__);
    thunk_FUN_00d48444(PTR_DAT_033f74f8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(System_Action<Type>_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_LeafRangeNode_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Collision>_RemoveListener__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_88__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_GetAddReferenceImageJobStatus__
                      );
                    /* try { // try from 016b2164 to 017b24bb has its CatchHandler @ 016b2164
                       catch() { ... } // from try @ 016b2164 with catch @ 016b2164
                       catch() { ... } // from try @ 016b2808 with catch @ 016b2164
                       catch() { ... } // from try @ 016b2d44 with catch @ 016b2164
                       catch() { ... } // from try @ 016b2d60 with catch @ 016b2164
                       catch() { ... } // from try @ 016b2e84 with catch @ 016b2164 */
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60>_SliceWithStride<Color32>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<FocusInEvent>_TypeId__);
    thunk_FUN_00d48444(Method_System_Text_UTF32Encoding_GetBytes__);
    thunk_FUN_00d48444(StringLiteral_11420);
    DAT_0377863d = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  lVar18 = *param_1;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01789ac0(lVar18,0,0);
  if ((uVar9 & 1) == 0) {
    plVar11 = (long *)*param_1;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = (**(code **)(*plVar11 + 0x5c8))(plVar11,*(undefined8 *)(*plVar11 + 0x5d0));
    puVar5 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    puVar1 = (undefined8 *)Method_UnityEngine_Events_UnityEvent<Collision>_RemoveListener__;
    puVar3 = System_Action<Type>_TypeInfo;
    if ((uVar9 & 1) == 0) {
      if (param_1[1] == 0) {
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_017319b4(0);
        puVar1 = (undefined8 *)
                 Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
        ;
        if ((param_2 & 1) == 0) {
          puVar1 = (undefined8 *)System_Xml_Schema_LeafRangeNode_TypeInfo;
        }
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar17 = *puVar1;
        uVar12 = FUN_0178d3f0(*param_1,0);
        FUN_01600c94(uVar10,uVar17,uVar12,0);
      }
      else {
        lVar18 = *param_1;
        uVar10 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_01780344(uVar10,0);
        uVar9 = FUN_01789ac0(lVar18,uVar10,0);
        if ((uVar9 & 1) == 0) {
          lVar18 = *param_1;
          uVar10 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
          uVar9 = FUN_01789ac0(lVar18,uVar10,0);
          if ((uVar9 & 1) == 0) {
            lVar18 = *param_1;
            uVar10 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01780344(uVar10,0);
            uVar9 = FUN_01789ac0(lVar18,uVar10,0);
            if ((uVar9 & 1) == 0) {
              if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar9 = FUN_0178b958(*param_1,0);
              if ((uVar9 & 1) != 0) {
                plVar11 = (long *)thunk_FUN_00d6225c(param_1[1],*(undefined8 *)PTR_DAT_033f74f8);
                param_1 = (long *)*param_1;
                if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                plVar13 = (long *)(**(code **)(*param_1 + 0x448))
                                            (param_1,*(undefined8 *)(*param_1 + 0x450));
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_017319b4(0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar9 = (**(code **)(*plVar13 + 0x5c8))(plVar13,*(undefined8 *)(*plVar13 + 0x5d0));
                uVar12 = *(undefined8 *)
                          Method_UnityEngine_UIElements_EventBase<FocusInEvent>_TypeId__;
                if ((uVar9 & 1) == 0) {
                  uVar17 = FUN_0178d3f0(plVar13,0);
                }
                else {
                  uVar17 = FUN_0178d2c8(plVar13,0);
                }
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar18 = *plVar11;
                uVar9 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar9 != 0) {
                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) ==
                        *(long *)Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__) {
                      puVar14 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_016b25d8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar9 != 0);
                }
                puVar14 = (undefined8 *)
                          FUN_00d59724(plVar11,*(long *)
                                                Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                       ,0);
LAB_016b25d8:
                uVar6 = (*(code *)*puVar14)(plVar11,puVar14[1]);
                local_80 = CONCAT44(local_80._4_4_,uVar6);
                uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                            ,&local_80);
                uVar10 = FUN_01600ce8(uVar10,uVar12,uVar17,uVar15,0);
                iVar19 = 0;
                do {
                  lVar18 = *plVar11;
                  uVar9 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar9 != 0) {
                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          *(long *)Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__) {
                        puVar14 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_016b2674;
                      }
                      uVar9 = uVar9 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)
                            FUN_00d59724(plVar11,*(long *)
                                                  Method_System_Xml_XmlTextEncoder_WriteSurrogateCharEntity__
                                         ,0);
LAB_016b2674:
                  iVar7 = (*(code *)*puVar14)(plVar11,puVar14[1]);
                  if (iVar7 <= iVar19) {
                    FUN_015f5b28(uVar10,*(undefined8 *)StringLiteral_11420,0);
                    return;
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar12 = FUN_017319b4(0);
                  lVar18 = *plVar11;
                  puVar14 = puVar1;
                  if (iVar19 != 0) {
                    puVar14 = (undefined8 *)Method_System_Text_UTF32Encoding_GetBytes__;
                  }
                  uVar17 = *puVar14;
                  uVar9 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar9 != 0) {
                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_033f74f8) {
                        puVar14 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_016b270c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_00d59724(plVar11,*(long *)PTR_DAT_033f74f8,0);
LAB_016b270c:
                  auVar20 = (*(code *)*puVar14)(plVar11,iVar19,puVar14[1]);
                  uVar15 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
                  local_70 = auVar20;
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar4);
                  }
                  uVar15 = FUN_01780344(uVar15,0);
                  uVar8 = FUN_0178a8c4(plVar13,uVar15,0);
                  uVar15 = FUN_016b2064(local_70,uVar8 & 1);
                  uVar12 = FUN_01600c94(uVar12,uVar17,uVar15,0);
                  uVar10 = FUN_015f5b28(uVar10,uVar12,0);
                  iVar19 = iVar19 + 1;
                } while( true );
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_017319b4(0);
              if ((param_2 & 1) == 0) {
                puVar1 = (undefined8 *)puVar3;
              }
              if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar17 = *puVar1;
              lVar18 = param_1[1];
              uVar12 = FUN_0178d3f0(*param_1,0);
              FUN_01600ce8(uVar10,uVar17,lVar18,uVar12,0);
            }
            else {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_017319b4(0);
              plVar11 = (long *)param_1[1];
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              bVar2 = *(byte *)(*(long *)puVar4 + 300);
              if ((*(byte *)(*plVar11 + 300) < bVar2) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
              {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              uVar12 = FUN_0178d2c8(plVar11,0);
              FUN_01600c94(uVar10,*(undefined8 *)
                                   Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60>_SliceWithStride<Color32>__
                           ,uVar12,0);
            }
          }
          else {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_017319b4(0);
            FUN_01600c94(uVar10,*(undefined8 *)
                                 Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_GetAddReferenceImageJobStatus__
                         ,param_1[1],0);
          }
        }
        else {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_017319b4(0);
          FUN_01600c94(uVar10,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_88__,param_1[1],0);
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_017319b4(0);
      if ((param_2 & 1) == 0) {
        puVar1 = (undefined8 *)puVar3;
      }
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar17 = *puVar1;
      lVar18 = param_1[1];
      uVar12 = FUN_0178d2c8(*param_1,0);
      FUN_01600ce8(uVar10,uVar17,lVar18,uVar12,0);
    }
  }
  else {
    lStack_78 = param_1[1];
    local_80 = *param_1;
    uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_11__,
                                &local_80);
    FUN_017cc6f4(uVar10,0);
  }
  return;
}


