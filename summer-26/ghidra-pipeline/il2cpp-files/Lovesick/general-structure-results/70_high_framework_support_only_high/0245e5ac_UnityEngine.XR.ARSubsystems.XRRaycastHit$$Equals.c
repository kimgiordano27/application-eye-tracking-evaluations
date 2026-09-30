/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRRaycastHit$$Equals
ENTRY_POINT: 0245e5ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_12;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_ARSubsystems_XRRaycastHit__Equals(long *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined2 *puVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  long lVar25;
  long unaff_x22;
  long unaff_x23;
  ulong uVar26;
  long unaff_x25;
  ulong uVar27;
  undefined8 uVar28;
  long unaff_x27;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  int iStack000000000000000c;
  int iStack000000000000001c;
  long in_stack_00000020;
  int iStack0000000000000034;
  long lStack0000000000000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  uint uStack0000000000000060;
  uint uStack0000000000000074;
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
  long in_stack_000001c8;
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
  
  puVar12 = StringLiteral_5238;
  uVar24 = *(undefined8 *)System_Converter<IBounded,_Edge>_TypeInfo;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar24 = FUN_01780344(uVar24,0);
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar12);
  }
  iStack000000000000001c = thunk_FUN_00d366d8(uVar24,0);
  uStack0000000000000074 = *(uint *)(unaff_x25 + 0x28);
  iStack000000000000000c = *(int *)(unaff_x25 + 0x2c);
  if ((DAT_03782503 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_90__);
    DAT_03782503 = 1;
  }
  if (*(undefined4 **)(unaff_x25 + 0x58) == (undefined4 *)0x0) {
    uVar29 = 0;
  }
  else {
    uVar29 = **(undefined4 **)(unaff_x25 + 0x58);
  }
  lVar18 = *(long *)(unaff_x25 + 0x78);
  lVar25 = *(long *)(unaff_x25 + 0x68);
  lVar15 = FUN_0241c470(0);
  uVar6 = *(undefined4 *)(unaff_x22 + 0x254);
  if (DAT_03782516 == '\0') {
    thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
    DAT_03782516 = '\x01';
  }
  if (lVar15 != 0) {
    lStack0000000000000048 =
         FUN_010cda44(lVar15,uVar6,
                      **(undefined1 **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8),
                      *(undefined8 *)StringLiteral_3155);
    lVar15 = FUN_0241c470(0);
    if (lVar15 != 0) {
      lStack0000000000000040 =
           FUN_010cda44(lVar15,*(undefined4 *)(unaff_x22 + 600),1,*(undefined8 *)StringLiteral_2796)
      ;
      lVar15 = FUN_0241c470(0);
      uVar6 = *(undefined4 *)(unaff_x22 + 0x25c);
      if (DAT_03782516 == '\0') {
        thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
        DAT_03782516 = '\x01';
      }
      puVar14 = Method_UnityEngine_GameObject_AddComponent<HmdOffset>__;
      puVar13 = Method_System_Collections_Generic_Dictionary<InputControl,_float>_set_Item__;
      puVar12 = Newtonsoft_Json_Converters_IXmlDeclaration_TypeInfo;
      if (lVar15 != 0) {
        iVar21 = iStack000000000000001c >> 4;
        lStack0000000000000038 =
             FUN_010cda44(lVar15,uVar6,
                          **(undefined1 **)
                            (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8),
                          *(undefined8 *)PTR_DAT_033f1760);
        FUN_013421d4(&stack0x00000220,*(undefined4 *)(unaff_x22 + 0x254),2,0,*(undefined8 *)puVar13)
        ;
        FUN_013421d4(&stack0x00000210,*(int *)(unaff_x22 + 600) * iVar21,2,0,*(undefined8 *)puVar13)
        ;
        FUN_013421d4(&stack0x00000200,*(undefined4 *)(unaff_x22 + 0x25c),2,0,*(undefined8 *)puVar12)
        ;
        FUN_013421d4(&stack0x000001f0,uVar29,2,0,*(undefined8 *)puVar14);
        FUN_013421d4(&stack0x000001e0,*(undefined4 *)(unaff_x27 + 400),2,0,*(undefined8 *)puVar14);
        FUN_0245f850(&stack0x000001c8,*(undefined4 *)(unaff_x27 + 400),2,1);
        if (iStack000000000000000c < 1) {
          uVar22 = 0;
          uVar23 = 0;
          iVar21 = 0;
          iStack0000000000000034 = 0;
          uStack0000000000000060 = 0;
        }
        else {
          uStack0000000000000060 = 0;
          iStack0000000000000034 = 0;
          iVar21 = 0;
          uVar23 = 0;
          uVar22 = 0;
          iVar2 = 0;
          do {
            if (0 < (int)uStack0000000000000074) {
              uVar16 = 0;
              do {
                iVar11 = (uVar16 + *(int *)(unaff_x25 + 0x28) * iVar2) * *(int *)(unaff_x25 + 0x30);
                uVar9 = *(uint *)(*(long *)(unaff_x25 + 0x78) + (long)(iVar11 + 1) * 4);
                uVar26 = (ulong)uVar9;
                if (uVar9 != 0) {
                  iVar11 = *(int *)(*(long *)(unaff_x25 + 0x78) + (long)iVar11 * 4);
                  if ((int)uVar9 < 1) {
                    uVar31 = 0;
                  }
                  else {
                    uVar27 = uVar26;
                    uVar30 = 0;
                    iVar17 = iVar11;
                    do {
                      uVar10 = *(ushort *)(lVar25 + (long)iVar17 * 2);
                      uVar31 = uVar30;
                      if ((1 << (ulong)(uVar10 & 0x1f) &
                          *(uint *)(in_stack_000001c8 + ((ulong)(uVar10 >> 3) & 0x1ffc))) == 0) {
                        uVar31 = uVar30 + 1;
                        in_stack_000001f0[(int)uVar30] = uVar10;
                      }
                      uVar27 = uVar27 - 1;
                      iVar17 = iVar17 + 1;
                      uVar30 = uVar31;
                    } while (uVar27 != 0);
                  }
                  iVar17 = *(int *)(unaff_x22 + 0x254);
                  iVar7 = *(int *)(unaff_x22 + 600);
                  iVar8 = *(int *)(unaff_x22 + 0x25c);
                  if (((iVar21 == iVar17) || (iVar7 < (int)(uVar31 + uVar23))) ||
                     (iVar8 < (int)(uVar9 + uVar22))) {
                    if (*(int *)(*(long *)
                                  RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo +
                                0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar30 = uVar22 + 6;
                    if (-1 < (int)(uVar22 + 3)) {
                      uVar30 = uVar22 + 3;
                    }
                    if (in_stack_00000020 == 0)
                    goto 
                    UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                    ;
                    if (*(uint *)(in_stack_00000020 + 0x18) <= uStack0000000000000060)
                    goto LAB_0245f364;
                    lVar15 = in_stack_00000020 + (long)(int)uStack0000000000000060 * 0x30;
                    *(long *)(lVar15 + 0x20) = lStack0000000000000048;
                    *(long *)(lVar15 + 0x28) = lStack0000000000000040;
                    *(long *)(lVar15 + 0x30) = lStack0000000000000038;
                    *(int *)(lVar15 + 0x38) = iVar21 << 4;
                    *(uint *)(lVar15 + 0x3c) = uVar23 * iStack000000000000001c;
                    *(uint *)(lVar15 + 0x40) = (uVar30 & 0x3ffffffc) << 2;
                    *(int *)(lVar15 + 0x44) = iStack0000000000000034;
                    *(int *)(lVar15 + 0x48) = iVar21 - iStack0000000000000034;
                    *(undefined4 *)(lVar15 + 0x4c) = 0;
                    if (iVar21 == iVar17) {
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
                      lVar15 = FUN_0241c470(0);
                      uVar29 = *(undefined4 *)(unaff_x22 + 0x254);
                      if (DAT_03782516 == '\0') {
                        thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                        DAT_03782516 = '\x01';
                      }
                      if (lVar15 == 0)
                      goto 
                      UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                      ;
                      lStack0000000000000048 =
                           FUN_010cda44(lVar15,uVar29,
                                        **(undefined1 **)
                                          (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ +
                                          0xb8),*(undefined8 *)StringLiteral_3155);
                      iVar21 = 0;
                    }
                    if (iVar7 < (int)(uVar31 + uVar23)) {
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
                      lVar15 = FUN_0241c470(0);
                      if (lVar15 == 0)
                      goto 
                      UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                      ;
                      lStack0000000000000040 =
                           FUN_010cda44(lVar15,*(undefined4 *)(unaff_x22 + 600),1,
                                        *(undefined8 *)StringLiteral_2796);
                      puVar19 = in_stack_000001f0;
                      uVar27 = uVar26;
                      iVar17 = iVar11;
                      if (0 < (int)uVar9) {
                        do {
                          uVar27 = uVar27 - 1;
                          *puVar19 = *(undefined2 *)(lVar25 + (long)iVar17 * 2);
                          puVar19 = puVar19 + 1;
                          iVar17 = iVar17 + 1;
                        } while (uVar27 != 0);
                      }
                      if (0 < in_stack_000001d8._4_4_) {
                        lVar15 = 0;
                        do {
                          *(undefined4 *)(in_stack_000001c8 + lVar15 * 4) = 0;
                          lVar15 = lVar15 + 1;
                        } while (lVar15 < in_stack_000001d8._4_4_);
                      }
                      uVar23 = 0;
                      uVar31 = uVar9;
                    }
                    uStack0000000000000060 = uStack0000000000000060 + 1;
                    iStack0000000000000034 = iVar21;
                    if (iVar8 < (int)(uVar9 + uVar22)) {
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
                      lVar15 = FUN_0241c470(0);
                      uVar29 = *(undefined4 *)(unaff_x22 + 0x25c);
                      if (DAT_03782516 == '\0') {
                        thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                        DAT_03782516 = '\x01';
                      }
                      if (lVar15 == 0)
                      goto 
                      UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                      ;
                      lStack0000000000000038 =
                           FUN_010cda44(lVar15,uVar29,
                                        **(undefined1 **)
                                          (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ +
                                          0xb8),*(undefined8 *)PTR_DAT_033f1760);
                      uVar22 = 0;
                    }
                  }
                  lVar15 = *(long *)RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo;
                  uVar30 = *(uint *)(lVar18 + (long)(int)((uVar16 + *(int *)(unaff_x25 + 0x28) *
                                                                    iVar2) *
                                                          *(int *)(unaff_x25 + 0x30) + 3) * 4);
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    lVar15 = thunk_FUN_00d32864();
                  }
                  puVar1 = (uint *)(in_stack_00000220 + (long)iVar21 * 0x10);
                  iVar21 = iVar21 + 1;
                  *puVar1 = uVar16 | iVar2 << 0x10;
                  puVar1[1] = uVar30;
                  puVar1[2] = uVar22 & 0xffff | uVar9 << 0x10;
                  puVar1[3] = 0;
                  if (0 < (int)uVar31) {
                    uVar27 = 0;
                    do {
                      uVar10 = in_stack_000001f0[uVar27];
                      lVar15 = FUN_0245f9a4(lVar15,&stack0x00000210,uVar23 + uVar27 & 0xffffffff,
                                            unaff_x27 + 0x188,uVar10);
                      uVar20 = (ulong)(uVar10 >> 3) & 0x1ffc;
                      *(short *)(in_stack_000001e0 + (ulong)(uint)uVar10 * 2) =
                           (short)(uVar23 + uVar27);
                      uVar27 = uVar27 + 1;
                      *(uint *)(in_stack_000001c8 + uVar20) =
                           *(uint *)(in_stack_000001c8 + uVar20) | 1 << (ulong)(uVar10 & 0x1f);
                    } while (uVar31 != uVar27);
                    uVar23 = uVar23 + (int)uVar27;
                  }
                  if (0 < (int)uVar9) {
                    uVar27 = 0;
                    do {
                      iVar17 = (int)uVar27;
                      uVar27 = uVar27 + 1;
                      *(uint *)(in_stack_00000200 + (long)(int)(uVar22 + iVar17) * 4) =
                           CONCAT22(*(undefined2 *)
                                     (lVar25 + (long)(int)(iVar11 + uVar9 + iVar17) * 2),
                                    *(undefined2 *)
                                     (in_stack_000001e0 +
                                     (ulong)*(ushort *)(lVar25 + (long)(iVar11 + iVar17) * 2) * 2));
                    } while (uVar26 != uVar27);
                    uVar22 = uVar22 + (int)uVar27;
                  }
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 != uStack0000000000000074);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != iStack000000000000000c);
        }
        puVar12 = Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
        ;
        if (iVar21 - iStack0000000000000034 < 1) {
LAB_0245eee4:
          puVar14 = Method_System_Span<Vector2Int>__ctor__;
          puVar13 = OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo;
          puVar12 = RCG_Events_MessageListener_var;
          FUN_01342a94(&stack0x00000220,
                       *(undefined8 *)OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo);
          FUN_01342a94(&stack0x00000210,*(undefined8 *)puVar13);
          FUN_01342a94(&stack0x00000200,*(undefined8 *)puVar12);
          FUN_01342a94(&stack0x000001f0,*(undefined8 *)puVar14);
          FUN_01342a94(&stack0x000001e0,*(undefined8 *)puVar14);
          FUN_0245fcf8(&stack0x000001c8);
          FUN_023ae3ac(&stack0x000001c0,unaff_x23,*(undefined8 *)(unaff_x22 + 0x290),0);
          lVar15 = *(long *)(unaff_x22 + 0x1f8);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar29 = *(undefined4 *)(lVar15 + 0x20);
          uVar6 = *(undefined4 *)(lVar15 + 0x24);
          if (*(int *)(*(long *)StringLiteral_8333 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar12 = StringLiteral_8333;
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_026a9874(unaff_x23,
                       *(undefined4 *)(*(long *)(*(long *)StringLiteral_8333 + 0xb8) + 0xa4),uVar29,
                       0);
          FUN_026a9874(unaff_x23,*(undefined4 *)(*(long *)(*(long *)puVar12 + 0xb8) + 0xa8),uVar6,0)
          ;
          uVar29 = *(undefined4 *)(unaff_x22 + 0xd0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__ +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_000001b0 = *(undefined8 *)(unaff_x22 + 0x1a8);
          in_stack_00000198 = *(undefined8 *)(unaff_x22 + 400);
          in_stack_00000190 = *(undefined8 *)(unaff_x22 + 0x188);
          in_stack_000001a8 = *(undefined8 *)(unaff_x22 + 0x1a0);
          in_stack_000001a0 = *(undefined8 *)(unaff_x22 + 0x198);
          FUN_026acb10(unaff_x23,uVar29,&stack0x00000190,0);
          puVar12 = System_Xml_Schema_Datatype_byte_TypeInfo;
          if (0 < (int)uStack0000000000000060) {
            if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar15 = 0;
            uVar26 = 0;
            do {
              if (*(uint *)(in_stack_00000020 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar18 = in_stack_00000020 + lVar15;
              uVar24 = *(undefined8 *)(lVar18 + 0x20);
              uVar5 = *(undefined8 *)(lVar18 + 0x28);
              uVar28 = *(undefined8 *)(lVar18 + 0x30);
              uVar29 = *(undefined4 *)(lVar18 + 0x38);
              uVar3 = *(undefined4 *)(lVar18 + 0x3c);
              uVar6 = *(undefined4 *)(lVar18 + 0x40);
              uVar4 = *(undefined4 *)(lVar18 + 0x44);
              uVar27 = *(ulong *)(lVar18 + 0x48);
              if (DAT_03782516 == '\0') {
                thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                DAT_03782516 = '\x01';
              }
              lVar18 = *(long *)StringLiteral_8333;
              if (**(char **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8) == '\0') {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar18 = *(long *)StringLiteral_8333;
                }
                FUN_026acb68(unaff_x23,*(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0x90),uVar24,0);
              }
              else {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar18 = *(long *)StringLiteral_8333;
                }
                FUN_026acbbc(unaff_x23,uVar24,*(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0x8c),0,
                             uVar29,0);
              }
              puVar13 = StringLiteral_8333;
              lVar18 = *(long *)StringLiteral_8333;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar18 = *(long *)puVar13;
              }
              FUN_026acbbc(unaff_x23,uVar5,*(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0x94),0,uVar3,
                           0);
              if (DAT_03782516 == '\0') {
                thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                DAT_03782516 = '\x01';
              }
              lVar18 = *(long *)puVar13;
              if (**(char **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8) == '\0') {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar18 = *(long *)puVar13;
                }
                FUN_026acb68(unaff_x23,*(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0xa0),uVar28,0);
              }
              else {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar18 = *(long *)puVar13;
                }
                FUN_026acbbc(unaff_x23,uVar28,*(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0x9c),0,
                             uVar6,0);
              }
              lVar18 = *(long *)puVar13;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar18 = *(long *)puVar13;
              }
              FUN_026a9874(unaff_x23,*(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0xac),uVar4,0);
              if (DAT_03775725 == '\0') {
                thunk_FUN_00d48444(puVar12);
                DAT_03775725 = '\x01';
              }
              lVar18 = *(long *)(*(long *)puVar12 + 0xb8);
              in_stack_00000158 = *(undefined8 *)(lVar18 + 0x48);
              in_stack_00000150 = *(undefined8 *)(lVar18 + 0x40);
              in_stack_00000168 = *(undefined8 *)(lVar18 + 0x58);
              in_stack_00000160 = *(undefined8 *)(lVar18 + 0x50);
              in_stack_00000178 = *(undefined8 *)(lVar18 + 0x68);
              in_stack_00000170 = *(undefined8 *)(lVar18 + 0x60);
              in_stack_00000188 = *(undefined8 *)(lVar18 + 0x78);
              in_stack_00000180 = *(undefined8 *)(lVar18 + 0x70);
              lVar18 = *(long *)(unaff_x22 + 0x280);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(int *)(lVar18 + 0x18) == 0) {
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
                           *(undefined4 *)(lVar18 + 0x20),0,6,uVar27 & 0xffffffff,0);
              if (DAT_03775725 == '\0') {
                thunk_FUN_00d48444(puVar12);
                DAT_03775725 = '\x01';
              }
              lVar18 = *(long *)(*(long *)puVar12 + 0xb8);
              in_stack_000000d8 = *(undefined8 *)(lVar18 + 0x48);
              in_stack_000000d0 = *(undefined8 *)(lVar18 + 0x40);
              in_stack_000000e8 = *(undefined8 *)(lVar18 + 0x58);
              in_stack_000000e0 = *(undefined8 *)(lVar18 + 0x50);
              in_stack_000000f8 = *(undefined8 *)(lVar18 + 0x68);
              in_stack_000000f0 = *(undefined8 *)(lVar18 + 0x60);
              in_stack_00000108 = *(undefined8 *)(lVar18 + 0x78);
              in_stack_00000100 = *(undefined8 *)(lVar18 + 0x70);
              lVar18 = *(long *)(unaff_x22 + 0x280);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar18 + 0x18) < 2) {
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
                           *(undefined4 *)(lVar18 + 0x24),0,6,uVar27 & 0xffffffff,0);
              lVar15 = lVar15 + 0x30;
              uVar26 = uVar26 + 1;
            } while ((ulong)uStack0000000000000060 * 0x30 != lVar15);
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
                         *(undefined8 *)puVar12), lStack0000000000000038 != 0)) {
          FUN_010c462c(lStack0000000000000038,in_stack_00000200,
                       CONCAT44(in_stack_0000020c,in_stack_00000208),0,0,in_stack_00000208,
                       *(undefined8 *)
                        Method_UnityEngine_Playables_ScriptPlayable<ActivationMixerPlayable>_Create__
                      );
          if (*(int *)(*(long *)RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo + 0xe0
                      ) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = uVar22 + 6;
          if (-1 < (int)(uVar22 + 3)) {
            uVar16 = uVar22 + 3;
          }
          if (in_stack_00000020 != 0) {
            if (*(uint *)(in_stack_00000020 + 0x18) <= uStack0000000000000060) {
LAB_0245f364:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar15 = in_stack_00000020 + (long)(int)uStack0000000000000060 * 0x30;
            *(long *)(lVar15 + 0x20) = lStack0000000000000048;
            uStack0000000000000060 = uStack0000000000000060 + 1;
            *(long *)(lVar15 + 0x28) = lStack0000000000000040;
            *(long *)(lVar15 + 0x30) = lStack0000000000000038;
            *(int *)(lVar15 + 0x38) = iVar21 << 4;
            *(uint *)(lVar15 + 0x3c) = uVar23 * iStack000000000000001c;
            *(uint *)(lVar15 + 0x40) = (uVar16 & 0x3ffffffc) << 2;
            *(int *)(lVar15 + 0x44) = iStack0000000000000034;
            *(int *)(lVar15 + 0x48) = iVar21 - iStack0000000000000034;
            *(undefined4 *)(lVar15 + 0x4c) = 0;
            goto LAB_0245eee4;
          }
        }
      }
    }
  }
UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


