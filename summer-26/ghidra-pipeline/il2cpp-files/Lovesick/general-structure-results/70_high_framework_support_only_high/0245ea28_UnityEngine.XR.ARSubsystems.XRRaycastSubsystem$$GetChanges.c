/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRRaycastSubsystem$$GetChanges
ENTRY_POINT: 0245ea28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_11;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_ARSubsystems_XRRaycastSubsystem__GetChanges(undefined **param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ushort uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined2 *puVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  int unaff_w22;
  int iVar21;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong uVar22;
  int unaff_w26;
  undefined8 uVar23;
  uint unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  long in_stack_00000040;
  uint uStack0000000000000050;
  int iStack0000000000000054;
  long in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  uint in_stack_00000078;
  int in_stack_00000080;
  undefined8 in_stack_00000088;
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
  
  do {
    thunk_FUN_00d48444(param_1[0x172]);
    DAT_03782516 = (char)unaff_w29;
    do {
      if (unaff_x24 == 0) {
UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = FUN_010cda44(unaff_x24,unaff_w20,
                            **(undefined1 **)
                              (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8),
                            *(undefined8 *)StringLiteral_3155);
      iVar19 = 0;
      do {
        if (unaff_w26 < unaff_w25) {
          if (in_stack_00000040 == 0)
          goto 
          UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
          ;
          FUN_010c462c(in_stack_00000040,in_stack_00000210,
                       CONCAT44(in_stack_0000021c,in_stack_00000218),0,0,in_stack_00000218,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
                      );
          lVar15 = FUN_0241c470(0);
          if (lVar15 == 0)
          goto 
          UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
          ;
          in_stack_00000040 =
               FUN_010cda44(lVar15,*(undefined4 *)(in_stack_00000058 + 600),1,
                            *(undefined8 *)StringLiteral_2796);
          unaff_w28 = (uint)unaff_x23;
          puVar17 = in_stack_000001f0;
          uVar22 = unaff_x23;
          iVar20 = unaff_w22;
          if (0 < (int)unaff_w28) {
            do {
              uVar22 = uVar22 - 1;
              *puVar17 = *(undefined2 *)(unaff_x21 + (long)iVar20 * 2);
              puVar17 = puVar17 + 1;
              iVar20 = iVar20 + 1;
            } while (uVar22 != 0);
          }
          if (0 < in_stack_000001d8._4_4_) {
            lVar15 = 0;
            do {
              *(undefined4 *)(in_stack_000001c8 + lVar15 * 4) = 0;
              lVar15 = lVar15 + 1;
            } while (lVar15 < in_stack_000001d8._4_4_);
          }
          uStack0000000000000064 = 0;
        }
        uVar2 = uStack0000000000000060 + 1;
        iVar20 = iVar19;
        if (unaff_w19 < iStack0000000000000054) {
          if (in_stack_00000038 == 0)
          goto 
          UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
          ;
          FUN_010c462c(in_stack_00000038,in_stack_00000200,
                       CONCAT44(in_stack_0000020c,in_stack_00000208),0,0,in_stack_00000208,
                       *(undefined8 *)
                        Method_UnityEngine_Playables_ScriptPlayable<ActivationMixerPlayable>_Create__
                      );
          lVar15 = FUN_0241c470(0);
          uVar8 = *(undefined4 *)(in_stack_00000058 + 0x25c);
          if (DAT_03782516 == '\0') {
            thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
            DAT_03782516 = (char)unaff_w29;
          }
          if (lVar15 == 0)
          goto 
          UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
          ;
          in_stack_00000038 =
               FUN_010cda44(lVar15,uVar8,
                            **(undefined1 **)
                              (*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8),
                            *(undefined8 *)PTR_DAT_033f1760);
          in_stack_00000078 = 0;
        }
        do {
          lVar15 = *(long *)RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo;
          uVar9 = *(uint *)(in_stack_00000028 +
                           (long)(int)((in_stack_00000088._4_4_ +
                                       *(int *)(in_stack_00000068 + 0x28) * in_stack_00000080) *
                                       *(int *)(in_stack_00000068 + 0x30) + 3) * 4);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            lVar15 = thunk_FUN_00d32864();
          }
          iVar21 = (int)unaff_x23;
          puVar1 = (uint *)(in_stack_00000220 + (long)iVar20 * 0x10);
          iVar20 = iVar20 + 1;
          *puVar1 = in_stack_00000088._4_4_ | uStack0000000000000050;
          puVar1[1] = uVar9;
          puVar1[2] = in_stack_00000078 & 0xffff | iVar21 << 0x10;
          puVar1[3] = 0;
          if (0 < (int)unaff_w28) {
            uVar22 = 0;
            do {
              uVar10 = in_stack_000001f0[uVar22];
              lVar15 = FUN_0245f9a4(lVar15,&stack0x00000210,
                                    uStack0000000000000064 + uVar22 & 0xffffffff);
              uVar18 = (ulong)(uVar10 >> 3) & 0x1ffc;
              *(short *)(in_stack_000001e0 + (ulong)(uint)uVar10 * 2) =
                   (short)(uStack0000000000000064 + uVar22);
              uVar22 = uVar22 + 1;
              *(uint *)(in_stack_000001c8 + uVar18) =
                   *(uint *)(in_stack_000001c8 + uVar18) | unaff_w29 << (ulong)(uVar10 & 0x1f);
            } while (unaff_w28 != uVar22);
            uStack0000000000000064 = uStack0000000000000064 + (int)uVar22;
          }
          if (0 < iVar21) {
            uVar22 = 0;
            do {
              iVar16 = (int)uVar22;
              uVar22 = uVar22 + 1;
              *(uint *)(in_stack_00000200 + (long)(int)(in_stack_00000078 + iVar16) * 4) =
                   CONCAT22(*(undefined2 *)(unaff_x21 + (long)(unaff_w22 + iVar21 + iVar16) * 2),
                            *(undefined2 *)
                             (in_stack_000001e0 +
                             (ulong)*(ushort *)(unaff_x21 + (long)(unaff_w22 + iVar16) * 2) * 2));
            } while (unaff_x23 != uVar22);
            in_stack_00000078 = in_stack_00000078 + (int)uVar22;
          }
          do {
            puVar11 = 
            Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__;
            in_stack_00000088._4_4_ = in_stack_00000088._4_4_ + 1;
            if (in_stack_00000088._4_4_ == in_stack_00000070._4_4_) {
              do {
                in_stack_00000080 = in_stack_00000080 + 1;
                if (in_stack_00000080 == in_stack_00000008._4_4_) {
                  if (0 < iVar20 - iVar19) {
                    if (((lVar14 == 0) ||
                        (FUN_010c462c(lVar14,in_stack_00000220,
                                      CONCAT44(in_stack_0000022c,in_stack_00000228),0,0,
                                      in_stack_00000228,
                                      *(undefined8 *)
                                       Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
                                     ), in_stack_00000040 == 0)) ||
                       (FUN_010c462c(in_stack_00000040,in_stack_00000210,
                                     CONCAT44(in_stack_0000021c,in_stack_00000218),0,0,
                                     in_stack_00000218,*(undefined8 *)puVar11),
                       in_stack_00000038 == 0))
                    goto 
                    UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                    ;
                    FUN_010c462c(in_stack_00000038,in_stack_00000200,
                                 CONCAT44(in_stack_0000020c,in_stack_00000208),0,0,in_stack_00000208
                                 ,*(undefined8 *)
                                   Method_UnityEngine_Playables_ScriptPlayable<ActivationMixerPlayable>_Create__
                                );
                    if (*(int *)(*(long *)
                                  RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo +
                                0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar9 = in_stack_00000078 + 6;
                    if (-1 < (int)(in_stack_00000078 + 3)) {
                      uVar9 = in_stack_00000078 + 3;
                    }
                    if (in_stack_00000020 == 0)
                    goto 
                    UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts
                    ;
                    if (*(uint *)(in_stack_00000020 + 0x18) <= uVar2) goto LAB_0245f364;
                    lVar15 = in_stack_00000020 + (long)(int)uVar2 * 0x30;
                    *(long *)(lVar15 + 0x20) = lVar14;
                    uVar2 = uStack0000000000000060 + 2;
                    *(long *)(lVar15 + 0x28) = in_stack_00000040;
                    *(long *)(lVar15 + 0x30) = in_stack_00000038;
                    *(int *)(lVar15 + 0x38) = iVar20 * 0x10;
                    *(uint *)(lVar15 + 0x3c) = uStack0000000000000064 * in_stack_00000018._4_4_;
                    *(uint *)(lVar15 + 0x40) = (uVar9 & 0x3ffffffc) << 2;
                    *(int *)(lVar15 + 0x44) = iVar19;
                    *(int *)(lVar15 + 0x48) = iVar20 - iVar19;
                    *(undefined4 *)(lVar15 + 0x4c) = 0;
                  }
                  puVar13 = Method_System_Span<Vector2Int>__ctor__;
                  puVar12 = OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo;
                  puVar11 = RCG_Events_MessageListener_var;
                  FUN_01342a94(&stack0x00000220,
                               *(undefined8 *)OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo);
                  FUN_01342a94(&stack0x00000210,*(undefined8 *)puVar12);
                  FUN_01342a94(&stack0x00000200,*(undefined8 *)puVar11);
                  FUN_01342a94(&stack0x000001f0,*(undefined8 *)puVar13);
                  FUN_01342a94(&stack0x000001e0,*(undefined8 *)puVar13);
                  FUN_0245fcf8(&stack0x000001c8);
                  FUN_023ae3ac(&stack0x000001c0,in_stack_00000010,
                               *(undefined8 *)(in_stack_00000058 + 0x290),0);
                  lVar14 = *(long *)(in_stack_00000058 + 0x1f8);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  uVar8 = *(undefined4 *)(lVar14 + 0x20);
                  uVar3 = *(undefined4 *)(lVar14 + 0x24);
                  if (*(int *)(*(long *)StringLiteral_8333 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  puVar11 = StringLiteral_8333;
                  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_026a9874(in_stack_00000010,
                               *(undefined4 *)(*(long *)(*(long *)StringLiteral_8333 + 0xb8) + 0xa4)
                               ,uVar8,0);
                  FUN_026a9874(in_stack_00000010,
                               *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xa8),uVar3,0);
                  uVar8 = *(undefined4 *)(in_stack_00000058 + 0xd0);
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_000001b0 = *(undefined8 *)(in_stack_00000058 + 0x1a8);
                  in_stack_00000198 = *(undefined8 *)(in_stack_00000058 + 400);
                  in_stack_00000190 = *(undefined8 *)(in_stack_00000058 + 0x188);
                  in_stack_000001a8 = *(undefined8 *)(in_stack_00000058 + 0x1a0);
                  in_stack_000001a0 = *(undefined8 *)(in_stack_00000058 + 0x198);
                  FUN_026acb10(in_stack_00000010,uVar8,&stack0x00000190,0);
                  puVar11 = System_Xml_Schema_Datatype_byte_TypeInfo;
                  if (0 < (int)uVar2) {
                    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar14 = 0;
                    uVar22 = 0;
                    do {
                      if (*(uint *)(in_stack_00000020 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      lVar15 = in_stack_00000020 + lVar14;
                      uVar6 = *(undefined8 *)(lVar15 + 0x20);
                      uVar7 = *(undefined8 *)(lVar15 + 0x28);
                      uVar23 = *(undefined8 *)(lVar15 + 0x30);
                      uVar8 = *(undefined4 *)(lVar15 + 0x38);
                      uVar4 = *(undefined4 *)(lVar15 + 0x3c);
                      uVar3 = *(undefined4 *)(lVar15 + 0x40);
                      uVar5 = *(undefined4 *)(lVar15 + 0x44);
                      uVar18 = *(ulong *)(lVar15 + 0x48);
                      if (DAT_03782516 == '\0') {
                        thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                        DAT_03782516 = '\x01';
                      }
                      lVar15 = *(long *)StringLiteral_8333;
                      if (**(char **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8) ==
                          '\0') {
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar15 = *(long *)StringLiteral_8333;
                        }
                        FUN_026acb68(in_stack_00000010,
                                     *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x90),uVar6,0);
                      }
                      else {
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar15 = *(long *)StringLiteral_8333;
                        }
                        FUN_026acbbc(in_stack_00000010,uVar6,
                                     *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x8c),0,uVar8,0);
                      }
                      puVar12 = StringLiteral_8333;
                      lVar15 = *(long *)StringLiteral_8333;
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar15 = *(long *)puVar12;
                      }
                      FUN_026acbbc(in_stack_00000010,uVar7,
                                   *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x94),0,uVar4,0);
                      if (DAT_03782516 == '\0') {
                        thunk_FUN_00d48444(Method_SceneSelect_<>c_<ShowMenu>b__30_0__);
                        DAT_03782516 = '\x01';
                      }
                      lVar15 = *(long *)puVar12;
                      if (**(char **)(*(long *)Method_SceneSelect_<>c_<ShowMenu>b__30_0__ + 0xb8) ==
                          '\0') {
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar15 = *(long *)puVar12;
                        }
                        FUN_026acb68(in_stack_00000010,
                                     *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xa0),uVar23,0);
                      }
                      else {
                        if (*(int *)(lVar15 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar15 = *(long *)puVar12;
                        }
                        FUN_026acbbc(in_stack_00000010,uVar23,
                                     *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x9c),0,uVar3,0);
                      }
                      lVar15 = *(long *)puVar12;
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar15 = *(long *)puVar12;
                      }
                      FUN_026a9874(in_stack_00000010,
                                   *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xac),uVar5,0);
                      if (DAT_03775725 == '\0') {
                        thunk_FUN_00d48444(puVar11);
                        DAT_03775725 = '\x01';
                      }
                      lVar15 = *(long *)(*(long *)puVar11 + 0xb8);
                      in_stack_00000158 = *(undefined8 *)(lVar15 + 0x48);
                      in_stack_00000150 = *(undefined8 *)(lVar15 + 0x40);
                      in_stack_00000168 = *(undefined8 *)(lVar15 + 0x58);
                      in_stack_00000160 = *(undefined8 *)(lVar15 + 0x50);
                      in_stack_00000178 = *(undefined8 *)(lVar15 + 0x68);
                      in_stack_00000170 = *(undefined8 *)(lVar15 + 0x60);
                      in_stack_00000188 = *(undefined8 *)(lVar15 + 0x78);
                      in_stack_00000180 = *(undefined8 *)(lVar15 + 0x70);
                      lVar15 = *(long *)(in_stack_00000058 + 0x280);
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(int *)(lVar15 + 0x18) == 0) {
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
                      FUN_026abecc(in_stack_00000010,&stack0x00000110,
                                   *(undefined8 *)(in_stack_00000058 + 0x268),
                                   *(undefined4 *)(lVar15 + 0x20),0,6,uVar18 & 0xffffffff,0);
                      if (DAT_03775725 == '\0') {
                        thunk_FUN_00d48444(puVar11);
                        DAT_03775725 = '\x01';
                      }
                      lVar15 = *(long *)(*(long *)puVar11 + 0xb8);
                      in_stack_000000d8 = *(undefined8 *)(lVar15 + 0x48);
                      in_stack_000000d0 = *(undefined8 *)(lVar15 + 0x40);
                      in_stack_000000e8 = *(undefined8 *)(lVar15 + 0x58);
                      in_stack_000000e0 = *(undefined8 *)(lVar15 + 0x50);
                      in_stack_000000f8 = *(undefined8 *)(lVar15 + 0x68);
                      in_stack_000000f0 = *(undefined8 *)(lVar15 + 0x60);
                      in_stack_00000108 = *(undefined8 *)(lVar15 + 0x78);
                      in_stack_00000100 = *(undefined8 *)(lVar15 + 0x70);
                      lVar15 = *(long *)(in_stack_00000058 + 0x280);
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(uint *)(lVar15 + 0x18) < 2) {
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
                      FUN_026abecc(in_stack_00000010,&stack0x00000090,
                                   *(undefined8 *)(in_stack_00000058 + 0x268),
                                   *(undefined4 *)(lVar15 + 0x24),0,6,uVar18 & 0xffffffff,0);
                      lVar14 = lVar14 + 0x30;
                      uVar22 = uVar22 + 1;
                    } while ((ulong)uVar2 * 0x30 != lVar14);
                  }
                  FUN_023ae3b0(&stack0x000001c0,0);
                  return;
                }
              } while ((int)in_stack_00000070._4_4_ < 1);
              in_stack_00000088._4_4_ = 0;
              uStack0000000000000050 = in_stack_00000080 * 0x10000;
            }
            iVar21 = (in_stack_00000088._4_4_ +
                     *(int *)(in_stack_00000068 + 0x28) * in_stack_00000080) *
                     *(int *)(in_stack_00000068 + 0x30);
            uVar9 = *(uint *)(*(long *)(in_stack_00000068 + 0x78) + (long)(iVar21 + 1) * 4);
            unaff_x23 = (ulong)uVar9;
          } while (uVar9 == 0);
          unaff_w22 = *(int *)(*(long *)(in_stack_00000068 + 0x78) + (long)iVar21 * 4);
          if ((int)uVar9 < 1) {
            unaff_w28 = 0;
          }
          else {
            unaff_w28 = 0;
            uVar22 = unaff_x23;
            iVar21 = unaff_w22;
            do {
              uVar10 = *(ushort *)(unaff_x21 + (long)iVar21 * 2);
              if ((unaff_w29 << (ulong)(uVar10 & 0x1f) &
                  *(uint *)(in_stack_000001c8 + ((ulong)(uVar10 >> 3) & 0x1ffc))) == 0) {
                in_stack_000001f0[(int)unaff_w28] = uVar10;
                unaff_w28 = unaff_w28 + 1;
              }
              uVar22 = uVar22 - 1;
              iVar21 = iVar21 + 1;
            } while (uVar22 != 0);
          }
          iVar21 = *(int *)(in_stack_00000058 + 0x254);
          unaff_w26 = *(int *)(in_stack_00000058 + 600);
          unaff_w19 = *(int *)(in_stack_00000058 + 0x25c);
          unaff_w25 = unaff_w28 + uStack0000000000000064;
          iStack0000000000000054 = uVar9 + in_stack_00000078;
        } while (((iVar20 != iVar21) && (unaff_w25 <= unaff_w26)) &&
                (iStack0000000000000054 <= unaff_w19));
        if (*(int *)(*(long *)RhythmGameStarter_TrackManager_<>c__DisplayClass28_0_TypeInfo + 0xe0)
            == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = in_stack_00000078 + 6;
        if (-1 < (int)(in_stack_00000078 + 3)) {
          uVar9 = in_stack_00000078 + 3;
        }
        if (in_stack_00000020 == 0)
        goto 
        UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts;
        if (*(uint *)(in_stack_00000020 + 0x18) <= uVar2) {
LAB_0245f364:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar15 = in_stack_00000020 + (long)(int)uVar2 * 0x30;
        *(long *)(lVar15 + 0x20) = lVar14;
        *(long *)(lVar15 + 0x28) = in_stack_00000040;
        *(long *)(lVar15 + 0x30) = in_stack_00000038;
        *(int *)(lVar15 + 0x38) = iVar20 * 0x10;
        *(uint *)(lVar15 + 0x3c) = uStack0000000000000064 * in_stack_00000018._4_4_;
        *(uint *)(lVar15 + 0x40) = (uVar9 & 0x3ffffffc) << 2;
        *(int *)(lVar15 + 0x44) = iVar19;
        *(int *)(lVar15 + 0x48) = iVar20 - iVar19;
        *(undefined4 *)(lVar15 + 0x4c) = 0;
        iVar19 = iVar20;
        uStack0000000000000060 = uVar2;
      } while (iVar20 != iVar21);
      if (lVar14 == 0)
      goto 
      UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo__set_supportsTrackedRaycasts;
      FUN_010c462c(lVar14,in_stack_00000220,CONCAT44(in_stack_0000022c,in_stack_00000228),0,0,
                   in_stack_00000228,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<Mesh>_Free__
                  );
      unaff_x24 = FUN_0241c470(0);
      unaff_w20 = *(undefined4 *)(in_stack_00000058 + 0x254);
    } while (DAT_03782516 != '\0');
    param_1 = &Method_OVRPlugin_<>c_<_cctor>b__796_147__;
  } while( true );
}


