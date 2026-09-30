/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_9
ENTRY_POINT: 01461440
PROGRAM: Lovesick-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014625a4) */

undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_9(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long in_x9;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  long unaff_x19;
  undefined8 uVar30;
  int iVar31;
  long *plVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  long *plVar36;
  long unaff_x24;
  undefined8 *puVar37;
  long unaff_x25;
  undefined8 *puVar38;
  long *unaff_x26;
  uint uVar39;
  float fVar40;
  float fVar41;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined1 *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  
  puVar37 = *(undefined8 **)(unaff_x24 + 0xec0);
  puVar38 = *(undefined8 **)(unaff_x25 + 0x948);
  uVar34 = 0;
  while (lVar25 = *(long *)(in_x9 + 0x10), lVar25 != 0) {
    if ((long)(int)*(uint *)(lVar25 + 0x18) <= (long)uVar34) {
      *(undefined8 *)(unaff_x19 + 0xa8) = 0;
      *(undefined8 *)(unaff_x19 + 0xb0) = 0;
      *param_1 = 0;
      in_stack_000000d8._4_4_ = *(int *)(unaff_x19 + 0xa0);
      lVar25 = *(long *)(unaff_x19 + 0x98);
      iVar31 = in_stack_000000d8._4_4_ + 1;
      *(int *)(unaff_x19 + 0xa0) = iVar31;
      puVar5 = FullSerializer_Internal_fsReflectedConverter_TypeInfo;
      if (lVar25 != 0) {
        if (iVar31 < *(int *)(lVar25 + 0x18)) {
          FUN_0132138c(lVar25,iVar31,&stack0x00000098,
                       *(undefined8 *)FullSerializer_Internal_fsReflectedConverter_TypeInfo);
          if (in_stack_00000098 != 0) {
            *(undefined8 *)(in_stack_000000e8 + 0xa8) = *(undefined8 *)(in_stack_00000098 + 0x18);
            puVar7 = 
            Method_UnityEngine_Rendering_AsyncRequestNativeArrayData_CreateAndCheckAccess<__Il2CppFullySharedGenericStructType>__
            ;
            puVar6 = Method_System_Nullable<Rect>_get_Value__;
            if (4 < *(int *)(in_stack_000000e8 + 0x88)) {
              uVar30 = FUN_0176eb1c(in_stack_000000e8 + 0x28,0);
              uVar16 = FUN_0176eb1c(in_stack_000000e8 + 0xa0,0);
              uVar30 = FUN_0160073c(*(undefined8 *)puVar6,uVar30,*(undefined8 *)puVar7,uVar16,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar30,0);
            }
            if ((*(long *)(in_stack_000000e8 + 0x30) != 0) &&
               (*(long *)(in_stack_000000e8 + 0x98) != 0)) {
              uVar30 = *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10);
              lVar25 = *(long *)(in_stack_000000e8 + 0x20);
              FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),
                           *(undefined4 *)(in_stack_000000e8 + 0xa0),&stack0x00000098,
                           *(undefined8 *)puVar5);
              puVar6 = StringLiteral_13301;
              if ((in_stack_00000098 != 0) && (lVar25 != 0)) {
                *(undefined1 *)(lVar25 + 0x33) = *(undefined1 *)(in_stack_00000098 + 0x10);
                lVar25 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                if (lVar25 != 0) {
                  FUN_0144231c(lVar25,0);
                  *(long *)(in_stack_000000e8 + 0xb0) = lVar25;
                  puVar6 = UnityEngine_UIElements_EventCallbackListPool_TypeInfo;
                  if ((*(long *)(in_stack_000000e8 + 0x38) != 0) &&
                     (lVar25 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10), lVar25 != 0))
                  {
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000000e8 + 0xa0)) {
LAB_014624f8:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    *(undefined8 *)(in_stack_000000e8 + 0xb8) =
                         *(undefined8 *)
                          (lVar25 + (long)(int)*(uint *)(in_stack_000000e8 + 0xa0) * 8 + 0x20);
                    lVar25 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                    if (lVar25 != 0) {
                      FUN_01320e50(lVar25,*(undefined8 *)
                                           Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__
                                  );
                      if ((*(long *)(in_stack_000000e8 + 0x98) != 0) &&
                         (FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),
                                       *(undefined4 *)(in_stack_000000e8 + 0xa0),&stack0x00000098,
                                       *(undefined8 *)puVar5), in_stack_00000098 != 0)) {
                        FUN_013e73c0(in_stack_00000098,lVar25,0);
                        if (*(long *)(in_stack_000000e8 + 0x98) != 0) {
                          lVar33 = *(long *)(in_stack_000000e8 + 0x20);
                          uVar16 = *(undefined8 *)(in_stack_000000e8 + 0x40);
                          uVar35 = *(undefined8 *)(in_stack_000000e8 + 0xb8);
                          FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),
                                       *(undefined4 *)(in_stack_000000e8 + 0xa0),&stack0x00000098,
                                       *(undefined8 *)puVar5);
                          if ((in_stack_00000098 != 0) &&
                             (uVar17 = FUN_013e74ec(in_stack_00000098,
                                                    *(undefined8 *)(in_stack_000000e8 + 0x48),0),
                             lVar33 != 0)) {
                            uVar30 = FUN_0143eb4c(*(undefined4 *)(in_stack_000000e8 + 0x60),lVar33,
                                                  uVar16,uVar35,uVar30,uVar17,lVar25,
                                                  *(undefined8 *)(in_stack_000000e8 + 0x50),
                                                  *(undefined8 *)(in_stack_000000e8 + 0x58));
                            *(undefined8 *)(in_stack_000000e8 + 0x18) = uVar30;
                            *(undefined4 *)(in_stack_000000e8 + 0x10) = 1;
                            return 1;
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
        else if (*(long *)(unaff_x19 + 0x20) != 0) {
          *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x3c) = *(undefined1 *)(unaff_x19 + 0x70);
          lVar25 = *(long *)(unaff_x19 + 0x90);
          *(undefined8 *)(unaff_x19 + 0x98) = 0;
          puVar13 = StringLiteral_10627;
          puVar12 = Method_Mono_X509PalImpl_GetCertContentType__;
          puVar11 = Method_System_MemoryExtensions_AsSpan<byte>__;
          puVar10 = 
          Method_System_Collections_Generic_List<DistanceBasedLOD_DistanceBasedLODSet>_get_Item__;
          puVar9 = Method_System_Collections_Generic_List<SignalAsset>_get_Item__;
          puVar8 = Method_System_Collections_Generic_List<Material>_Add__;
          puVar7 = Method_System_Collections_Generic_List<IXRInteractable>_GetEnumerator__;
          puVar6 = Method_System_Collections_Generic_List<ComputedTransitionProperty>_get_Count__;
          puVar5 = PTR_DAT_033f3270;
          if (lVar25 != 0) {
            iVar31 = 0;
            goto LAB_014618c4;
          }
        }
      }
      break;
    }
    if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_014624f8;
    uVar30 = *(undefined8 *)(lVar25 + uVar34 * 8 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_02681b9c(uVar30,0,0);
    if ((uVar15 & 1) != 0) {
      lVar25 = *(long *)(in_stack_000000e8 + 0xa8);
      if (lVar25 == 0) break;
      if (0 < *(int *)(lVar25 + 0x18)) {
        iVar31 = 0;
        do {
          FUN_0132138c(lVar25,iVar31,&stack0x00000098,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
                      );
          if (((in_stack_00000098 == 0) || (*(long *)(in_stack_000000e8 + 0xb8) == 0)) ||
             (lVar25 = *(long *)(*(long *)(in_stack_000000e8 + 0xb8) + 0x20), lVar25 == 0))
          goto LAB_01461908;
          if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_014624f8;
          lVar33 = *(long *)(in_stack_00000098 + 0x10);
          if (lVar33 == 0) goto LAB_01461908;
          uVar15 = FUN_0267e21c(lVar33,*(undefined8 *)(lVar25 + uVar34 * 8 + 0x20),0);
          if ((uVar15 & 1) != 0) {
            if ((*(long *)(in_stack_000000e8 + 0xb8) == 0) ||
               (lVar25 = *(long *)(*(long *)(in_stack_000000e8 + 0xb8) + 0x20), lVar25 == 0))
            goto LAB_01461908;
            if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_014624f8;
            uVar16 = FUN_0267dbbc(lVar33,*(undefined8 *)(lVar25 + uVar34 * 8 + 0x20),0);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x26);
            }
            uVar15 = FUN_0268b4e0(uVar16,uVar30,0);
            if ((uVar15 & 1) != 0) goto LAB_014615e8;
          }
          lVar25 = *(long *)(in_stack_000000e8 + 0xa8);
          if (lVar25 == 0) goto LAB_01461908;
          iVar31 = iVar31 + 1;
        } while (iVar31 < *(int *)(lVar25 + 0x18));
      }
      if ((*(long *)(in_stack_000000e8 + 0xb8) == 0) ||
         (lVar25 = *(long *)(*(long *)(in_stack_000000e8 + 0xb8) + 0x20), lVar25 == 0)) break;
      if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_014624f8;
      lVar33 = *(long *)(in_stack_000000e8 + 0x90);
      uVar16 = *(undefined8 *)(lVar25 + uVar34 * 8 + 0x20);
      lVar25 = thunk_FUN_00d62348(*puVar37);
      if ((lVar25 == 0) || (FUN_014422f0(lVar25,uVar16,uVar30,0), lVar33 == 0)) break;
      FUN_00bc00b8(lVar33,lVar25,*puVar38);
    }
LAB_014615e8:
    uVar34 = uVar34 + 1;
    param_1 = (long *)(in_stack_000000e8 + 0xb8);
    in_x9 = *param_1;
    unaff_x19 = in_stack_000000e8;
    if (in_x9 == 0) break;
  }
  goto LAB_01461908;
  while( true ) {
    lVar33 = *(long *)(unaff_x19 + 0x20);
    FUN_0132138c(lVar25,iVar31,&stack0x00000098,*(undefined8 *)puVar7);
    if (lVar33 == 0) break;
    FUN_0143f14c(lVar33,in_stack_00000098,0);
    iVar31 = iVar31 + 1;
    lVar25 = *(long *)(in_stack_000000e8 + 0x90);
    unaff_x19 = in_stack_000000e8;
    if (lVar25 == 0) break;
LAB_014618c4:
    if (*(int *)(lVar25 + 0x18) <= iVar31) {
      lVar25 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
      if (lVar25 != 0) {
        FUN_01320e50(lVar25,*(undefined8 *)puVar9);
        if (*(long *)(in_stack_000000e8 + 0x30) != 0) {
          uVar35 = *(undefined8 *)(in_stack_000000e8 + 0x78);
          uVar16 = *(undefined8 *)(in_stack_000000e8 + 0x50);
          uVar30 = *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10);
          uVar14 = *(undefined4 *)(in_stack_000000e8 + 0x88);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01457574(lVar25,uVar35,uVar16,uVar30,uVar14);
          if (*(long *)(in_stack_000000e8 + 0x38) != 0) {
            lVar33 = FUN_0145f5c8(*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10));
            lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
            if (lVar18 != 0) {
              FUN_01320e50(lVar18,*(undefined8 *)puVar10);
              in_stack_000000a0 = &stack0x000000e8;
              in_stack_000000a8 = &stack0x000000bc;
              in_stack_000000b0 = &stack0x000000e0;
              in_stack_00000098 = 0;
              lVar20 = *(long *)(in_stack_000000e8 + 0x30);
              in_stack_000000e0 = lVar18;
              lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Data_SqlTypes_SqlSingle_op_Multiply__);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01298da0(lVar18,*(undefined8 *)StringLiteral_7037);
              iVar31 = *(int *)(lVar25 + 0x18);
              if (0 < iVar31) {
                if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar34 = 0;
                do {
                  if (*(uint *)(lVar33 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  if (*(char *)(lVar33 + 0x20 + uVar34) != '\0') {
                    FUN_0132138c(lVar25,uVar34 & 0xffffffff,&stack0x00000080,
                                 *(undefined8 *)StringLiteral_11624);
                    if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar30 = *(undefined8 *)(in_stack_00000080 + 0x10);
                    FUN_0132138c(lVar25,uVar34 & 0xffffffff,&stack0x00000080,
                                 *(undefined8 *)StringLiteral_11624);
                    if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(long *)(in_stack_000000e8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar35 = *(undefined8 *)(in_stack_00000080 + 0x10);
                    uVar16 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                          *(undefined4 *)
                                           (*(long *)(in_stack_000000e8 + 0x80) + 0x18));
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar13);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_013e76a4(lVar19,uVar35,uVar16,0);
                    FUN_01299e64(lVar18,uVar30,lVar19,*(undefined8 *)puVar6);
                    iVar31 = *(int *)(lVar25 + 0x18);
                  }
                  uVar34 = uVar34 + 1;
                } while ((long)uVar34 < (long)iVar31);
              }
              if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              cVar4 = *(char *)(*(long *)(in_stack_000000e8 + 0x20) + 0x59);
              uVar14 = *(undefined4 *)(in_stack_000000e8 + 0x88);
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Obi_ObiNativeList<DFNode>_get_count__);
              plVar36 = (long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01448f18(lVar19,uVar14,cVar4 != '\0',0);
              if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(lVar19);
              }
              FUN_01442e90(lVar19,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10),0);
              if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0144a264(lVar19,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10),lVar25
                           ,*(undefined8 *)(in_stack_000000e8 + 0x58),0);
              lVar26 = *(long *)(in_stack_000000e8 + 0x80);
              if (lVar26 != 0) {
                uVar34 = 0;
                do {
                  if ((long)(int)*(uint *)(lVar26 + 0x18) <= (long)uVar34) {
                    lVar25 = thunk_FUN_00d62348(*(undefined8 *)
                                                 System_Runtime_Serialization_SurrogateForCyclicalReference_var
                                               );
                    puVar6 = 
                    Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_Add__
                    ;
                    puVar5 = 
                    Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                    ;
                    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320e50(lVar25,*(undefined8 *)
                                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
                                );
                    if (lVar20 != 0) {
                      *(long *)(lVar20 + 0x20) = lVar25;
                      lVar25 = FUN_01299a34(lVar18,*(undefined8 *)StringLiteral_6540);
                      puVar7 = Method_UnityEngine_Graphics_CheckLoadActionValid__;
                      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_011dcc00(lVar25,&stack0x00000080,*(undefined8 *)PTR_DAT_033ef938);
                      in_stack_000000c8 = in_stack_00000088;
                      in_stack_000000c0 = in_stack_00000080;
                      in_stack_000000d0 = in_stack_00000090;
                      while( true ) {
                        uVar34 = FUN_012c3588(&stack0x000000c0,*(undefined8 *)puVar7);
                        if ((uVar34 & 1) == 0) {
                          FUN_012c3584(&stack0x000000c0,
                                       *(undefined8 *)
                                        Method_MedleyGraveyardPuzzle_VineDissolvingStarted__);
                          FUN_00bc10b8(&stack0x00000098);
                          return 0;
                        }
                        uVar30 = FUN_00bc0dc0(&stack0x000000c0,*(undefined8 *)puVar5);
                        if (*(long *)(lVar20 + 0x20) == 0) break;
                        FUN_00bc0ec8(*(long *)(lVar20 + 0x20),uVar30,*(undefined8 *)puVar6);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c(0,uVar30);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(uint *)(lVar26 + 0x18) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar32 = *(long **)(in_stack_000000e8 + 0x58);
                  lVar26 = *(long *)(lVar26 + uVar34 * 8 + 0x20);
                  if (plVar32 != (long *)0x0) {
                    lVar21 = *plVar32;
                    uVar15 = (ulong)*(ushort *)(lVar21 + 0x12a);
                    if (uVar15 != 0) {
                      piVar28 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == *(long *)StringLiteral_2590) {
                          puVar37 = (undefined8 *)(lVar21 + (long)*piVar28 * 0x10 + 0x138);
                          goto LAB_01461bf8;
                        }
                        uVar15 = uVar15 - 1;
                        piVar28 = piVar28 + 4;
                      } while (uVar15 != 0);
                    }
                    puVar37 = (undefined8 *)FUN_00d59724(plVar32,*(long *)StringLiteral_2590,0);
LAB_01461bf8:
                    (*(code *)*puVar37)(plVar32,puVar37[1]);
                  }
                  lVar21 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_Resize<Vector2>__);
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_017b46ec(lVar21,0);
                  if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01460a60(lVar25,*(undefined4 *)(*(long *)(in_stack_000000e8 + 0x20) + 0x24),
                               lVar26,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                               lVar21);
                  if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (0 < (int)*(ulong *)(lVar33 + 0x18)) {
                    uVar15 = 0;
                    uVar22 = *(ulong *)(lVar33 + 0x18) & 0xffffffff;
                    do {
                      if (uVar22 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      if (*(char *)(lVar33 + uVar15 + 0x20) != '\0') {
                        lVar27 = *(long *)(lVar21 + 0x20);
                        if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        lVar23 = *(long *)(in_stack_000000e8 + 0x38);
                        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(long *)(lVar23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar29 = *(long *)(lVar21 + 0x30);
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(uint *)(lVar29 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        lVar29 = lVar29 + uVar15 * 8;
                        fVar40 = *(float *)(lVar29 + 0x20);
                        fVar41 = *(float *)(lVar29 + 0x24);
                        uVar2 = *(uint *)(*(long *)(lVar23 + 0x10) + 0x18);
                        iVar31 = -0x80000000;
                        if (fVar40 != INFINITY) {
                          iVar31 = (int)fVar40;
                        }
                        iVar1 = -0x80000000;
                        if (fVar41 != INFINITY) {
                          iVar1 = (int)fVar41;
                        }
                        if (0 < (int)uVar2) {
                          uVar14 = *(undefined4 *)(lVar27 + uVar15 * 4 + 0x20);
                          uVar39 = 0;
                          do {
                            lVar27 = *(long *)(lVar23 + 0x10);
                            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            lVar23 = (long)(int)uVar39;
                            lVar27 = *(long *)(lVar27 + lVar23 * 8 + 0x20);
                            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar27 = *(long *)(lVar27 + 0x10);
                            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            uVar30 = *(undefined8 *)(lVar27 + uVar15 * 8 + 0x20);
                            if (*(int *)(*plVar36 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar22 = FUN_0268b4e0(uVar30,0,0);
                            if ((uVar22 & 1) != 0) {
                              lVar27 = *(long *)(lVar21 + 0x10);
                              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              cVar4 = *(char *)(lVar27 + uVar15 + 0x20);
                              lVar27 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                      
                                                  SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                                  );
                              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_02671bf8(lVar27,iVar31,iVar1,5,cVar4 != '\0',0);
                              if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar29 = *(long *)(*(long *)(in_stack_000000e8 + 0x30) + 0x18);
                              if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_0132138c(lVar29,uVar39,&stack0x00000080,
                                           *(undefined8 *)
                                            FullSerializer_Internal_fsReflectedConverter_TypeInfo);
                              if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(long *)(in_stack_00000080 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_0132138c(*(long *)(in_stack_00000080 + 0x18),0,&stack0x00000080,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
                                          );
                              if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              uVar30 = *(undefined8 *)(in_stack_00000080 + 0x10);
                              FUN_0132138c(lVar25,uVar15 & 0xffffffff,&stack0x00000080,
                                           *(undefined8 *)StringLiteral_11624);
                              FUN_0144a43c(lVar19,uVar30,in_stack_00000080,0);
                              FUN_014349f4(lVar27,0);
                              if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar29 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                              if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar29 + 0x18) <= uVar39) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              lVar29 = *(long *)(lVar29 + lVar23 * 8 + 0x20);
                              if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              plVar36 = *(long **)(in_stack_000000e8 + 0x58);
                              plVar32 = *(long **)(lVar29 + 0x10);
                              FUN_0132138c(lVar25,uVar15 & 0xffffffff,&stack0x00000080,
                                           *(undefined8 *)StringLiteral_11624);
                              lVar29 = in_stack_00000080;
                              if (plVar36 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar24 = *plVar36;
                              uVar3 = *(undefined4 *)(in_stack_000000e8 + 0x88);
                              uVar22 = (ulong)*(ushort *)(lVar24 + 0x12a);
                              if (uVar22 != 0) {
                                piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar28 + -2) == *(long *)StringLiteral_2590) {
                                    puVar37 = (undefined8 *)
                                              (lVar24 + (long)(*piVar28 + 0x14) * 0x10 + 0x138);
                                    goto LAB_01461f1c;
                                  }
                                  uVar22 = uVar22 - 1;
                                  piVar28 = piVar28 + 4;
                                } while (uVar22 != 0);
                              }
                              puVar37 = (undefined8 *)
                                        FUN_00d59724(plVar36,*(long *)StringLiteral_2590,0x14);
LAB_01461f1c:
                              lVar29 = (*(code *)*puVar37)(plVar36,lVar29,lVar27,iVar31,iVar1,uVar14
                                                           ,uVar3,puVar37[1]);
                              if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if ((lVar29 != 0) &&
                                 (lVar24 = thunk_FUN_00d6225c(lVar29,*(undefined8 *)
                                                                      (*plVar32 + 0x40)),
                                 lVar24 == 0)) {
                                uVar30 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                FUN_00da5038(uVar30,0);
                              }
                              if (*(uint *)(plVar32 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              plVar32[uVar15 + 4] = lVar29;
                              plVar36 = (long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              ;
                              if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar29 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                              if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar29 + 0x18) <= uVar39) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              lVar23 = *(long *)(lVar29 + lVar23 * 8 + 0x20);
                              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar23 = *(long *)(lVar23 + 0x10);
                              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar23 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00bc0bd0(in_stack_000000e0,
                                           *(undefined8 *)(lVar23 + uVar15 * 8 + 0x20),
                                           *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__
                                          );
                              FUN_0142deac(lVar27,0);
                            }
                            uVar39 = uVar39 + 1;
                            if (uVar39 == uVar2) break;
                            lVar23 = *(long *)(in_stack_000000e8 + 0x38);
                            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                          } while( true );
                        }
                      }
                      uVar15 = uVar15 + 1;
                      uVar22 = (ulong)*(uint *)(lVar33 + 0x18);
                    } while ((long)uVar15 < (long)(int)*(uint *)(lVar33 + 0x18));
                  }
                  puVar5 = StringLiteral_5769;
                  if (3 < *(int *)(in_stack_000000e8 + 0x88)) {
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02660dac(*(undefined8 *)Mono_Security_Interface_CipherSuiteCode_TypeInfo,0);
                  }
                  if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar15 = FUN_0145ff7c(lVar21,*(undefined8 *)
                                                (*(long *)(in_stack_000000e8 + 0x38) + 0x10),lVar33,
                                        lVar25);
                  if ((uVar15 & 1) != 0) {
                    if (3 < *(int *)(in_stack_000000e8 + 0x88)) {
                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_02660dac(*(undefined8 *)StringLiteral_11033,0);
                    }
                    if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar21 = FUN_0145f838(lVar21,lVar25,
                                          *(undefined8 *)
                                           (*(long *)(in_stack_000000e8 + 0x38) + 0x10),lVar33,
                                          *(undefined8 *)(in_stack_000000e8 + 0x20),
                                          *(undefined4 *)(in_stack_000000e8 + 0x88));
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (0 < (int)*(ulong *)(lVar21 + 0x18)) {
                      uVar15 = 0;
                      uVar22 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
                      do {
                        if (*(uint *)(lVar33 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        if (*(char *)(lVar33 + uVar15 + 0x20) != '\0') {
                          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (uVar22 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          uVar30 = *(undefined8 *)(lVar26 + 0x10);
                          puVar37 = (undefined8 *)(lVar21 + uVar15 * 8 + 0x20);
                          uVar16 = *puVar37;
                          lVar27 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                          if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_013e7678(lVar27,uVar30,uVar16,0);
                          FUN_0132138c(lVar25,uVar15 & 0xffffffff,&stack0x00000080,
                                       *(undefined8 *)StringLiteral_11624);
                          if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299bc0(lVar18,*(undefined8 *)(in_stack_00000080 + 0x10),
                                       &stack0x00000080,*(undefined8 *)StringLiteral_14282);
                          if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          plVar32 = *(long **)(in_stack_00000080 + 0x18);
                          if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar23 = thunk_FUN_00d6225c(lVar27,*(undefined8 *)(*plVar32 + 0x40));
                          if (lVar23 == 0) {
                            uVar30 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                            FUN_00da5038(uVar30,0);
                          }
                          if (*(uint *)(plVar32 + 3) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          plVar32[uVar34 + 4] = lVar27;
                          if (*(char *)(in_stack_000000e8 + 0x70) != '\0') {
                            if (*(uint *)(lVar21 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            plVar32 = *(long **)(in_stack_000000e8 + 0x58);
                            uVar30 = *puVar37;
                            FUN_0132138c(lVar25,uVar15 & 0xffffffff,&stack0x00000080,
                                         *(undefined8 *)StringLiteral_11624);
                            if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            uVar14 = FUN_013e7c48(lVar26,*(undefined8 *)(in_stack_00000080 + 0x10),
                                                  &stack0x000000d8,0);
                            if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar27 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(int *)(lVar27 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            if (*(long *)(lVar27 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar27 = *(long *)(*(long *)(lVar27 + 0x20) + 0x20);
                            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar23 = *plVar32;
                            uVar16 = *(undefined8 *)(lVar20 + 0x10);
                            uVar35 = *(undefined8 *)(lVar27 + uVar15 * 8 + 0x20);
                            uVar22 = (ulong)*(ushort *)(lVar23 + 0x12a);
                            if (uVar22 != 0) {
                              piVar28 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar28 + -2) == *(long *)StringLiteral_2590) {
                                  puVar37 = (undefined8 *)
                                            (lVar23 + (long)(*piVar28 + 5) * 0x10 + 0x138);
                                  goto LAB_014622f0;
                                }
                                uVar22 = uVar22 - 1;
                                piVar28 = piVar28 + 4;
                              } while (uVar22 != 0);
                            }
                            puVar37 = (undefined8 *)
                                      FUN_00d59724(plVar32,*(long *)StringLiteral_2590,5);
LAB_014622f0:
                            (*(code *)*puVar37)(plVar32,uVar30,uVar14,uVar35,uVar15 & 0xffffffff,
                                                uVar16,puVar37[1]);
                          }
                        }
                        uVar22 = (ulong)*(uint *)(lVar21 + 0x18);
                        uVar15 = uVar15 + 1;
                      } while ((long)uVar15 < (long)(int)*(uint *)(lVar21 + 0x18));
                    }
                  }
                  lVar26 = *(long *)(in_stack_000000e8 + 0x80);
                  uVar34 = uVar34 + 1;
                } while (lVar26 != 0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
        }
      }
      break;
    }
  }
LAB_01461908:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


