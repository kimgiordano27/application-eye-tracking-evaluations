/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Raycast
ENTRY_POINT: 014615c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 210
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014625a4) */

undefined8
Meta_XR_EnvironmentDepthManagerRaycastExtensions__Raycast
          (long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  int *piVar31;
  long lVar32;
  int iVar33;
  long unaff_x20;
  long *plVar34;
  long lVar35;
  ulong unaff_x23;
  undefined8 uVar36;
  long *plVar37;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  uint uVar38;
  float fVar39;
  float fVar40;
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
  
  while (FUN_014422f0(param_1,param_2,param_3,0), unaff_x20 != 0) {
    FUN_00bc00b8(unaff_x20,param_1,*unaff_x25);
LAB_014615e8:
    do {
      unaff_x23 = unaff_x23 + 1;
      lVar27 = *(long *)(in_stack_000000e8 + 0xb8);
      if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x10), lVar27 == 0)) goto LAB_01461908;
      if ((long)(int)*(uint *)(lVar27 + 0x18) <= (long)unaff_x23) {
        *(undefined8 *)(in_stack_000000e8 + 0xa8) = 0;
        *(undefined8 *)(in_stack_000000e8 + 0xb0) = 0;
        *(long *)(in_stack_000000e8 + 0xb8) = 0;
        in_stack_000000d8._4_4_ = *(int *)(in_stack_000000e8 + 0xa0);
        lVar27 = *(long *)(in_stack_000000e8 + 0x98);
        iVar33 = in_stack_000000d8._4_4_ + 1;
        *(int *)(in_stack_000000e8 + 0xa0) = iVar33;
        puVar5 = FullSerializer_Internal_fsReflectedConverter_TypeInfo;
        if (lVar27 == 0) goto LAB_01461908;
        if (*(int *)(lVar27 + 0x18) <= iVar33) {
          if (*(long *)(in_stack_000000e8 + 0x20) == 0) goto LAB_01461908;
          *(undefined1 *)(*(long *)(in_stack_000000e8 + 0x20) + 0x3c) =
               *(undefined1 *)(in_stack_000000e8 + 0x70);
          lVar27 = *(long *)(in_stack_000000e8 + 0x90);
          *(undefined8 *)(in_stack_000000e8 + 0x98) = 0;
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
          if (lVar27 == 0) goto LAB_01461908;
          iVar33 = 0;
          goto LAB_014618c4;
        }
        FUN_0132138c(lVar27,iVar33,&stack0x00000098,
                     *(undefined8 *)FullSerializer_Internal_fsReflectedConverter_TypeInfo);
        if (in_stack_00000098 == 0) goto LAB_01461908;
        *(undefined8 *)(in_stack_000000e8 + 0xa8) = *(undefined8 *)(in_stack_00000098 + 0x18);
        puVar7 = 
        Method_UnityEngine_Rendering_AsyncRequestNativeArrayData_CreateAndCheckAccess<__Il2CppFullySharedGenericStructType>__
        ;
        puVar6 = Method_System_Nullable<Rect>_get_Value__;
        if (4 < *(int *)(in_stack_000000e8 + 0x88)) {
          uVar16 = FUN_0176eb1c(in_stack_000000e8 + 0x28,0);
          uVar17 = FUN_0176eb1c(in_stack_000000e8 + 0xa0,0);
          uVar16 = FUN_0160073c(*(undefined8 *)puVar6,uVar16,*(undefined8 *)puVar7,uVar17,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar16,0);
        }
        if ((*(long *)(in_stack_000000e8 + 0x30) == 0) || (*(long *)(in_stack_000000e8 + 0x98) == 0)
           ) goto LAB_01461908;
        uVar16 = *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10);
        lVar27 = *(long *)(in_stack_000000e8 + 0x20);
        FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),*(undefined4 *)(in_stack_000000e8 + 0xa0),
                     &stack0x00000098,*(undefined8 *)puVar5);
        puVar6 = StringLiteral_13301;
        if ((in_stack_00000098 == 0) || (lVar27 == 0)) goto LAB_01461908;
        *(undefined1 *)(lVar27 + 0x33) = *(undefined1 *)(in_stack_00000098 + 0x10);
        lVar27 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar27 == 0) goto LAB_01461908;
        FUN_0144231c(lVar27,0);
        *(long *)(in_stack_000000e8 + 0xb0) = lVar27;
        puVar6 = UnityEngine_UIElements_EventCallbackListPool_TypeInfo;
        if ((*(long *)(in_stack_000000e8 + 0x38) == 0) ||
           (lVar27 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10), lVar27 == 0))
        goto LAB_01461908;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_000000e8 + 0xa0)) goto LAB_014624f8;
        *(undefined8 *)(in_stack_000000e8 + 0xb8) =
             *(undefined8 *)(lVar27 + (long)(int)*(uint *)(in_stack_000000e8 + 0xa0) * 8 + 0x20);
        lVar27 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar27 != 0) {
          FUN_01320e50(lVar27,*(undefined8 *)
                               Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__);
          if ((*(long *)(in_stack_000000e8 + 0x98) != 0) &&
             (FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),
                           *(undefined4 *)(in_stack_000000e8 + 0xa0),&stack0x00000098,
                           *(undefined8 *)puVar5), in_stack_00000098 != 0)) {
            FUN_013e73c0(in_stack_00000098,lVar27,0);
            if (*(long *)(in_stack_000000e8 + 0x98) != 0) {
              lVar35 = *(long *)(in_stack_000000e8 + 0x20);
              uVar17 = *(undefined8 *)(in_stack_000000e8 + 0x40);
              uVar36 = *(undefined8 *)(in_stack_000000e8 + 0xb8);
              FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),
                           *(undefined4 *)(in_stack_000000e8 + 0xa0),&stack0x00000098,
                           *(undefined8 *)puVar5);
              if ((in_stack_00000098 != 0) &&
                 (uVar18 = FUN_013e74ec(in_stack_00000098,*(undefined8 *)(in_stack_000000e8 + 0x48),
                                        0), lVar35 != 0)) {
                uVar16 = FUN_0143eb4c(*(undefined4 *)(in_stack_000000e8 + 0x60),lVar35,uVar17,uVar36
                                      ,uVar16,uVar18,lVar27,
                                      *(undefined8 *)(in_stack_000000e8 + 0x50),
                                      *(undefined8 *)(in_stack_000000e8 + 0x58));
                *(undefined8 *)(in_stack_000000e8 + 0x18) = uVar16;
                *(undefined4 *)(in_stack_000000e8 + 0x10) = 1;
                return 1;
              }
            }
          }
        }
        goto LAB_01461908;
      }
      if (*(uint *)(lVar27 + 0x18) <= unaff_x23) goto LAB_014624f8;
      param_3 = *(undefined8 *)(lVar27 + unaff_x23 * 8 + 0x20);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_02681b9c(param_3,0,0);
    } while ((uVar15 & 1) == 0);
    lVar27 = *(long *)(in_stack_000000e8 + 0xa8);
    if (lVar27 == 0) break;
    if (0 < *(int *)(lVar27 + 0x18)) {
      iVar33 = 0;
      do {
        FUN_0132138c(lVar27,iVar33,&stack0x00000098,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
                    );
        if (((in_stack_00000098 == 0) || (*(long *)(in_stack_000000e8 + 0xb8) == 0)) ||
           (lVar27 = *(long *)(*(long *)(in_stack_000000e8 + 0xb8) + 0x20), lVar27 == 0))
        goto LAB_01461908;
        if (*(uint *)(lVar27 + 0x18) <= unaff_x23) goto LAB_014624f8;
        lVar35 = *(long *)(in_stack_00000098 + 0x10);
        if (lVar35 == 0) goto LAB_01461908;
        uVar15 = FUN_0267e21c(lVar35,*(undefined8 *)(lVar27 + unaff_x23 * 8 + 0x20),0);
        if ((uVar15 & 1) != 0) {
          if ((*(long *)(in_stack_000000e8 + 0xb8) == 0) ||
             (lVar27 = *(long *)(*(long *)(in_stack_000000e8 + 0xb8) + 0x20), lVar27 == 0))
          goto LAB_01461908;
          if (*(uint *)(lVar27 + 0x18) <= unaff_x23) goto LAB_014624f8;
          uVar16 = FUN_0267dbbc(lVar35,*(undefined8 *)(lVar27 + unaff_x23 * 8 + 0x20),0);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x26);
          }
          uVar15 = FUN_0268b4e0(uVar16,param_3,0);
          if ((uVar15 & 1) != 0) goto LAB_014615e8;
        }
        lVar27 = *(long *)(in_stack_000000e8 + 0xa8);
        if (lVar27 == 0) goto LAB_01461908;
        iVar33 = iVar33 + 1;
        if (*(int *)(lVar27 + 0x18) <= iVar33) break;
      } while( true );
    }
    if ((*(long *)(in_stack_000000e8 + 0xb8) == 0) ||
       (lVar27 = *(long *)(*(long *)(in_stack_000000e8 + 0xb8) + 0x20), lVar27 == 0)) break;
    if (*(uint *)(lVar27 + 0x18) <= unaff_x23) {
LAB_014624f8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x20 = *(long *)(in_stack_000000e8 + 0x90);
    param_2 = *(undefined8 *)(lVar27 + unaff_x23 * 8 + 0x20);
    param_1 = thunk_FUN_00d62348(*unaff_x24);
    if (param_1 == 0) break;
  }
  goto LAB_01461908;
  while( true ) {
    lVar35 = *(long *)(in_stack_000000e8 + 0x20);
    FUN_0132138c(lVar27,iVar33,&stack0x00000098,*(undefined8 *)puVar7);
    if (lVar35 == 0) break;
    FUN_0143f14c(lVar35,in_stack_00000098,0);
    iVar33 = iVar33 + 1;
    lVar27 = *(long *)(in_stack_000000e8 + 0x90);
    if (lVar27 == 0) break;
LAB_014618c4:
    if (*(int *)(lVar27 + 0x18) <= iVar33) {
      lVar27 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
      if (lVar27 != 0) {
        FUN_01320e50(lVar27,*(undefined8 *)puVar9);
        if (*(long *)(in_stack_000000e8 + 0x30) != 0) {
          uVar36 = *(undefined8 *)(in_stack_000000e8 + 0x78);
          uVar17 = *(undefined8 *)(in_stack_000000e8 + 0x50);
          uVar16 = *(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10);
          uVar14 = *(undefined4 *)(in_stack_000000e8 + 0x88);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01457574(lVar27,uVar36,uVar17,uVar16,uVar14);
          if (*(long *)(in_stack_000000e8 + 0x38) != 0) {
            lVar35 = FUN_0145f5c8(*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10));
            lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
            if (lVar19 != 0) {
              FUN_01320e50(lVar19,*(undefined8 *)puVar10);
              in_stack_000000a0 = &stack0x000000e8;
              in_stack_000000a8 = &stack0x000000bc;
              in_stack_000000b0 = &stack0x000000e0;
              in_stack_00000098 = 0;
              lVar22 = *(long *)(in_stack_000000e8 + 0x30);
              in_stack_000000e0 = lVar19;
              lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Data_SqlTypes_SqlSingle_op_Multiply__);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01298da0(lVar19,*(undefined8 *)StringLiteral_7037);
              iVar33 = *(int *)(lVar27 + 0x18);
              if (0 < iVar33) {
                if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar15 = 0;
                do {
                  if (*(uint *)(lVar35 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  if (*(char *)(lVar35 + 0x20 + uVar15) != '\0') {
                    FUN_0132138c(lVar27,uVar15 & 0xffffffff,&stack0x00000080,
                                 *(undefined8 *)StringLiteral_11624);
                    if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar16 = *(undefined8 *)(in_stack_00000080 + 0x10);
                    FUN_0132138c(lVar27,uVar15 & 0xffffffff,&stack0x00000080,
                                 *(undefined8 *)StringLiteral_11624);
                    if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(long *)(in_stack_000000e8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar36 = *(undefined8 *)(in_stack_00000080 + 0x10);
                    uVar17 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                          *(undefined4 *)
                                           (*(long *)(in_stack_000000e8 + 0x80) + 0x18));
                    lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar13);
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_013e76a4(lVar20,uVar36,uVar17,0);
                    FUN_01299e64(lVar19,uVar16,lVar20,*(undefined8 *)puVar6);
                    iVar33 = *(int *)(lVar27 + 0x18);
                  }
                  uVar15 = uVar15 + 1;
                } while ((long)uVar15 < (long)iVar33);
              }
              if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              cVar4 = *(char *)(*(long *)(in_stack_000000e8 + 0x20) + 0x59);
              uVar14 = *(undefined4 *)(in_stack_000000e8 + 0x88);
              lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Obi_ObiNativeList<DFNode>_get_count__);
              plVar37 = (long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01448f18(lVar20,uVar14,cVar4 != '\0',0);
              if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(lVar20);
              }
              FUN_01442e90(lVar20,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10),0);
              if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0144a264(lVar20,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x30) + 0x10),lVar27
                           ,*(undefined8 *)(in_stack_000000e8 + 0x58),0);
              lVar28 = *(long *)(in_stack_000000e8 + 0x80);
              if (lVar28 != 0) {
                uVar15 = 0;
                do {
                  if ((long)(int)*(uint *)(lVar28 + 0x18) <= (long)uVar15) {
                    lVar27 = thunk_FUN_00d62348(*(undefined8 *)
                                                 System_Runtime_Serialization_SurrogateForCyclicalReference_var
                                               );
                    puVar6 = 
                    Method_System_Text_RegularExpressions_MatchCollection_System_Collections_IList_Add__
                    ;
                    puVar5 = 
                    Method_Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>_GetEnumerator__
                    ;
                    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320e50(lVar27,*(undefined8 *)
                                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass2_0_<CreateAdditionalWireframeShaderViews>b__0__
                                );
                    if (lVar22 != 0) {
                      *(long *)(lVar22 + 0x20) = lVar27;
                      lVar27 = FUN_01299a34(lVar19,*(undefined8 *)StringLiteral_6540);
                      puVar7 = Method_UnityEngine_Graphics_CheckLoadActionValid__;
                      if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_011dcc00(lVar27,&stack0x00000080,*(undefined8 *)PTR_DAT_033ef938);
                      in_stack_000000c8 = in_stack_00000088;
                      in_stack_000000c0 = in_stack_00000080;
                      in_stack_000000d0 = in_stack_00000090;
                      while( true ) {
                        uVar15 = FUN_012c3588(&stack0x000000c0,*(undefined8 *)puVar7);
                        if ((uVar15 & 1) == 0) {
                          FUN_012c3584(&stack0x000000c0,
                                       *(undefined8 *)
                                        Method_MedleyGraveyardPuzzle_VineDissolvingStarted__);
                          FUN_00bc10b8(&stack0x00000098);
                          return 0;
                        }
                        uVar16 = FUN_00bc0dc0(&stack0x000000c0,*(undefined8 *)puVar5);
                        if (*(long *)(lVar22 + 0x20) == 0) break;
                        FUN_00bc0ec8(*(long *)(lVar22 + 0x20),uVar16,*(undefined8 *)puVar6);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c(0,uVar16);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(uint *)(lVar28 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar34 = *(long **)(in_stack_000000e8 + 0x58);
                  lVar28 = *(long *)(lVar28 + uVar15 * 8 + 0x20);
                  if (plVar34 != (long *)0x0) {
                    lVar23 = *plVar34;
                    uVar29 = (ulong)*(ushort *)(lVar23 + 0x12a);
                    if (uVar29 != 0) {
                      piVar31 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar31 + -2) == *(long *)StringLiteral_2590) {
                          puVar21 = (undefined8 *)(lVar23 + (long)*piVar31 * 0x10 + 0x138);
                          goto LAB_01461bf8;
                        }
                        uVar29 = uVar29 - 1;
                        piVar31 = piVar31 + 4;
                      } while (uVar29 != 0);
                    }
                    puVar21 = (undefined8 *)FUN_00d59724(plVar34,*(long *)StringLiteral_2590,0);
LAB_01461bf8:
                    (*(code *)*puVar21)(plVar34,puVar21[1]);
                  }
                  lVar23 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_Resize<Vector2>__);
                  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_017b46ec(lVar23,0);
                  if (*(long *)(in_stack_000000e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_01460a60(lVar27,*(undefined4 *)(*(long *)(in_stack_000000e8 + 0x20) + 0x24),
                               lVar28,*(undefined8 *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10),
                               lVar23);
                  if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (0 < (int)*(ulong *)(lVar35 + 0x18)) {
                    uVar29 = 0;
                    uVar24 = *(ulong *)(lVar35 + 0x18) & 0xffffffff;
                    do {
                      if (uVar24 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      if (*(char *)(lVar35 + uVar29 + 0x20) != '\0') {
                        lVar30 = *(long *)(lVar23 + 0x20);
                        if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(uint *)(lVar30 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        lVar25 = *(long *)(in_stack_000000e8 + 0x38);
                        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(long *)(lVar25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar32 = *(long *)(lVar23 + 0x30);
                        if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        if (*(uint *)(lVar32 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        lVar32 = lVar32 + uVar29 * 8;
                        fVar39 = *(float *)(lVar32 + 0x20);
                        fVar40 = *(float *)(lVar32 + 0x24);
                        uVar2 = *(uint *)(*(long *)(lVar25 + 0x10) + 0x18);
                        iVar33 = -0x80000000;
                        if (fVar39 != INFINITY) {
                          iVar33 = (int)fVar39;
                        }
                        iVar1 = -0x80000000;
                        if (fVar40 != INFINITY) {
                          iVar1 = (int)fVar40;
                        }
                        if (0 < (int)uVar2) {
                          uVar14 = *(undefined4 *)(lVar30 + uVar29 * 4 + 0x20);
                          uVar38 = 0;
                          do {
                            lVar30 = *(long *)(lVar25 + 0x10);
                            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar30 + 0x18) <= uVar38) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            lVar25 = (long)(int)uVar38;
                            lVar30 = *(long *)(lVar30 + lVar25 * 8 + 0x20);
                            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar30 = *(long *)(lVar30 + 0x10);
                            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar30 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            uVar16 = *(undefined8 *)(lVar30 + uVar29 * 8 + 0x20);
                            if (*(int *)(*plVar37 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar24 = FUN_0268b4e0(uVar16,0,0);
                            if ((uVar24 & 1) != 0) {
                              lVar30 = *(long *)(lVar23 + 0x10);
                              if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar30 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              cVar4 = *(char *)(lVar30 + uVar29 + 0x20);
                              lVar30 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                      
                                                  SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                                  );
                              if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_02671bf8(lVar30,iVar33,iVar1,5,cVar4 != '\0',0);
                              if (*(long *)(in_stack_000000e8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar32 = *(long *)(*(long *)(in_stack_000000e8 + 0x30) + 0x18);
                              if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_0132138c(lVar32,uVar38,&stack0x00000080,
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
                              uVar16 = *(undefined8 *)(in_stack_00000080 + 0x10);
                              FUN_0132138c(lVar27,uVar29 & 0xffffffff,&stack0x00000080,
                                           *(undefined8 *)StringLiteral_11624);
                              FUN_0144a43c(lVar20,uVar16,in_stack_00000080,0);
                              FUN_014349f4(lVar30,0);
                              if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar32 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                              if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar32 + 0x18) <= uVar38) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              lVar32 = *(long *)(lVar32 + lVar25 * 8 + 0x20);
                              if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              plVar37 = *(long **)(in_stack_000000e8 + 0x58);
                              plVar34 = *(long **)(lVar32 + 0x10);
                              FUN_0132138c(lVar27,uVar29 & 0xffffffff,&stack0x00000080,
                                           *(undefined8 *)StringLiteral_11624);
                              lVar32 = in_stack_00000080;
                              if (plVar37 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar26 = *plVar37;
                              uVar3 = *(undefined4 *)(in_stack_000000e8 + 0x88);
                              uVar24 = (ulong)*(ushort *)(lVar26 + 0x12a);
                              if (uVar24 != 0) {
                                piVar31 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar31 + -2) == *(long *)StringLiteral_2590) {
                                    puVar21 = (undefined8 *)
                                              (lVar26 + (long)(*piVar31 + 0x14) * 0x10 + 0x138);
                                    goto LAB_01461f1c;
                                  }
                                  uVar24 = uVar24 - 1;
                                  piVar31 = piVar31 + 4;
                                } while (uVar24 != 0);
                              }
                              puVar21 = (undefined8 *)
                                        FUN_00d59724(plVar37,*(long *)StringLiteral_2590,0x14);
LAB_01461f1c:
                              lVar32 = (*(code *)*puVar21)(plVar37,lVar32,lVar30,iVar33,iVar1,uVar14
                                                           ,uVar3,puVar21[1]);
                              if (plVar34 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if ((lVar32 != 0) &&
                                 (lVar26 = thunk_FUN_00d6225c(lVar32,*(undefined8 *)
                                                                      (*plVar34 + 0x40)),
                                 lVar26 == 0)) {
                                uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                FUN_00da5038(uVar16,0);
                              }
                              if (*(uint *)(plVar34 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              plVar34[uVar29 + 4] = lVar32;
                              plVar37 = (long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              ;
                              if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar32 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                              if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar32 + 0x18) <= uVar38) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              lVar25 = *(long *)(lVar32 + lVar25 * 8 + 0x20);
                              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar25 = *(long *)(lVar25 + 0x10);
                              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if (*(uint *)(lVar25 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              FUN_00bc0bd0(in_stack_000000e0,
                                           *(undefined8 *)(lVar25 + uVar29 * 8 + 0x20),
                                           *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__
                                          );
                              FUN_0142deac(lVar30,0);
                            }
                            uVar38 = uVar38 + 1;
                            if (uVar38 == uVar2) break;
                            lVar25 = *(long *)(in_stack_000000e8 + 0x38);
                            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                          } while( true );
                        }
                      }
                      uVar29 = uVar29 + 1;
                      uVar24 = (ulong)*(uint *)(lVar35 + 0x18);
                    } while ((long)uVar29 < (long)(int)*(uint *)(lVar35 + 0x18));
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
                  uVar29 = FUN_0145ff7c(lVar23,*(undefined8 *)
                                                (*(long *)(in_stack_000000e8 + 0x38) + 0x10),lVar35,
                                        lVar27);
                  if ((uVar29 & 1) != 0) {
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
                    lVar23 = FUN_0145f838(lVar23,lVar27,
                                          *(undefined8 *)
                                           (*(long *)(in_stack_000000e8 + 0x38) + 0x10),lVar35,
                                          *(undefined8 *)(in_stack_000000e8 + 0x20),
                                          *(undefined4 *)(in_stack_000000e8 + 0x88));
                    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (0 < (int)*(ulong *)(lVar23 + 0x18)) {
                      uVar29 = 0;
                      uVar24 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
                      do {
                        if (*(uint *)(lVar35 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        if (*(char *)(lVar35 + uVar29 + 0x20) != '\0') {
                          if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          if (uVar24 <= uVar29) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          uVar16 = *(undefined8 *)(lVar28 + 0x10);
                          puVar21 = (undefined8 *)(lVar23 + uVar29 * 8 + 0x20);
                          uVar17 = *puVar21;
                          lVar30 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                          if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_013e7678(lVar30,uVar16,uVar17,0);
                          FUN_0132138c(lVar27,uVar29 & 0xffffffff,&stack0x00000080,
                                       *(undefined8 *)StringLiteral_11624);
                          if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          FUN_01299bc0(lVar19,*(undefined8 *)(in_stack_00000080 + 0x10),
                                       &stack0x00000080,*(undefined8 *)StringLiteral_14282);
                          if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          plVar34 = *(long **)(in_stack_00000080 + 0x18);
                          if (plVar34 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          lVar25 = thunk_FUN_00d6225c(lVar30,*(undefined8 *)(*plVar34 + 0x40));
                          if (lVar25 == 0) {
                            uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                            FUN_00da5038(uVar16,0);
                          }
                          if (*(uint *)(plVar34 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da5194();
                          }
                          plVar34[uVar15 + 4] = lVar30;
                          if (*(char *)(in_stack_000000e8 + 0x70) != '\0') {
                            if (*(uint *)(lVar23 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            plVar34 = *(long **)(in_stack_000000e8 + 0x58);
                            uVar16 = *puVar21;
                            FUN_0132138c(lVar27,uVar29 & 0xffffffff,&stack0x00000080,
                                         *(undefined8 *)StringLiteral_11624);
                            if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            uVar14 = FUN_013e7c48(lVar28,*(undefined8 *)(in_stack_00000080 + 0x10),
                                                  &stack0x000000d8,0);
                            if (*(long *)(in_stack_000000e8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar30 = *(long *)(*(long *)(in_stack_000000e8 + 0x38) + 0x10);
                            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(int *)(lVar30 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            if (*(long *)(lVar30 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar30 = *(long *)(*(long *)(lVar30 + 0x20) + 0x20);
                            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (*(uint *)(lVar30 + 0x18) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da5194();
                            }
                            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            if (plVar34 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            lVar25 = *plVar34;
                            uVar17 = *(undefined8 *)(lVar22 + 0x10);
                            uVar36 = *(undefined8 *)(lVar30 + uVar29 * 8 + 0x20);
                            uVar24 = (ulong)*(ushort *)(lVar25 + 0x12a);
                            if (uVar24 != 0) {
                              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar31 + -2) == *(long *)StringLiteral_2590) {
                                  puVar21 = (undefined8 *)
                                            (lVar25 + (long)(*piVar31 + 5) * 0x10 + 0x138);
                                  goto LAB_014622f0;
                                }
                                uVar24 = uVar24 - 1;
                                piVar31 = piVar31 + 4;
                              } while (uVar24 != 0);
                            }
                            puVar21 = (undefined8 *)
                                      FUN_00d59724(plVar34,*(long *)StringLiteral_2590,5);
LAB_014622f0:
                            (*(code *)*puVar21)(plVar34,uVar16,uVar14,uVar36,uVar29 & 0xffffffff,
                                                uVar17,puVar21[1]);
                          }
                        }
                        uVar24 = (ulong)*(uint *)(lVar23 + 0x18);
                        uVar29 = uVar29 + 1;
                      } while ((long)uVar29 < (long)(int)*(uint *)(lVar23 + 0x18));
                    }
                  }
                  lVar28 = *(long *)(in_stack_000000e8 + 0x80);
                  uVar15 = uVar15 + 1;
                } while (lVar28 != 0);
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


