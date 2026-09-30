/*
FUNCTION_NAME: FUN_059f4f14
ENTRY_POINT: 059f4f14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 223
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_21
*/


undefined4 FUN_059f4f14(long *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
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
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  undefined4 uVar32;
  ulong uVar33;
  long *plVar34;
  uint *puVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  int local_194;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  uint local_78;
  undefined1 local_74 [4];
  
  if ((DAT_066d3c26 & 1) == 0) {
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
    FUN_02b3c81c(Method_System_CharEnumerator__ctor__);
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
    DAT_066d3c26 = 1;
  }
  puVar6 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOverEvent>__;
  local_74[0] = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x292) = 0;
  plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  *(int *)((long)param_1 + 0x284) = (int)param_1[0x50];
  FUN_05a51ee4(param_1 + 0x51,0);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__;
  if ((*(byte *)((long)param_1 + 0x284) & 1) == 0) {
    uVar32 = (undefined4)param_1[0x47];
  }
  else {
    uVar32 = 700;
  }
  uVar21 = *(undefined8 *)puVar6;
  *(undefined4 *)((long)param_1 + 0x23c) = uVar32;
  FUN_03f1b080(param_1 + 0x48,uVar32,uVar21);
  param_1[0x20] = param_1[0x1f];
  thunk_FUN_02bb0e9c(param_1 + 0x20);
  param_1[0x23] = param_1[0x22];
  thunk_FUN_02bb0e9c(param_1 + 0x23);
  lVar15 = *plVar34;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar32 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar15,0);
    uVar32 = (undefined4)param_1[0x24];
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  FUN_059e8750((int)param_1[0xc6],&local_e0,uVar32,param_1[0x20],0,param_1[0x23]);
  uStack_168 = uStack_d8;
  local_170 = local_e0;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  local_140 = local_b0;
  uVar17 = local_d0;
  FUN_03f1b6b0(*(long *)(*plVar34 + 0xb8) + 0x10,&local_170,*(undefined8 *)puVar5);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  lVar15 = *(long *)(*(long *)(*plVar34 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_059f746c;
  FUN_0444eb38(lVar15,*(undefined8 *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_059e8914(param_1[0x23],param_1[0x20],*(long *)(*plVar34 + 0xb8),
               *(undefined8 *)(*(long *)(*plVar34 + 0xb8) + 8));
  plVar1 = param_1 + 0x74;
  if (param_1[0x74] == 0) {
    lVar15 = param_1[0x92];
    lVar29 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05a504e0(lVar29,(int)lVar15,0);
    param_1[0x74] = lVar29;
    thunk_FUN_02bb0e9c(plVar1,lVar29);
  }
  else {
    plVar28 = (long *)(param_1[0x74] + 0x38);
    lVar15 = *plVar28;
    if (lVar15 == 0) goto LAB_059f746c;
    lVar29 = param_1[0x92];
    if (*(int *)(lVar15 + 0x18) < (int)lVar29) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_033359b0(plVar28,(int)lVar29,0,
                   *(undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                  );
    }
  }
  *(undefined4 *)((long)param_1 + 0x65c) = 0;
  if ((int)param_1[0x62] == 1) {
    FUN_05a317d0(param_1,param_1[0x20],0);
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__;
    if (param_1[0xcd] == 0) {
      *(undefined4 *)(param_1 + 0x62) = 3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47000(0);
      if ((uVar16 & 1) == 0) {
        if (param_1[0x20] == 0) goto LAB_059f746c;
        uVar21 = thunk_FUN_05c92238(param_1[0x20],0);
        uVar21 = FUN_04c0a5c4(*(undefined8 *)Method_VRBeats_Carousel_<Focus>b__16_0__,uVar21,
                              *(undefined8 *)Method_VRBeats_Carousel_<MoveLeft>b__14_0__,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c453b4(uVar21,param_1,0);
      }
    }
    else {
      if (param_1[0xce] == 0) goto LAB_059f746c;
      iVar8 = FUN_05c91f88(param_1[0xce],0);
      if (param_1[0x20] == 0) goto LAB_059f746c;
      iVar9 = FUN_05c91f88(param_1[0x20],0);
      if (iVar8 != iVar9) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05a47520(0);
        if ((uVar16 & 1) == 0) {
LAB_059f5354:
          if (param_1[0xce] == 0) goto LAB_059f746c;
          lVar15 = *(long *)(param_1[0xce] + 0x88);
          param_1[0xcf] = lVar15;
        }
        else {
          if (param_1[0x23] == 0) goto LAB_059f746c;
          iVar8 = FUN_05c91f88(param_1[0x23],0);
          if ((param_1[0xce] == 0) || (lVar15 = *(long *)(param_1[0xce] + 0x88), lVar15 == 0))
          goto LAB_059f746c;
          iVar9 = FUN_05c91f88(lVar15,0);
          if (iVar8 == iVar9) goto LAB_059f5354;
          if (param_1[0xce] == 0) goto LAB_059f746c;
          lVar15 = param_1[0x23];
          uVar21 = *(undefined8 *)(param_1[0xce] + 0x88);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar15 = FUN_05a424e4(lVar15,uVar21,0);
          param_1[0xcf] = lVar15;
        }
        thunk_FUN_02bb0e9c(param_1 + 0xcf,lVar15);
        lVar15 = *plVar34;
        lVar29 = param_1[0xcf];
        lVar30 = param_1[0xce];
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar15 = *plVar34;
        }
        uVar10 = FUN_059e8914(lVar29,lVar30,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        lVar15 = *plVar34;
        *(uint *)(param_1 + 0xd0) = uVar10;
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_059f746c;
        if (*(uint *)(lVar15 + 0x18) <= uVar10) {
LAB_059f7504:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (param_1[0x66] == 0) {
LAB_059f746c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar10 = FUN_0385c3a4(param_1[0x66],0x6c696761,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<CustomStyleResolvedEvent>__
                       );
  if ((int)param_1[0x62] == 6) {
    lVar15 = param_1[99];
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05c8c45c(lVar15,0,0);
    puVar5 = PTR_DAT_06312310;
    if (((uVar16 & 1) != 0) && (plVar28 = param_1, *(char *)((long)param_1 + 0x42d) == '\0')) {
      while( true ) {
        plVar28 = (long *)plVar28[99];
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05c8c45c(plVar28,0,0);
        if ((uVar16 & 1) == 0) goto LAB_059f550c;
        if (plVar28 == (long *)0x0) break;
        (**(code **)(*plVar28 + 0x558))
                  (plVar28,**(undefined8 **)(*(long *)(puVar5 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar28 + 0x560));
        (**(code **)(*plVar28 + 0x948))(plVar28,*(undefined8 *)(*plVar28 + 0x950));
        lVar15 = FUN_05a1fb54(plVar28,0);
        if (lVar15 == 0) break;
        FUN_05a50820(lVar15,0);
      }
      goto LAB_059f746c;
    }
  }
LAB_059f550c:
  if (param_2 == 0) goto LAB_059f746c;
  uVar11 = *(uint *)(param_2 + 0x18);
  if ((int)uVar11 < 1) {
    local_194 = 0;
LAB_059f6b30:
    if (*(char *)((long)param_1 + 0x42d) != '\0') {
      *(undefined1 *)((long)param_1 + 0x42d) = 0;
LAB_059f6b3c:
      return (int)param_1[0x94];
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      lVar29 = *plVar34;
      *(int *)(lVar15 + 0x1c) = local_194;
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
      ;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar29 = *plVar34;
      }
      lVar29 = *(long *)(*(long *)(lVar29 + 0xb8) + 8);
      if (lVar29 != 0) {
        uVar10 = FUN_0444e654(lVar29,*(undefined8 *)
                                      Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__
                             );
        *(uint *)(lVar15 + 0x34) = uVar10;
        if (*plVar1 != 0) {
          plVar28 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar28;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar10;
            if (*(int *)(lVar15 + 0x18) < (int)uVar10) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_03335a5c(plVar28,uVar16,0,
                           *(undefined8 *)
                            Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Insert__
                          );
            }
            if (param_1[0xe4] != 0) {
              plVar28 = param_1 + 0xe4;
              if (*(int *)(param_1[0xe4] + 0x18) < (int)uVar10) {
                uVar11 = uVar10 | (int)uVar10 >> 0x10;
                uVar11 = uVar11 | (int)uVar11 >> 8;
                uVar11 = uVar11 | (int)uVar11 >> 4;
                uVar11 = uVar11 | (int)uVar11 >> 2;
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_03335780(plVar28,(uVar11 | (int)uVar11 >> 1) + 1,
                             *(undefined8 *)Method_System_CharEnumerator__ctor__);
              }
              if (*(char *)((long)param_1 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_059f746c;
                plVar31 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar31;
                if (lVar15 == 0) goto LAB_059f746c;
                iVar8 = (int)param_1[0x94];
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  FUN_033359b0(plVar31,iVar9,1,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                              );
                  plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                }
              }
              fVar4 = DAT_01031cf4;
              if (0 < (int)uVar10) {
                lVar15 = 0;
                uVar33 = 0;
                lVar29 = 0x54;
                lVar30 = 0x20;
                do {
                  fVar40 = (float)uVar17;
                  if (uVar33 != 0) {
                    lVar22 = *plVar28;
                    if (lVar22 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                    uVar21 = *(undefined8 *)(lVar22 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar17 = FUN_05c8e378(uVar21,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar22 = *plVar34;
                      plVar31 = (long *)*plVar28;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar22 = *plVar34;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = lVar22 + lVar29;
                      local_f0 = *(undefined8 *)(lVar22 + -4);
                      uStack_f8 = *(undefined8 *)(lVar22 + -0xc);
                      uStack_100 = *(undefined8 *)(lVar22 + -0x14);
                      uStack_118 = *(undefined8 *)(lVar22 + -0x2c);
                      uVar21 = *(undefined8 *)(lVar22 + -0x34);
                      uStack_108 = *(undefined8 *)(lVar22 + -0x1c);
                      local_110 = *(undefined8 *)(lVar22 + -0x24);
                      local_120 = uVar21;
                      lVar22 = FUN_05a4f1cc(param_1,&local_120,0);
                      fVar40 = (float)uVar21;
                      if (plVar31 == (long *)0x0) goto LAB_059f746c;
                      if ((lVar22 != 0) &&
                         (lVar18 = thunk_FUN_02b79548(lVar22,*(undefined8 *)(*plVar31 + 0x40)),
                         lVar18 == 0)) {
LAB_059f7508:
                        uVar21 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                        FUN_02b3c988(uVar21,0);
                      }
                      if (*(uint *)(plVar31 + 3) <= uVar33) goto LAB_059f7504;
                      plVar31[uVar33 + 4] = lVar22;
                      thunk_FUN_02bb0e9c((long)plVar31 + lVar30,lVar22);
                      plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                      if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x60), lVar22 == 0))
                      goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      puVar19 = (undefined8 *)(lVar22 + lVar15 + 0x30);
                      *puVar19 = 0;
                      thunk_FUN_02bb0e9c(puVar19,0);
                    }
                    if (param_1[0x77] == 0) goto LAB_059f746c;
                    fVar37 = (float)FUN_05c9b26c(param_1[0x77],0);
                    lVar22 = *plVar28;
                    if (lVar22 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                    lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                    if ((lVar22 == 0) ||
                       (fVar39 = fVar40, lVar22 = FUN_05d91048(lVar22,0), lVar22 == 0))
                    goto LAB_059f746c;
                    fVar38 = (float)FUN_05c9b26c(lVar22,0);
                    fVar40 = (fVar40 - fVar39) * (fVar40 - fVar39);
                    uVar17 = (ulong)(uint)fVar40;
                    if (fVar4 <= (fVar37 - fVar38) * (fVar37 - fVar38) + fVar40) {
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059f746c;
                      lVar22 = FUN_05d91048(lVar22,0);
                      if ((param_1[0x77] == 0) || (FUN_05c9b26c(param_1[0x77],0), lVar22 == 0))
                      goto LAB_059f746c;
                      FUN_05c9b338(lVar22,0);
                    }
                    lVar22 = *plVar28;
                    if (lVar22 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                    lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                    if (lVar22 == 0) goto LAB_059f746c;
                    uVar21 = *(undefined8 *)(lVar22 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar20 = FUN_05c8e378(uVar21,0,0);
                    if ((uVar20 & 1) == 0) {
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0xf0), lVar22 == 0))
                      goto LAB_059f746c;
                      iVar8 = FUN_05c91f88(lVar22,0);
                      lVar22 = *plVar34;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44(lVar22);
                        lVar22 = *plVar34;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + lVar29 + -0x1c);
                      if (lVar22 == 0) goto LAB_059f746c;
                      iVar9 = FUN_05c91f88(lVar22,0);
                      if (iVar8 != iVar9) goto LAB_059f6f94;
                    }
                    else {
LAB_059f6f94:
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar18 = *plVar34;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar18 = *plVar34;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                      if (lVar22 == 0) goto LAB_059f746c;
                      thunk_FUN_05a4ee2c(lVar22,*(undefined8 *)(lVar18 + lVar29 + -0x1c),0);
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar18 = **(long **)(*plVar34 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059f746c;
                      *(undefined8 *)(lVar22 + 0xd8) = *(undefined8 *)(lVar18 + lVar29 + -0x2c);
                      thunk_FUN_02bb0e9c();
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar18 = **(long **)(*plVar34 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059f746c;
                      *(undefined8 *)(lVar22 + 0xe0) = *(undefined8 *)(lVar18 + lVar29 + -0x24);
                      thunk_FUN_02bb0e9c();
                    }
                    lVar22 = *plVar34;
                    if (*(int *)(lVar22 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar22 = *plVar34;
                    }
                    lVar18 = **(long **)(lVar22 + 0xb8);
                    if (lVar18 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                    if (*(char *)(lVar18 + lVar29 + -0x13) != '\0') {
                      lVar24 = *plVar28;
                      if (lVar24 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar18 = **(long **)(*plVar34 + 0xb8);
                        if (lVar18 == 0) goto LAB_059f746c;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                      if (lVar24 == 0) goto LAB_059f746c;
                      FUN_05a4ee88(lVar24,*(undefined8 *)(lVar18 + lVar29 + -0x1c),0);
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar18 = **(long **)(*plVar34 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059f746c;
                      *(undefined8 *)(lVar22 + 0x100) = *(undefined8 *)(lVar18 + lVar29 + -0xc);
                      thunk_FUN_02bb0e9c(lVar22 + 0x100);
                    }
                  }
                  lVar22 = *plVar34;
                  if (*(int *)(lVar22 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar22 = *plVar34;
                  }
                  plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_059f746c;
                  if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x60), lVar18 == 0))
                  goto LAB_059f746c;
                  if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                  lVar24 = lVar18 + lVar15;
                  uVar11 = *(uint *)(lVar22 + lVar29);
                  if (*(long *)(lVar24 + 0x30) == 0) {
                    if (uVar33 == 0) {
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_05a43018(&local_170,param_1[0x7b],uVar11 + 1,0);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_059f7504;
                    }
                    else {
                      lVar22 = *plVar28;
                      if (lVar22 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar22 = *(long *)(lVar22 + uVar33 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_059f746c;
                      uVar21 = FUN_05a4f064(lVar22,0);
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_05a43018(&local_170,uVar21,uVar11 + 1,0);
                      if (*(uint *)(lVar18 + 0x18) <= uVar33) goto LAB_059f7504;
                      lVar18 = lVar18 + lVar15;
                    }
                    memmove((void *)(lVar18 + 0x20),&local_170,0x50);
                    thunk_FUN_02bb0e9c(lVar24 + 0x20,0);
                    plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  }
                  else {
                    iVar8 = *(int *)(*(long *)(lVar24 + 0x30) + 0x18);
                    if (iVar8 < (int)(uVar11 * 4)) {
                      if ((int)uVar11 < 0x401) {
                        uVar11 = uVar11 | (int)uVar11 >> 0x10;
                        uVar11 = uVar11 | (int)uVar11 >> 8;
                        uVar11 = uVar11 | (int)uVar11 >> 4;
                        uVar11 = uVar11 | (int)uVar11 >> 2;
                        uVar11 = uVar11 | (int)uVar11 >> 1;
LAB_059f72bc:
                        iVar8 = uVar11 + 1;
                      }
                      else {
LAB_059f71e4:
                        iVar8 = uVar11 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                                  + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      FUN_05a43df4(lVar24 + 0x20,iVar8,0);
                    }
                    else if ((*(char *)((long)param_1 + 0x359) != '\0') && (0 < (int)uVar11)) {
                      iVar9 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar9 = iVar8;
                      }
                      if (0x100 < (int)((iVar9 >> 2) - uVar11)) {
                        if (uVar11 < 0x401) {
                          uVar11 = uVar11 >> 4 | uVar11 >> 8 | uVar11;
                          uVar11 = uVar11 | uVar11 >> 2;
                          uVar11 = uVar11 | uVar11 >> 1;
                          goto LAB_059f72bc;
                        }
                        goto LAB_059f71e4;
                      }
                    }
                  }
                  if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x60), lVar22 == 0))
                  goto LAB_059f746c;
                  lVar18 = *plVar34;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar18 = *plVar34;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_059f746c;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar33) || (*(uint *)(lVar22 + 0x18) <= uVar33))
                  goto LAB_059f7504;
                  *(undefined8 *)(lVar22 + lVar15 + 0x68) = *(undefined8 *)(lVar18 + lVar29 + -0x1c)
                  ;
                  thunk_FUN_02bb0e9c();
                  uVar33 = uVar33 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar29 = lVar29 + 0x38;
                  lVar30 = lVar30 + 8;
                } while (uVar16 != uVar33);
              }
              lVar15 = *plVar28;
              if (lVar15 != 0) {
                lVar29 = (long)(int)uVar10 + 4;
                do {
                  uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                  if ((long)(int)uVar10 <= lVar29 + -4) goto LAB_059f6b3c;
                  uVar11 = (uint)uVar16;
                  if (uVar10 <= uVar11) goto LAB_059f7504;
                  uVar21 = *(undefined8 *)(lVar15 + lVar29 * 8);
                  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar17 = FUN_05c8c45c(uVar21,0,0);
                  if ((uVar17 & 1) == 0) goto LAB_059f6b3c;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  if (lVar29 + -4 < (long)*(int *)(lVar15 + 0x18)) {
                    lVar15 = *plVar28;
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_059f7504;
                    lVar15 = *(long *)(lVar15 + lVar29 * 8);
                    if ((lVar15 == 0) || (lVar15 = FUN_05d91928(lVar15,0), lVar15 == 0)) break;
                    FUN_05f6baf8(lVar15,0,0);
                  }
                  lVar15 = *plVar28;
                  lVar29 = lVar29 + 1;
                  uVar16 = (ulong)(uVar11 + 1);
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_059f746c;
  }
  uVar26 = 0;
  lVar15 = param_2 + 0x20;
  local_194 = 0;
LAB_059f5530:
  if (uVar11 <= uVar26) goto LAB_059f7504;
  puVar35 = (uint *)(lVar15 + (long)(int)uVar26 * 0x10 + 4);
  if (*puVar35 == 0) goto LAB_059f6b30;
  if (*plVar1 == 0) goto LAB_059f746c;
  plVar28 = (long *)(*plVar1 + 0x38);
  lVar30 = *plVar28;
  lVar29 = param_1[0x94];
  if ((lVar30 == 0) || (*(int *)(lVar30 + 0x18) <= (int)lVar29)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_033359b0(plVar28,(int)lVar29 + 1,1,
                 *(undefined8 *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                );
    uVar11 = *(uint *)(param_2 + 0x18);
  }
  if (uVar11 <= uVar26) goto LAB_059f7504;
  uVar11 = *puVar35;
  uVar32 = (undefined4)param_1[0x24];
  if ((*(char *)((long)param_1 + 0x33a) != '\0') && (uVar11 == 0x3c)) {
    uVar16 = FUN_05a26cd4(param_1,param_2,uVar26 + 1,&local_78,0);
    uVar23 = local_78;
    if ((uVar16 & 1) == 0) {
      uVar32 = (undefined4)param_1[0x24];
      goto LAB_059f57a8;
    }
    if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_059f7504;
    iVar8 = *(int *)(lVar15 + (long)(int)uVar26 * 0x10 + 8);
    if ((*(byte *)((long)param_1 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)param_1 + 0x292) = 1;
    }
    uVar26 = local_78;
    if (*(int *)((long)param_1 + 0x65c) != 1) goto LAB_059f6b18;
    lVar29 = *plVar34;
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar29 = *plVar34;
    }
    lVar29 = **(long **)(lVar29 + 0xb8);
    if (lVar29 != 0) {
      if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar29 + 0x18)) {
        lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38;
        *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar29 = *(long *)(*plVar1 + 0x38), lVar29 != 0)) {
          if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
            sVar3 = *(short *)((long)param_1 + 0x6bc);
            *(long *)(lVar29 + 0x40) = param_1[0x20];
            *(short *)(lVar29 + 0x24) = sVar3 + -0x2000;
            thunk_FUN_02bb0e9c();
            if ((param_1[0x74] != 0) && (lVar29 = *(long *)(param_1[0x74] + 0x38), lVar29 != 0)) {
              uVar11 = *(uint *)(param_1 + 0x94);
              if (uVar11 < *(uint *)(lVar29 + 0x18)) {
                *(int *)(lVar29 + 0x20 + (long)(int)uVar11 * 0x178 + 0x30) = (int)param_1[0x24];
                if ((param_1[0xd6] != 0) && (lVar30 = FUN_05a4afd0(param_1[0xd6],0), lVar30 != 0)) {
                  uVar21 = FUN_037a6268(lVar30,*(undefined4 *)((long)param_1 + 0x6bc),
                                        *(undefined8 *)
                                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                                       );
                  if (uVar11 < *(uint *)(lVar29 + 0x18)) {
                    *(undefined8 *)(lVar29 + 0x20 + (long)(int)uVar11 * 0x178 + 0x10) = uVar21;
                    thunk_FUN_02bb0e9c();
                    if ((*plVar1 != 0) && (lVar29 = *(long *)(*plVar1 + 0x38), lVar29 != 0)) {
                      uVar11 = *(uint *)(param_1 + 0x94);
                      if (uVar11 < *(uint *)(lVar29 + 0x18)) {
                        puVar25 = (undefined4 *)(lVar29 + 0x20 + (long)(int)uVar11 * 0x178);
                        *puVar25 = *(undefined4 *)((long)param_1 + 0x65c);
                        puVar25[2] = iVar8;
                        if (uVar23 < *(uint *)(param_2 + 0x18)) {
                          *(int *)(lVar29 + 0x20 + (long)(int)uVar11 * 0x178 + 0xc) =
                               (*(int *)(lVar15 + (long)(int)uVar23 * 0x10 + 8) - iVar8) + 1;
                          *(undefined4 *)((long)param_1 + 0x65c) = 0;
                          *(undefined4 *)(param_1 + 0x24) = uVar32;
                          uVar26 = uVar23;
                          goto LAB_059f65b8;
                        }
                      }
                      goto LAB_059f7504;
                    }
                    goto LAB_059f746c;
                  }
                  goto LAB_059f7504;
                }
                goto LAB_059f746c;
              }
              goto LAB_059f7504;
            }
            goto LAB_059f746c;
          }
          goto LAB_059f7504;
        }
        goto LAB_059f746c;
      }
      goto LAB_059f7504;
    }
    goto LAB_059f746c;
  }
LAB_059f57a8:
  lVar30 = param_1[0x20];
  lVar29 = param_1[0x23];
  local_74[0] = 0;
  if (*(int *)((long)param_1 + 0x65c) != 0) goto LAB_059f5870;
  uVar23 = *(uint *)((long)param_1 + 0x284);
  if ((uVar23 >> 4 & 1) == 0) {
    if ((uVar23 >> 3 & 1) == 0) {
      if ((uVar23 >> 5 & 1) != 0) goto LAB_059f57d0;
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
        goto LAB_059f586c;
      }
    }
  }
  else {
LAB_059f57d0:
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_04cfa5b8(uVar11,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_04cfa840(uVar11,0);
LAB_059f586c:
      uVar11 = uVar11 & 0xffff;
    }
  }
LAB_059f5870:
  uVar23 = uVar26 + 1;
  if ((int)uVar23 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar23) goto LAB_059f7504;
    uVar27 = *(uint *)(lVar15 + (long)(int)uVar23 * 0x10 + 4);
  }
  else {
    uVar27 = 0;
  }
  uVar12 = uVar11;
  if (*(char *)((long)param_1 + 0x33b) == '\0') {
LAB_059f59f8:
    lVar22 = FUN_05a31b98(param_1,uVar11,param_1[0x20],*(undefined4 *)((long)param_1 + 0x284),
                          *(undefined4 *)((long)param_1 + 0x23c),local_74,0);
    if (lVar22 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_059f7504;
      FUN_05a32240(param_1,uVar11,*(undefined4 *)(lVar15 + (long)(int)uVar26 * 0x10 + 8),
                   param_1[0x20],0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar8 = FUN_05a46ee8(0);
      bVar7 = *(uint *)(param_2 + 0x18) <= uVar26;
      if (iVar8 == 0) {
        if (bVar7) goto LAB_059f7504;
        uVar12 = 0x25a1;
      }
      else {
        if (bVar7) goto LAB_059f7504;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_05a46ee8(0);
      }
      *puVar35 = uVar12;
      lVar22 = param_1[0x20];
      if (*(int *)(*(long *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar22 = FUN_05a0ed94(uVar12,lVar22,1,0,400,local_74,0);
      if (lVar22 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar22 = FUN_05a47460(0);
        if (lVar22 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar22 = FUN_05a47460(0);
          if (lVar22 == 0) goto LAB_059f746c;
          if (0 < *(int *)(lVar22 + 0x18)) {
            lVar22 = param_1[0x20];
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar21 = FUN_05a47460(0);
            if (*(int *)(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)
                                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                                );
            }
            lVar22 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_hoverExited
                               (uVar12,lVar22,uVar21,1,0,400,local_74,0);
            if (lVar22 != 0) goto LAB_059f5b0c;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar21 = FUN_05a4705c(0);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
        }
        uVar16 = FUN_05c8c45c(uVar21,0,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar21 = FUN_05a4705c(0);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                              );
          }
          lVar22 = FUN_05a0ed94(uVar12,uVar21,1,0,400,local_74,0);
          if (lVar22 != 0) goto LAB_059f5b0c;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_059f7504;
        *puVar35 = 0x20;
        lVar22 = param_1[0x20];
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = 0x20;
        lVar22 = FUN_05a0ed94(0x20,lVar22,1,0,400,local_74,0);
        if (lVar22 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_059f7504;
          *puVar35 = 3;
          lVar22 = param_1[0x20];
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = 3;
          lVar22 = FUN_05a0ed94(3,lVar22,1,0,400,local_74,0);
        }
      }
LAB_059f5b0c:
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47000(0);
      if ((uVar16 & 1) == 0) {
        plVar28 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        if (uVar11 >> 0x10 == 0) {
          local_170 = CONCAT44(local_170._4_4_,uVar11);
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_170);
          if (plVar28 == (long *)0x0) goto LAB_059f746c;
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if ((int)plVar28[3] == 0) goto LAB_059f7504;
          plVar28[4] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 4,lVar18);
          if (param_1[0x1f] == 0) goto LAB_059f746c;
          lVar18 = thunk_FUN_05c92238(param_1[0x1f],0);
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffe) == 0) goto LAB_059f7504;
          plVar28[5] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 5,lVar18);
          if (lVar22 == 0) goto LAB_059f746c;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar22 + 0x14));
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_e0);
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if (*(uint *)(plVar28 + 3) < 3) goto LAB_059f7504;
          plVar28[6] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 6,lVar18);
          lVar18 = thunk_FUN_05c92238(param_1,0);
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffc) == 0) goto LAB_059f7504;
          plVar28[7] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 7,lVar18);
          puVar19 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_set_Item__
          ;
        }
        else {
          local_170 = CONCAT44(local_170._4_4_,uVar11);
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_170);
          if (plVar28 == (long *)0x0) goto LAB_059f746c;
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if ((int)plVar28[3] == 0) goto LAB_059f7504;
          plVar28[4] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 4,lVar18);
          if (param_1[0x1f] == 0) goto LAB_059f746c;
          lVar18 = thunk_FUN_05c92238(param_1[0x1f],0);
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffe) == 0) goto LAB_059f7504;
          plVar28[5] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 5,lVar18);
          if (lVar22 == 0) goto LAB_059f746c;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar22 + 0x14));
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&local_e0);
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if (*(uint *)(plVar28 + 3) < 3) goto LAB_059f7504;
          plVar28[6] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 6,lVar18);
          lVar18 = thunk_FUN_05c92238(param_1,0);
          if ((lVar18 != 0) &&
             (lVar24 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar28 + 0x40)), lVar24 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar28 + 3) & 0xfffffffc) == 0) goto LAB_059f7504;
          plVar28[7] = lVar18;
          thunk_FUN_02bb0e9c(plVar28 + 7,lVar18);
          puVar19 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_RemoveAt__
          ;
        }
        uVar21 = FUN_04c0afb0(*puVar19,plVar28,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar21,param_1,0);
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
    if (((uVar16 & 1) == 0) || (uVar27 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a517d4(uVar11,0);
      if (((uVar16 & 1) == 0) || (uVar27 != 0xfe0f)) goto LAB_059f59f8;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar22 = FUN_05a47870(0);
    if (lVar22 == 0) goto LAB_059f59f8;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar22 = FUN_05a47870(0);
    if (lVar22 == 0) goto LAB_059f746c;
    if (*(int *)(lVar22 + 0x18) < 1) goto LAB_059f59f8;
    lVar22 = param_1[0x20];
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar21 = FUN_05a47870(0);
    lVar18 = param_1[0x50];
    lVar24 = param_1[0x47];
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        );
    }
    lVar22 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters
                       (uVar11,lVar22,uVar21,1,(int)lVar18,(int)lVar24,local_74,0);
    plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
    if (lVar22 == 0) goto LAB_059f59f8;
  }
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
  puVar19 = (undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38);
  *puVar19 = 0;
  thunk_FUN_02bb0e9c(puVar19,0);
  if (lVar22 == 0) goto LAB_059f746c;
  if (*(char *)(lVar22 + 0x10) == '\x01') {
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_059f746c;
    iVar8 = FUN_059fa888(*(long *)(lVar22 + 0x18),0);
    if (param_1[0x20] == 0) goto LAB_059f746c;
    iVar9 = FUN_059fa888(param_1[0x20],0);
    bVar7 = iVar8 != iVar9;
    if (bVar7) {
      plVar28 = *(long **)(lVar22 + 0x18);
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        param_1[0x20] = 0;
      }
      else {
        lVar18 = *(long *)
                  Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
        ;
        bVar2 = *(byte *)(lVar18 + 0x130);
        if (*(byte *)(*plVar28 + 0x130) < bVar2) {
          plVar31 = (long *)0x0;
        }
        else {
          plVar31 = plVar28;
          if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
            plVar31 = (long *)0x0;
          }
        }
        param_1[0x20] = (long)plVar31;
        if (*(byte *)(*plVar28 + 0x130) < bVar2) {
          plVar28 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
          plVar28 = (long *)0x0;
        }
      }
      thunk_FUN_02bb0e9c(param_1 + 0x20,plVar28);
    }
    if ((uVar27 >> 4 == 0xfe0) || (uVar27 - 0xe0100 < 0xf0)) {
      if (param_1[0x20] == 0) goto LAB_059f746c;
      iVar8 = FUN_05a08158(param_1[0x20],uVar12,uVar27,0);
      if (iVar8 != 0) {
        if (param_1[0x20] == 0) goto LAB_059f746c;
        uVar16 = FUN_05a0a5b8(param_1[0x20],iVar8,&local_90,0);
        if ((uVar16 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
          goto LAB_059f746c;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
          *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_90;
          thunk_FUN_02bb0e9c();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar23) goto LAB_059f7504;
      *(undefined4 *)(lVar15 + (long)(int)uVar23 * 0x10 + 4) = 0x1a;
      uVar26 = uVar23;
    }
    if ((uVar10 & 1) != 0) {
      if (((param_1[0x20] == 0) || (lVar18 = *(long *)(param_1[0x20] + 0x178), lVar18 == 0)) ||
         (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0)) goto LAB_059f746c;
      uVar16 = FUN_045e2b94(lVar18,*(undefined4 *)(lVar22 + 0x28),&local_88,
                            *(undefined8 *)
                             Method_System_Text_RegularExpressions_CaptureCollection_GetCapture__);
      if ((uVar16 & 1) == 0) goto LAB_059f6430;
      if (local_88 == 0) goto LAB_059f6b30;
      iVar8 = 0;
      while (plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo,
            iVar8 < *(int *)(local_88 + 0x18)) {
        auVar41 = FUN_0376cfc0(local_88,iVar8,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_RemoveAt__
                              );
        lVar18 = auVar41._0_8_;
        if (lVar18 == 0) goto LAB_059f746c;
        uVar16 = *(ulong *)(lVar18 + 0x18);
        iVar9 = (int)uVar16;
        if (1 < iVar9) {
          lVar24 = 0;
          do {
            uVar11 = uVar26 + 1 + (int)lVar24;
            if (*(uint *)(param_2 + 0x18) <= uVar11) goto LAB_059f7504;
            if (param_1[0x20] == 0) goto LAB_059f746c;
            iVar13 = FUN_05a0807c(param_1[0x20],
                                  *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4),0);
            if (*(uint *)(lVar18 + 0x18) <= (int)lVar24 + 1U) goto LAB_059f7504;
            if (iVar13 != *(int *)(lVar18 + 0x24 + lVar24 * 4)) goto LAB_059f6348;
            lVar24 = lVar24 + 1;
          } while (iVar9 + -1 != (int)lVar24);
        }
        if (auVar41._8_4_ != 0) {
          if (param_1[0x20] == 0) goto LAB_059f746c;
          uVar33 = FUN_05a0a5b8(param_1[0x20],auVar41._8_8_ & 0xffffffff,&local_98,0);
          plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
          if ((uVar33 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
            goto LAB_059f746c;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
            *(undefined8 *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_98
            ;
            thunk_FUN_02bb0e9c();
            if (iVar9 < 1) goto LAB_059f6424;
            uVar33 = 0;
            goto LAB_059f63e0;
          }
        }
LAB_059f6348:
        iVar8 = iVar8 + 1;
        if (local_88 == 0) goto LAB_059f746c;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_059f6430;
LAB_059f63e0:
  do {
    if (uVar33 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_059f7504;
      *(int *)(lVar15 + (long)(int)uVar26 * 0x10 + 0xc) = iVar9;
    }
    else {
      uVar11 = uVar26 + (int)uVar33;
      if (*(uint *)(param_2 + 0x18) <= uVar11) goto LAB_059f7504;
      *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4) = 0x1a;
    }
    uVar33 = uVar33 + 1;
  } while ((uVar16 & 0xffffffff) != uVar33);
LAB_059f6424:
  uVar26 = (uVar26 + iVar9) - 1;
LAB_059f6430:
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
  lVar18 = lVar18 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
  plVar28 = (long *)(lVar18 + 0x30);
  *plVar28 = lVar22;
  *(undefined4 *)(lVar18 + 0x20) = 0;
  thunk_FUN_02bb0e9c(plVar28,lVar22);
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  uVar11 = *(uint *)(param_1 + 0x94);
  if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_059f7504;
  lVar24 = lVar18 + 0x20 + (long)(int)uVar11 * 0x178;
  *(undefined1 *)(lVar24 + 0x34) = local_74[0];
  *(short *)(lVar24 + 4) = (short)uVar12;
  if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_059f7504;
  lVar18 = lVar18 + 0x20 + (long)(int)uVar11 * 0x178;
  uVar21 = *(undefined8 *)(lVar15 + (long)(int)uVar26 * 0x10 + 8);
  *(long *)(lVar18 + 0x20) = param_1[0x20];
  *(undefined8 *)(lVar18 + 8) = uVar21;
  thunk_FUN_02bb0e9c();
  if (*(char *)(lVar22 + 0x10) == '\x02') {
    plVar28 = *(long **)(lVar22 + 0x18);
    if (plVar28 == (long *)0x0) goto LAB_059f746c;
    bVar2 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     + 0x130);
    if ((*(byte *)(*plVar28 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
       )) goto LAB_059f746c;
    lVar29 = *plVar34;
    lVar30 = plVar28[0x11];
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar29 = *plVar34;
    }
    uVar11 = FUN_059e8b50(lVar30,plVar28,*(long *)(lVar29 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 8));
    lVar29 = *plVar34;
    *(uint *)(param_1 + 0x24) = uVar11;
    lVar29 = **(long **)(lVar29 + 0xb8);
    if (lVar29 == 0) goto LAB_059f746c;
    if (*(uint *)(lVar29 + 0x18) <= uVar11) goto LAB_059f7504;
    lVar29 = lVar29 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar29 = *(long *)(*plVar1 + 0x38), lVar29 == 0)) goto LAB_059f746c;
    uVar11 = *(uint *)(param_1 + 0x94);
    if (*(uint *)(lVar29 + 0x18) <= uVar11) goto LAB_059f7504;
    lVar29 = lVar29 + (long)(int)uVar11 * 0x178;
    *(undefined4 *)(lVar29 + 0x20) = 1;
    *(int *)(lVar29 + 0x50) = (int)param_1[0x24];
    *(undefined4 *)((long)param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar32;
LAB_059f65b8:
    local_194 = local_194 + 1;
    goto LAB_059f6b10;
  }
  if (bVar7) {
    if (param_1[0x20] == 0) goto LAB_059f746c;
    iVar8 = FUN_059fa888(param_1[0x20],0);
    if (param_1[0x1f] == 0) goto LAB_059f746c;
    iVar9 = FUN_059fa888(param_1[0x1f],0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05a47520(0);
      if ((uVar16 & 1) == 0) {
        if (param_1[0x20] == 0) goto LAB_059f746c;
        lVar18 = *(long *)(param_1[0x20] + 0x88);
      }
      else {
        if (param_1[0x20] == 0) goto LAB_059f746c;
        lVar18 = param_1[0x23];
        uVar21 = *(undefined8 *)(param_1[0x20] + 0x88);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar18 = FUN_05a424e4(lVar18,uVar21,0);
      }
      param_1[0x23] = lVar18;
      thunk_FUN_02bb0e9c(param_1 + 0x23);
      lVar18 = *plVar34;
      lVar24 = param_1[0x23];
      lVar36 = param_1[0x20];
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar18 = *plVar34;
      }
      uVar14 = FUN_059e8914(lVar24,lVar36,*(long *)(lVar18 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x24) = uVar14;
    }
  }
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
  lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38);
  if ((lVar18 == 0) && (lVar18 = *(long *)(lVar22 + 0x20), lVar18 == 0)) goto LAB_059f746c;
  iVar8 = FUN_05d3dde8(lVar18,0);
  if (0 < iVar8) {
    lVar22 = param_1[0x20];
    lVar18 = param_1[0x23];
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar22 = FUN_05a41f60(lVar22,lVar18,iVar8,0);
    param_1[0x23] = lVar22;
    thunk_FUN_02bb0e9c(param_1 + 0x23,lVar22);
    lVar22 = *plVar34;
    lVar18 = param_1[0x23];
    lVar24 = param_1[0x20];
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar22 = *plVar34;
    }
    uVar14 = FUN_059e8914(lVar18,lVar24,*(long *)(lVar22 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
    *(undefined4 *)(param_1 + 0x24) = uVar14;
    bVar7 = true;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar16 = FUN_04cf7fe0(uVar12,0);
  if (((uVar16 & 1) == 0) && (uVar12 != 0x200b)) {
    lVar22 = *plVar34;
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar22 = *plVar34;
    }
    lVar18 = **(long **)(lVar22 + 0xb8);
    if (lVar18 == 0) goto LAB_059f746c;
    uVar11 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_059f7504;
    if (*(int *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar28 = *(long **)(*plVar34 + 0xb8);
        goto LAB_059f69d4;
      }
LAB_059f69dc:
      uVar11 = *(uint *)(param_1 + 0x24);
      uVar23 = *(uint *)(lVar18 + 0x18);
    }
    else {
      if (bVar7) {
        if (param_1[0xf7] == 0) goto LAB_059f746c;
        uVar16 = FUN_04450324(param_1[0xf7],(long)(int)uVar11,&local_9c,
                              *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
        puVar5 = System_Collections_Generic_List<int>___TypeInfo;
        if ((uVar16 & 1) == 0) {
LAB_059f6880:
          lVar22 = param_1[0x23];
          uVar21 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
          FUN_05c59798(uVar21,lVar22,0);
          puVar5 = System_Collections_Generic_List<int>___TypeInfo;
          lVar18 = param_1[0x20];
          lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar22 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar22 = *(long *)puVar5;
          }
          uVar11 = FUN_059e8914(uVar21,lVar18,*(long *)(lVar22 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
          if (param_1[0xf7] == 0) goto LAB_059f746c;
          FUN_0444e9a4(param_1[0xf7],(int)param_1[0x24],uVar11,*(undefined8 *)PTR_DAT_0631fcc8);
          lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        else {
          lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar22 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar22 = *(long *)puVar5;
          }
          lVar18 = **(long **)(lVar22 + 0xb8);
          if (lVar18 == 0) goto LAB_059f746c;
          if (*(uint *)(lVar18 + 0x18) <= local_9c) goto LAB_059f7504;
          uVar11 = local_9c;
          if (0x3ffe < *(int *)(lVar18 + (long)(int)local_9c * 0x38 + 0x54)) goto LAB_059f6880;
        }
        *(uint *)(param_1 + 0x24) = uVar11;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        plVar28 = *(long **)(lVar22 + 0xb8);
        plVar34 = (long *)System_Collections_Generic_List<int>___TypeInfo;
LAB_059f69d4:
        lVar18 = *plVar28;
        if (lVar18 == 0) goto LAB_059f746c;
        goto LAB_059f69dc;
      }
      lVar22 = param_1[0x23];
      uVar21 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
      FUN_05c59798(uVar21,lVar22,0);
      lVar22 = *plVar34;
      lVar18 = param_1[0x20];
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar22 = *plVar34;
      }
      uVar11 = FUN_059e8914(uVar21,lVar18,*(long *)(lVar22 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
      lVar22 = *plVar34;
      *(uint *)(param_1 + 0x24) = uVar11;
      lVar18 = **(long **)(lVar22 + 0xb8);
      if (lVar18 == 0) goto LAB_059f746c;
      uVar23 = *(uint *)(lVar18 + 0x18);
    }
    if (uVar23 <= uVar11) goto LAB_059f7504;
    lVar18 = lVar18 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
  }
  if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
  *(long *)(lVar22 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x48) = param_1[0x23];
  thunk_FUN_02bb0e9c();
  if ((*plVar1 == 0) || (lVar22 = *(long *)(*plVar1 + 0x38), lVar22 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_059f7504;
  *(int *)(lVar22 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x50) = (int)param_1[0x24];
  lVar22 = *plVar34;
  if (*(int *)(lVar22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar22 = *plVar34;
  }
  lVar18 = **(long **)(lVar22 + 0xb8);
  if (lVar18 == 0) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x24)) goto LAB_059f7504;
  *(bool *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38 + 0x41) = bVar7;
  if (bVar7) {
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar18 = **(long **)(*plVar34 + 0xb8);
      if (lVar18 == 0) goto LAB_059f746c;
    }
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x24)) goto LAB_059f7504;
    plVar28 = (long *)(lVar18 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38 + 0x48);
    *plVar28 = lVar29;
    thunk_FUN_02bb0e9c(plVar28,lVar29);
    param_1[0x20] = lVar30;
    thunk_FUN_02bb0e9c(param_1 + 0x20);
    param_1[0x23] = lVar29;
    thunk_FUN_02bb0e9c(param_1 + 0x23,lVar29);
    *(undefined4 *)(param_1 + 0x24) = uVar32;
  }
  uVar11 = *(uint *)(param_1 + 0x94);
LAB_059f6b10:
  *(uint *)(param_1 + 0x94) = uVar11 + 1;
LAB_059f6b18:
  uVar11 = *(uint *)(param_2 + 0x18);
  uVar26 = uVar26 + 1;
  if ((int)uVar11 <= (int)uVar26) goto LAB_059f6b30;
  goto LAB_059f5530;
}


