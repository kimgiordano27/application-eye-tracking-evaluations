/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider$$remove_locomotionProvidersChanged
ENTRY_POINT: 059ed584
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_19;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_20
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionProvider__remove_locomotionProvidersChanged
          (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  long unaff_x19;
  uint uVar27;
  undefined8 *unaff_x20;
  uint uVar28;
  long *plVar29;
  undefined8 uVar30;
  long *plVar31;
  undefined4 uVar32;
  long *unaff_x25;
  undefined8 uVar33;
  long unaff_x26;
  uint *puVar34;
  undefined1 auVar35 [16];
  int iStack000000000000003c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
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
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  uint uStack0000000000000148;
  undefined1 uStack000000000000014c;
  
  uStack00000000000000f8 = param_2._8_8_;
  uStack00000000000000f0 = param_2._0_8_;
  uStack0000000000000100 = uStack00000000000000f0;
  uStack0000000000000108 = uStack00000000000000f8;
  uStack0000000000000110 = uStack00000000000000f0;
  uStack0000000000000118 = uStack00000000000000f8;
  FUN_059e8750();
  in_stack_00000068 = uStack00000000000000f8;
  in_stack_00000060 = uStack00000000000000f0;
  in_stack_00000078 = uStack0000000000000108;
  in_stack_00000070 = uStack0000000000000100;
  in_stack_00000088 = uStack0000000000000118;
  in_stack_00000080 = uStack0000000000000110;
  in_stack_00000090 = in_stack_00000120;
  FUN_03f1b6b0(*(long *)(*unaff_x25 + 0xb8) + 0x10,&stack0x00000060,*unaff_x20);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  lVar14 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  if (lVar14 == 0) goto LAB_059ef7b4;
  FUN_0444eb38(lVar14,*(undefined8 *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_059e8914(*(undefined8 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x100),
               *(long *)(*unaff_x25 + 0xb8),*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8));
  plVar1 = (long *)(unaff_x19 + 0x3a0);
  if (*(long *)(unaff_x19 + 0x3a0) == 0) {
    uVar32 = *(undefined4 *)(unaff_x19 + 0x490);
    uVar21 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05a504e0(uVar21,uVar32,0);
    *(undefined8 *)(unaff_x19 + 0x3a0) = uVar21;
    thunk_FUN_02bb0e9c(plVar1,uVar21);
  }
  else {
    plVar29 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
    lVar14 = *plVar29;
    if (lVar14 == 0) goto LAB_059ef7b4;
    iVar7 = *(int *)(unaff_x19 + 0x490);
    if (*(int *)(lVar14 + 0x18) < iVar7) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_033359b0(plVar29,iVar7,0,
                   *(undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                  );
    }
  }
  *(undefined4 *)(unaff_x19 + 0x65c) = 0;
  if (*(int *)(unaff_x19 + 0x310) == 1) {
    FUN_05a317d0();
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__;
    if (*(long *)(unaff_x19 + 0x668) == 0) {
      *(undefined4 *)(unaff_x19 + 0x310) = 3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a47000(0);
      if ((uVar15 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar21 = thunk_FUN_05c92238(*(long *)(unaff_x19 + 0x100),0);
        uVar21 = FUN_04c0a5c4(*(undefined8 *)Method_VRBeats_Carousel_<Focus>b__16_0__,uVar21,
                              *(undefined8 *)Method_VRBeats_Carousel_<MoveLeft>b__14_0__,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c453b4(uVar21);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_059ef7b4;
      iVar7 = FUN_05c91f88(*(long *)(unaff_x19 + 0x670),0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
      iVar8 = FUN_05c91f88(*(long *)(unaff_x19 + 0x100),0);
      if (iVar7 != iVar8) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar15 = FUN_05a47520(0);
        if ((uVar15 & 1) == 0) {
LAB_059ed730:
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_059ef7b4;
          uVar21 = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
          *(undefined8 *)(unaff_x19 + 0x678) = uVar21;
        }
        else {
          if (*(long *)(unaff_x19 + 0x118) == 0) goto LAB_059ef7b4;
          iVar7 = FUN_05c91f88(*(long *)(unaff_x19 + 0x118),0);
          if ((*(long *)(unaff_x19 + 0x670) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x670) + 0x88), lVar14 == 0))
          goto LAB_059ef7b4;
          iVar8 = FUN_05c91f88(lVar14,0);
          if (iVar7 == iVar8) goto LAB_059ed730;
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_059ef7b4;
          uVar21 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar30 = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar21 = FUN_05a424e4(uVar21,uVar30,0);
          *(undefined8 *)(unaff_x19 + 0x678) = uVar21;
        }
        thunk_FUN_02bb0e9c(unaff_x19 + 0x678,uVar21);
        lVar14 = *unaff_x25;
        uVar21 = *(undefined8 *)(unaff_x19 + 0x678);
        uVar30 = *(undefined8 *)(unaff_x19 + 0x670);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *unaff_x25;
        }
        uVar9 = FUN_059e8914(uVar21,uVar30,*(long *)(lVar14 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
        lVar14 = *unaff_x25;
        *(uint *)(unaff_x19 + 0x680) = uVar9;
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_059ef7b4;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) {
LAB_059ef7b8:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x330) == 0) {
LAB_059ef7b4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar9 = FUN_0385c3a4(*(long *)(unaff_x19 + 0x330),0x6c696761,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<CustomStyleResolvedEvent>__
                      );
  if (*(int *)(unaff_x19 + 0x310) == 6) {
    uVar21 = *(undefined8 *)(unaff_x19 + 0x318);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_05c8c45c(uVar21,0,0);
    if (((uVar15 & 1) != 0) && (*(char *)(unaff_x19 + 0x42d) == '\0')) {
      plVar29 = *(long **)(unaff_x19 + 0x318);
      if (plVar29 == (long *)0x0) goto LAB_059ef7b4;
      (**(code **)(*plVar29 + 0x558))
                (plVar29,**(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar29 + 0x560));
    }
  }
  if (unaff_x26 == 0) goto LAB_059ef7b4;
  uVar10 = *(uint *)(unaff_x26 + 0x18);
  if ((int)uVar10 < 1) {
    iStack000000000000003c = 0;
LAB_059eef38:
    if (*(char *)(unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
LAB_059eef44:
      return *(undefined4 *)(unaff_x19 + 0x4a0);
    }
    lVar14 = *plVar1;
    if (lVar14 != 0) {
      lVar24 = *unaff_x25;
      *(int *)(lVar14 + 0x1c) = iStack000000000000003c;
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
      ;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar24 = *unaff_x25;
      }
      lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
      if (lVar24 != 0) {
        uVar9 = FUN_0444e654(lVar24,*(undefined8 *)
                                     Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__
                            );
        *(uint *)(lVar14 + 0x34) = uVar9;
        if (*plVar1 != 0) {
          plVar29 = (long *)(*plVar1 + 0x60);
          lVar14 = *plVar29;
          if (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x18) < (int)uVar9) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_03335a5c(plVar29,(ulong)uVar9,0,
                           *(undefined8 *)
                            Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Insert__
                          );
            }
            if (*(long *)(unaff_x19 + 0x720) != 0) {
              plVar29 = (long *)(unaff_x19 + 0x720);
              if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar9) {
                uVar10 = uVar9 | (int)uVar9 >> 0x10;
                uVar10 = uVar10 | (int)uVar10 >> 8;
                uVar10 = uVar10 | (int)uVar10 >> 4;
                uVar10 = uVar10 | (int)uVar10 >> 2;
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_03335780(plVar29,(uVar10 | (int)uVar10 >> 1) + 1,
                             *(undefined8 *)
                              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Remove__
                            );
              }
              if (*(char *)(unaff_x19 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_059ef7b4;
                plVar31 = (long *)(*plVar1 + 0x38);
                lVar14 = *plVar31;
                if (lVar14 == 0) goto LAB_059ef7b4;
                iVar7 = *(int *)(unaff_x19 + 0x4a0);
                if (0x100 < *(int *)(lVar14 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  FUN_033359b0(plVar31,iVar8,1,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                              );
                  unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                }
              }
              if (0 < (int)uVar9) {
                lVar14 = 0;
                uVar15 = 0;
                lVar24 = 0x54;
                lVar16 = 0x20;
                do {
                  if (uVar15 != 0) {
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_059ef7b4;
                    if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                    uVar21 = *(undefined8 *)(lVar22 + uVar15 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar18 = FUN_05c8e378(uVar21,0,0);
                    if ((uVar18 & 1) != 0) {
                      lVar22 = *unaff_x25;
                      plVar31 = (long *)*plVar29;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar22 = *unaff_x25;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = lVar22 + lVar24;
                      in_stack_000000e0 = *(undefined8 *)(lVar22 + -4);
                      in_stack_000000d8 = *(undefined8 *)(lVar22 + -0xc);
                      in_stack_000000d0 = *(undefined8 *)(lVar22 + -0x14);
                      in_stack_000000b8 = *(undefined8 *)(lVar22 + -0x2c);
                      in_stack_000000b0 = *(undefined8 *)(lVar22 + -0x34);
                      in_stack_000000c8 = *(undefined8 *)(lVar22 + -0x1c);
                      in_stack_000000c0 = *(undefined8 *)(lVar22 + -0x24);
                      lVar22 = FUN_05a4e04c();
                      if (plVar31 == (long *)0x0) goto LAB_059ef7b4;
                      if ((lVar22 != 0) &&
                         (lVar19 = thunk_FUN_02b79548(lVar22,*(undefined8 *)(*plVar31 + 0x40)),
                         lVar19 == 0)) {
LAB_059ef7bc:
                        uVar21 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                        FUN_02b3c988(uVar21,0);
                      }
                      if (*(uint *)(plVar31 + 3) <= uVar15) goto LAB_059ef7b8;
                      plVar31[uVar15 + 4] = lVar22;
                      thunk_FUN_02bb0e9c((long)plVar31 + lVar16,lVar22);
                      unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                      if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x60), lVar22 == 0))
                      goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      puVar20 = (undefined8 *)(lVar22 + lVar14 + 0x30);
                      *puVar20 = 0;
                      thunk_FUN_02bb0e9c(puVar20,0);
                    }
                    lVar22 = *plVar29;
                    if (lVar22 == 0) goto LAB_059ef7b4;
                    if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                    lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                    if (lVar22 == 0) goto LAB_059ef7b4;
                    uVar21 = *(undefined8 *)(lVar22 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar18 = FUN_05c8e378(uVar21,0,0);
                    if ((uVar18 & 1) == 0) {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0))
                      goto LAB_059ef7b4;
                      iVar7 = FUN_05c91f88(lVar22,0);
                      lVar22 = *unaff_x25;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44(lVar22);
                        lVar22 = *unaff_x25;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = *(long *)(lVar22 + lVar24 + -0x1c);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      iVar8 = FUN_05c91f88(lVar22,0);
                      if (iVar7 != iVar8) goto LAB_059ef2d4;
                    }
                    else {
LAB_059ef2d4:
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar19 = *unaff_x25;
                      lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar19 = *unaff_x25;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      thunk_FUN_05a4db7c(lVar22,*(undefined8 *)(lVar19 + lVar24 + -0x1c),0);
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar19 = **(long **)(*unaff_x25 + 0xb8);
                      if (lVar19 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar19 + lVar24 + -0x2c);
                      thunk_FUN_02bb0e9c();
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar19 = **(long **)(*unaff_x25 + 0xb8);
                      if (lVar19 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(lVar19 + lVar24 + -0x24);
                      thunk_FUN_02bb0e9c();
                    }
                    lVar22 = *unaff_x25;
                    if (*(int *)(lVar22 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar22 = *unaff_x25;
                    }
                    lVar19 = **(long **)(lVar22 + 0xb8);
                    if (lVar19 == 0) goto LAB_059ef7b4;
                    if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                    if (*(char *)(lVar19 + lVar24 + -0x13) != '\0') {
                      lVar25 = *plVar29;
                      if (lVar25 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar25 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar25 = *(long *)(lVar25 + uVar15 * 8 + 0x20);
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar19 = **(long **)(*unaff_x25 + 0xb8);
                        if (lVar19 == 0) goto LAB_059ef7b4;
                      }
                      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      if (lVar25 == 0) goto LAB_059ef7b4;
                      FUN_05a4dbac(lVar25,*(undefined8 *)(lVar19 + lVar24 + -0x1c),0);
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar19 = **(long **)(*unaff_x25 + 0xb8);
                      if (lVar19 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      *(undefined8 *)(lVar22 + 0x48) = *(undefined8 *)(lVar19 + lVar24 + -0xc);
                      thunk_FUN_02bb0e9c();
                    }
                  }
                  lVar22 = *unaff_x25;
                  if (*(int *)(lVar22 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar22 = *unaff_x25;
                  }
                  unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_059ef7b4;
                  if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                  goto LAB_059ef7b4;
                  if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                  lVar25 = lVar19 + lVar14;
                  uVar10 = *(uint *)(lVar22 + lVar24);
                  if (*(long *)(lVar25 + 0x30) == 0) {
                    if (uVar15 == 0) {
                      in_stack_00000078 = 0;
                      in_stack_00000070 = 0;
                      in_stack_00000088 = 0;
                      in_stack_00000080 = 0;
                      in_stack_00000098 = 0;
                      in_stack_00000090 = 0;
                      in_stack_000000a8 = 0;
                      in_stack_000000a0 = 0;
                      in_stack_00000068 = 0;
                      in_stack_00000060 = 0;
                      FUN_05a43018(&stack0x00000060,*(undefined8 *)(unaff_x19 + 0x3d8),uVar10 + 1,0)
                      ;
                      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_059ef7b8;
                    }
                    else {
                      lVar22 = *plVar29;
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar22 = *(long *)(lVar22 + uVar15 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059ef7b4;
                      uVar21 = FUN_05a4dee8(lVar22,0);
                      in_stack_00000078 = 0;
                      in_stack_00000070 = 0;
                      in_stack_00000088 = 0;
                      in_stack_00000080 = 0;
                      in_stack_00000098 = 0;
                      in_stack_00000090 = 0;
                      in_stack_000000a8 = 0;
                      in_stack_000000a0 = 0;
                      in_stack_00000068 = 0;
                      in_stack_00000060 = 0;
                      FUN_05a43018(&stack0x00000060,uVar21,uVar10 + 1,0);
                      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059ef7b8;
                      lVar19 = lVar19 + lVar14;
                    }
                    memmove((void *)(lVar19 + 0x20),&stack0x00000060,0x50);
                    thunk_FUN_02bb0e9c(lVar25 + 0x20,0);
                    unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  }
                  else {
                    iVar7 = *(int *)(*(long *)(lVar25 + 0x30) + 0x18);
                    if (iVar7 < (int)(uVar10 * 4)) {
                      if ((int)uVar10 < 0x401) {
                        uVar10 = uVar10 | (int)uVar10 >> 0x10;
                        uVar10 = uVar10 | (int)uVar10 >> 8;
                        uVar10 = uVar10 | (int)uVar10 >> 4;
                        uVar10 = uVar10 | (int)uVar10 >> 2;
                        uVar10 = uVar10 | (int)uVar10 >> 1;
LAB_059ef5f8:
                        iVar7 = uVar10 + 1;
                      }
                      else {
UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer__set_useCharacterControllerIfExists:
                        iVar7 = uVar10 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                                  + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      FUN_05a43df4(lVar25 + 0x20,iVar7,0);
                    }
                    else if ((*(char *)(unaff_x19 + 0x359) != '\0') && (0 < (int)uVar10)) {
                      iVar8 = iVar7 + 3;
                      if (-1 < iVar7) {
                        iVar8 = iVar7;
                      }
                      if (0x100 < (int)((iVar8 >> 2) - uVar10)) {
                        if (uVar10 < 0x401) {
                          uVar10 = uVar10 >> 4 | uVar10 >> 8 | uVar10;
                          uVar10 = uVar10 | uVar10 >> 2;
                          uVar10 = uVar10 | uVar10 >> 1;
                          goto LAB_059ef5f8;
                        }
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer__set_useCharacterControllerIfExists
                        ;
                      }
                    }
                  }
                  if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x60), lVar22 == 0))
                  goto LAB_059ef7b4;
                  lVar19 = *unaff_x25;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar19 = *unaff_x25;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_059ef7b4;
                  if ((*(uint *)(lVar19 + 0x18) <= uVar15) || (*(uint *)(lVar22 + 0x18) <= uVar15))
                  goto LAB_059ef7b8;
                  *(undefined8 *)(lVar22 + lVar14 + 0x68) = *(undefined8 *)(lVar19 + lVar24 + -0x1c)
                  ;
                  thunk_FUN_02bb0e9c();
                  uVar15 = uVar15 + 1;
                  lVar14 = lVar14 + 0x50;
                  lVar24 = lVar24 + 0x38;
                  lVar16 = lVar16 + 8;
                } while (uVar9 != uVar15);
              }
              puVar5 = 
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
              lVar14 = *plVar29;
              if (lVar14 != 0) {
                lVar16 = (long)(int)uVar9;
                lVar24 = (long)(int)uVar9 * 0x50 + 0x20;
                do {
                  uVar9 = (uint)*(undefined8 *)(lVar14 + 0x18);
                  if ((int)uVar9 <= lVar16) goto LAB_059eef44;
                  if (uVar9 <= (uint)lVar16) goto LAB_059ef7b8;
                  uVar21 = *(undefined8 *)(lVar14 + lVar16 * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar15 = FUN_05c8c45c(uVar21,0,0);
                  if ((uVar15 & 1) == 0) goto LAB_059eef44;
                  if ((*plVar1 == 0) || (lVar14 = *(long *)(*plVar1 + 0x60), lVar14 == 0)) break;
                  uVar9 = (uint)*(undefined8 *)(lVar14 + 0x18);
                  if (lVar16 < (int)uVar9) {
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      uVar9 = (uint)*(undefined8 *)(lVar14 + 0x18);
                    }
                    if (uVar9 <= (uint)lVar16) goto LAB_059ef7b8;
                    FUN_05a44d6c(lVar14 + lVar24,0,1,0);
                  }
                  lVar14 = *plVar29;
                  lVar16 = lVar16 + 1;
                  lVar24 = lVar24 + 0x50;
                } while (lVar14 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_059ef7b4;
  }
  uVar27 = 0;
  lVar14 = unaff_x26 + 0x20;
  iStack000000000000003c = 0;
LAB_059ed938:
  if (uVar10 <= uVar27) goto LAB_059ef7b8;
  puVar34 = (uint *)(lVar14 + (long)(int)uVar27 * 0x10 + 4);
  if (*puVar34 == 0) goto LAB_059eef38;
  if (*plVar1 == 0) goto LAB_059ef7b4;
  plVar29 = (long *)(*plVar1 + 0x38);
  lVar24 = *plVar29;
  iVar7 = *(int *)(unaff_x19 + 0x4a0);
  if ((lVar24 == 0) || (*(int *)(lVar24 + 0x18) <= iVar7)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_033359b0(plVar29,iVar7 + 1,1,
                 *(undefined8 *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                );
    uVar10 = *(uint *)(unaff_x26 + 0x18);
  }
  if (uVar10 <= uVar27) goto LAB_059ef7b8;
  uVar10 = *puVar34;
  uVar32 = *(undefined4 *)(unaff_x19 + 0x120);
  if ((*(char *)(unaff_x19 + 0x33a) != '\0') && (uVar10 == 0x3c)) {
    uVar15 = FUN_05a26cd4();
    uVar23 = uStack0000000000000148;
    if ((uVar15 & 1) == 0) {
      uVar32 = *(undefined4 *)(unaff_x19 + 0x120);
      goto LAB_059edbb0;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_059ef7b8;
    iVar7 = *(int *)(lVar14 + (long)(int)uVar27 * 0x10 + 8);
    if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x292) = 1;
    }
    uVar27 = uStack0000000000000148;
    if (*(int *)(unaff_x19 + 0x65c) != 1) goto LAB_059eef20;
    lVar24 = *unaff_x25;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar24 = *unaff_x25;
    }
    lVar24 = **(long **)(lVar24 + 0xb8);
    if (lVar24 != 0) {
      if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 != 0)) {
          if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
            sVar4 = *(short *)(unaff_x19 + 0x6bc);
            *(undefined8 *)(lVar24 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
            *(short *)(lVar24 + 0x24) = sVar4 + -0x2000;
            thunk_FUN_02bb0e9c();
            if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
               (lVar24 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar24 != 0)) {
              uVar10 = *(uint *)(unaff_x19 + 0x4a0);
              if (uVar10 < *(uint *)(lVar24 + 0x18)) {
                *(undefined4 *)(lVar24 + 0x20 + (long)(int)uVar10 * 0x178 + 0x30) =
                     *(undefined4 *)(unaff_x19 + 0x120);
                if ((*(long *)(unaff_x19 + 0x6b0) != 0) &&
                   (lVar16 = FUN_05a4afd0(*(long *)(unaff_x19 + 0x6b0),0), lVar16 != 0)) {
                  uVar21 = FUN_037a6268(lVar16,*(undefined4 *)(unaff_x19 + 0x6bc),
                                        *(undefined8 *)
                                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                                       );
                  if (uVar10 < *(uint *)(lVar24 + 0x18)) {
                    *(undefined8 *)(lVar24 + 0x20 + (long)(int)uVar10 * 0x178 + 0x10) = uVar21;
                    thunk_FUN_02bb0e9c();
                    if ((*plVar1 != 0) && (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 != 0)) {
                      uVar10 = *(uint *)(unaff_x19 + 0x4a0);
                      if (uVar10 < *(uint *)(lVar24 + 0x18)) {
                        puVar26 = (undefined4 *)(lVar24 + 0x20 + (long)(int)uVar10 * 0x178);
                        *puVar26 = *(undefined4 *)(unaff_x19 + 0x65c);
                        puVar26[2] = iVar7;
                        if (uVar23 < *(uint *)(unaff_x26 + 0x18)) {
                          *(int *)(lVar24 + 0x20 + (long)(int)uVar10 * 0x178 + 0xc) =
                               (*(int *)(lVar14 + (long)(int)uVar23 * 0x10 + 8) - iVar7) + 1;
                          *(undefined4 *)(unaff_x19 + 0x65c) = 0;
                          *(undefined4 *)(unaff_x19 + 0x120) = uVar32;
                          uVar27 = uVar23;
                          goto LAB_059ee9c0;
                        }
                      }
                      goto LAB_059ef7b8;
                    }
                    goto LAB_059ef7b4;
                  }
                  goto LAB_059ef7b8;
                }
                goto LAB_059ef7b4;
              }
              goto LAB_059ef7b8;
            }
            goto LAB_059ef7b4;
          }
          goto LAB_059ef7b8;
        }
        goto LAB_059ef7b4;
      }
      goto LAB_059ef7b8;
    }
    goto LAB_059ef7b4;
  }
LAB_059edbb0:
  uVar30 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x118);
  uStack000000000000014c = 0;
  if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_059edc78;
  uVar23 = *(uint *)(unaff_x19 + 0x284);
  if ((uVar23 >> 4 & 1) == 0) {
    if ((uVar23 >> 3 & 1) == 0) {
      if ((uVar23 >> 5 & 1) != 0) goto LAB_059edbd8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_04cfa518(uVar10,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_04cfa9b8(uVar10,0);
        goto LAB_059edc74;
      }
    }
  }
  else {
LAB_059edbd8:
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_04cfa5b8(uVar10,0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_04cfa840(uVar10,0);
LAB_059edc74:
      uVar10 = uVar10 & 0xffff;
    }
  }
LAB_059edc78:
  uVar23 = uVar27 + 1;
  if ((int)uVar23 < (int)*(uint *)(unaff_x26 + 0x18)) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_059ef7b8;
    uVar28 = *(uint *)(lVar14 + (long)(int)uVar23 * 0x10 + 4);
  }
  else {
    uVar28 = 0;
  }
  uVar11 = uVar10;
  if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_059ede00:
    lVar24 = FUN_05a31b98();
    if (lVar24 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_059ef7b8;
      FUN_05a32240();
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar7 = FUN_05a46ee8(0);
      bVar6 = *(uint *)(unaff_x26 + 0x18) <= uVar27;
      if (iVar7 == 0) {
        if (bVar6) goto LAB_059ef7b8;
        uVar11 = 0x25a1;
      }
      else {
        if (bVar6) goto LAB_059ef7b8;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_05a46ee8(0);
      }
      *puVar34 = uVar11;
      uVar33 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(*(long *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar24 = FUN_05a0ed94(uVar11,uVar33,1,0,400,(long)&stack0x00000148 + 4,0);
      if (lVar24 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar24 = FUN_05a47460(0);
        if (lVar24 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar24 = FUN_05a47460(0);
          if (lVar24 == 0) goto LAB_059ef7b4;
          if (0 < *(int *)(lVar24 + 0x18)) {
            uVar33 = *(undefined8 *)(unaff_x19 + 0x100);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar17 = FUN_05a47460(0);
            if (*(int *)(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)
                                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                                );
            }
            lVar24 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_hoverExited
                               (uVar11,uVar33,uVar17,1,0,400,(long)&stack0x00000148 + 4,0);
            if (lVar24 != 0) goto LAB_059edf14;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar33 = FUN_05a4705c(0);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
        }
        uVar15 = FUN_05c8c45c(uVar33,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar33 = FUN_05a4705c(0);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                              );
          }
          lVar24 = FUN_05a0ed94(uVar11,uVar33,1,0,400,(long)&stack0x00000148 + 4,0);
          if (lVar24 != 0) goto LAB_059edf14;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_059ef7b8;
        *puVar34 = 0x20;
        uVar33 = *(undefined8 *)(unaff_x19 + 0x100);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = 0x20;
        lVar24 = FUN_05a0ed94(0x20,uVar33,1,0,400,(long)&stack0x00000148 + 4,0);
        if (lVar24 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_059ef7b8;
          *puVar34 = 3;
          uVar33 = *(undefined8 *)(unaff_x19 + 0x100);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar11 = 3;
          lVar24 = FUN_05a0ed94(3,uVar33,1,0,400,(long)&stack0x00000148 + 4,0);
        }
      }
LAB_059edf14:
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a47000(0);
      if ((uVar15 & 1) == 0) {
        plVar29 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        if (uVar10 >> 0x10 == 0) {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uVar10);
          lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x00000060);
          if (plVar29 == (long *)0x0) goto LAB_059ef7b4;
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if ((int)plVar29[3] == 0) goto LAB_059ef7b8;
          plVar29[4] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 4,lVar16);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_059ef7b4;
          lVar16 = thunk_FUN_05c92238(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffe) == 0) goto LAB_059ef7b8;
          plVar29[5] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 5,lVar16);
          if (lVar24 == 0) goto LAB_059ef7b4;
          uStack00000000000000f0 =
               CONCAT44(uStack00000000000000f0._4_4_,*(undefined4 *)(lVar24 + 0x14));
          lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x000000f0);
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if (*(uint *)(plVar29 + 3) < 3) goto LAB_059ef7b8;
          plVar29[6] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 6,lVar16);
          lVar16 = thunk_FUN_05c92238();
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffc) == 0) goto LAB_059ef7b8;
          plVar29[7] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 7,lVar16);
          puVar20 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_set_Item__
          ;
        }
        else {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uVar10);
          lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x00000060);
          if (plVar29 == (long *)0x0) goto LAB_059ef7b4;
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if ((int)plVar29[3] == 0) goto LAB_059ef7b8;
          plVar29[4] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 4,lVar16);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_059ef7b4;
          lVar16 = thunk_FUN_05c92238(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffe) == 0) goto LAB_059ef7b8;
          plVar29[5] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 5,lVar16);
          if (lVar24 == 0) goto LAB_059ef7b4;
          uStack00000000000000f0 =
               CONCAT44(uStack00000000000000f0._4_4_,*(undefined4 *)(lVar24 + 0x14));
          lVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x000000f0);
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if (*(uint *)(plVar29 + 3) < 3) goto LAB_059ef7b8;
          plVar29[6] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 6,lVar16);
          lVar16 = thunk_FUN_05c92238();
          if ((lVar16 != 0) &&
             (lVar22 = thunk_FUN_02b79548(lVar16,*(undefined8 *)(*plVar29 + 0x40)), lVar22 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar29 + 3) & 0xfffffffc) == 0) goto LAB_059ef7b8;
          plVar29[7] = lVar16;
          thunk_FUN_02bb0e9c(plVar29 + 7,lVar16);
          puVar20 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_RemoveAt__
          ;
        }
        uVar33 = FUN_04c0afb0(*puVar20,plVar29,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar33);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_05a51854(uVar10,0);
    if (((uVar15 & 1) == 0) || (uVar28 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a517d4(uVar10,0);
      if (((uVar15 & 1) == 0) || (uVar28 != 0xfe0f)) goto LAB_059ede00;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar24 = FUN_05a47870(0);
    if (lVar24 == 0) goto LAB_059ede00;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar24 = FUN_05a47870(0);
    if (lVar24 == 0) goto LAB_059ef7b4;
    if (*(int *)(lVar24 + 0x18) < 1) goto LAB_059ede00;
    uVar33 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar17 = FUN_05a47870(0);
    uVar13 = *(undefined4 *)(unaff_x19 + 0x280);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        );
    }
    lVar24 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters
                       (uVar10,uVar33,uVar17,1,uVar13,uVar2,(long)&stack0x00000148 + 4,0);
    unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
    if (lVar24 == 0) goto LAB_059ede00;
  }
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  puVar20 = (undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  *puVar20 = 0;
  thunk_FUN_02bb0e9c(puVar20,0);
  if (lVar24 == 0) goto LAB_059ef7b4;
  if (*(char *)(lVar24 + 0x10) == '\x01') {
    if (*(long *)(lVar24 + 0x18) == 0) goto LAB_059ef7b4;
    iVar7 = FUN_059fa888(*(long *)(lVar24 + 0x18),0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
    iVar8 = FUN_059fa888(*(long *)(unaff_x19 + 0x100),0);
    bVar6 = iVar7 != iVar8;
    if (bVar6) {
      plVar29 = *(long **)(lVar24 + 0x18);
      if (plVar29 == (long *)0x0) {
        plVar29 = (long *)0x0;
        *(undefined8 *)(unaff_x19 + 0x100) = 0;
      }
      else {
        lVar16 = *(long *)
                  Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
        ;
        bVar3 = *(byte *)(lVar16 + 0x130);
        if (*(byte *)(*plVar29 + 0x130) < bVar3) {
          plVar31 = (long *)0x0;
        }
        else {
          plVar31 = plVar29;
          if (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
            plVar31 = (long *)0x0;
          }
        }
        *(long **)(unaff_x19 + 0x100) = plVar31;
        if (*(byte *)(*plVar29 + 0x130) < bVar3) {
          plVar29 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
          plVar29 = (long *)0x0;
        }
      }
      thunk_FUN_02bb0e9c(unaff_x19 + 0x100,plVar29);
    }
    if ((uVar28 >> 4 == 0xfe0) || (uVar28 - 0xe0100 < 0xf0)) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
      iVar7 = FUN_05a08158(*(long *)(unaff_x19 + 0x100),uVar11,uVar28,0);
      if (iVar7 != 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar15 = FUN_05a0a5b8(*(long *)(unaff_x19 + 0x100),iVar7,&stack0x00000138,0);
        if ((uVar15 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_059ef7b4;
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
          *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_00000138;
          thunk_FUN_02bb0e9c();
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar23) goto LAB_059ef7b8;
      *(undefined4 *)(lVar14 + (long)(int)uVar23 * 0x10 + 4) = 0x1a;
      uVar27 = uVar23;
    }
    if ((uVar9 & 1) == 0) goto FUN_059ee838;
    if (((*(long *)(unaff_x19 + 0x100) == 0) ||
        (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar16 == 0)) ||
       (lVar16 = *(long *)(lVar16 + 0x38), lVar16 == 0)) goto LAB_059ef7b4;
    uVar15 = FUN_045e2b94(lVar16,*(undefined4 *)(lVar24 + 0x28),&stack0x00000140,
                          *(undefined8 *)
                           Method_System_Text_RegularExpressions_CaptureCollection_GetCapture__);
    if ((uVar15 & 1) != 0) {
      if (in_stack_00000140 == 0) goto LAB_059eef38;
      iVar7 = 0;
      while (unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo,
            iVar7 < *(int *)(in_stack_00000140 + 0x18)) {
        auVar35 = FUN_0376cfc0(in_stack_00000140,iVar7,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_RemoveAt__
                              );
        lVar16 = auVar35._0_8_;
        if (lVar16 == 0) goto LAB_059ef7b4;
        uVar15 = *(ulong *)(lVar16 + 0x18);
        iVar8 = (int)uVar15;
        if (1 < iVar8) {
          lVar22 = 0;
          do {
            uVar10 = uVar27 + 1 + (int)lVar22;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_059ef7b8;
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
            iVar12 = FUN_05a0807c(*(long *)(unaff_x19 + 0x100),
                                  *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x10 + 4),0);
            if (*(uint *)(lVar16 + 0x18) <= (int)lVar22 + 1U) goto LAB_059ef7b8;
            if (iVar12 != *(int *)(lVar16 + 0x24 + lVar22 * 4)) goto LAB_059ee750;
            lVar22 = lVar22 + 1;
          } while (iVar8 + -1 != (int)lVar22);
        }
        if (auVar35._8_4_ != 0) {
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
          uVar18 = FUN_05a0a5b8(*(long *)(unaff_x19 + 0x100),auVar35._8_8_ & 0xffffffff,
                                &stack0x00000130,0);
          unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
          if ((uVar18 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
            goto LAB_059ef7b4;
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
            *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_00000130;
            thunk_FUN_02bb0e9c();
            if (iVar8 < 1) goto LAB_059ee82c;
            uVar18 = 0;
            goto LAB_059ee7e8;
          }
        }
LAB_059ee750:
        iVar7 = iVar7 + 1;
        if (in_stack_00000140 == 0) goto LAB_059ef7b4;
      }
    }
  }
  else {
    bVar6 = false;
  }
  goto FUN_059ee838;
LAB_059ee7e8:
  do {
    if (uVar18 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_059ef7b8;
      *(int *)(lVar14 + (long)(int)uVar27 * 0x10 + 0xc) = iVar8;
    }
    else {
      uVar10 = uVar27 + (int)uVar18;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_059ef7b8;
      *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x10 + 4) = 0x1a;
    }
    uVar18 = uVar18 + 1;
  } while ((uVar15 & 0xffffffff) != uVar18);
LAB_059ee82c:
  uVar27 = (uVar27 + iVar8) - 1;
FUN_059ee838:
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar29 = (long *)(lVar16 + 0x30);
  *plVar29 = lVar24;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  thunk_FUN_02bb0e9c(plVar29,lVar24);
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_059ef7b4;
  uVar10 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_059ef7b8;
  lVar22 = lVar16 + 0x20 + (long)(int)uVar10 * 0x178;
  *(undefined1 *)(lVar22 + 0x34) = uStack000000000000014c;
  *(short *)(lVar22 + 4) = (short)uVar11;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar27) goto LAB_059ef7b8;
  lVar16 = lVar16 + 0x20 + (long)(int)uVar10 * 0x178;
  uVar33 = *(undefined8 *)(lVar14 + (long)(int)uVar27 * 0x10 + 8);
  *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  *(undefined8 *)(lVar16 + 8) = uVar33;
  thunk_FUN_02bb0e9c();
  if (*(char *)(lVar24 + 0x10) == '\x02') {
    plVar29 = *(long **)(lVar24 + 0x18);
    if (plVar29 == (long *)0x0) goto LAB_059ef7b4;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     + 0x130);
    if ((*(byte *)(*plVar29 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
       )) goto LAB_059ef7b4;
    lVar24 = *unaff_x25;
    lVar16 = plVar29[0x11];
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar24 = *unaff_x25;
    }
    uVar10 = FUN_059e8b50(lVar16,plVar29,*(long *)(lVar24 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
    lVar24 = *unaff_x25;
    *(uint *)(unaff_x19 + 0x120) = uVar10;
    lVar24 = **(long **)(lVar24 + 0xb8);
    if (lVar24 == 0) goto LAB_059ef7b4;
    if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_059ef7b8;
    lVar24 = lVar24 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0)) goto LAB_059ef7b4;
    uVar10 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_059ef7b8;
    lVar24 = lVar24 + (long)(int)uVar10 * 0x178;
    *(undefined4 *)(lVar24 + 0x20) = 1;
    *(undefined4 *)(lVar24 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar32;
LAB_059ee9c0:
    iStack000000000000003c = iStack000000000000003c + 1;
    goto LAB_059eef18;
  }
  if (bVar6) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
    iVar7 = FUN_059fa888(*(long *)(unaff_x19 + 0x100),0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_059ef7b4;
    iVar8 = FUN_059fa888(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar7 != iVar8) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a47520(0);
      if ((uVar15 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar33 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar33 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar33 = FUN_05a424e4(uVar33,uVar17,0);
      }
      *(undefined8 *)(unaff_x19 + 0x118) = uVar33;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x118);
      lVar16 = *unaff_x25;
      uVar33 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar16 = *unaff_x25;
      }
      uVar13 = FUN_059e8914(uVar33,uVar17,*(long *)(lVar16 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar13;
    }
  }
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  if ((lVar16 == 0) && (lVar16 = *(long *)(lVar24 + 0x20), lVar16 == 0)) goto LAB_059ef7b4;
  iVar7 = FUN_05d3dde8(lVar16,0);
  if (0 < iVar7) {
    uVar33 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar33 = FUN_05a41f60(uVar33,uVar17,iVar7,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar33;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar33);
    lVar24 = *unaff_x25;
    uVar33 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar24 = *unaff_x25;
    }
    uVar13 = FUN_059e8914(uVar33,uVar17,*(long *)(lVar24 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
    *(undefined4 *)(unaff_x19 + 0x120) = uVar13;
    bVar6 = true;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar15 = FUN_04cf7fe0(uVar11,0);
  if (((uVar15 & 1) == 0) && (uVar11 != 0x200b)) {
    lVar24 = *unaff_x25;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar24 = *unaff_x25;
    }
    lVar16 = **(long **)(lVar24 + 0xb8);
    if (lVar16 == 0) goto LAB_059ef7b4;
    uVar10 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_059ef7b8;
    if (*(int *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar29 = *(long **)(*unaff_x25 + 0xb8);
        goto LAB_059eeddc;
      }
LAB_059eede4:
      uVar10 = *(uint *)(unaff_x19 + 0x120);
      uVar23 = *(uint *)(lVar16 + 0x18);
    }
    else {
      if (bVar6) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_059ef7b4;
        uVar15 = FUN_04450324(*(long *)(unaff_x19 + 0x780),(long)(int)uVar10,
                              (long)&stack0x00000128 + 4,
                              *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
        puVar5 = System_Collections_Generic_List<int>___TypeInfo;
        if ((uVar15 & 1) == 0) {
LAB_059eec88:
          uVar17 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar33 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
          FUN_05c59798(uVar33,uVar17,0);
          puVar5 = System_Collections_Generic_List<int>___TypeInfo;
          uVar17 = *(undefined8 *)(unaff_x19 + 0x100);
          lVar24 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar24 = *(long *)puVar5;
          }
          uVar10 = FUN_059e8914(uVar33,uVar17,*(long *)(lVar24 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_059ef7b4;
          FUN_0444e9a4(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar10,
                       *(undefined8 *)PTR_DAT_0631fcc8);
          lVar24 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        else {
          lVar24 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar24 = *(long *)puVar5;
          }
          lVar16 = **(long **)(lVar24 + 0xb8);
          if (lVar16 == 0) goto LAB_059ef7b4;
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000128._4_4_) goto LAB_059ef7b8;
          uVar10 = in_stack_00000128._4_4_;
          if (0x3ffe < *(int *)(lVar16 + (long)(int)in_stack_00000128._4_4_ * 0x38 + 0x54))
          goto LAB_059eec88;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar10;
        if (*(int *)(lVar24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar24 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        plVar29 = *(long **)(lVar24 + 0xb8);
        unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
LAB_059eeddc:
        lVar16 = *plVar29;
        if (lVar16 == 0) goto LAB_059ef7b4;
        goto LAB_059eede4;
      }
      uVar17 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar33 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
      FUN_05c59798(uVar33,uVar17,0);
      lVar24 = *unaff_x25;
      uVar17 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar24 = *unaff_x25;
      }
      uVar10 = FUN_059e8914(uVar33,uVar17,*(long *)(lVar24 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
      lVar24 = *unaff_x25;
      *(uint *)(unaff_x19 + 0x120) = uVar10;
      lVar16 = **(long **)(lVar24 + 0xb8);
      if (lVar16 == 0) goto LAB_059ef7b4;
      uVar23 = *(uint *)(lVar16 + 0x18);
    }
    if (uVar23 <= uVar10) goto LAB_059ef7b8;
    lVar16 = lVar16 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
  }
  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *(undefined8 *)(unaff_x19 + 0x118);
  thunk_FUN_02bb0e9c();
  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  *(undefined4 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) =
       *(undefined4 *)(unaff_x19 + 0x120);
  lVar24 = *unaff_x25;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar24 = *unaff_x25;
  }
  lVar16 = **(long **)(lVar24 + 0xb8);
  if (lVar16 == 0) goto LAB_059ef7b4;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_059ef7b8;
  *(bool *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x41) = bVar6;
  if (bVar6) {
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar16 = **(long **)(*unaff_x25 + 0xb8);
      if (lVar16 == 0) goto LAB_059ef7b4;
    }
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_059ef7b8;
    puVar20 = (undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x48);
    *puVar20 = uVar21;
    thunk_FUN_02bb0e9c(puVar20,uVar21);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar30;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x100);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar21;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar21);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar32;
  }
  uVar10 = *(uint *)(unaff_x19 + 0x4a0);
LAB_059eef18:
  *(uint *)(unaff_x19 + 0x4a0) = uVar10 + 1;
LAB_059eef20:
  uVar10 = *(uint *)(unaff_x26 + 0x18);
  uVar27 = uVar27 + 1;
  if ((int)uVar10 <= (int)uVar27) goto LAB_059eef38;
  goto LAB_059ed938;
}


