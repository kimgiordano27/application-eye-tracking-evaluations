/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 0144f220
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long unaff_x19;
  ulong uVar22;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000050;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  puVar7 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
  puVar6 = Method_System_Collections_Generic_List_Enumerator<Merge>_Dispose__;
  if (3 < *(int *)(unaff_x19 + 0x28)) {
    uVar10 = FUN_0176eb1c((long)&stack0x00000048 + 4,0);
    uVar11 = FUN_0176eb1c(&stack0x00000048,0);
    uVar10 = FUN_0160073c(*(undefined8 *)puVar6,uVar10,*(undefined8 *)puVar7,uVar11,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar10,0);
  }
  lVar13 = in_stack_00000050;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar3 = *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x34);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
    if ((lVar12 != 0) && (FUN_02669c18(lVar12,0), lVar13 != 0)) {
      *(long *)(lVar13 + 0x10) = lVar12;
      puVar6 = System_Nullable<short>_TypeInfo;
      if (in_stack_00000050 != 0) {
        *(undefined8 *)(in_stack_00000050 + 0x18) = 0;
        *(undefined8 *)(in_stack_00000050 + 0x20) = 0;
        in_stack_00000038 = &stack0x00000050;
        in_stack_00000030 = 0;
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02040640(lVar13,0);
        FUN_02040900(lVar13,0);
        lVar12 = in_stack_00000050;
        puVar6 = PTR_DAT_033f3868;
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0268afbc(lVar14,*(undefined8 *)
                             Method_UnityEngine_XR_ARFoundation_ARFace_GetUndisposable<int>__,0);
        lVar15 = in_stack_00000050;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar12 + 0x18) = lVar14;
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0268afbc(lVar12,*(undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_Add__,0)
        ;
        puVar6 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(long *)(lVar15 + 0x20) = lVar12;
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined4 *)(lVar12 + 0x20) = 3;
        uVar10 = FUN_017b46ec(lVar12,0);
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0144ec68(uVar10,lVar12,*(undefined8 *)(in_stack_00000050 + 0x18),
                     *(undefined8 *)(in_stack_00000050 + 0x20),uStack000000000000004c,
                     uStack0000000000000048,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18),
                     uVar3);
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((*(char *)(*(long *)(unaff_x19 + 0x30) + 0x49) != '\0') &&
           (1 < *(int *)(unaff_x19 + 0x28))) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661754(*(undefined8 *)
                        Method_System_Collections_Generic_HashSet<ParticleSystem>_Contains__,0);
        }
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     UnityEngine_UIElements_EventCallbackListPool_TypeInfo);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar14,*(undefined8 *)
                             Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__);
        puVar7 = StringLiteral_11624;
        puVar6 = Method_System_Collections_Generic_List<Material>_Add__;
        uVar5 = DAT_0293f7f0;
        uVar3 = DAT_028aa028;
        lVar15 = *(long *)(unaff_x19 + 0x30);
        if (lVar15 != 0) {
          uVar22 = 0;
          plVar20 = (long *)StringLiteral_240;
          do {
            iVar9 = FUN_01459960(lVar15,0);
            if ((long)iVar9 <= (long)uVar22) {
              if (3 < *(int *)(unaff_x19 + 0x28)) {
                plVar20 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
                lVar13 = FUN_020407b0(lVar13,0);
                fStack0000000000000058 = (float)lVar13 * DAT_028aa290;
                lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)
                                             System_Runtime_InteropServices_InAttribute_TypeInfo,
                                            &stack0x00000058);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if ((lVar13 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar20 + 0x40)),
                   lVar12 == 0)) {
                  uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,0);
                }
                if ((int)plVar20[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar20[4] = lVar13;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660fcc(*(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<IInteractor>_Dispose__
                             ,plVar20,0);
              }
              FUN_00bc0824(&stack0x00000030);
              return 0;
            }
            lVar15 = *(long *)(unaff_x19 + 0x30);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            cVar4 = *(char *)(lVar15 + 0x49);
            uVar10 = *(undefined8 *)(lVar15 + 0x80);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_01457470(uVar22 & 0xffffffff,cVar4 != '\0',uVar10,0);
            if ((uVar16 & 1) == 0) {
              if (*(int *)(unaff_x19 + 0x28) < 4) {
                plVar18 = (long *)0x0;
              }
              else {
                if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar15 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0132138c(lVar15,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
                if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar10 = FUN_01600424(*(undefined8 *)PTR_DAT_033ee3e8,
                                      *(undefined8 *)
                                       (CONCAT44(uStack000000000000005c,fStack0000000000000058) +
                                       0x10),*(undefined8 *)StringLiteral_2907,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(uVar10,0);
                plVar18 = (long *)0x0;
              }
            }
            else {
              lVar15 = *(long *)(unaff_x19 + 0x40);
              if (lVar15 != 0) {
                if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar17 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0132138c(lVar17,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
                if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar10 = FUN_01600424(*(undefined8 *)StringLiteral_4464,
                                      *(undefined8 *)
                                       (CONCAT44(uStack000000000000005c,fStack0000000000000058) +
                                       0x10),*(undefined8 *)
                                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                      ,0);
                (**(code **)(lVar15 + 0x18))
                          (uVar3,*(undefined8 *)(lVar15 + 0x40),uVar10,
                           *(undefined8 *)(lVar15 + 0x28));
              }
              if (3 < *(int *)(unaff_x19 + 0x28)) {
                if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar15 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0132138c(lVar15,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
                if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar15 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar10 = *(undefined8 *)
                          (CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10);
                FUN_0132138c(lVar15,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
                lVar15 = CONCAT44(uStack000000000000005c,fStack0000000000000058);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_016f5f58(lVar15 + 0x18,0);
                uVar10 = FUN_0160073c(*(undefined8 *)StringLiteral_29,uVar10,
                                      *(undefined8 *)
                                       Method_System_Double_System_IConvertible_ToDateTime__,uVar11,
                                      0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(uVar10,0);
              }
              lVar15 = *plVar20;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              uVar16 = FUN_00da5b18(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
              if ((uVar16 & 1) == 0) {
                *(undefined4 *)(lVar14 + 0x18) = 0;
              }
              else {
                iVar9 = *(int *)(lVar14 + 0x18);
                *(undefined4 *)(lVar14 + 0x18) = 0;
                if (0 < iVar9) {
                  FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar9,0);
                }
              }
              lVar15 = *(long *)(unaff_x19 + 0x30);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar17 = *(long *)(unaff_x19 + 0x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = *(undefined8 *)(lVar15 + 0x58);
              uVar1 = *(undefined4 *)(lVar17 + 0x10);
              uVar2 = *(undefined4 *)(lVar17 + 0x14);
              uVar11 = *(undefined8 *)(in_stack_00000050 + 0x10);
              FUN_0132138c(*(long *)(lVar15 + 0x70),uVar22 & 0xffffffff,&stack0x00000058,
                           *(undefined8 *)puVar7);
              FUN_014502c0(lVar17,uVar10,uVar22 & 0xffffffff,uVar1,uVar2,uVar11,lVar14,
                           CONCAT44(uStack000000000000005c,fStack0000000000000058));
              if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(in_stack_00000050 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_010e58e8(*(long *)(in_stack_00000050 + 0x18),&stack0x00000058,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__
                          );
              if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_02666150(CONCAT44(uStack000000000000005c,fStack0000000000000058),
                           *(undefined8 *)(in_stack_00000050 + 0x10),0);
              if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(in_stack_00000050 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_010e58e8(*(long *)(in_stack_00000050 + 0x18),&stack0x00000058,
                           *(undefined8 *)Method_TuneTargetBasic_<Complete>b__23_0__);
              lVar15 = CONCAT44(uStack000000000000005c,fStack0000000000000058);
              uVar10 = FUN_01325140(lVar14,*(undefined8 *)
                                            System_Collections_Generic_List<BezierControlPoint>_TypeInfo
                                   );
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(uVar10,uVar10);
              }
              FUN_02666084(lVar15,uVar10,0);
              if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar15 = *(long *)(unaff_x19 + 0x20);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar17 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = *(undefined8 *)(in_stack_00000050 + 0x20);
              uVar1 = *(undefined4 *)(lVar15 + 0x10);
              uVar2 = *(undefined4 *)(lVar15 + 0x14);
              FUN_0132138c(lVar17,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
              if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar15 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              cVar4 = *(char *)(CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x18);
              FUN_0132138c(lVar15,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
              plVar18 = (long *)FUN_01450e84(lVar12,uVar10,uVar1,uVar2,cVar4 != '\0',
                                             CONCAT44(uStack000000000000005c,fStack0000000000000058)
                                            );
              puVar8 = StringLiteral_7763;
              plVar20 = (long *)StringLiteral_240;
              if (0 < *(int *)(lVar14 + 0x18)) {
                iVar9 = 0;
                do {
                  FUN_0132138c(lVar14,iVar9,&stack0x00000058,*(undefined8 *)puVar8);
                  FUN_0142deac(CONCAT44(uStack000000000000005c,fStack0000000000000058),0);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < *(int *)(lVar14 + 0x18));
              }
              lVar15 = *plVar20;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              uVar16 = FUN_00da5b18(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
              if ((uVar16 & 1) == 0) {
                *(undefined4 *)(lVar14 + 0x18) = 0;
              }
              else {
                iVar9 = *(int *)(lVar14 + 0x18);
                *(undefined4 *)(lVar14 + 0x18) = 0;
                if (0 < iVar9) {
                  FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar9,0);
                }
              }
              if (3 < *(int *)(unaff_x19 + 0x28)) {
                plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if ((*(long *)Method_System_Text_Encoding_GetChars__ != 0) &&
                   (lVar15 = thunk_FUN_00d6225c(*(long *)Method_System_Text_Encoding_GetChars__,
                                                *(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0)) {
                  uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,0);
                }
                if ((int)plVar19[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[4] = *(long *)Method_System_Text_Encoding_GetChars__;
                if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar15 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_0132138c(lVar15,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
                if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar15 = *(long *)(CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10);
                if ((lVar15 != 0) &&
                   (lVar17 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar17 == 0)) {
                  uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,0);
                }
                uVar21 = *(uint *)(plVar19 + 3);
                if (uVar21 < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[5] = lVar15;
                if (*(long *)PTR_DAT_033f5960 != 0) {
                  lVar15 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,
                                              *(undefined8 *)(*plVar19 + 0x40));
                  if (lVar15 == 0) {
                    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar10,0);
                  }
                  uVar21 = *(uint *)(plVar19 + 3);
                }
                if (uVar21 < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[6] = *(long *)PTR_DAT_033f5960;
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                in_stack_00000040._4_4_ =
                     (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
                lVar15 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
                if ((lVar15 != 0) &&
                   (lVar17 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar17 == 0)) {
                  uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,0);
                }
                uVar21 = *(uint *)(plVar19 + 3);
                if (uVar21 < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[7] = lVar15;
                if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
                  lVar15 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                              *(undefined8 *)(*plVar19 + 0x40));
                  if (lVar15 == 0) {
                    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar10,0);
                  }
                  uVar21 = *(uint *)(plVar19 + 3);
                }
                if (uVar21 < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[8] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
                in_stack_00000040._4_4_ =
                     (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
                lVar15 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
                if ((lVar15 != 0) &&
                   (lVar17 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar17 == 0)) {
                  uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,0);
                }
                uVar21 = *(uint *)(plVar19 + 3);
                if (uVar21 < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[9] = lVar15;
                if (*(long *)PTR_DAT_033f6c08 != 0) {
                  lVar15 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6c08,
                                              *(undefined8 *)(*plVar19 + 0x40));
                  if (lVar15 == 0) {
                    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar10,0);
                  }
                  uVar21 = *(uint *)(plVar19 + 3);
                }
                if (uVar21 < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[10] = *(long *)PTR_DAT_033f6c08;
                in_stack_00000040._4_4_ = FUN_02681c0c(plVar18,0);
                lVar15 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
                if ((lVar15 != 0) &&
                   (lVar17 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar17 == 0)) {
                  uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,0);
                }
                if (*(uint *)(plVar19 + 3) < 8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar19[0xb] = lVar15;
                uVar10 = FUN_01600844(plVar19,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660dac(uVar10,0);
              }
            }
            plVar19 = *(long **)(unaff_x19 + 0x58);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if ((plVar18 != (long *)0x0) &&
               (lVar15 = thunk_FUN_00d6225c(plVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
            {
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            if (*(uint *)(plVar19 + 3) <= uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar19[uVar22 + 4] = (long)plVar18;
            lVar15 = *(long *)(unaff_x19 + 0x40);
            if (lVar15 != 0) {
              if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar17 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132138c(lVar17,uVar22 & 0xffffffff,&stack0x00000058,*(undefined8 *)puVar7);
              if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = FUN_01600424(*(undefined8 *)
                                     Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                                    ,*(undefined8 *)
                                      (CONCAT44(uStack000000000000005c,fStack0000000000000058) +
                                      0x10),*(undefined8 *)
                                             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                    ,0);
              (**(code **)(lVar15 + 0x18))
                        (uVar5,*(undefined8 *)(lVar15 + 0x40),uVar10,*(undefined8 *)(lVar15 + 0x28))
              ;
            }
            lVar15 = *(long *)(unaff_x19 + 0x30);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(lVar15 + 0x88) == 0) {
              lVar17 = *(long *)(unaff_x19 + 0x58);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = *(undefined8 *)(unaff_x19 + 0x50);
              uVar11 = *(undefined8 *)(lVar17 + uVar22 * 8 + 0x20);
              FUN_0132138c(*(long *)(lVar15 + 0x70),uVar22 & 0xffffffff,&stack0x00000058,
                           *(undefined8 *)puVar7);
              FUN_0143dae4(lVar15,uVar10,uVar11,
                           CONCAT44(uStack000000000000005c,fStack0000000000000058),
                           uVar22 & 0xffffffff,0);
              lVar15 = *(long *)(unaff_x19 + 0x30);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
            if (*(long *)(lVar15 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar17 = *(long *)(unaff_x19 + 0x48);
            FUN_0132138c(*(long *)(lVar15 + 0x70),uVar22 & 0xffffffff,&stack0x00000058,
                         *(undefined8 *)puVar7);
            if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0143f660(lVar17,*(undefined8 *)
                                 (CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10),0)
            ;
            lVar15 = *(long *)(unaff_x19 + 0x30);
            uVar22 = uVar22 + 1;
          } while (lVar15 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


