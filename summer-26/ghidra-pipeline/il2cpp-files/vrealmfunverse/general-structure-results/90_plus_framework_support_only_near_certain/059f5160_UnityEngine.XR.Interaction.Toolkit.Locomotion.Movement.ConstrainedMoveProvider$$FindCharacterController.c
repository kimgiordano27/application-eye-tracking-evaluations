/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ConstrainedMoveProvider$$FindCharacterController
ENTRY_POINT: 059f5160
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_18;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_19
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Locomotion_Movement_ConstrainedMoveProvider__FindCharacterController
          (void)

{
  long *plVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
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
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined4 *puVar24;
  long *unaff_x19;
  uint uVar25;
  undefined8 *unaff_x20;
  uint uVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined4 uVar31;
  ulong uVar32;
  long *unaff_x25;
  long unaff_x26;
  uint *puVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  int iStack000000000000003c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
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
  ulong in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  uint uStack0000000000000158;
  undefined1 uStack000000000000015c;
  
  unaff_x19[0x23] = unaff_x19[0x22];
  thunk_FUN_02bb0e9c(unaff_x19 + 0x23);
  lVar14 = *unaff_x25;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  uVar31 = 0;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar14,0);
    uVar31 = (undefined4)unaff_x19[0x24];
  }
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  FUN_059e8750((int)unaff_x19[0xc6],&stack0x000000f0,uVar31,unaff_x19[0x20],0,unaff_x19[0x23]);
  in_stack_00000068 = in_stack_000000f8;
  in_stack_00000060 = in_stack_000000f0;
  in_stack_00000078 = in_stack_00000108;
  in_stack_00000070 = in_stack_00000100;
  in_stack_00000088 = in_stack_00000118;
  in_stack_00000080 = in_stack_00000110;
  in_stack_00000090 = in_stack_00000120;
  uVar17 = in_stack_00000100;
  FUN_03f1b6b0(*(long *)(*unaff_x25 + 0xb8) + 0x10,&stack0x00000060,*unaff_x20);
  puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  lVar14 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  if (lVar14 == 0) goto LAB_059f746c;
  FUN_0444eb38(lVar14,*(undefined8 *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  FUN_059e8914(unaff_x19[0x23],unaff_x19[0x20],*(long *)(*unaff_x25 + 0xb8),
               *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8));
  plVar1 = unaff_x19 + 0x74;
  if (unaff_x19[0x74] == 0) {
    lVar14 = unaff_x19[0x92];
    lVar28 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05a504e0(lVar28,(int)lVar14,0);
    unaff_x19[0x74] = lVar28;
    thunk_FUN_02bb0e9c(plVar1,lVar28);
  }
  else {
    plVar27 = (long *)(unaff_x19[0x74] + 0x38);
    lVar14 = *plVar27;
    if (lVar14 == 0) goto LAB_059f746c;
    lVar28 = unaff_x19[0x92];
    if (*(int *)(lVar14 + 0x18) < (int)lVar28) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_033359b0(plVar27,(int)lVar28,0,
                   *(undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                  );
    }
  }
  *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
  if ((int)unaff_x19[0x62] == 1) {
    FUN_05a317d0();
    puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__;
    if (unaff_x19[0xcd] == 0) {
      *(undefined4 *)(unaff_x19 + 0x62) = 3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a47000(0);
      if ((uVar15 & 1) == 0) {
        if (unaff_x19[0x20] == 0) goto LAB_059f746c;
        uVar16 = thunk_FUN_05c92238(unaff_x19[0x20],0);
        uVar16 = FUN_04c0a5c4(*(undefined8 *)Method_VRBeats_Carousel_<Focus>b__16_0__,uVar16,
                              *(undefined8 *)Method_VRBeats_Carousel_<MoveLeft>b__14_0__,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c453b4(uVar16);
      }
    }
    else {
      if (unaff_x19[0xce] == 0) goto LAB_059f746c;
      iVar7 = FUN_05c91f88(unaff_x19[0xce],0);
      if (unaff_x19[0x20] == 0) goto LAB_059f746c;
      iVar8 = FUN_05c91f88(unaff_x19[0x20],0);
      if (iVar7 != iVar8) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar15 = FUN_05a47520(0);
        if ((uVar15 & 1) == 0) {
LAB_059f5354:
          if (unaff_x19[0xce] == 0) goto LAB_059f746c;
          lVar14 = *(long *)(unaff_x19[0xce] + 0x88);
          unaff_x19[0xcf] = lVar14;
        }
        else {
          if (unaff_x19[0x23] == 0) goto LAB_059f746c;
          iVar7 = FUN_05c91f88(unaff_x19[0x23],0);
          if ((unaff_x19[0xce] == 0) || (lVar14 = *(long *)(unaff_x19[0xce] + 0x88), lVar14 == 0))
          goto LAB_059f746c;
          iVar8 = FUN_05c91f88(lVar14,0);
          if (iVar7 == iVar8) goto LAB_059f5354;
          if (unaff_x19[0xce] == 0) goto LAB_059f746c;
          lVar14 = unaff_x19[0x23];
          uVar16 = *(undefined8 *)(unaff_x19[0xce] + 0x88);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar14 = FUN_05a424e4(lVar14,uVar16,0);
          unaff_x19[0xcf] = lVar14;
        }
        thunk_FUN_02bb0e9c(unaff_x19 + 0xcf,lVar14);
        lVar14 = *unaff_x25;
        lVar28 = unaff_x19[0xcf];
        lVar29 = unaff_x19[0xce];
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *unaff_x25;
        }
        uVar9 = FUN_059e8914(lVar28,lVar29,*(long *)(lVar14 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
        lVar14 = *unaff_x25;
        *(uint *)(unaff_x19 + 0xd0) = uVar9;
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto LAB_059f746c;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) {
LAB_059f7504:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined4 *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (unaff_x19[0x66] == 0) {
LAB_059f746c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar9 = FUN_0385c3a4(unaff_x19[0x66],0x6c696761,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<CustomStyleResolvedEvent>__
                      );
  if ((int)unaff_x19[0x62] == 6) {
    lVar14 = unaff_x19[99];
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_05c8c45c(lVar14,0,0);
    puVar5 = PTR_DAT_06312310;
    if (((uVar15 & 1) != 0) && (plVar27 = unaff_x19, *(char *)((long)unaff_x19 + 0x42d) == '\0')) {
      while( true ) {
        plVar27 = (long *)plVar27[99];
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar15 = FUN_05c8c45c(plVar27,0,0);
        if ((uVar15 & 1) == 0) goto LAB_059f550c;
        if (plVar27 == (long *)0x0) break;
        (**(code **)(*plVar27 + 0x558))
                  (plVar27,**(undefined8 **)(*(long *)(puVar5 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar27 + 0x560));
        (**(code **)(*plVar27 + 0x948))(plVar27,*(undefined8 *)(*plVar27 + 0x950));
        lVar14 = FUN_05a1fb54(plVar27,0);
        if (lVar14 == 0) break;
        FUN_05a50820(lVar14,0);
      }
      goto LAB_059f746c;
    }
  }
LAB_059f550c:
  if (unaff_x26 == 0) goto LAB_059f746c;
  uVar10 = *(uint *)(unaff_x26 + 0x18);
  if ((int)uVar10 < 1) {
    iStack000000000000003c = 0;
LAB_059f6b30:
    if (*(char *)((long)unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x42d) = 0;
LAB_059f6b3c:
      return (int)unaff_x19[0x94];
    }
    lVar14 = *plVar1;
    if (lVar14 != 0) {
      lVar28 = *unaff_x25;
      *(int *)(lVar14 + 0x1c) = iStack000000000000003c;
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
      ;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar28 = *unaff_x25;
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 8);
      if (lVar28 != 0) {
        uVar9 = FUN_0444e654(lVar28,*(undefined8 *)
                                     Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_3__
                            );
        *(uint *)(lVar14 + 0x34) = uVar9;
        if (*plVar1 != 0) {
          plVar27 = (long *)(*plVar1 + 0x60);
          lVar14 = *plVar27;
          if (lVar14 != 0) {
            uVar15 = (ulong)uVar9;
            if (*(int *)(lVar14 + 0x18) < (int)uVar9) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_03335a5c(plVar27,uVar15,0,
                           *(undefined8 *)
                            Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Insert__
                          );
            }
            if (unaff_x19[0xe4] != 0) {
              plVar27 = unaff_x19 + 0xe4;
              if (*(int *)(unaff_x19[0xe4] + 0x18) < (int)uVar9) {
                uVar10 = uVar9 | (int)uVar9 >> 0x10;
                uVar10 = uVar10 | (int)uVar10 >> 8;
                uVar10 = uVar10 | (int)uVar10 >> 4;
                uVar10 = uVar10 | (int)uVar10 >> 2;
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_03335780(plVar27,(uVar10 | (int)uVar10 >> 1) + 1,
                             *(undefined8 *)Method_System_CharEnumerator__ctor__);
              }
              if (*(char *)((long)unaff_x19 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_059f746c;
                plVar30 = (long *)(*plVar1 + 0x38);
                lVar14 = *plVar30;
                if (lVar14 == 0) goto LAB_059f746c;
                iVar7 = (int)unaff_x19[0x94];
                if (0x100 < *(int *)(lVar14 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  FUN_033359b0(plVar30,iVar8,1,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                              );
                  unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                }
              }
              fVar4 = DAT_01031cf4;
              if (0 < (int)uVar9) {
                lVar14 = 0;
                uVar32 = 0;
                lVar28 = 0x54;
                lVar29 = 0x20;
                do {
                  fVar38 = (float)uVar17;
                  if (uVar32 != 0) {
                    lVar21 = *plVar27;
                    if (lVar21 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                    uVar16 = *(undefined8 *)(lVar21 + uVar32 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar17 = FUN_05c8e378(uVar16,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar21 = *unaff_x25;
                      plVar30 = (long *)*plVar27;
                      if (*(int *)(lVar21 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar21 = *unaff_x25;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = lVar21 + lVar28;
                      in_stack_000000e0 = *(undefined8 *)(lVar21 + -4);
                      in_stack_000000d8 = *(undefined8 *)(lVar21 + -0xc);
                      in_stack_000000d0 = *(undefined8 *)(lVar21 + -0x14);
                      in_stack_000000b8 = *(undefined8 *)(lVar21 + -0x2c);
                      uVar16 = *(undefined8 *)(lVar21 + -0x34);
                      in_stack_000000c8 = *(undefined8 *)(lVar21 + -0x1c);
                      in_stack_000000c0 = *(undefined8 *)(lVar21 + -0x24);
                      in_stack_000000b0 = uVar16;
                      lVar21 = FUN_05a4f1cc();
                      fVar38 = (float)uVar16;
                      if (plVar30 == (long *)0x0) goto LAB_059f746c;
                      if ((lVar21 != 0) &&
                         (lVar18 = thunk_FUN_02b79548(lVar21,*(undefined8 *)(*plVar30 + 0x40)),
                         lVar18 == 0)) {
LAB_059f7508:
                        uVar16 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                        FUN_02b3c988(uVar16,0);
                      }
                      if (*(uint *)(plVar30 + 3) <= uVar32) goto LAB_059f7504;
                      plVar30[uVar32 + 4] = lVar21;
                      thunk_FUN_02bb0e9c((long)plVar30 + lVar29,lVar21);
                      unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                      if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                      goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      puVar19 = (undefined8 *)(lVar21 + lVar14 + 0x30);
                      *puVar19 = 0;
                      thunk_FUN_02bb0e9c(puVar19,0);
                    }
                    if (unaff_x19[0x77] == 0) goto LAB_059f746c;
                    fVar35 = (float)FUN_05c9b26c(unaff_x19[0x77],0);
                    lVar21 = *plVar27;
                    if (lVar21 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                    lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                    if ((lVar21 == 0) ||
                       (fVar37 = fVar38, lVar21 = FUN_05d91048(lVar21,0), lVar21 == 0))
                    goto LAB_059f746c;
                    fVar36 = (float)FUN_05c9b26c(lVar21,0);
                    fVar38 = (fVar38 - fVar37) * (fVar38 - fVar37);
                    uVar17 = (ulong)(uint)fVar38;
                    if (fVar4 <= (fVar35 - fVar36) * (fVar35 - fVar36) + fVar38) {
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_059f746c;
                      lVar21 = FUN_05d91048(lVar21,0);
                      if ((unaff_x19[0x77] == 0) || (FUN_05c9b26c(unaff_x19[0x77],0), lVar21 == 0))
                      goto LAB_059f746c;
                      FUN_05c9b338(lVar21,0);
                    }
                    lVar21 = *plVar27;
                    if (lVar21 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                    lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                    if (lVar21 == 0) goto LAB_059f746c;
                    uVar16 = *(undefined8 *)(lVar21 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar20 = FUN_05c8e378(uVar16,0,0);
                    if ((uVar20 & 1) == 0) {
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0xf0), lVar21 == 0))
                      goto LAB_059f746c;
                      iVar7 = FUN_05c91f88(lVar21,0);
                      lVar21 = *unaff_x25;
                      if (*(int *)(lVar21 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44(lVar21);
                        lVar21 = *unaff_x25;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + lVar28 + -0x1c);
                      if (lVar21 == 0) goto LAB_059f746c;
                      iVar8 = FUN_05c91f88(lVar21,0);
                      if (iVar7 != iVar8) goto LAB_059f6f94;
                    }
                    else {
LAB_059f6f94:
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar18 = *unaff_x25;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar18 = *unaff_x25;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                      if (lVar21 == 0) goto LAB_059f746c;
                      thunk_FUN_05a4ee2c(lVar21,*(undefined8 *)(lVar18 + lVar28 + -0x1c),0);
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar18 = **(long **)(*unaff_x25 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_059f746c;
                      *(undefined8 *)(lVar21 + 0xd8) = *(undefined8 *)(lVar18 + lVar28 + -0x2c);
                      thunk_FUN_02bb0e9c();
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar18 = **(long **)(*unaff_x25 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_059f746c;
                      *(undefined8 *)(lVar21 + 0xe0) = *(undefined8 *)(lVar18 + lVar28 + -0x24);
                      thunk_FUN_02bb0e9c();
                    }
                    lVar21 = *unaff_x25;
                    if (*(int *)(lVar21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar21 = *unaff_x25;
                    }
                    lVar18 = **(long **)(lVar21 + 0xb8);
                    if (lVar18 == 0) goto LAB_059f746c;
                    if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                    if (*(char *)(lVar18 + lVar28 + -0x13) != '\0') {
                      lVar23 = *plVar27;
                      if (lVar23 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar23 = *(long *)(lVar23 + uVar32 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                        lVar18 = **(long **)(*unaff_x25 + 0xb8);
                        if (lVar18 == 0) goto LAB_059f746c;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                      if (lVar23 == 0) goto LAB_059f746c;
                      FUN_05a4ee88(lVar23,*(undefined8 *)(lVar18 + lVar28 + -0x1c),0);
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar18 = **(long **)(*unaff_x25 + 0xb8);
                      if (lVar18 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_059f746c;
                      *(undefined8 *)(lVar21 + 0x100) = *(undefined8 *)(lVar18 + lVar28 + -0xc);
                      thunk_FUN_02bb0e9c(lVar21 + 0x100);
                    }
                  }
                  lVar21 = *unaff_x25;
                  if (*(int *)(lVar21 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar21 = *unaff_x25;
                  }
                  unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_059f746c;
                  if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x60), lVar18 == 0))
                  goto LAB_059f746c;
                  if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                  lVar23 = lVar18 + lVar14;
                  uVar10 = *(uint *)(lVar21 + lVar28);
                  if (*(long *)(lVar23 + 0x30) == 0) {
                    if (uVar32 == 0) {
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
                      FUN_05a43018(&stack0x00000060,unaff_x19[0x7b],uVar10 + 1,0);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_059f7504;
                    }
                    else {
                      lVar21 = *plVar27;
                      if (lVar21 == 0) goto LAB_059f746c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar21 = *(long *)(lVar21 + uVar32 * 8 + 0x20);
                      if (lVar21 == 0) goto LAB_059f746c;
                      uVar16 = FUN_05a4f064(lVar21,0);
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
                      FUN_05a43018(&stack0x00000060,uVar16,uVar10 + 1,0);
                      if (*(uint *)(lVar18 + 0x18) <= uVar32) goto LAB_059f7504;
                      lVar18 = lVar18 + lVar14;
                    }
                    memmove((void *)(lVar18 + 0x20),&stack0x00000060,0x50);
                    thunk_FUN_02bb0e9c(lVar23 + 0x20,0);
                    unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
                  }
                  else {
                    iVar7 = *(int *)(*(long *)(lVar23 + 0x30) + 0x18);
                    if (iVar7 < (int)(uVar10 * 4)) {
                      if ((int)uVar10 < 0x401) {
                        uVar10 = uVar10 | (int)uVar10 >> 0x10;
                        uVar10 = uVar10 | (int)uVar10 >> 8;
                        uVar10 = uVar10 | (int)uVar10 >> 4;
                        uVar10 = uVar10 | (int)uVar10 >> 2;
                        uVar10 = uVar10 | (int)uVar10 >> 1;
LAB_059f72bc:
                        iVar7 = uVar10 + 1;
                      }
                      else {
LAB_059f71e4:
                        iVar7 = uVar10 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                                  + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      FUN_05a43df4(lVar23 + 0x20,iVar7,0);
                    }
                    else if ((*(char *)((long)unaff_x19 + 0x359) != '\0') && (0 < (int)uVar10)) {
                      iVar8 = iVar7 + 3;
                      if (-1 < iVar7) {
                        iVar8 = iVar7;
                      }
                      if (0x100 < (int)((iVar8 >> 2) - uVar10)) {
                        if (uVar10 < 0x401) {
                          uVar10 = uVar10 >> 4 | uVar10 >> 8 | uVar10;
                          uVar10 = uVar10 | uVar10 >> 2;
                          uVar10 = uVar10 | uVar10 >> 1;
                          goto LAB_059f72bc;
                        }
                        goto LAB_059f71e4;
                      }
                    }
                  }
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto LAB_059f746c;
                  lVar18 = *unaff_x25;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar18 = *unaff_x25;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_059f746c;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar32) || (*(uint *)(lVar21 + 0x18) <= uVar32))
                  goto LAB_059f7504;
                  *(undefined8 *)(lVar21 + lVar14 + 0x68) = *(undefined8 *)(lVar18 + lVar28 + -0x1c)
                  ;
                  thunk_FUN_02bb0e9c();
                  uVar32 = uVar32 + 1;
                  lVar14 = lVar14 + 0x50;
                  lVar28 = lVar28 + 0x38;
                  lVar29 = lVar29 + 8;
                } while (uVar15 != uVar32);
              }
              lVar14 = *plVar27;
              if (lVar14 != 0) {
                lVar28 = (long)(int)uVar9 + 4;
                do {
                  uVar9 = (uint)*(undefined8 *)(lVar14 + 0x18);
                  if ((long)(int)uVar9 <= lVar28 + -4) goto LAB_059f6b3c;
                  uVar10 = (uint)uVar15;
                  if (uVar9 <= uVar10) goto LAB_059f7504;
                  uVar16 = *(undefined8 *)(lVar14 + lVar28 * 8);
                  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar17 = FUN_05c8c45c(uVar16,0,0);
                  if ((uVar17 & 1) == 0) goto LAB_059f6b3c;
                  if ((*plVar1 == 0) || (lVar14 = *(long *)(*plVar1 + 0x60), lVar14 == 0)) break;
                  if (lVar28 + -4 < (long)*(int *)(lVar14 + 0x18)) {
                    lVar14 = *plVar27;
                    if (lVar14 == 0) break;
                    if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_059f7504;
                    lVar14 = *(long *)(lVar14 + lVar28 * 8);
                    if ((lVar14 == 0) || (lVar14 = FUN_05d91928(lVar14,0), lVar14 == 0)) break;
                    FUN_05f6baf8(lVar14,0,0);
                  }
                  lVar14 = *plVar27;
                  lVar28 = lVar28 + 1;
                  uVar15 = (ulong)(uVar10 + 1);
                } while (lVar14 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_059f746c;
  }
  uVar25 = 0;
  lVar14 = unaff_x26 + 0x20;
  iStack000000000000003c = 0;
LAB_059f5530:
  if (uVar10 <= uVar25) goto LAB_059f7504;
  puVar33 = (uint *)(lVar14 + (long)(int)uVar25 * 0x10 + 4);
  if (*puVar33 == 0) goto LAB_059f6b30;
  if (*plVar1 == 0) goto LAB_059f746c;
  plVar27 = (long *)(*plVar1 + 0x38);
  lVar29 = *plVar27;
  lVar28 = unaff_x19[0x94];
  if ((lVar29 == 0) || (*(int *)(lVar29 + 0x18) <= (int)lVar28)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_033359b0(plVar27,(int)lVar28 + 1,1,
                 *(undefined8 *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Clear__
                );
    uVar10 = *(uint *)(unaff_x26 + 0x18);
  }
  if (uVar10 <= uVar25) goto LAB_059f7504;
  uVar10 = *puVar33;
  uVar31 = (undefined4)unaff_x19[0x24];
  if ((*(char *)((long)unaff_x19 + 0x33a) != '\0') && (uVar10 == 0x3c)) {
    uVar15 = FUN_05a26cd4();
    uVar22 = uStack0000000000000158;
    if ((uVar15 & 1) == 0) {
      uVar31 = (undefined4)unaff_x19[0x24];
      goto LAB_059f57a8;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar25) goto LAB_059f7504;
    iVar7 = *(int *)(lVar14 + (long)(int)uVar25 * 0x10 + 8);
    if ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)unaff_x19 + 0x292) = 1;
    }
    uVar25 = uStack0000000000000158;
    if (*(int *)((long)unaff_x19 + 0x65c) != 1) goto LAB_059f6b18;
    lVar28 = *unaff_x25;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar28 = *unaff_x25;
    }
    lVar28 = **(long **)(lVar28 + 0xb8);
    if (lVar28 != 0) {
      if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar28 + 0x18)) {
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
        *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178;
            sVar3 = *(short *)((long)unaff_x19 + 0x6bc);
            *(long *)(lVar28 + 0x40) = unaff_x19[0x20];
            *(short *)(lVar28 + 0x24) = sVar3 + -0x2000;
            thunk_FUN_02bb0e9c();
            if ((unaff_x19[0x74] != 0) && (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 != 0))
            {
              uVar10 = *(uint *)(unaff_x19 + 0x94);
              if (uVar10 < *(uint *)(lVar28 + 0x18)) {
                *(int *)(lVar28 + 0x20 + (long)(int)uVar10 * 0x178 + 0x30) = (int)unaff_x19[0x24];
                if ((unaff_x19[0xd6] != 0) &&
                   (lVar29 = FUN_05a4afd0(unaff_x19[0xd6],0), lVar29 != 0)) {
                  uVar16 = FUN_037a6268(lVar29,*(undefined4 *)((long)unaff_x19 + 0x6bc),
                                        *(undefined8 *)
                                         Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                                       );
                  if (uVar10 < *(uint *)(lVar28 + 0x18)) {
                    *(undefined8 *)(lVar28 + 0x20 + (long)(int)uVar10 * 0x178 + 0x10) = uVar16;
                    thunk_FUN_02bb0e9c();
                    if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                      uVar10 = *(uint *)(unaff_x19 + 0x94);
                      if (uVar10 < *(uint *)(lVar28 + 0x18)) {
                        puVar24 = (undefined4 *)(lVar28 + 0x20 + (long)(int)uVar10 * 0x178);
                        *puVar24 = *(undefined4 *)((long)unaff_x19 + 0x65c);
                        puVar24[2] = iVar7;
                        if (uVar22 < *(uint *)(unaff_x26 + 0x18)) {
                          *(int *)(lVar28 + 0x20 + (long)(int)uVar10 * 0x178 + 0xc) =
                               (*(int *)(lVar14 + (long)(int)uVar22 * 0x10 + 8) - iVar7) + 1;
                          *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                          *(undefined4 *)(unaff_x19 + 0x24) = uVar31;
                          uVar25 = uVar22;
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
  lVar29 = unaff_x19[0x20];
  lVar28 = unaff_x19[0x23];
  uStack000000000000015c = 0;
  if (*(int *)((long)unaff_x19 + 0x65c) != 0) goto LAB_059f5870;
  uVar22 = *(uint *)((long)unaff_x19 + 0x284);
  if ((uVar22 >> 4 & 1) == 0) {
    if ((uVar22 >> 3 & 1) == 0) {
      if ((uVar22 >> 5 & 1) != 0) goto LAB_059f57d0;
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
        goto LAB_059f586c;
      }
    }
  }
  else {
LAB_059f57d0:
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_04cfa5b8(uVar10,0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_04cfa840(uVar10,0);
LAB_059f586c:
      uVar10 = uVar10 & 0xffff;
    }
  }
LAB_059f5870:
  uVar22 = uVar25 + 1;
  if ((int)uVar22 < (int)*(uint *)(unaff_x26 + 0x18)) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_059f7504;
    uVar26 = *(uint *)(lVar14 + (long)(int)uVar22 * 0x10 + 4);
  }
  else {
    uVar26 = 0;
  }
  uVar11 = uVar10;
  if (*(char *)((long)unaff_x19 + 0x33b) == '\0') {
LAB_059f59f8:
    lVar21 = FUN_05a31b98();
    if (lVar21 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar25) goto LAB_059f7504;
      FUN_05a32240();
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar7 = FUN_05a46ee8(0);
      bVar6 = *(uint *)(unaff_x26 + 0x18) <= uVar25;
      if (iVar7 == 0) {
        if (bVar6) goto LAB_059f7504;
        uVar11 = 0x25a1;
      }
      else {
        if (bVar6) goto LAB_059f7504;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_05a46ee8(0);
      }
      *puVar33 = uVar11;
      lVar21 = unaff_x19[0x20];
      if (*(int *)(*(long *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar21 = FUN_05a0ed94(uVar11,lVar21,1,0,400,(long)&stack0x00000158 + 4,0);
      if (lVar21 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar21 = FUN_05a47460(0);
        if (lVar21 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar21 = FUN_05a47460(0);
          if (lVar21 == 0) goto LAB_059f746c;
          if (0 < *(int *)(lVar21 + 0x18)) {
            lVar21 = unaff_x19[0x20];
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar16 = FUN_05a47460(0);
            if (*(int *)(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)
                                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                                );
            }
            lVar21 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_hoverExited
                               (uVar11,lVar21,uVar16,1,0,400,(long)&stack0x00000158 + 4,0);
            if (lVar21 != 0) goto LAB_059f5b0c;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05a4705c(0);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
        }
        uVar15 = FUN_05c8c45c(uVar16,0,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar16 = FUN_05a4705c(0);
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                              );
          }
          lVar21 = FUN_05a0ed94(uVar11,uVar16,1,0,400,(long)&stack0x00000158 + 4,0);
          if (lVar21 != 0) goto LAB_059f5b0c;
        }
        if (*(uint *)(unaff_x26 + 0x18) <= uVar25) goto LAB_059f7504;
        *puVar33 = 0x20;
        lVar21 = unaff_x19[0x20];
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = 0x20;
        lVar21 = FUN_05a0ed94(0x20,lVar21,1,0,400,(long)&stack0x00000158 + 4,0);
        if (lVar21 == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar25) goto LAB_059f7504;
          *puVar33 = 3;
          lVar21 = unaff_x19[0x20];
          if (*(int *)(*(long *)
                        Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar11 = 3;
          lVar21 = FUN_05a0ed94(3,lVar21,1,0,400,(long)&stack0x00000158 + 4,0);
        }
      }
LAB_059f5b0c:
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a47000(0);
      if ((uVar15 & 1) == 0) {
        plVar27 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        if (uVar10 >> 0x10 == 0) {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uVar10);
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x00000060);
          if (plVar27 == (long *)0x0) goto LAB_059f746c;
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if ((int)plVar27[3] == 0) goto LAB_059f7504;
          plVar27[4] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 4,lVar18);
          if (unaff_x19[0x1f] == 0) goto LAB_059f746c;
          lVar18 = thunk_FUN_05c92238(unaff_x19[0x1f],0);
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffe) == 0) goto LAB_059f7504;
          plVar27[5] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 5,lVar18);
          if (lVar21 == 0) goto LAB_059f746c;
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,*(undefined4 *)(lVar21 + 0x14));
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x000000f0);
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if (*(uint *)(plVar27 + 3) < 3) goto LAB_059f7504;
          plVar27[6] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 6,lVar18);
          lVar18 = thunk_FUN_05c92238();
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffc) == 0) goto LAB_059f7504;
          plVar27[7] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 7,lVar18);
          puVar19 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_set_Item__
          ;
        }
        else {
          in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,uVar10);
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x00000060);
          if (plVar27 == (long *)0x0) goto LAB_059f746c;
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if ((int)plVar27[3] == 0) goto LAB_059f7504;
          plVar27[4] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 4,lVar18);
          if (unaff_x19[0x1f] == 0) goto LAB_059f746c;
          lVar18 = thunk_FUN_05c92238(unaff_x19[0x1f],0);
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffe) == 0) goto LAB_059f7504;
          plVar27[5] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 5,lVar18);
          if (lVar21 == 0) goto LAB_059f746c;
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,*(undefined4 *)(lVar21 + 0x14));
          lVar18 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                             (*(undefined8 *)(PTR_DAT_06312310 + 0x50),&stack0x000000f0);
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if (*(uint *)(plVar27 + 3) < 3) goto LAB_059f7504;
          plVar27[6] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 6,lVar18);
          lVar18 = thunk_FUN_05c92238();
          if ((lVar18 != 0) &&
             (lVar23 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
          goto LAB_059f7508;
          if ((*(uint *)(plVar27 + 3) & 0xfffffffc) == 0) goto LAB_059f7504;
          plVar27[7] = lVar18;
          thunk_FUN_02bb0e9c(plVar27 + 7,lVar18);
          puVar19 = (undefined8 *)
                    Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_RemoveAt__
          ;
        }
        uVar16 = FUN_04c0afb0(*puVar19,plVar27,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c453b4(uVar16);
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
    if (((uVar15 & 1) == 0) || (uVar26 == 0xfe0e)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseEnterWindowEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a517d4(uVar10,0);
      if (((uVar15 & 1) == 0) || (uVar26 != 0xfe0f)) goto LAB_059f59f8;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar21 = FUN_05a47870(0);
    if (lVar21 == 0) goto LAB_059f59f8;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar21 = FUN_05a47870(0);
    if (lVar21 == 0) goto LAB_059f746c;
    if (*(int *)(lVar21 + 0x18) < 1) goto LAB_059f59f8;
    lVar21 = unaff_x19[0x20];
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05a47870(0);
    lVar18 = unaff_x19[0x50];
    lVar23 = unaff_x19[0x47];
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_set_Item__
                        );
    }
    lVar21 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters
                       (uVar10,lVar21,uVar16,1,(int)lVar18,(int)lVar23,(long)&stack0x00000158 + 4,0)
    ;
    unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
    if (lVar21 == 0) goto LAB_059f59f8;
  }
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
  puVar19 = (undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38);
  *puVar19 = 0;
  thunk_FUN_02bb0e9c(puVar19,0);
  if (lVar21 == 0) goto LAB_059f746c;
  if (*(char *)(lVar21 + 0x10) == '\x01') {
    if (*(long *)(lVar21 + 0x18) == 0) goto LAB_059f746c;
    iVar7 = FUN_059fa888(*(long *)(lVar21 + 0x18),0);
    if (unaff_x19[0x20] == 0) goto LAB_059f746c;
    iVar8 = FUN_059fa888(unaff_x19[0x20],0);
    bVar6 = iVar7 != iVar8;
    if (bVar6) {
      plVar27 = *(long **)(lVar21 + 0x18);
      if (plVar27 == (long *)0x0) {
        plVar27 = (long *)0x0;
        unaff_x19[0x20] = 0;
      }
      else {
        lVar18 = *(long *)
                  Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
        ;
        bVar2 = *(byte *)(lVar18 + 0x130);
        if (*(byte *)(*plVar27 + 0x130) < bVar2) {
          plVar30 = (long *)0x0;
        }
        else {
          plVar30 = plVar27;
          if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
            plVar30 = (long *)0x0;
          }
        }
        unaff_x19[0x20] = (long)plVar30;
        if (*(byte *)(*plVar27 + 0x130) < bVar2) {
          plVar27 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) != lVar18) {
          plVar27 = (long *)0x0;
        }
      }
      thunk_FUN_02bb0e9c(unaff_x19 + 0x20,plVar27);
    }
    if ((uVar26 >> 4 == 0xfe0) || (uVar26 - 0xe0100 < 0xf0)) {
      if (unaff_x19[0x20] == 0) goto LAB_059f746c;
      iVar7 = FUN_05a08158(unaff_x19[0x20],uVar11,uVar26,0);
      if (iVar7 != 0) {
        if (unaff_x19[0x20] == 0) goto LAB_059f746c;
        uVar15 = FUN_05a0a5b8(unaff_x19[0x20],iVar7,&stack0x00000140,0);
        if ((uVar15 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
          goto LAB_059f746c;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
          *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
               in_stack_00000140;
          thunk_FUN_02bb0e9c();
        }
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar22) goto LAB_059f7504;
      *(undefined4 *)(lVar14 + (long)(int)uVar22 * 0x10 + 4) = 0x1a;
      uVar25 = uVar22;
    }
    if ((uVar9 & 1) != 0) {
      if (((unaff_x19[0x20] == 0) || (lVar18 = *(long *)(unaff_x19[0x20] + 0x178), lVar18 == 0)) ||
         (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0)) goto LAB_059f746c;
      uVar15 = FUN_045e2b94(lVar18,*(undefined4 *)(lVar21 + 0x28),&stack0x00000148,
                            *(undefined8 *)
                             Method_System_Text_RegularExpressions_CaptureCollection_GetCapture__);
      if ((uVar15 & 1) == 0) goto LAB_059f6430;
      if (in_stack_00000148 == 0) goto LAB_059f6b30;
      iVar7 = 0;
      while (unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo,
            iVar7 < *(int *)(in_stack_00000148 + 0x18)) {
        auVar39 = FUN_0376cfc0(in_stack_00000148,iVar7,
                               *(undefined8 *)
                                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_RemoveAt__
                              );
        lVar18 = auVar39._0_8_;
        if (lVar18 == 0) goto LAB_059f746c;
        uVar15 = *(ulong *)(lVar18 + 0x18);
        iVar8 = (int)uVar15;
        if (1 < iVar8) {
          lVar23 = 0;
          do {
            uVar10 = uVar25 + 1 + (int)lVar23;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_059f7504;
            if (unaff_x19[0x20] == 0) goto LAB_059f746c;
            iVar12 = FUN_05a0807c(unaff_x19[0x20],
                                  *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x10 + 4),0);
            if (*(uint *)(lVar18 + 0x18) <= (int)lVar23 + 1U) goto LAB_059f7504;
            if (iVar12 != *(int *)(lVar18 + 0x24 + lVar23 * 4)) goto LAB_059f6348;
            lVar23 = lVar23 + 1;
          } while (iVar8 + -1 != (int)lVar23);
        }
        if (auVar39._8_4_ != 0) {
          if (unaff_x19[0x20] == 0) goto LAB_059f746c;
          uVar32 = FUN_05a0a5b8(unaff_x19[0x20],auVar39._8_8_ & 0xffffffff,&stack0x00000138,0);
          unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
          if ((uVar32 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
            goto LAB_059f746c;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
            *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38) =
                 in_stack_00000138;
            thunk_FUN_02bb0e9c();
            if (iVar8 < 1) goto LAB_059f6424;
            uVar32 = 0;
            goto LAB_059f63e0;
          }
        }
LAB_059f6348:
        iVar7 = iVar7 + 1;
        if (in_stack_00000148 == 0) goto LAB_059f746c;
      }
    }
  }
  else {
    bVar6 = false;
  }
  goto LAB_059f6430;
LAB_059f63e0:
  do {
    if (uVar32 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar25) goto LAB_059f7504;
      *(int *)(lVar14 + (long)(int)uVar25 * 0x10 + 0xc) = iVar8;
    }
    else {
      uVar10 = uVar25 + (int)uVar32;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_059f7504;
      *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x10 + 4) = 0x1a;
    }
    uVar32 = uVar32 + 1;
  } while ((uVar15 & 0xffffffff) != uVar32);
LAB_059f6424:
  uVar25 = (uVar25 + iVar8) - 1;
LAB_059f6430:
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
  lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178;
  plVar27 = (long *)(lVar18 + 0x30);
  *plVar27 = lVar21;
  *(undefined4 *)(lVar18 + 0x20) = 0;
  thunk_FUN_02bb0e9c(plVar27,lVar21);
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  uVar10 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_059f7504;
  lVar23 = lVar18 + 0x20 + (long)(int)uVar10 * 0x178;
  *(undefined1 *)(lVar23 + 0x34) = uStack000000000000015c;
  *(short *)(lVar23 + 4) = (short)uVar11;
  if (*(uint *)(unaff_x26 + 0x18) <= uVar25) goto LAB_059f7504;
  lVar18 = lVar18 + 0x20 + (long)(int)uVar10 * 0x178;
  uVar16 = *(undefined8 *)(lVar14 + (long)(int)uVar25 * 0x10 + 8);
  *(long *)(lVar18 + 0x20) = unaff_x19[0x20];
  *(undefined8 *)(lVar18 + 8) = uVar16;
  thunk_FUN_02bb0e9c();
  if (*(char *)(lVar21 + 0x10) == '\x02') {
    plVar27 = *(long **)(lVar21 + 0x18);
    if (plVar27 == (long *)0x0) goto LAB_059f746c;
    bVar2 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     + 0x130);
    if ((*(byte *)(*plVar27 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
       )) goto LAB_059f746c;
    lVar28 = *unaff_x25;
    lVar29 = plVar27[0x11];
    if (*(int *)(lVar28 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar28 = *unaff_x25;
    }
    uVar10 = FUN_059e8b50(lVar29,plVar27,*(long *)(lVar28 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 8));
    lVar28 = *unaff_x25;
    *(uint *)(unaff_x19 + 0x24) = uVar10;
    lVar28 = **(long **)(lVar28 + 0xb8);
    if (lVar28 == 0) goto LAB_059f746c;
    if (*(uint *)(lVar28 + 0x18) <= uVar10) goto LAB_059f7504;
    lVar28 = lVar28 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 == 0)) goto LAB_059f746c;
    uVar10 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar28 + 0x18) <= uVar10) goto LAB_059f7504;
    lVar28 = lVar28 + (long)(int)uVar10 * 0x178;
    *(undefined4 *)(lVar28 + 0x20) = 1;
    *(int *)(lVar28 + 0x50) = (int)unaff_x19[0x24];
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x24) = uVar31;
LAB_059f65b8:
    iStack000000000000003c = iStack000000000000003c + 1;
    goto LAB_059f6b10;
  }
  if (bVar6) {
    if (unaff_x19[0x20] == 0) goto LAB_059f746c;
    iVar7 = FUN_059fa888(unaff_x19[0x20],0);
    if (unaff_x19[0x1f] == 0) goto LAB_059f746c;
    iVar8 = FUN_059fa888(unaff_x19[0x1f],0);
    if (iVar7 != iVar8) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05a47520(0);
      if ((uVar15 & 1) == 0) {
        if (unaff_x19[0x20] == 0) goto LAB_059f746c;
        lVar18 = *(long *)(unaff_x19[0x20] + 0x88);
      }
      else {
        if (unaff_x19[0x20] == 0) goto LAB_059f746c;
        lVar18 = unaff_x19[0x23];
        uVar16 = *(undefined8 *)(unaff_x19[0x20] + 0x88);
        if (*(int *)(*(long *)
                      Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar18 = FUN_05a424e4(lVar18,uVar16,0);
      }
      unaff_x19[0x23] = lVar18;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x23);
      lVar18 = *unaff_x25;
      lVar23 = unaff_x19[0x23];
      lVar34 = unaff_x19[0x20];
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar18 = *unaff_x25;
      }
      uVar13 = FUN_059e8914(lVar23,lVar34,*(long *)(lVar18 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x24) = uVar13;
    }
  }
  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
  lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x38);
  if ((lVar18 == 0) && (lVar18 = *(long *)(lVar21 + 0x20), lVar18 == 0)) goto LAB_059f746c;
  iVar7 = FUN_05d3dde8(lVar18,0);
  if (0 < iVar7) {
    lVar21 = unaff_x19[0x20];
    lVar18 = unaff_x19[0x23];
    if (*(int *)(*(long *)
                  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_IList_Add__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar21 = FUN_05a41f60(lVar21,lVar18,iVar7,0);
    unaff_x19[0x23] = lVar21;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x23,lVar21);
    lVar21 = *unaff_x25;
    lVar18 = unaff_x19[0x23];
    lVar23 = unaff_x19[0x20];
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar21 = *unaff_x25;
    }
    uVar13 = FUN_059e8914(lVar18,lVar23,*(long *)(lVar21 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
    *(undefined4 *)(unaff_x19 + 0x24) = uVar13;
    bVar6 = true;
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar15 = FUN_04cf7fe0(uVar11,0);
  if (((uVar15 & 1) == 0) && (uVar11 != 0x200b)) {
    lVar21 = *unaff_x25;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar21 = *unaff_x25;
    }
    lVar18 = **(long **)(lVar21 + 0xb8);
    if (lVar18 == 0) goto LAB_059f746c;
    uVar10 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_059f7504;
    if (*(int *)(lVar18 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar27 = *(long **)(*unaff_x25 + 0xb8);
        goto LAB_059f69d4;
      }
LAB_059f69dc:
      uVar10 = *(uint *)(unaff_x19 + 0x24);
      uVar22 = *(uint *)(lVar18 + 0x18);
    }
    else {
      if (bVar6) {
        if (unaff_x19[0xf7] == 0) goto LAB_059f746c;
        uVar15 = FUN_04450324(unaff_x19[0xf7],(long)(int)uVar10,(long)&stack0x00000130 + 4,
                              *(undefined8 *)UnityEngine_SphereCollider_TypeInfo);
        puVar5 = System_Collections_Generic_List<int>___TypeInfo;
        if ((uVar15 & 1) == 0) {
LAB_059f6880:
          lVar21 = unaff_x19[0x23];
          uVar16 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
          FUN_05c59798(uVar16,lVar21,0);
          puVar5 = System_Collections_Generic_List<int>___TypeInfo;
          lVar18 = unaff_x19[0x20];
          lVar21 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar21 = *(long *)puVar5;
          }
          uVar10 = FUN_059e8914(uVar16,lVar18,*(long *)(lVar21 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
          if (unaff_x19[0xf7] == 0) goto LAB_059f746c;
          FUN_0444e9a4(unaff_x19[0xf7],(int)unaff_x19[0x24],uVar10,*(undefined8 *)PTR_DAT_0631fcc8);
          lVar21 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        else {
          lVar21 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
          if (*(int *)(lVar21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar21 = *(long *)puVar5;
          }
          lVar18 = **(long **)(lVar21 + 0xb8);
          if (lVar18 == 0) goto LAB_059f746c;
          if (*(uint *)(lVar18 + 0x18) <= in_stack_00000130._4_4_) goto LAB_059f7504;
          uVar10 = in_stack_00000130._4_4_;
          if (0x3ffe < *(int *)(lVar18 + (long)(int)in_stack_00000130._4_4_ * 0x38 + 0x54))
          goto LAB_059f6880;
        }
        *(uint *)(unaff_x19 + 0x24) = uVar10;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar21 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
        }
        plVar27 = *(long **)(lVar21 + 0xb8);
        unaff_x25 = (long *)System_Collections_Generic_List<int>___TypeInfo;
LAB_059f69d4:
        lVar18 = *plVar27;
        if (lVar18 == 0) goto LAB_059f746c;
        goto LAB_059f69dc;
      }
      lVar21 = unaff_x19[0x23];
      uVar16 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
      FUN_05c59798(uVar16,lVar21,0);
      lVar21 = *unaff_x25;
      lVar18 = unaff_x19[0x20];
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar21 = *unaff_x25;
      }
      uVar10 = FUN_059e8914(uVar16,lVar18,*(long *)(lVar21 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
      lVar21 = *unaff_x25;
      *(uint *)(unaff_x19 + 0x24) = uVar10;
      lVar18 = **(long **)(lVar21 + 0xb8);
      if (lVar18 == 0) goto LAB_059f746c;
      uVar22 = *(uint *)(lVar18 + 0x18);
    }
    if (uVar22 <= uVar10) goto LAB_059f7504;
    lVar18 = lVar18 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
  }
  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x38), lVar21 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
  *(long *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x48) = unaff_x19[0x23];
  thunk_FUN_02bb0e9c();
  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x38), lVar21 == 0)) goto LAB_059f746c;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94)) goto LAB_059f7504;
  *(int *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x178 + 0x50) = (int)unaff_x19[0x24];
  lVar21 = *unaff_x25;
  if (*(int *)(lVar21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar21 = *unaff_x25;
  }
  lVar18 = **(long **)(lVar21 + 0xb8);
  if (lVar18 == 0) goto LAB_059f746c;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_059f7504;
  *(bool *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x41) = bVar6;
  if (bVar6) {
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar18 = **(long **)(*unaff_x25 + 0xb8);
      if (lVar18 == 0) goto LAB_059f746c;
    }
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x24)) goto LAB_059f7504;
    plVar27 = (long *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38 + 0x48);
    *plVar27 = lVar28;
    thunk_FUN_02bb0e9c(plVar27,lVar28);
    unaff_x19[0x20] = lVar29;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x20);
    unaff_x19[0x23] = lVar28;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x23,lVar28);
    *(undefined4 *)(unaff_x19 + 0x24) = uVar31;
  }
  uVar10 = *(uint *)(unaff_x19 + 0x94);
LAB_059f6b10:
  *(uint *)(unaff_x19 + 0x94) = uVar10 + 1;
LAB_059f6b18:
  uVar10 = *(uint *)(unaff_x26 + 0x18);
  uVar25 = uVar25 + 1;
  if ((int)uVar10 <= (int)uVar25) goto LAB_059f6b30;
  goto LAB_059f5530;
}


