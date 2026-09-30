/*
FUNCTION_NAME: FUN_059ed2f8
ENTRY_POINT: 059ed2f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 235
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_21
*/


undefined4 FUN_059ed2f8(long param_1,long param_2)

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
  uint uVar28;
  uint uVar29;
  long *plVar30;
  undefined8 uVar31;
  long *plVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  long *plVar35;
  uint *puVar36;
  undefined1 auVar37 [16];
  int local_174;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  undefined1 local_64 [4];
  
                    /* try { // try from 059ed318 to 05aed507 has its CatchHandler @ 059ed318
                       catch() { ... } // from try @ 059ed318 with catch @ 059ed318
                       catch() { ... } // from try @ 059ed75c with catch @ 059ed318
                       catch() { ... } // from try @ 059ed798 with catch @ 059ed318
                       catch() { ... } // from try @ 059ed7f8 with catch @ 059ed318 */
  if ((DAT_066d3bee & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_System_Text_RegularExpressions_CaptureCollection_GetCapture__);
    FUN_02b3c81c(UnityEngine_SphereCollider_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__);
    FUN_02b3c81c(PTR_DAT_0631fcc8);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<CustomStyleResolvedEvent>__
                );
    FUN_02b3c81c(
                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Capture>_Add__
                );
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
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                );
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
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
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
    DAT_066d3bee = 1;
  }
  puVar6 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__;
  local_64[0] = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_84 = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined1 *)(param_1 + 0x292) = 0;
  plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
  *(undefined2 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x280);
  FUN_05a51ee4(param_1 + 0x288,0);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__;
  if ((*(byte *)(param_1 + 0x284) & 1) == 0) {
    uVar33 = *(undefined4 *)(param_1 + 0x238);
  }
  else {
    uVar33 = 700;
  }
  uVar22 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x23c) = uVar33;
  FUN_03f1b080(param_1 + 0x240,uVar33,uVar22);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  thunk_FUN_02bb0e9c(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  thunk_FUN_02bb0e9c(param_1 + 0x118);
  lVar15 = *plVar35;
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar33 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar15,0);
    uVar33 = *(undefined4 *)(param_1 + 0x120);
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_059e8750(*(undefined4 *)(param_1 + 0x630),&local_c0,uVar33,*(undefined8 *)(param_1 + 0x100),0,
               *(undefined8 *)(param_1 + 0x118));
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  local_120 = local_90;
  FUN_03f1b6b0(*(long *)(*plVar35 + 0xb8) + 0x10,&local_150,*(undefined8 *)puVar5);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  lVar15 = *(long *)(*(long *)(*plVar35 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_059ef7b4;
  FUN_0444eb38(lVar15,*(undefined8 *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_059e8914(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x100),
               *(long *)(*plVar35 + 0xb8),*(undefined8 *)(*(long *)(*plVar35 + 0xb8) + 8));
  plVar1 = (long *)(param_1 + 0x3a0);
  if (*(long *)(param_1 + 0x3a0) == 0) {
    uVar33 = *(undefined4 *)(param_1 + 0x490);
    uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05a504e0(uVar22,uVar33,0);
    *(undefined8 *)(param_1 + 0x3a0) = uVar22;
    thunk_FUN_02bb0e9c(plVar1,uVar22);
  }
  else {
    plVar30 = (long *)(*(long *)(param_1 + 0x3a0) + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_059ef7b4;
    iVar8 = *(int *)(param_1 + 0x490);
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
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (*(int *)(param_1 + 0x310) == 1) {
    FUN_05a317d0(param_1,*(undefined8 *)(param_1 + 0x100),0);
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__;
    if (*(long *)(param_1 + 0x668) == 0) {
      *(undefined4 *)(param_1 + 0x310) = 3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47000(0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
        uVar22 = thunk_FUN_05c92238(*(long *)(param_1 + 0x100),0);
        uVar22 = FUN_04c0a5c4(*(undefined8 *)Method_VRBeats_Carousel_<Focus>b__16_0__,uVar22,
                              *(undefined8 *)Method_VRBeats_Carousel_<MoveLeft>b__14_0__,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c453b4(uVar22,param_1,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x670) == 0) goto LAB_059ef7b4;
      iVar8 = FUN_05c91f88(*(long *)(param_1 + 0x670),0);
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
      iVar9 = FUN_05c91f88(*(long *)(param_1 + 0x100),0);
      if (iVar8 != iVar9) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05a47520(0);
        if ((uVar16 & 1) == 0) {
LAB_059ed730:
          if (*(long *)(param_1 + 0x670) == 0) goto LAB_059ef7b4;
          uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x670) + 0x88);
          *(undefined8 *)(param_1 + 0x678) = uVar22;
        }
        else {
          if (*(long *)(param_1 + 0x118) == 0) goto LAB_059ef7b4;
          iVar8 = FUN_05c91f88(*(long *)(param_1 + 0x118),0);
          if ((*(long *)(param_1 + 0x670) == 0) ||
             (lVar15 = *(long *)(*(long *)(param_1 + 0x670) + 0x88), lVar15 == 0))
          goto LAB_059ef7b4;
          iVar9 = FUN_05c91f88(lVar15,0);
          if (iVar8 == iVar9) goto LAB_059ed730;
          if (*(long *)(param_1 + 0x670) == 0) goto LAB_059ef7b4;
          uVar22 = *(undefined8 *)(param_1 + 0x118);
          uVar31 = *(undefined8 *)(*(long *)(param_1 + 0x670) + 0x88);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar22 = FUN_05a424e4(uVar22,uVar31,0);
          *(undefined8 *)(param_1 + 0x678) = uVar22;
        }
        thunk_FUN_02bb0e9c(param_1 + 0x678,uVar22);
        lVar15 = *plVar35;
        uVar22 = *(undefined8 *)(param_1 + 0x678);
        uVar31 = *(undefined8 *)(param_1 + 0x670);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar15 = *plVar35;
        }
        uVar10 = FUN_059e8914(uVar22,uVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        lVar15 = *plVar35;
        *(uint *)(param_1 + 0x680) = uVar10;
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
  if (*(long *)(param_1 + 0x330) == 0) {
LAB_059ef7b4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar10 = FUN_0385c3a4(*(long *)(param_1 + 0x330),0x6c696761,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<CustomStyleResolvedEvent>__
                       );
  if (*(int *)(param_1 + 0x310) == 6) {
    uVar22 = *(undefined8 *)(param_1 + 0x318);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05c8c45c(uVar22,0,0);
    if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x42d) == '\0')) {
      plVar30 = *(long **)(param_1 + 0x318);
      if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
      (**(code **)(*plVar30 + 0x558))
                (plVar30,**(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar30 + 0x560));
    }
  }
  if (param_2 == 0) goto LAB_059ef7b4;
  uVar11 = *(uint *)(param_2 + 0x18);
  if ((int)uVar11 < 1) {
    local_174 = 0;
LAB_059eef38:
    if (*(char *)(param_1 + 0x42d) != '\0') {
      *(undefined1 *)(param_1 + 0x42d) = 0;
LAB_059eef44:
      return *(undefined4 *)(param_1 + 0x4a0);
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      lVar25 = *plVar35;
      *(int *)(lVar15 + 0x1c) = local_174;
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
            if (*(long *)(param_1 + 0x720) != 0) {
              plVar30 = (long *)(param_1 + 0x720);
              if (*(int *)(*(long *)(param_1 + 0x720) + 0x18) < (int)uVar10) {
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
              if (*(char *)(param_1 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_059ef7b4;
                plVar32 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar32;
                if (lVar15 == 0) goto LAB_059ef7b4;
                iVar8 = *(int *)(param_1 + 0x4a0);
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
                      local_d0 = *(undefined8 *)(lVar23 + -4);
                      uStack_d8 = *(undefined8 *)(lVar23 + -0xc);
                      uStack_e0 = *(undefined8 *)(lVar23 + -0x14);
                      uStack_f8 = *(undefined8 *)(lVar23 + -0x2c);
                      local_100 = *(undefined8 *)(lVar23 + -0x34);
                      uStack_e8 = *(undefined8 *)(lVar23 + -0x1c);
                      local_f0 = *(undefined8 *)(lVar23 + -0x24);
                      lVar23 = FUN_05a4e04c(param_1,&local_100,0);
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
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_05a43018(&local_150,*(undefined8 *)(param_1 + 0x3d8),uVar11 + 1,0);
                      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_059ef7b8;
                    }
                    else {
                      lVar23 = *plVar30;
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar23 = *(long *)(lVar23 + uVar16 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_059ef7b4;
                      uVar22 = FUN_05a4dee8(lVar23,0);
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_05a43018(&local_150,uVar22,uVar11 + 1,0);
                      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059ef7b8;
                      lVar20 = lVar20 + lVar15;
                    }
                    memmove((void *)(lVar20 + 0x20),&local_150,0x50);
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
                    else if ((*(char *)(param_1 + 0x359) != '\0') && (0 < (int)uVar11)) {
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
  lVar15 = param_2 + 0x20;
  local_174 = 0;
LAB_059ed938:
  if (uVar11 <= uVar28) goto LAB_059ef7b8;
  puVar36 = (uint *)(lVar15 + (long)(int)uVar28 * 0x10 + 4);
  if (*puVar36 == 0) goto LAB_059eef38;
  if (*plVar1 == 0) goto LAB_059ef7b4;
  plVar30 = (long *)(*plVar1 + 0x38);
  lVar25 = *plVar30;
  iVar8 = *(int *)(param_1 + 0x4a0);
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
    uVar11 = *(uint *)(param_2 + 0x18);
  }
  if (uVar11 <= uVar28) goto LAB_059ef7b8;
  uVar11 = *puVar36;
  uVar33 = *(undefined4 *)(param_1 + 0x120);
  if ((*(char *)(param_1 + 0x33a) != '\0') && (uVar11 == 0x3c)) {
    uVar16 = FUN_05a26cd4(param_1,param_2,uVar28 + 1,&local_68,0);
    uVar24 = local_68;
    if ((uVar16 & 1) == 0) {
      uVar33 = *(undefined4 *)(param_1 + 0x120);
      goto LAB_059edbb0;
    }
    if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_059ef7b8;
    iVar8 = *(int *)(lVar15 + (long)(int)uVar28 * 0x10 + 8);
    if ((*(byte *)(param_1 + 0x284) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x292) = 1;
    }
    uVar28 = local_68;
    if (*(int *)(param_1 + 0x65c) != 1) goto LAB_059eef20;
    lVar25 = *plVar35;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar25 = *plVar35;
    }
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 != 0) {
      if (*(uint *)(param_1 + 0x120) < *(uint *)(lVar25 + 0x18)) {
        lVar25 = lVar25 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38;
        *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 != 0)) {
          if (*(uint *)(param_1 + 0x4a0) < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178;
            sVar4 = *(short *)(param_1 + 0x6bc);
            *(undefined8 *)(lVar25 + 0x40) = *(undefined8 *)(param_1 + 0x100);
            *(short *)(lVar25 + 0x24) = sVar4 + -0x2000;
            thunk_FUN_02bb0e9c();
            if ((*(long *)(param_1 + 0x3a0) != 0) &&
               (lVar25 = *(long *)(*(long *)(param_1 + 0x3a0) + 0x38), lVar25 != 0)) {
              uVar11 = *(uint *)(param_1 + 0x4a0);
              if (uVar11 < *(uint *)(lVar25 + 0x18)) {
                *(undefined4 *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178 + 0x30) =
                     *(undefined4 *)(param_1 + 0x120);
                if ((*(long *)(param_1 + 0x6b0) != 0) &&
                   (lVar17 = FUN_05a4afd0(*(long *)(param_1 + 0x6b0),0), lVar17 != 0)) {
                  uVar22 = FUN_037a6268(lVar17,*(undefined4 *)(param_1 + 0x6bc),
                                        *(undefined8 *)
                                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                                       );
                  if (uVar11 < *(uint *)(lVar25 + 0x18)) {
                    *(undefined8 *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178 + 0x10) = uVar22;
                    thunk_FUN_02bb0e9c();
                    if ((*plVar1 != 0) && (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 != 0)) {
                      uVar11 = *(uint *)(param_1 + 0x4a0);
                      if (uVar11 < *(uint *)(lVar25 + 0x18)) {
                        puVar27 = (undefined4 *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178);
                        *puVar27 = *(undefined4 *)(param_1 + 0x65c);
                        puVar27[2] = iVar8;
                        if (uVar24 < *(uint *)(param_2 + 0x18)) {
                          *(int *)(lVar25 + 0x20 + (long)(int)uVar11 * 0x178 + 0xc) =
                               (*(int *)(lVar15 + (long)(int)uVar24 * 0x10 + 8) - iVar8) + 1;
                          *(undefined4 *)(param_1 + 0x65c) = 0;
                          *(undefined4 *)(param_1 + 0x120) = uVar33;
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
  uVar31 = *(undefined8 *)(param_1 + 0x100);
  uVar22 = *(undefined8 *)(param_1 + 0x118);
  local_64[0] = 0;
  if (*(int *)(param_1 + 0x65c) != 0) goto LAB_059edc78;
  uVar24 = *(uint *)(param_1 + 0x284);
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
  if ((int)uVar24 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar24) goto LAB_059ef7b8;
    uVar29 = *(uint *)(lVar15 + (long)(int)uVar24 * 0x10 + 4);
  }
  else {
    uVar29 = 0;
  }
  uVar12 = uVar11;
  if (*(char *)(param_1 + 0x33b) == '\0') {
LAB_059ede00:
    lVar25 = FUN_05a31b98(param_1,uVar11,*(undefined8 *)(param_1 + 0x100),
                          *(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x23c),local_64
                          ,0);
    if (lVar25 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_059ef7b8;
      FUN_05a32240(param_1,uVar11,*(undefined4 *)(lVar15 + (long)(int)uVar28 * 0x10 + 8),
                   *(undefined8 *)(param_1 + 0x100),0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar8 = FUN_05a46ee8(0);
      bVar7 = *(uint *)(param_2 + 0x18) <= uVar28;
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
      uVar34 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(*(long *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar25 = FUN_05a0ed94(uVar12,uVar34,1,0,400,local_64,0);
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
            uVar34 = *(undefined8 *)(param_1 + 0x100);
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
                               (uVar12,uVar34,uVar18,1,0,400,local_64,0);
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
          lVar25 = FUN_05a0ed94(uVar12,uVar34,1,0,400,local_64,0);
          if (lVar25 != 0) goto LAB_059edf14;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_059ef7b8;
        *puVar36 = 0x20;
        uVar34 = *(undefined8 *)(param_1 + 0x100);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = 0x20;
        lVar25 = FUN_05a0ed94(0x20,uVar34,1,0,400,local_64,0);
        if (lVar25 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_059ef7b8;
          *puVar36 = 3;
          uVar34 = *(undefined8 *)(param_1 + 0x100);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = 3;
          lVar25 = FUN_05a0ed94(3,uVar34,1,0,400,local_64,0);
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
          local_150 = CONCAT44(local_150._4_4_,uVar11);
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_150);
          if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((int)plVar30[3] == 0) goto LAB_059ef7b8;
          plVar30[4] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 4,lVar17);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_059ef7b4;
          lVar17 = thunk_FUN_05c92238(*(long *)(param_1 + 0xf8),0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar30 + 3) & 0xfffffffe) == 0) goto LAB_059ef7b8;
          plVar30[5] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 5,lVar17);
          if (lVar25 == 0) goto LAB_059ef7b4;
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar25 + 0x14));
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_c0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if (*(uint *)(plVar30 + 3) < 3) goto LAB_059ef7b8;
          plVar30[6] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 6,lVar17);
          lVar17 = thunk_FUN_05c92238(param_1,0);
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
          local_150 = CONCAT44(local_150._4_4_,uVar11);
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_150);
          if (plVar30 == (long *)0x0) goto LAB_059ef7b4;
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((int)plVar30[3] == 0) goto LAB_059ef7b8;
          plVar30[4] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 4,lVar17);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_059ef7b4;
          lVar17 = thunk_FUN_05c92238(*(long *)(param_1 + 0xf8),0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if ((*(uint *)(plVar30 + 3) & 0xfffffffe) == 0) goto LAB_059ef7b8;
          plVar30[5] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 5,lVar17);
          if (lVar25 == 0) goto LAB_059ef7b4;
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar25 + 0x14));
          lVar17 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_c0);
          if ((lVar17 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar30 + 0x40)), lVar23 == 0))
          goto LAB_059ef7bc;
          if (*(uint *)(plVar30 + 3) < 3) goto LAB_059ef7b8;
          plVar30[6] = lVar17;
          thunk_FUN_02bb0e9c(plVar30 + 6,lVar17);
          lVar17 = thunk_FUN_05c92238(param_1,0);
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
        FUN_05c453b4(uVar34,param_1,0);
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
    uVar34 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar18 = FUN_05a47870(0);
    uVar14 = *(undefined4 *)(param_1 + 0x280);
    uVar2 = *(undefined4 *)(param_1 + 0x238);
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        );
    }
    lVar25 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters
                       (uVar11,uVar34,uVar18,1,uVar14,uVar2,local_64,0);
    plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
    if (lVar25 == 0) goto LAB_059ede00;
  }
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
  puVar21 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38);
  *puVar21 = 0;
  thunk_FUN_02bb0e9c(puVar21,0);
  if (lVar25 == 0) goto LAB_059ef7b4;
  if (*(char *)(lVar25 + 0x10) == '\x01') {
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_059ef7b4;
    iVar8 = FUN_059fa888(*(long *)(lVar25 + 0x18),0);
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
    iVar9 = FUN_059fa888(*(long *)(param_1 + 0x100),0);
    bVar7 = iVar8 != iVar9;
    if (bVar7) {
      plVar30 = *(long **)(lVar25 + 0x18);
      if (plVar30 == (long *)0x0) {
        plVar30 = (long *)0x0;
        *(undefined8 *)(param_1 + 0x100) = 0;
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
        *(long **)(param_1 + 0x100) = plVar32;
        if (*(byte *)(*plVar30 + 0x130) < bVar3) {
          plVar30 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
          plVar30 = (long *)0x0;
        }
      }
      thunk_FUN_02bb0e9c(param_1 + 0x100,plVar30);
    }
    if ((uVar29 >> 4 == 0xfe0) || (uVar29 - 0xe0100 < 0xf0)) {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
      iVar8 = FUN_05a08158(*(long *)(param_1 + 0x100),uVar12,uVar29,0);
      if (iVar8 != 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
        uVar16 = FUN_05a0a5b8(*(long *)(param_1 + 0x100),iVar8,&local_78,0);
        if ((uVar16 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0))
          goto LAB_059ef7b4;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
          *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38) = local_78;
          thunk_FUN_02bb0e9c();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar24) goto LAB_059ef7b8;
      *(undefined4 *)(lVar15 + (long)(int)uVar24 * 0x10 + 4) = 0x1a;
      uVar28 = uVar24;
    }
    if ((uVar10 & 1) == 0) goto FUN_059ee838;
    if (((*(long *)(param_1 + 0x100) == 0) ||
        (lVar17 = *(long *)(*(long *)(param_1 + 0x100) + 0x178), lVar17 == 0)) ||
       (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
    uVar16 = FUN_045e2b94(lVar17,*(undefined4 *)(lVar25 + 0x28),&local_70,
                          *(undefined8 *)
                           Method_System_Text_RegularExpressions_CaptureCollection_GetCapture__);
    if ((uVar16 & 1) != 0) {
      if (local_70 == 0) goto LAB_059eef38;
      iVar8 = 0;
      while (plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo,
            iVar8 < *(int *)(local_70 + 0x18)) {
        auVar37 = FUN_0376cfc0(local_70,iVar8,
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
            if (*(uint *)(param_2 + 0x18) <= uVar11) goto LAB_059ef7b8;
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
            iVar13 = FUN_05a0807c(*(long *)(param_1 + 0x100),
                                  *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4),0);
            if (*(uint *)(lVar17 + 0x18) <= (int)lVar23 + 1U) goto LAB_059ef7b8;
            if (iVar13 != *(int *)(lVar17 + 0x24 + lVar23 * 4)) goto LAB_059ee750;
            lVar23 = lVar23 + 1;
          } while (iVar9 + -1 != (int)lVar23);
        }
        if (auVar37._8_4_ != 0) {
          if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
          uVar19 = FUN_05a0a5b8(*(long *)(param_1 + 0x100),auVar37._8_8_ & 0xffffffff,&local_80,0);
          plVar35 = (long *)System_Collections_Generic_List<int>___TypeInfo;
          if ((uVar19 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0))
            goto LAB_059ef7b4;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
            *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38) =
                 local_80;
            thunk_FUN_02bb0e9c();
            if (iVar9 < 1) goto LAB_059ee82c;
            uVar19 = 0;
            goto LAB_059ee7e8;
          }
        }
LAB_059ee750:
        iVar8 = iVar8 + 1;
        if (local_70 == 0) goto LAB_059ef7b4;
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
      if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_059ef7b8;
      *(int *)(lVar15 + (long)(int)uVar28 * 0x10 + 0xc) = iVar9;
    }
    else {
      uVar11 = uVar28 + (int)uVar19;
      if (*(uint *)(param_2 + 0x18) <= uVar11) goto LAB_059ef7b8;
      *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4) = 0x1a;
    }
    uVar19 = uVar19 + 1;
  } while ((uVar16 & 0xffffffff) != uVar19);
LAB_059ee82c:
  uVar28 = (uVar28 + iVar9) - 1;
FUN_059ee838:
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
  lVar17 = lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178;
  plVar30 = (long *)(lVar17 + 0x30);
  *plVar30 = lVar25;
  *(undefined4 *)(lVar17 + 0x20) = 0;
  thunk_FUN_02bb0e9c(plVar30,lVar25);
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  uVar11 = *(uint *)(param_1 + 0x4a0);
  if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_059ef7b8;
  lVar23 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  *(undefined1 *)(lVar23 + 0x34) = local_64[0];
  *(short *)(lVar23 + 4) = (short)uVar12;
  if (*(uint *)(param_2 + 0x18) <= uVar28) goto LAB_059ef7b8;
  lVar17 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  uVar34 = *(undefined8 *)(lVar15 + (long)(int)uVar28 * 0x10 + 8);
  *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(param_1 + 0x100);
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
    *(uint *)(param_1 + 0x120) = uVar11;
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 == 0) goto LAB_059ef7b4;
    if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_059ef7b8;
    lVar25 = lVar25 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 == 0)) goto LAB_059ef7b4;
    uVar11 = *(uint *)(param_1 + 0x4a0);
    if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_059ef7b8;
    lVar25 = lVar25 + (long)(int)uVar11 * 0x178;
    *(undefined4 *)(lVar25 + 0x20) = 1;
    *(undefined4 *)(lVar25 + 0x50) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x120) = uVar33;
LAB_059ee9c0:
    local_174 = local_174 + 1;
    goto LAB_059eef18;
  }
  if (bVar7) {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
    iVar8 = FUN_059fa888(*(long *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_059ef7b4;
    iVar9 = FUN_059fa888(*(long *)(param_1 + 0xf8),0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47520(0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
        uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_059ef7b4;
        uVar34 = *(undefined8 *)(param_1 + 0x118);
        uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x88);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar34 = FUN_05a424e4(uVar34,uVar18,0);
      }
      *(undefined8 *)(param_1 + 0x118) = uVar34;
      thunk_FUN_02bb0e9c(param_1 + 0x118);
      lVar17 = *plVar35;
      uVar34 = *(undefined8 *)(param_1 + 0x118);
      uVar18 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar17 = *plVar35;
      }
      uVar14 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar17 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x120) = uVar14;
    }
  }
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
  lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38);
  if ((lVar17 == 0) && (lVar17 = *(long *)(lVar25 + 0x20), lVar17 == 0)) goto LAB_059ef7b4;
  iVar8 = FUN_05d3dde8(lVar17,0);
  if (0 < iVar8) {
    uVar34 = *(undefined8 *)(param_1 + 0x100);
    uVar18 = *(undefined8 *)(param_1 + 0x118);
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar34 = FUN_05a41f60(uVar34,uVar18,iVar8,0);
    *(undefined8 *)(param_1 + 0x118) = uVar34;
    thunk_FUN_02bb0e9c(param_1 + 0x118,uVar34);
    lVar25 = *plVar35;
    uVar34 = *(undefined8 *)(param_1 + 0x118);
    uVar18 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar25 = *plVar35;
    }
    uVar14 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar25 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
    *(undefined4 *)(param_1 + 0x120) = uVar14;
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
    uVar11 = *(uint *)(param_1 + 0x120);
    if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_059ef7b8;
    if (*(int *)(lVar17 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar30 = *(long **)(*plVar35 + 0xb8);
        goto LAB_059eeddc;
      }
LAB_059eede4:
      uVar11 = *(uint *)(param_1 + 0x120);
      uVar24 = *(uint *)(lVar17 + 0x18);
    }
    else {
      if (bVar7) {
        if (*(long *)(param_1 + 0x780) == 0) goto LAB_059ef7b4;
        uVar16 = FUN_04450324(*(long *)(param_1 + 0x780),(long)(int)uVar11,&local_84,
                              *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
        puVar5 = System_Collections_Generic_List<int>___TypeInfo;
        if ((uVar16 & 1) == 0) {
LAB_059eec88:
          uVar18 = *(undefined8 *)(param_1 + 0x118);
          uVar34 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
          FUN_05c59798(uVar34,uVar18,0);
          puVar5 = System_Collections_Generic_List<int>___TypeInfo;
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          lVar25 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar25 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar25 = *(long *)puVar5;
          }
          uVar11 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar25 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
          if (*(long *)(param_1 + 0x780) == 0) goto LAB_059ef7b4;
          FUN_0444e9a4(*(long *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x120),uVar11,
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
          if (*(uint *)(lVar17 + 0x18) <= local_84) goto LAB_059ef7b8;
          uVar11 = local_84;
          if (0x3ffe < *(int *)(lVar17 + (long)(int)local_84 * 0x38 + 0x54)) goto LAB_059eec88;
        }
        *(uint *)(param_1 + 0x120) = uVar11;
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
      uVar18 = *(undefined8 *)(param_1 + 0x118);
      uVar34 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
      FUN_05c59798(uVar34,uVar18,0);
      lVar25 = *plVar35;
      uVar18 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar25 = *plVar35;
      }
      uVar11 = FUN_059e8914(uVar34,uVar18,*(long *)(lVar25 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 8));
      lVar25 = *plVar35;
      *(uint *)(param_1 + 0x120) = uVar11;
      lVar17 = **(long **)(lVar25 + 0xb8);
      if (lVar17 == 0) goto LAB_059ef7b4;
      uVar24 = *(uint *)(lVar17 + 0x18);
    }
    if (uVar24 <= uVar11) goto LAB_059ef7b8;
    lVar17 = lVar17 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
  }
  if ((*plVar1 == 0) || (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
  *(undefined8 *)(lVar25 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x48) =
       *(undefined8 *)(param_1 + 0x118);
  thunk_FUN_02bb0e9c();
  if ((*plVar1 == 0) || (lVar25 = *(long *)(*plVar1 + 0x38), lVar25 == 0)) goto LAB_059ef7b4;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_059ef7b8;
  *(undefined4 *)(lVar25 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x50) =
       *(undefined4 *)(param_1 + 0x120);
  lVar25 = *plVar35;
  if (*(int *)(lVar25 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar25 = *plVar35;
  }
  lVar17 = **(long **)(lVar25 + 0xb8);
  if (lVar17 == 0) goto LAB_059ef7b4;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x120)) goto LAB_059ef7b8;
  *(bool *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38 + 0x41) = bVar7;
  if (bVar7) {
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar17 = **(long **)(*plVar35 + 0xb8);
      if (lVar17 == 0) goto LAB_059ef7b4;
    }
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x120)) goto LAB_059ef7b8;
    puVar21 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38 + 0x48);
    *puVar21 = uVar22;
    thunk_FUN_02bb0e9c(puVar21,uVar22);
    *(undefined8 *)(param_1 + 0x100) = uVar31;
    thunk_FUN_02bb0e9c(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x118) = uVar22;
    thunk_FUN_02bb0e9c(param_1 + 0x118,uVar22);
    *(undefined4 *)(param_1 + 0x120) = uVar33;
  }
  uVar11 = *(uint *)(param_1 + 0x4a0);
LAB_059eef18:
  *(uint *)(param_1 + 0x4a0) = uVar11 + 1;
LAB_059eef20:
  uVar11 = *(uint *)(param_2 + 0x18);
  uVar28 = uVar28 + 1;
  if ((int)uVar11 <= (int)uVar28) goto LAB_059eef38;
  goto LAB_059ed938;
}


