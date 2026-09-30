/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRRaycastHit$$get_pose
ENTRY_POINT: 0245e45c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_13;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_20
*/


void UnityEngine_XR_ARSubsystems_XRRaycastHit__get_pose(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  undefined2 *puVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long unaff_x22;
  long unaff_x23;
  ulong uVar34;
  undefined8 uVar35;
  long unaff_x27;
  undefined4 uVar36;
  uint uVar37;
  uint uVar38;
  int iStack0000000000000034;
  long lStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  uint uStack0000000000000060;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined1 uStack00000000000001c0;
  long lStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  undefined2 *in_stack_000001f0;
  long in_stack_00000200;
  undefined4 in_stack_00000208;
  undefined4 in_stack_0000020c;
  undefined8 in_stack_00000210;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  long in_stack_00000220;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  
  lStack00000000000001c8 = 0;
  uStack00000000000001d0 = 0;
  uStack00000000000001c0 = 0;
  if (*(char *)(unaff_x22 + 0x208) == '\0') {
    return;
  }
  uVar31 = *(undefined8 *)(unaff_x22 + 0x268);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_0268b4e0(uVar31,0,0);
  puVar14 = Method_System_Span<byte>_Slice__;
  if ((uVar18 & 1) == 0) {
    lVar32 = *(long *)(unaff_x22 + 0x280);
    if (lVar32 != 0) {
      if (*(int *)(lVar32 + 0x18) == 0) {
LAB_0245f364:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(int *)(lVar32 + 0x20) < 0) {
        FUN_02457e24();
      }
      lVar32 = FUN_00da4fb8(*(undefined8 *)puVar14,0x100);
      puVar14 = StringLiteral_5238;
      lVar20 = *(long *)(unaff_x22 + 0x1f8);
      if (lVar20 != 0) {
        if (*(int *)(lVar20 + 0x18) == 0) goto LAB_0245f364;
        uVar31 = *(undefined8 *)System_Converter<IBounded,_Edge>_TypeInfo;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar31 = FUN_01780344(uVar31,0);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar14);
        }
        iVar17 = thunk_FUN_00d366d8(uVar31,0);
        uVar6 = *(uint *)(lVar20 + 0x28);
        iVar7 = *(int *)(lVar20 + 0x2c);
        if ((DAT_03782503 & 1) == 0) {
          thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_90__);
          DAT_03782503 = 1;
        }
        if (*(undefined4 **)(lVar20 + 0x58) == (undefined4 *)0x0) {
          uVar36 = 0;
        }
        else {
          uVar36 = **(undefined4 **)(lVar20 + 0x58);
        }
        lVar25 = *(long *)(lVar20 + 0x78);
        lVar33 = *(long *)(lVar20 + 0x68);
        lVar22 = FUN_0241c470(0);
        uVar8 = *(undefined4 *)(unaff_x22 + 0x254);
        if (DAT_03782516 == '\0') {
          thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
          DAT_03782516 = '\x01';
        }
        if (lVar22 != 0) {
          lStack0000000000000048 =
               FUN_010cda44(lVar22,uVar8,
                            **(undefined1 **)
                              (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8),
                            *(undefined8 *)StringLiteral_3155);
          lVar22 = FUN_0241c470(0);
          if (lVar22 != 0) {
            lStack0000000000000040 =
                 FUN_010cda44(lVar22,*(undefined4 *)(unaff_x22 + 600),1,
                              *(undefined8 *)StringLiteral_2796);
            lVar22 = FUN_0241c470(0);
            uVar8 = *(undefined4 *)(unaff_x22 + 0x25c);
            if (DAT_03782516 == '\0') {
              thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
              DAT_03782516 = '\x01';
            }
            puVar16 = Method_UnityEngine_GameObject_AddComponent<HmdOffset>__;
            puVar15 = Method_System_Collections_Generic_Dictionary<InputControl,_float>_set_Item__;
            puVar14 = Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo;
            if (lVar22 != 0) {
              lStack0000000000000038 =
                   FUN_010cda44(lVar22,uVar8,
                                **(undefined1 **)
                                  (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8),
                                *(undefined8 *)PTR_DAT_033f1760);
              FUN_013421d4(&stack0x00000220,*(undefined4 *)(unaff_x22 + 0x254),2,0,
                           *(undefined8 *)puVar15);
              FUN_013421d4(&stack0x00000210,*(int *)(unaff_x22 + 600) * (iVar17 >> 4),2,0,
                           *(undefined8 *)puVar15);
              FUN_013421d4(&stack0x00000200,*(undefined4 *)(unaff_x22 + 0x25c),2,0,
                           *(undefined8 *)puVar14);
              FUN_013421d4(&stack0x000001f0,uVar36,2,0,*(undefined8 *)puVar16);
              FUN_013421d4(&stack0x000001e0,*(undefined4 *)(unaff_x27 + 400),2,0,
                           *(undefined8 *)puVar16);
              FUN_0245f850(&stack0x000001c8,*(undefined4 *)(unaff_x27 + 400),2,1);
              if (iVar7 < 1) {
                uVar29 = 0;
                uVar30 = 0;
                iVar28 = 0;
                iStack0000000000000034 = 0;
                uStack0000000000000060 = 0;
              }
              else {
                uStack0000000000000060 = 0;
                iStack0000000000000034 = 0;
                iVar28 = 0;
                uVar30 = 0;
                uVar29 = 0;
                iVar2 = 0;
                do {
                  if (0 < (int)uVar6) {
                    uVar23 = 0;
                    do {
                      iVar13 = (uVar23 + *(int *)(lVar20 + 0x28) * iVar2) * *(int *)(lVar20 + 0x30);
                      uVar11 = *(uint *)(*(long *)(lVar20 + 0x78) + (long)(iVar13 + 1) * 4);
                      uVar18 = (ulong)uVar11;
                      if (uVar11 != 0) {
                        iVar13 = *(int *)(*(long *)(lVar20 + 0x78) + (long)iVar13 * 4);
                        if ((int)uVar11 < 1) {
                          uVar38 = 0;
                        }
                        else {
                          uVar34 = uVar18;
                          uVar37 = 0;
                          iVar24 = iVar13;
                          do {
                            uVar12 = *(ushort *)(lVar33 + (long)iVar24 * 2);
                            uVar38 = uVar37;
                            if ((1 << (ulong)(uVar12 & 0x1f) &
                                *(uint *)(lStack00000000000001c8 + ((ulong)(uVar12 >> 3) & 0x1ffc)))
                                == 0) {
                              uVar38 = uVar37 + 1;
                              in_stack_000001f0[(int)uVar37] = uVar12;
                            }
                            uVar34 = uVar34 - 1;
                            iVar24 = iVar24 + 1;
                            uVar37 = uVar38;
                          } while (uVar34 != 0);
                        }
                        iVar24 = *(int *)(unaff_x22 + 0x254);
                        iVar9 = *(int *)(unaff_x22 + 600);
                        iVar10 = *(int *)(unaff_x22 + 0x25c);
                        if (((iVar28 == iVar24) || (iVar9 < (int)(uVar38 + uVar30))) ||
                           (iVar10 < (int)(uVar11 + uVar29))) {
                          if (*(int *)(*(long *)
                                        RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar37 = uVar29 + 6;
                          if (-1 < (int)(uVar29 + 3)) {
                            uVar37 = uVar29 + 3;
                          }
                          if (lVar32 == 0)
                          goto 
                          UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                          ;
                          if (*(uint *)(lVar32 + 0x18) <= uStack0000000000000060) goto LAB_0245f364;
                          lVar22 = lVar32 + (long)(int)uStack0000000000000060 * 0x30;
                          *(long *)(lVar22 + 0x20) = lStack0000000000000048;
                          *(long *)(lVar22 + 0x28) = lStack0000000000000040;
                          *(long *)(lVar22 + 0x30) = lStack0000000000000038;
                          *(int *)(lVar22 + 0x38) = iVar28 << 4;
                          *(uint *)(lVar22 + 0x3c) = uVar30 * iVar17;
                          *(uint *)(lVar22 + 0x40) = (uVar37 & 0x3ffffffc) << 2;
                          *(int *)(lVar22 + 0x44) = iStack0000000000000034;
                          *(int *)(lVar22 + 0x48) = iVar28 - iStack0000000000000034;
                          *(undefined4 *)(lVar22 + 0x4c) = 0;
                          if (iVar28 == iVar24) {
                            if (lStack0000000000000048 == 0)
                            goto 
                            UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                            ;
                            FUN_010c462c(lStack0000000000000048,in_stack_00000220,
                                         CONCAT44(in_stack_0000022c,in_stack_00000228),0,0,
                                         in_stack_00000228,
                                         *(undefined8 *)
                                          Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
                                        );
                            lVar22 = FUN_0241c470(0);
                            uVar36 = *(undefined4 *)(unaff_x22 + 0x254);
                            if (DAT_03782516 == '\0') {
                              thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                              DAT_03782516 = '\x01';
                            }
                            if (lVar22 == 0)
                            goto 
                            UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                            ;
                            lStack0000000000000048 =
                                 FUN_010cda44(lVar22,uVar36,
                                              **(undefined1 **)
                                                (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__
                                                + 0xb8),*(undefined8 *)StringLiteral_3155);
                            iVar28 = 0;
                          }
                          if (iVar9 < (int)(uVar38 + uVar30)) {
                            if (lStack0000000000000040 == 0)
                            goto 
                            UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                            ;
                            FUN_010c462c(lStack0000000000000040,in_stack_00000210,
                                         CONCAT44(in_stack_0000021c,in_stack_00000218),0,0,
                                         in_stack_00000218,
                                         *(undefined8 *)
                                          Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
                                        );
                            lVar22 = FUN_0241c470(0);
                            if (lVar22 == 0)
                            goto 
                            UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                            ;
                            lStack0000000000000040 =
                                 FUN_010cda44(lVar22,*(undefined4 *)(unaff_x22 + 600),1,
                                              *(undefined8 *)StringLiteral_2796);
                            puVar26 = in_stack_000001f0;
                            uVar34 = uVar18;
                            iVar24 = iVar13;
                            if (0 < (int)uVar11) {
                              do {
                                uVar34 = uVar34 - 1;
                                *puVar26 = *(undefined2 *)(lVar33 + (long)iVar24 * 2);
                                puVar26 = puVar26 + 1;
                                iVar24 = iVar24 + 1;
                              } while (uVar34 != 0);
                            }
                            if (0 < in_stack_000001d8._4_4_) {
                              lVar22 = 0;
                              do {
                                *(undefined4 *)(lStack00000000000001c8 + lVar22 * 4) = 0;
                                lVar22 = lVar22 + 1;
                              } while (lVar22 < in_stack_000001d8._4_4_);
                            }
                            uVar30 = 0;
                            uVar38 = uVar11;
                          }
                          uStack0000000000000060 = uStack0000000000000060 + 1;
                          iStack0000000000000034 = iVar28;
                          if (iVar10 < (int)(uVar11 + uVar29)) {
                            if (lStack0000000000000038 == 0)
                            goto 
                            UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                            ;
                            FUN_010c462c(lStack0000000000000038,in_stack_00000200,
                                         CONCAT44(in_stack_0000020c,in_stack_00000208),0,0,
                                         in_stack_00000208,
                                         *(undefined8 *)
                                          Method_UnityEngine_Playables_ScriptPlayable<ActivationMixerPlayable>_Create__
                                        );
                            lVar22 = FUN_0241c470(0);
                            uVar36 = *(undefined4 *)(unaff_x22 + 0x25c);
                            if (DAT_03782516 == '\0') {
                              thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                              DAT_03782516 = '\x01';
                            }
                            if (lVar22 == 0)
                            goto 
                            UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                            ;
                            lStack0000000000000038 =
                                 FUN_010cda44(lVar22,uVar36,
                                              **(undefined1 **)
                                                (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__
                                                + 0xb8),*(undefined8 *)PTR_DAT_033f1760);
                            uVar29 = 0;
                          }
                        }
                        lVar22 = *(long *)
                                  RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo;
                        uVar37 = *(uint *)(lVar25 + (long)(int)((uVar23 + *(int *)(lVar20 + 0x28) *
                                                                          iVar2) *
                                                                *(int *)(lVar20 + 0x30) + 3) * 4);
                        if (*(int *)(lVar22 + 0xe0) == 0) {
                          lVar22 = thunk_FUN_00d32864();
                        }
                        puVar1 = (uint *)(in_stack_00000220 + (long)iVar28 * 0x10);
                        iVar28 = iVar28 + 1;
                        *puVar1 = uVar23 | iVar2 << 0x10;
                        puVar1[1] = uVar37;
                        puVar1[2] = uVar29 & 0xffff | uVar11 << 0x10;
                        puVar1[3] = 0;
                        if (0 < (int)uVar38) {
                          uVar34 = 0;
                          do {
                            uVar12 = in_stack_000001f0[uVar34];
                            lVar22 = FUN_0245f9a4(lVar22,&stack0x00000210,
                                                  uVar30 + uVar34 & 0xffffffff,unaff_x27 + 0x188,
                                                  uVar12);
                            uVar27 = (ulong)(uVar12 >> 3) & 0x1ffc;
                            *(short *)(in_stack_000001e0 + (ulong)(uint)uVar12 * 2) =
                                 (short)(uVar30 + uVar34);
                            uVar34 = uVar34 + 1;
                            *(uint *)(lStack00000000000001c8 + uVar27) =
                                 *(uint *)(lStack00000000000001c8 + uVar27) |
                                 1 << (ulong)(uVar12 & 0x1f);
                          } while (uVar38 != uVar34);
                          uVar30 = uVar30 + (int)uVar34;
                        }
                        if (0 < (int)uVar11) {
                          uVar34 = 0;
                          do {
                            iVar24 = (int)uVar34;
                            uVar34 = uVar34 + 1;
                            *(uint *)(in_stack_00000200 + (long)(int)(uVar29 + iVar24) * 4) =
                                 CONCAT22(*(undefined2 *)
                                           (lVar33 + (long)(int)(iVar13 + uVar11 + iVar24) * 2),
                                          *(undefined2 *)
                                           (in_stack_000001e0 +
                                           (ulong)*(ushort *)(lVar33 + (long)(iVar13 + iVar24) * 2)
                                           * 2));
                          } while (uVar18 != uVar34);
                          uVar29 = uVar29 + (int)uVar34;
                        }
                      }
                      uVar23 = uVar23 + 1;
                    } while (uVar23 != uVar6);
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 != iVar7);
              }
              puVar14 = 
              Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__;
              if (iVar28 - iStack0000000000000034 < 1) {
LAB_0245eee4:
                puVar16 = Method_System_Span<Vector2Int>__ctor__;
                puVar15 = OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo;
                puVar14 = RCG_Events_MessageListener_var;
                FUN_01342a94(&stack0x00000220,
                             *(undefined8 *)OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo);
                FUN_01342a94(&stack0x00000210,*(undefined8 *)puVar15);
                FUN_01342a94(&stack0x00000200,*(undefined8 *)puVar14);
                FUN_01342a94(&stack0x000001f0,*(undefined8 *)puVar16);
                FUN_01342a94(&stack0x000001e0,*(undefined8 *)puVar16);
                FUN_0245fcf8(&stack0x000001c8);
                FUN_023ae3ac(&stack0x000001c0,unaff_x23,*(undefined8 *)(unaff_x22 + 0x290),0);
                lVar20 = *(long *)(unaff_x22 + 0x1f8);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                uVar36 = *(undefined4 *)(lVar20 + 0x20);
                uVar8 = *(undefined4 *)(lVar20 + 0x24);
                if (*(int *)(*(long *)StringLiteral_8333 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                puVar14 = StringLiteral_8333;
                if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_026a9874(unaff_x23,
                             *(undefined4 *)(*(long *)(*(long *)StringLiteral_8333 + 0xb8) + 0xa4),
                             uVar36,0);
                FUN_026a9874(unaff_x23,*(undefined4 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0xa8),
                             uVar8,0);
                uVar36 = *(undefined4 *)(unaff_x22 + 0xd0);
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_000001b0 = *(undefined8 *)(unaff_x22 + 0x1a8);
                in_stack_00000198 = *(undefined8 *)(unaff_x22 + 400);
                in_stack_00000190 = *(undefined8 *)(unaff_x22 + 0x188);
                in_stack_000001a8 = *(undefined8 *)(unaff_x22 + 0x1a0);
                in_stack_000001a0 = *(undefined8 *)(unaff_x22 + 0x198);
                FUN_026acb10(unaff_x23,uVar36,&stack0x00000190,0);
                puVar14 = System_Xml_Schema_Datatype_byte_TypeInfo;
                if (0 < (int)uStack0000000000000060) {
                  if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar20 = 0;
                  uVar18 = 0;
                  do {
                    if (*(uint *)(lVar32 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    lVar22 = lVar32 + lVar20;
                    uVar31 = *(undefined8 *)(lVar22 + 0x20);
                    uVar5 = *(undefined8 *)(lVar22 + 0x28);
                    uVar35 = *(undefined8 *)(lVar22 + 0x30);
                    uVar36 = *(undefined4 *)(lVar22 + 0x38);
                    uVar3 = *(undefined4 *)(lVar22 + 0x3c);
                    uVar8 = *(undefined4 *)(lVar22 + 0x40);
                    uVar4 = *(undefined4 *)(lVar22 + 0x44);
                    uVar34 = *(ulong *)(lVar22 + 0x48);
                    if (DAT_03782516 == '\0') {
                      thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                      DAT_03782516 = '\x01';
                    }
                    lVar22 = *(long *)StringLiteral_8333;
                    if (**(char **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8) ==
                        '\0') {
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *(long *)StringLiteral_8333;
                      }
                      FUN_026acb68(unaff_x23,*(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x90),uVar31
                                   ,0);
                    }
                    else {
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *(long *)StringLiteral_8333;
                      }
                      FUN_026acbbc(unaff_x23,uVar31,*(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x8c)
                                   ,0,uVar36,0);
                    }
                    puVar15 = StringLiteral_8333;
                    lVar22 = *(long *)StringLiteral_8333;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar22 = *(long *)puVar15;
                    }
                    FUN_026acbbc(unaff_x23,uVar5,*(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x94),0,
                                 uVar3,0);
                    if (DAT_03782516 == '\0') {
                      thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                      DAT_03782516 = '\x01';
                    }
                    lVar22 = *(long *)puVar15;
                    if (**(char **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8) ==
                        '\0') {
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *(long *)puVar15;
                      }
                      FUN_026acb68(unaff_x23,*(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0xa0),uVar35
                                   ,0);
                    }
                    else {
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *(long *)puVar15;
                      }
                      FUN_026acbbc(unaff_x23,uVar35,*(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x9c)
                                   ,0,uVar8,0);
                    }
                    lVar22 = *(long *)puVar15;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar22 = *(long *)puVar15;
                    }
                    FUN_026a9874(unaff_x23,*(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0xac),uVar4,0)
                    ;
                    if (DAT_03775725 == '\0') {
                      thunk_FUN_00d48444(puVar14);
                      DAT_03775725 = '\x01';
                    }
                    lVar22 = *(long *)(*(long *)puVar14 + 0xb8);
                    in_stack_00000158 = *(undefined8 *)(lVar22 + 0x48);
                    in_stack_00000150 = *(undefined8 *)(lVar22 + 0x40);
                    in_stack_00000168 = *(undefined8 *)(lVar22 + 0x58);
                    in_stack_00000160 = *(undefined8 *)(lVar22 + 0x50);
                    in_stack_00000178 = *(undefined8 *)(lVar22 + 0x68);
                    in_stack_00000170 = *(undefined8 *)(lVar22 + 0x60);
                    in_stack_00000188 = *(undefined8 *)(lVar22 + 0x78);
                    in_stack_00000180 = *(undefined8 *)(lVar22 + 0x70);
                    lVar22 = *(long *)(unaff_x22 + 0x280);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(int *)(lVar22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    in_stack_00000110 = in_stack_00000150;
                    in_stack_00000118 = in_stack_00000158;
                    in_stack_00000120 = in_stack_00000160;
                    in_stack_00000128 = in_stack_00000168;
                    in_stack_00000130 = in_stack_00000170;
                    in_stack_00000138 = in_stack_00000178;
                    in_stack_00000140 = in_stack_00000180;
                    in_stack_00000148 = in_stack_00000188;
                    FUN_026abecc(unaff_x23,&stack0x00000110,*(undefined8 *)(unaff_x22 + 0x268),
                                 *(undefined4 *)(lVar22 + 0x20),0,6,uVar34 & 0xffffffff,0);
                    if (DAT_03775725 == '\0') {
                      thunk_FUN_00d48444(puVar14);
                      DAT_03775725 = '\x01';
                    }
                    lVar22 = *(long *)(*(long *)puVar14 + 0xb8);
                    in_stack_000000d8 = *(undefined8 *)(lVar22 + 0x48);
                    in_stack_000000d0 = *(undefined8 *)(lVar22 + 0x40);
                    in_stack_000000e8 = *(undefined8 *)(lVar22 + 0x58);
                    in_stack_000000e0 = *(undefined8 *)(lVar22 + 0x50);
                    in_stack_000000f8 = *(undefined8 *)(lVar22 + 0x68);
                    in_stack_000000f0 = *(undefined8 *)(lVar22 + 0x60);
                    in_stack_00000108 = *(undefined8 *)(lVar22 + 0x78);
                    in_stack_00000100 = *(undefined8 *)(lVar22 + 0x70);
                    lVar22 = *(long *)(unaff_x22 + 0x280);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar22 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    in_stack_00000090 = in_stack_000000d0;
                    in_stack_00000098 = in_stack_000000d8;
                    in_stack_000000a0 = in_stack_000000e0;
                    in_stack_000000a8 = in_stack_000000e8;
                    in_stack_000000b0 = in_stack_000000f0;
                    in_stack_000000b8 = in_stack_000000f8;
                    in_stack_000000c0 = in_stack_00000100;
                    in_stack_000000c8 = in_stack_00000108;
                    FUN_026abecc(unaff_x23,&stack0x00000090,*(undefined8 *)(unaff_x22 + 0x268),
                                 *(undefined4 *)(lVar22 + 0x24),0,6,uVar34 & 0xffffffff,0);
                    lVar20 = lVar20 + 0x30;
                    uVar18 = uVar18 + 1;
                  } while ((ulong)uStack0000000000000060 * 0x30 != lVar20);
                }
                FUN_023ae3b0(&stack0x000001c0,0);
                return;
              }
              if (((lStack0000000000000048 != 0) &&
                  (FUN_010c462c(lStack0000000000000048,in_stack_00000220,
                                CONCAT44(in_stack_0000022c,in_stack_00000228),0,0,in_stack_00000228,
                                *(undefined8 *)
                                 Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
                               ), lStack0000000000000040 != 0)) &&
                 (FUN_010c462c(lStack0000000000000040,in_stack_00000210,
                               CONCAT44(in_stack_0000021c,in_stack_00000218),0,0,in_stack_00000218,
                               *(undefined8 *)puVar14), lStack0000000000000038 != 0)) {
                FUN_010c462c(lStack0000000000000038,in_stack_00000200,
                             CONCAT44(in_stack_0000020c,in_stack_00000208),0,0,in_stack_00000208,
                             *(undefined8 *)
                              Method_UnityEngine_Playables_ScriptPlayable<ActivationMixerPlayable>_Create__
                            );
                if (*(int *)(*(long *)RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = uVar29 + 6;
                if (-1 < (int)(uVar29 + 3)) {
                  uVar6 = uVar29 + 3;
                }
                if (lVar32 != 0) {
                  if (*(uint *)(lVar32 + 0x18) <= uStack0000000000000060) goto LAB_0245f364;
                  lVar20 = lVar32 + (long)(int)uStack0000000000000060 * 0x30;
                  *(long *)(lVar20 + 0x20) = lStack0000000000000048;
                  uStack0000000000000060 = uStack0000000000000060 + 1;
                  *(long *)(lVar20 + 0x28) = lStack0000000000000040;
                  *(long *)(lVar20 + 0x30) = lStack0000000000000038;
                  *(int *)(lVar20 + 0x38) = iVar28 << 4;
                  *(uint *)(lVar20 + 0x3c) = uVar30 * iVar17;
                  *(uint *)(lVar20 + 0x40) = (uVar6 & 0x3ffffffc) << 2;
                  *(int *)(lVar20 + 0x44) = iStack0000000000000034;
                  *(int *)(lVar20 + 0x48) = iVar28 - iStack0000000000000034;
                  *(undefined4 *)(lVar20 + 0x4c) = 0;
                  goto LAB_0245eee4;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
    if (plVar19 != (long *)0x0) {
      lVar32 = *(long *)(unaff_x22 + 0x268);
      if ((lVar32 != 0) &&
         (lVar20 = thunk_FUN_00d6225c(lVar32,*(undefined8 *)(*plVar19 + 0x40)), lVar20 == 0)) {
LAB_0245f37c:
        uVar31 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar31,0);
      }
      if ((int)plVar19[3] != 0) {
        plVar19[4] = lVar32;
        plVar21 = (long *)thunk_FUN_00d93c64();
        if (plVar21 == (long *)0x0)
        goto 
        UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts;
        lVar32 = (**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
        if ((lVar32 != 0) &&
           (lVar20 = thunk_FUN_00d6225c(lVar32,*(undefined8 *)(*plVar19 + 0x40)), lVar20 == 0))
        goto LAB_0245f37c;
        puVar14 = StringLiteral_302;
        if (1 < *(uint *)(plVar19 + 3)) {
          plVar19[5] = lVar32;
          puVar15 = StringLiteral_6865;
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661304(*(undefined8 *)puVar15,plVar19,0);
          return;
        }
      }
      goto LAB_0245f364;
    }
  }
UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


