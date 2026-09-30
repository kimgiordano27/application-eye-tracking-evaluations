/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider$$remove_afterStepLocomotion
ENTRY_POINT: 059ed388
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 169
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_21
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Locomotion_LocomotionProvider__remove_afterStepLocomotion(void)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  long unaff_x19;
  uint uVar28;
  long unaff_x20;
  uint uVar29;
  long *plVar30;
  undefined8 uVar31;
  long *plVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  long *plVar35;
  long unaff_x26;
  uint *puVar36;
  undefined1 auVar37 [16];
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
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  uint uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  uint in_stack_00000148;
  undefined1 uStack000000000000014c;
  
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Clear__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Remove__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_RemoveAt__
              );
  FUN_02b3c81c(PTR_DAT_06313778);
  FUN_02b3c81c(PTR_DAT_06313048);
  FUN_02b3c81c(PTR_DAT_06312520);
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
              );
  FUN_02b3c81c(
              Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
              );
  FUN_02b3c81c(Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__);
  FUN_02b3c81c(Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__)
  ;
  FUN_02b3c81c(
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Insert__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Remove__
              );
  FUN_02b3c81c(Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
              );
  FUN_02b3c81c(
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
              );
  FUN_02b3c81c(
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
              );
  FUN_02b3c81c(
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__
              );
  FUN_02b3c81c(System_Collections_Generic_List<int>___TypeInfo);
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_RemoveAt__
              );
  FUN_02b3c81c(
              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_set_Item__
              );
  FUN_02b3c81c(Method_VRBeats_Carousel_<Focus>b__16_0__);
  FUN_02b3c81c(Method_VRBeats_Carousel_<MoveLeft>b__14_0__);
  *(undefined1 *)(unaff_x20 + 0xbee) = 1;
  puVar6 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__;
  uStack000000000000014c = 0;
  in_stack_00000148 = 0;
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  in_stack_00000130 = 0;
  uStack000000000000012c = 0;
  *(undefined4 *)(unaff_x19 + 0x4a0) = 0;
  *(undefined1 *)(unaff_x19 + 0x292) = 0;
  plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
  *(undefined2 *)(unaff_x19 + 0x468) = 0;
  *(undefined4 *)(unaff_x19 + 0x284) = *(undefined4 *)(unaff_x19 + 0x280);
  FUN_05a51ee4(unaff_x19 + 0x288,0);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__;
  if ((*(byte *)(unaff_x19 + 0x284) & 1) == 0) {
    uVar33 = *(undefined4 *)(unaff_x19 + 0x238);
  }
  else {
    uVar33 = 700;
  }
  uVar22 = *(undefined8 *)puVar6;
  *(undefined4 *)(unaff_x19 + 0x23c) = uVar33;
  FUN_03f1b080(unaff_x19 + 0x240,uVar33,uVar22);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0xf8);
  thunk_FUN_02bb0e9c(unaff_x19 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x110);
  thunk_FUN_02bb0e9c(unaff_x19 + 0x118);
  lVar15 = *plVar35;
  *(undefined4 *)(unaff_x19 + 0x120) = 0;
  uVar33 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar15,0);
    uVar33 = *(undefined4 *)(unaff_x19 + 0x120);
  }
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  FUN_059e8750(*(undefined4 *)(unaff_x19 + 0x630),&stack0x000000f0,uVar33,
               *(undefined8 *)(unaff_x19 + 0x100),0,*(undefined8 *)(unaff_x19 + 0x118));
  in_stack_00000068 = in_stack_000000f8;
  in_stack_00000060 = in_stack_000000f0;
  in_stack_00000078 = in_stack_00000108;
  in_stack_00000070 = in_stack_00000100;
  in_stack_00000088 = in_stack_00000118;
  in_stack_00000080 = in_stack_00000110;
  in_stack_00000090 = in_stack_00000120;
  FUN_03f1b6b0(*(long *)(*plVar35 + 0xb8) + 0x10,&stack0x00000060,*(undefined8 *)puVar5);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  lVar15 = *(long *)(*(long *)(*plVar35 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_059ef7b4;
  FUN_0444eb38(lVar15,*(undefined8 *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_059e8914(*(undefined8 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x100),
               *(long *)(*plVar35 + 0xb8),*(undefined8 *)(*(long *)(*plVar35 + 0xb8) + 8));
  plVar1 = (long *)(unaff_x19 + 0x3a0);
  if (*(long *)(unaff_x19 + 0x3a0) == 0) {
    uVar33 = *(undefined4 *)(unaff_x19 + 0x490);
    uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05a504e0(uVar22,uVar33,0);
    *(undefined8 *)(unaff_x19 + 0x3a0) = uVar22;
    thunk_FUN_02bb0e9c(plVar1,uVar22);
  }
  else {
    plVar30 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_059ef7b4;
    iVar8 = *(int *)(unaff_x19 + 0x490);
    if (*(int *)(lVar15 + 0x18) < iVar8) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_033359b0(plVar30,iVar8,0,
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
      uVar16 = FUN_05a47000(0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar22 = thunk_FUN_05c92238(*(long *)(unaff_x19 + 0x100),0);
        uVar22 = FUN_04c0a5c4(*(undefined8 *)Method_VRBeats_Carousel_<Focus>b__16_0__,uVar22,
                              *(undefined8 *)Method_VRBeats_Carousel_<MoveLeft>b__14_0__,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c453b4(uVar22);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_059ef7b4;
      iVar8 = FUN_05c91f88(*(long *)(unaff_x19 + 0x670),0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
      iVar9 = FUN_05c91f88(*(long *)(unaff_x19 + 0x100),0);
      if (iVar8 != iVar9) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05a47520(0);
        if ((uVar16 & 1) == 0) {
LAB_059ed730:
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_059ef7b4;
          uVar22 = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
          *(undefined8 *)(unaff_x19 + 0x678) = uVar22;
        }
        else {
          if (*(long *)(unaff_x19 + 0x118) == 0) goto LAB_059ef7b4;
          iVar8 = FUN_05c91f88(*(long *)(unaff_x19 + 0x118),0);
          if ((*(long *)(unaff_x19 + 0x670) == 0) ||
             (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x670) + 0x88), lVar15 == 0))
          goto LAB_059ef7b4;
          iVar9 = FUN_05c91f88(lVar15,0);
          if (iVar8 == iVar9) goto LAB_059ed730;
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_059ef7b4;
          uVar22 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar31 = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar22 = FUN_05a424e4(uVar22,uVar31,0);
          *(undefined8 *)(unaff_x19 + 0x678) = uVar22;
        }
        thunk_FUN_02bb0e9c(unaff_x19 + 0x678,uVar22);
        lVar15 = *plVar35;
        uVar22 = *(undefined8 *)(unaff_x19 + 0x678);
        uVar31 = *(undefined8 *)(unaff_x19 + 0x670);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar15 = *plVar35;
        }
        uVar10 = FUN_059e8914(uVar22,uVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        lVar15 = *plVar35;
        *(uint *)(unaff_x19 + 0x680) = uVar10;
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_059ef7b4;
        if (*(uint *)(lVar15 + 0x18) <= uVar10) {
LAB_059ef7b8:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x330) == 0) {
LAB_059ef7b4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar10 = FUN_0385c3a4(*(long *)(unaff_x19 + 0x330),0x6c696761,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<CustomStyleResolvedEvent>__
                       );
  if (*(int *)(unaff_x19 + 0x310) == 6) {
    uVar22 = *(undefined8 *)(unaff_x19 + 0x318);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05c8c45c(uVar22,0,0);
    if (((uVar16 & 1) != 0) && (*(char *)(unaff_x19 + 0x42d) == '\0')) {
      plVar30 = *(long **)(unaff_x19 + 0x318);
      if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
      (**(code **)(*plVar30 + 0x558))
                (plVar30,**(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar30 + 0x560));
    }
  }
  if (unaff_x26 == 0) goto LAB_059ef7b4;
  uVar11 = *(uint *)(unaff_x26 + 0x18);
  if ((int)uVar11 < 1) {
    iStack000000000000003c = 0;
LAB_059eef38:
    if (*(char *)(unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
LAB_059eef44:
      return *(undefined4 *)(unaff_x19 + 0x4a0);
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      lVar25 = *plVar35;
      *(int *)(lVar15 + 0x1c) = iStack000000000000003c;
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
      ;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar25 = *plVar35;
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0xb8) + 8);
      if (lVar25 != 0) {
        uVar10 = FUN_0444e654(lVar25,*(undefined8 *)
                                      Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__
                             );
        *(uint *)(lVar15 + 0x34) = uVar10;
        if (*plVar1 != 0) {
          plVar30 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar30;
          if (lVar15 != 0) {
            if (*(int *)(lVar15 + 0x18) < (int)uVar10) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_03335a5c(plVar30,(ulong)uVar10,0,
                           *(undefined8 *)
                            Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Insert__
                          );
            }
            if (*(long *)(unaff_x19 + 0x720) != 0) {
              plVar30 = (long *)(unaff_x19 + 0x720);
              if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar10) {
                uVar11 = uVar10 | (int)uVar10 >> 0x10;
                uVar11 = uVar11 | (int)uVar11 >> 8;
                uVar11 = uVar11 | (int)uVar11 >> 4;
                uVar11 = uVar11 | (int)uVar11 >> 2;
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_03335780(plVar30,(uVar11 | (int)uVar11 >> 1) + 1,
                             *(undefined8 *)
                              Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Remove__
                            );
              }
              if (*(char *)(unaff_x19 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_059ef7b4;
                plVar32 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar32;
                if (lVar15 == 0) goto LAB_059ef7b4;
                iVar8 = *(int *)(unaff_x19 + 0x4a0);
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  FUN_033359b0(plVar32,iVar9,1,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                              );
                  plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                }
              }
              if (0 < (int)uVar10) {
                lVar15 = 0;
                uVar16 = 0;
                lVar25 = 0x54;
                lVar17 = 0x20;
                do {
                  if (uVar16 != 0) {
                    lVar23 = *plVar30;
                    if (lVar23 == 0) goto LAB_059ef7b4;
                    if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                    uVar22 = *(undefined8 *)(lVar23 + uVar16 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar19 = FUN_05c8e378(uVar22,0,0);
                    if ((uVar19 & 1) != 0) {
                      lVar23 = *plVar35;
                      plVar32 = (long *)*plVar30;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar23 = *plVar35;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = lVar23 + lVar25;
                      in_stack_000000e0 = *(undefined8 *)(lVar23 + -4);
                      in_stack_000000d8 = *(undefined8 *)(lVar23 + -0xc);
                      in_stack_000000d0 = *(undefined8 *)(lVar23 + -0x14);
                      in_stack_000000b8 = *(undefined8 *)(lVar23 + -0x2c);
                      in_stack_000000b0 = *(undefined8 *)(lVar23 + -0x34);
                      in_stack_000000c8 = *(undefined8 *)(lVar23 + -0x1c);
                      in_stack_000000c0 = *(undefined8 *)(lVar23 + -0x24);
                      lVar23 = FUN_05a4e04c();
                      if (plVar32 == (long *)0x0) goto LAB_059ef7b4;
                      if ((lVar23 != 0) &&
                         (lVar20 = thunk_FUN_02b79548(lVar23,*(undefined8 *)(*plVar32 + 0x40)),
                         lVar20 == 0)) {
LAB_059ef7bc:
                        uVar22 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                        FUN_02b3c988(uVar22,0);
                      }
                      if (*(uint *)(plVar32 + 3) <= uVar16) goto LAB_059ef7b8;
                      plVar32[uVar16 + 4] = lVar23;
                      thunk_FUN_02bb0e9c((long)plVar32 + lVar17,lVar23);
                      plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                      if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                      goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      puVar21 = (undefined8 *)(lVar23 + lVar15 + 0x30);
                      *puVar21 = 0;
                      thunk_FUN_02bb0e9c(puVar21,0);
                    }
                    lVar23 = *plVar30;
                    if (lVar23 == 0) goto LAB_059ef7b4;
                    if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                    lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                    if (lVar23 == 0) goto LAB_059ef7b4;
                    uVar22 = *(undefined8 *)(lVar23 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar19 = FUN_05c8e378(uVar22,0,0);
                    if ((uVar19 & 1) == 0) {
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x38), lVar23 == 0))
                      goto LAB_059ef7b4;
                      iVar8 = FUN_05c91f88(lVar23,0);
                      lVar23 = *plVar35;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44(lVar23);
                        lVar23 = *plVar35;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + lVar25 + -0x1c);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      iVar9 = FUN_05c91f88(lVar23,0);
                      if (iVar8 != iVar9) goto LAB_059ef2d4;
                    }
                    else {
LAB_059ef2d4:
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar20 = *plVar35;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar20 = *plVar35;
                      }
                      lVar20 = **(long **)(lVar20 + 0xb8);
                      if (lVar20 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      thunk_FUN_05a4db7c(lVar23,*(undefined8 *)(lVar20 + lVar25 + -0x1c),0);
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar20 = **(long **)(*plVar35 + 0xb8);
                      if (lVar20 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar20 + lVar25 + -0x2c);
                      thunk_FUN_02bb0e9c();
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar20 = **(long **)(*plVar35 + 0xb8);
                      if (lVar20 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(lVar20 + lVar25 + -0x24);
                      thunk_FUN_02bb0e9c();
                    }
                    lVar23 = *plVar35;
                    if (*(int *)(lVar23 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar23 = *plVar35;
                    }
                    lVar20 = **(long **)(lVar23 + 0xb8);
                    if (lVar20 == 0) goto LAB_059ef7b4;
                    if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                    if (*(char *)(lVar20 + lVar25 + -0x13) != '\0') {
                      lVar26 = *plVar30;
                      if (lVar26 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar26 = *(long *)(lVar26 + uVar16 * 8 + 0x20);
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar20 = **(long **)(*plVar35 + 0xb8);
                        if (lVar20 == 0) goto LAB_059ef7b4;
                      }
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      if (lVar26 == 0) goto LAB_059ef7b4;
                      FUN_05a4dbac(lVar26,*(undefined8 *)(lVar20 + lVar25 + -0x1c),0);
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar20 = **(long **)(*plVar35 + 0xb8);
                      if (lVar20 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      *(undefined8 *)(lVar23 + 0x48) = *(undefined8 *)(lVar20 + lVar25 + -0xc);
                      thunk_FUN_02bb0e9c();
                    }
                  }
                  lVar23 = *plVar35;
                  if (*(int *)(lVar23 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar23 = *plVar35;
                  }
                  plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_059ef7b4;
                  if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                  if ((*plVar1 == 0) || (lVar20 = *(long *)(*plVar1 + 0x60), lVar20 == 0))
                  goto LAB_059ef7b4;
                  if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                  lVar26 = lVar20 + lVar15;
                  uVar11 = *(uint *)(lVar23 + lVar25);
                  if (*(long *)(lVar26 + 0x30) == 0) {
                    if (uVar16 == 0) {
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
                      FUN_05a43018(&stack0x00000060,*(undefined8 *)(unaff_x19 + 0x3d8),uVar11 + 1,0)
                      ;
                      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_059ef7b8;
                    }
                    else {
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      uVar22 = FUN_05a4dee8(lVar23,0);
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
                      FUN_05a43018(&stack0x00000060,uVar22,uVar11 + 1,0);
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar20 = lVar20 + lVar15;
                    }
                    memmove((void *)(lVar20 + 0x20),&stack0x00000060,0x50);
                    thunk_FUN_02bb0e9c(lVar26 + 0x20,0);
                    plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  }
                  else {
                    iVar8 = *(int *)(*(long *)(lVar26 + 0x30) + 0x18);
                    if (iVar8 < (int)(uVar11 * 4)) {
                      if ((int)uVar11 < 0x401) {
                        uVar11 = uVar11 | (int)uVar11 >> 0x10;
                        uVar11 = uVar11 | (int)uVar11 >> 8;
                        uVar11 = uVar11 | (int)uVar11 >> 4;
                        uVar11 = uVar11 | (int)uVar11 >> 2;
                        uVar11 = uVar11 | (int)uVar11 >> 1;
LAB_059ef5f8:
                        iVar8 = uVar11 + 1;
                      }
                      else {
UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer__set_useCharacterControllerIfExists:
                        iVar8 = uVar11 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                                  + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      FUN_05a43df4(lVar26 + 0x20,iVar8,0);
                    }
                    else if ((*(char *)(unaff_x19 + 0x359) != '\0') && (0 < (int)uVar11)) {
                      iVar9 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar9 = iVar8;
                      }
                      if (0x100 < (int)((iVar9 >> 2) - uVar11)) {
                        if (uVar11 < 0x401) {
                          uVar11 = uVar11 >> 4 | uVar11 >> 8 | uVar11;
                          uVar11 = uVar11 | uVar11 >> 2;
                          uVar11 = uVar11 | uVar11 >> 1;
                          goto LAB_059ef5f8;
                        }
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer__set_useCharacterControllerIfExists
                        ;
                      }
                    }
                  }
                  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                  goto LAB_059ef7b4;
                  lVar20 = *plVar35;
                  if (*(int *)(lVar20 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar20 = *plVar35;
                  }
                  lVar20 = **(long **)(lVar20 + 0xb8);
                  if (lVar20 == 0) goto LAB_059ef7b4;
                  if ((*(uint *)(lVar20 + 0x18) <= uVar16) || (*(uint *)(lVar23 + 0x18) <= uVar16))
                  goto LAB_059ef7b8;
                  *(undefined8 *)(lVar23 + lVar15 + 0x68) = *(undefined8 *)(lVar20 + lVar25 + -0x1c)
                  ;
                  thunk_FUN_02bb0e9c();
                  uVar16 = uVar16 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar25 = lVar25 + 0x38;
                  lVar17 = lVar17 + 8;
                } while (uVar10 != uVar16);
              }
              puVar5 = 
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
              lVar15 = *plVar30;
              if (lVar15 != 0) {
                lVar17 = (long)(int)uVar10;
                lVar25 = (long)(int)uVar10 * 0x50 + 0x20;
                do {
                  uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                  if ((int)uVar10 <= lVar17) goto LAB_059eef44;
                  if (uVar10 <= (uint)lVar17) goto LAB_059ef7b8;
                  uVar22 = *(undefined8 *)(lVar15 + lVar17 * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar16 = FUN_05c8c45c(uVar22,0,0);
                  if ((uVar16 & 1) == 0) goto LAB_059eef44;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                  if (lVar17 < (int)uVar10) {
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                    }
                    if (uVar10 <= (uint)lVar17) goto LAB_059ef7b8;
                    FUN_05a44d6c(lVar15 + lVar25,0,1,0);
                  }
                  lVar15 = *plVar30;
                  lVar17 = lVar17 + 1;
                  lVar25 = lVar25 + 0x50;
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_059ef7b4;
  }
  uVar28 = 0;
  lVar15 = unaff_x26 + 0x20;
  iStack000000000000003c = 0;
LAB_059ed938:
  if (uVar11 <= uVar28) goto LAB_059ef7b8;
  puVar36 = (uint *)(lVar15 + (long)(int)uVar28 * 0x10 + 4);
  if (*puVar36 == 0) goto LAB_059eef38;
  if (*plVar1 == 0) goto LAB_059ef7b4;
  plVar30 = (long *)(*plVar1 + 0x38);
  lVar25 = *plVar30;
  iVar8 = *(int *)(unaff_x19 + 0x4a0);
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0x18) <= iVar8)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_033359b0(plVar30,iVar8 + 1,1,
                 *(undefined8 *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                );
    uVar11 = *(uint *)(unaff_x26 + 0x18);
  }
  if (uVar11 <= uVar28) goto LAB_059ef7b8;
  uVar11 = *puVar36;
  uVar33 = *(undefined4 *)(unaff_x19 + 0x120);
  if ((*(char *)(unaff_x19 + 0x33a) != '\0') && (uVar11 == 0x3c)) {
    uVar16 = FUN_05a26cd4();
    uVar24 = in_stack_00000148;
    if ((uVar16 & 1) == 0) {
      uVar33 = *(undefined4 *)(unaff_x19 + 0x120);
      goto LAB_059edbb0;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar28) goto LAB_059ef7b8;
    iVar8 = *(int *)(lVar15 + (long)(int)uVar28 * 0x10 + 8);
    if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x292) = 1;
    }
    uVar28 = in_stack_00000148;
    if (*(int *)(unaff_x19 + 0x65c) != 1) goto LAB_059eef20;
    lVar25 = *plVar35;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar25 = *plVar35;
    }
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 != 0) {
      if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar25 + 0x18)) {
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 != 0)) {
          if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
            sVar4 = *(short *)(unaff_x19 + 0x6bc);
            *(undefined8 *)(lVar25 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
            *(short *)(lVar25 + 0x24) = sVar4 + -0x2000;
            thunk_FUN_02bb0e9c();
            if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
               (lVar25 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar25 != 0)) {
              uVar11 = *(uint *)(unaff_x19 + 0x4a0);
              if (uVar11 < *(uint *)(lVar25 + 0x18)) {
                *(undefined4 *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178 + 0x30) =
                     *(undefined4 *)(unaff_x19 + 0x120);
                if ((*(long *)(unaff_x19 + 0x6b0) != 0) &&
                   (lVar17 = FUN_05a4afd0(*(long *)(unaff_x19 + 0x6b0),0), lVar17 != 0)) {
                  uVar22 = FUN_037a6268(lVar17,*(undefined4 *)(unaff_x19 + 0x6bc),
                                        *(undefined8 *)
                                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                                       );
                  if (uVar11 < *(uint *)(lVar25 + 0x18)) {
                    *(undefined8 *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178 + 0x10) = uVar22;
                    thunk_FUN_02bb0e9c();
                    if ((*plVar1 != 0) && (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 != 0)) {
                      uVar11 = *(uint *)(unaff_x19 + 0x4a0);
                      if (uVar11 < *(uint *)(lVar25 + 0x18)) {
                        puVar27 = (undefined4 *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178);
                        *puVar27 = *(undefined4 *)(unaff_x19 + 0x65c);
                        puVar27[2] = iVar8;
                        if (uVar24 < *(uint *)(unaff_x26 + 0x18)) {
                          *(int *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178 + 0xc) =
                               (*(int *)(lVar15 + (long)(int)uVar24 * 0x10 + 8) - iVar8) + 1;
                          *(undefined4 *)(unaff_x19 + 0x65c) = 0;
                          *(undefined4 *)(unaff_x19 + 0x120) = uVar33;
                          uVar28 = uVar24;
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
  uVar31 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x118);
  uStack000000000000014c = 0;
  if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_059edc78;
  uVar24 = *(uint *)(unaff_x19 + 0x284);
  if ((uVar24 >> 4 & 1) == 0) {
    if ((uVar24 >> 3 & 1) == 0) {
      if ((uVar24 >> 5 & 1) != 0) goto LAB_059edbd8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_04cfa518(uVar11,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_04cfa9b8(uVar11,0);
        goto LAB_059edc74;
      }
    }
  }
  else {
LAB_059edbd8:
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_04cfa5b8(uVar11,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_04cfa840(uVar11,0);
LAB_059edc74:
      uVar11 = uVar11 & 0xffff;
    }
  }
LAB_059edc78:
  uVar24 = uVar28 + 1;
  if ((int)uVar24 < (int)*(uint *)(unaff_x26 + 0x18)) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar24) goto LAB_059ef7b8;
    uVar29 = *(uint *)(lVar15 + (long)(int)uVar24 * 0x10 + 4);
  }
  else {
    uVar29 = 0;
  }
  uVar12 = uVar11;
  if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_059ede00:
    lVar25 = FUN_05a31b98();
    if (lVar25 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar28) goto LAB_059ef7b8;
      FUN_05a32240();
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar8 = FUN_05a46ee8(0);
      bVar7 = *(uint *)(unaff_x26 + 0x18) <= uVar28;
      if (iVar8 == 0) {
        if (bVar7) goto LAB_059ef7b8;
        uVar12 = 0x25a1;
      }
      else {
        if (bVar7) goto LAB_059ef7b8;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_05a46ee8(0);
      }
      *puVar36 = uVar12;
      uVar34 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(*(long *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar25 = FUN_05a0ed94(uVar12,uVar34,1,0,400,&stack0x0000014c,0);
      if (lVar25 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar25 = FUN_05a47460(0);
        if (lVar25 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar25 = FUN_05a47460(0);
          if (lVar25 == 0) goto LAB_059ef7b4;
          if (0 < *(int *)(lVar25 + 0x18)) {
            uVar34 = *(undefined8 *)(unaff_x19 + 0x100);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar18 = FUN_05a47460(0);
            if (*(int *)(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)
                                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                                );
            }
            lVar25 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_hoverExited
                               (uVar12,uVar34,uVar18,1,0,400,&stack0x0000014c,0);
            if (lVar25 != 0) goto LAB_059edf14;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar34 = FUN_05a4705c(0);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
        }
        uVar16 = FUN_05c8c45c(uVar34,0,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar34 = FUN_05a4705c(0);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                              );
          }
          lVar25 = FUN_05a0ed94(uVar12,uVar34,1,0,400,&stack0x0000014c,0);
          if (lVar25 != 0) goto LAB_059edf14;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar28) goto LAB_059ef7b8;
        *puVar36 = 0x20;
        uVar34 = *(undefined8 *)(unaff_x19 + 0x100);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = 0x20;
        lVar25 = FUN_05a0ed94(0x20,uVar34,1,0,400,&stack0x0000014c,0);
        if (lVar25 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar28) goto LAB_059ef7b8;
          *puVar36 = 3;
          uVar34 = *(undefined8 *)(unaff_x19 + 0x100);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = 3;
          lVar25 = FUN_05a0ed94(3,uVar34,1,0,400,&stack0x0000014c,0);
        }
      }
LAB_059edf14:
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47000(0);
      if ((uVar16 & 1) == 0) {
        plVar30 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        if (uVar11 >> 0x10 == 0) {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uVar11);
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x00000060);
          if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((int)plVar30[3] == 0) goto LAB_059ef7b8;
          plVar30[4] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 4,lVar17);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_059ef7b4;
          lVar17 = thunk_FUN_05c92238(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar30 + 3) & 0xfffffffe) == 0) goto LAB_059ef7b8;
          plVar30[5] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 5,lVar17);
          if (lVar25 == 0) goto LAB_059ef7b4;
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,*(undefined4 *)(lVar25 + 0x14));
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x000000f0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if (*(uint *)(plVar30 + 3) < 3) goto LAB_059ef7b8;
          plVar30[6] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 6,lVar17);
          lVar17 = thunk_FUN_05c92238();
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar30 + 3) & 0xfffffffc) == 0) goto LAB_059ef7b8;
          plVar30[7] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 7,lVar17);
          puVar21 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_set_Item__
          ;
        }
        else {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uVar11);
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x00000060);
          if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((int)plVar30[3] == 0) goto LAB_059ef7b8;
          plVar30[4] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 4,lVar17);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_059ef7b4;
          lVar17 = thunk_FUN_05c92238(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar30 + 3) & 0xfffffffe) == 0) goto LAB_059ef7b8;
          plVar30[5] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 5,lVar17);
          if (lVar25 == 0) goto LAB_059ef7b4;
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,*(undefined4 *)(lVar25 + 0x14));
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x000000f0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if (*(uint *)(plVar30 + 3) < 3) goto LAB_059ef7b8;
          plVar30[6] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 6,lVar17);
          lVar17 = thunk_FUN_05c92238();
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar30 + 3) & 0xfffffffc) == 0) goto LAB_059ef7b8;
          plVar30[7] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 7,lVar17);
          puVar21 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_RemoveAt__
          ;
        }
        uVar34 = FUN_04c0afb0(*puVar21,plVar30,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar34);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05a51854(uVar11,0);
    if (((uVar16 & 1) == 0) || (uVar29 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a517d4(uVar11,0);
      if (((uVar16 & 1) == 0) || (uVar29 != 0xfe0f)) goto LAB_059ede00;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar25 = FUN_05a47870(0);
    if (lVar25 == 0) goto LAB_059ede00;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar25 = FUN_05a47870(0);
    if (lVar25 == 0) goto LAB_059ef7b4;
    if (*(int *)(lVar25 + 0x18) < 1) goto LAB_059ede00;
    uVar34 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar18 = FUN_05a47870(0);
    uVar14 = *(undefined4 *)(unaff_x19 + 0x280);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        );
    }
    lVar25 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters
                       (uVar11,uVar34,uVar18,1,uVar14,uVar2,&stack0x0000014c,0);
    plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
    if (lVar25 == 0) goto LAB_059ede00;
  }
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  puVar21 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  *puVar21 = 0;
  thunk_FUN_02bb0e9c(puVar21,0);
  if (lVar25 == 0) goto LAB_059ef7b4;
  if (*(char *)(lVar25 + 0x10) == '\x01') {
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_059ef7b4;
    iVar8 = FUN_059fa888(*(long *)(lVar25 + 0x18),0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
    iVar9 = FUN_059fa888(*(long *)(unaff_x19 + 0x100),0);
    bVar7 = iVar8 != iVar9;
    if (bVar7) {
      plVar30 = *(long **)(lVar25 + 0x18);
      if (plVar30 == (long *)0x0) {
        plVar30 = (long *)0x0;
        *(undefined8 *)(unaff_x19 + 0x100) = 0;
      }
      else {
        lVar17 = *(long *)
                  Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
        ;
        bVar3 = *(byte *)(lVar17 + 0x130);
        if (*(byte *)(*plVar30 + 0x130) < bVar3) {
          plVar32 = (long *)0x0;
        }
        else {
          plVar32 = plVar30;
          if (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
            plVar32 = (long *)0x0;
          }
        }
        *(long **)(unaff_x19 + 0x100) = plVar32;
        if (*(byte *)(*plVar30 + 0x130) < bVar3) {
          plVar30 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
          plVar30 = (long *)0x0;
        }
      }
      thunk_FUN_02bb0e9c(unaff_x19 + 0x100,plVar30);
    }
    if ((uVar29 >> 4 == 0xfe0) || (uVar29 - 0xe0100 < 0xf0)) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
      iVar8 = FUN_05a08158(*(long *)(unaff_x19 + 0x100),uVar12,uVar29,0);
      if (iVar8 != 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar16 = FUN_05a0a5b8(*(long *)(unaff_x19 + 0x100),iVar8,&stack0x00000138,0);
        if ((uVar16 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0))
          goto LAB_059ef7b4;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
          *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_00000138;
          thunk_FUN_02bb0e9c();
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar24) goto LAB_059ef7b8;
      *(undefined4 *)(lVar15 + (long)(int)uVar24 * 0x10 + 4) = 0x1a;
      uVar28 = uVar24;
    }
    if ((uVar10 & 1) == 0) goto FUN_059ee838;
    if (((*(long *)(unaff_x19 + 0x100) == 0) ||
        (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar17 == 0)) ||
       (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
    uVar16 = FUN_045e2b94(lVar17,*(undefined4 *)(lVar25 + 0x28),&stack0x00000140,
                          *(undefined8 *)
                           Method_System_Text_RegularExpressions_CaptureCollection_GetCapture__);
    if ((uVar16 & 1) != 0) {
      if (in_stack_00000140 == 0) goto LAB_059eef38;
      iVar8 = 0;
      while (plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo,
            iVar8 < *(int *)(in_stack_00000140 + 0x18)) {
        auVar37 = FUN_0376cfc0(in_stack_00000140,iVar8,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_RemoveAt__
                              );
        lVar17 = auVar37._0_8_;
        if (lVar17 == 0) goto LAB_059ef7b4;
        uVar16 = *(ulong *)(lVar17 + 0x18);
        iVar9 = (int)uVar16;
        if (1 < iVar9) {
          lVar23 = 0;
          do {
            uVar11 = uVar28 + 1 + (int)lVar23;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_059ef7b8;
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
            iVar13 = FUN_05a0807c(*(long *)(unaff_x19 + 0x100),
                                  *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4),0);
            if (*(uint *)(lVar17 + 0x18) <= (int)lVar23 + 1U) goto LAB_059ef7b8;
            if (iVar13 != *(int *)(lVar17 + 0x24 + lVar23 * 4)) goto LAB_059ee750;
            lVar23 = lVar23 + 1;
          } while (iVar9 + -1 != (int)lVar23);
        }
        if (auVar37._8_4_ != 0) {
          if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
          uVar19 = FUN_05a0a5b8(*(long *)(unaff_x19 + 0x100),auVar37._8_8_ & 0xffffffff,
                                &stack0x00000130,0);
          plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
          if ((uVar19 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0))
            goto LAB_059ef7b4;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
            *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_00000130;
            thunk_FUN_02bb0e9c();
            if (iVar9 < 1) goto LAB_059ee82c;
            uVar19 = 0;
            goto LAB_059ee7e8;
          }
        }
LAB_059ee750:
        iVar8 = iVar8 + 1;
        if (in_stack_00000140 == 0) goto LAB_059ef7b4;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto FUN_059ee838;
LAB_059ee7e8:
  do {
    if (uVar19 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar28) goto LAB_059ef7b8;
      *(int *)(lVar15 + (long)(int)uVar28 * 0x10 + 0xc) = iVar9;
    }
    else {
      uVar11 = uVar28 + (int)uVar19;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_059ef7b8;
      *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4) = 0x1a;
    }
    uVar19 = uVar19 + 1;
  } while ((uVar16 & 0xffffffff) != uVar19);
LAB_059ee82c:
  uVar28 = (uVar28 + iVar9) - 1;
FUN_059ee838:
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar30 = (long *)(lVar17 + 0x30);
  *plVar30 = lVar25;
  *(undefined4 *)(lVar17 + 0x20) = 0;
  thunk_FUN_02bb0e9c(plVar30,lVar25);
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  uVar11 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_059ef7b8;
  lVar23 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  *(undefined1 *)(lVar23 + 0x34) = uStack000000000000014c;
  *(short *)(lVar23 + 4) = (short)uVar12;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar28) goto LAB_059ef7b8;
  lVar17 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  uVar34 = *(undefined8 *)(lVar15 + (long)(int)uVar28 * 0x10 + 8);
  *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  *(undefined8 *)(lVar17 + 8) = uVar34;
  thunk_FUN_02bb0e9c();
  if (*(char *)(lVar25 + 0x10) == '\x02') {
    plVar30 = *(long **)(lVar25 + 0x18);
    if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     + 0x130);
    if ((*(byte *)(*plVar30 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
       )) goto LAB_059ef7b4;
    lVar25 = *plVar35;
    lVar17 = plVar30[0x11];
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar25 = *plVar35;
    }
    uVar11 = FUN_059e8b50(lVar17,plVar30,*(long *)(lVar25 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
    lVar25 = *plVar35;
    *(uint *)(unaff_x19 + 0x120) = uVar11;
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 == 0) goto LAB_059ef7b4;
    if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_059ef7b8;
    lVar25 = lVar25 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 == 0)) goto LAB_059ef7b4;
    uVar11 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_059ef7b8;
    lVar25 = lVar25 + (long)(int)uVar11 * 0x178;
    *(undefined4 *)(lVar25 + 0x20) = 1;
    *(undefined4 *)(lVar25 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar33;
LAB_059ee9c0:
    iStack000000000000003c = iStack000000000000003c + 1;
    goto LAB_059eef18;
  }
  if (bVar7) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
    iVar8 = FUN_059fa888(*(long *)(unaff_x19 + 0x100),0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_059ef7b4;
    iVar9 = FUN_059fa888(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47520(0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar34 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_059ef7b4;
        uVar34 = *(undefined8 *)(unaff_x19 + 0x118);
        uVar18 = *(undefined8 *)(*(long *)(unaff_x19 + 0x100) + 0x88);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar34 = FUN_05a424e4(uVar34,uVar18,0);
      }
      *(undefined8 *)(unaff_x19 + 0x118) = uVar34;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x118);
      lVar17 = *plVar35;
      uVar34 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar17 = *plVar35;
      }
      uVar14 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar17 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar14;
    }
  }
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  if ((lVar17 == 0) && (lVar17 = *(long *)(lVar25 + 0x20), lVar17 == 0)) goto LAB_059ef7b4;
  iVar8 = FUN_05d3dde8(lVar17,0);
  if (0 < iVar8) {
    uVar34 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar34 = FUN_05a41f60(uVar34,uVar18,iVar8,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar34;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar34);
    lVar25 = *plVar35;
    uVar34 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar25 = *plVar35;
    }
    uVar14 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar25 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
    *(undefined4 *)(unaff_x19 + 0x120) = uVar14;
    bVar7 = true;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar16 = FUN_04cf7fe0(uVar12,0);
  if (((uVar16 & 1) == 0) && (uVar12 != 0x200b)) {
    lVar25 = *plVar35;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar25 = *plVar35;
    }
    lVar17 = **(long **)(lVar25 + 0xb8);
    if (lVar17 == 0) goto LAB_059ef7b4;
    uVar11 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_059ef7b8;
    if (*(int *)(lVar17 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar30 = *(long **)(*plVar35 + 0xb8);
        goto LAB_059eeddc;
      }
LAB_059eede4:
      uVar11 = *(uint *)(unaff_x19 + 0x120);
      uVar24 = *(uint *)(lVar17 + 0x18);
    }
    else {
      if (bVar7) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_059ef7b4;
        uVar16 = FUN_04450324(*(long *)(unaff_x19 + 0x780),(long)(int)uVar11,&stack0x0000012c,
                              *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
        puVar5 = System_Collections_Generic_List<int>___TypeInfo;
        if ((uVar16 & 1) == 0) {
LAB_059eec88:
          uVar18 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar34 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
          FUN_05c59798(uVar34,uVar18,0);
          puVar5 = System_Collections_Generic_List<int>___TypeInfo;
          uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
          lVar25 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar25 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar25 = *(long *)puVar5;
          }
          uVar11 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar25 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_059ef7b4;
          FUN_0444e9a4(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar11,
                       *(undefined8 *)PTR_DAT_0631fcc8);
          lVar25 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        else {
          lVar25 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar25 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar25 = *(long *)puVar5;
          }
          lVar17 = **(long **)(lVar25 + 0xb8);
          if (lVar17 == 0) goto LAB_059ef7b4;
          if (*(uint *)(lVar17 + 0x18) <= uStack000000000000012c) goto LAB_059ef7b8;
          uVar11 = uStack000000000000012c;
          if (0x3ffe < *(int *)(lVar17 + (long)(int)uStack000000000000012c * 0x38 + 0x54))
          goto LAB_059eec88;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar11;
        if (*(int *)(lVar25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar25 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        plVar30 = *(long **)(lVar25 + 0xb8);
        plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
LAB_059eeddc:
        lVar17 = *plVar30;
        if (lVar17 == 0) goto LAB_059ef7b4;
        goto LAB_059eede4;
      }
      uVar18 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar34 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
      FUN_05c59798(uVar34,uVar18,0);
      lVar25 = *plVar35;
      uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar25 = *plVar35;
      }
      uVar11 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar25 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
      lVar25 = *plVar35;
      *(uint *)(unaff_x19 + 0x120) = uVar11;
      lVar17 = **(long **)(lVar25 + 0xb8);
      if (lVar17 == 0) goto LAB_059ef7b4;
      uVar24 = *(uint *)(lVar17 + 0x18);
    }
    if (uVar24 <= uVar11) goto LAB_059ef7b8;
    lVar17 = lVar17 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
  }
  if ((*plVar1 == 0) || (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  *(undefined8 *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *(undefined8 *)(unaff_x19 + 0x118);
  thunk_FUN_02bb0e9c();
  if ((*plVar1 == 0) || (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_059ef7b8;
  *(undefined4 *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) =
       *(undefined4 *)(unaff_x19 + 0x120);
  lVar25 = *plVar35;
  if (*(int *)(lVar25 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar25 = *plVar35;
  }
  lVar17 = **(long **)(lVar25 + 0xb8);
  if (lVar17 == 0) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_059ef7b8;
  *(bool *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x41) = bVar7;
  if (bVar7) {
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar17 = **(long **)(*plVar35 + 0xb8);
      if (lVar17 == 0) goto LAB_059ef7b4;
    }
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_059ef7b8;
    puVar21 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38 + 0x48);
    *puVar21 = uVar22;
    thunk_FUN_02bb0e9c(puVar21,uVar22);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar31;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x100);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar22;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar22);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar33;
  }
  uVar11 = *(uint *)(unaff_x19 + 0x4a0);
LAB_059eef18:
  *(uint *)(unaff_x19 + 0x4a0) = uVar11 + 1;
LAB_059eef20:
  uVar11 = *(uint *)(unaff_x26 + 0x18);
  uVar28 = uVar28 + 1;
  if ((int)uVar11 <= (int)uVar28) goto LAB_059eef38;
  goto LAB_059ed938;
}


