/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_97
ENTRY_POINT: 05be89ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_14;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined4
Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_97(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  uint uVar21;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar22;
  long *plVar23;
  long *unaff_x24;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 uVar28;
  long lVar29;
  uint *puVar30;
  undefined1 auVar31 [16];
  uint uStack0000000000000018;
  undefined8 *in_stack_00000038;
  int iStack0000000000000040;
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
  undefined4 in_stack_00000180;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  uint uStack00000000000001d8;
  undefined1 uStack00000000000001dc;
  
  FUN_0602283c(param_1,param_2,0);
  if (*(long *)(unaff_x19 + 0x330) == 0) {
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar6 = FUN_03b22888(*(long *)(unaff_x19 + 0x330),0x6c696761,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_AppendWithCapacity__
                      );
  if (*(int *)(unaff_x19 + 0x310) == 6) {
    uVar22 = *(undefined8 *)(unaff_x19 + 0x318);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_0606a004(uVar22,0,0);
    if (((uVar11 & 1) != 0) && (*(char *)(unaff_x19 + 0x42d) == '\0')) {
      plVar12 = *(long **)(unaff_x19 + 0x318);
      if (plVar12 == (long *)0x0) goto LAB_05bea9b0;
      (**(code **)(*plVar12 + 0x558))
                (plVar12,**(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar12 + 0x560));
    }
  }
  if (unaff_x21 == 0) goto LAB_05bea9b0;
  uVar7 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar7 < 1) {
    iStack0000000000000040 = 0;
LAB_05bea110:
    if (*(char *)(unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
LAB_05bea11c:
      return *(undefined4 *)(unaff_x19 + 0x4a0);
    }
    lVar19 = *unaff_x26;
    if (lVar19 != 0) {
      *(int *)(lVar19 + 0x1c) = iStack0000000000000040;
      lVar13 = *unaff_x24;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *unaff_x24;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      if (lVar13 != 0) {
        uVar6 = FUN_047c1490(lVar13,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                            );
        *(uint *)(lVar19 + 0x34) = uVar6;
        if (*unaff_x26 != 0) {
          plVar12 = (long *)(*unaff_x26 + 0x60);
          lVar19 = *plVar12;
          if (lVar19 != 0) {
            uVar11 = (ulong)uVar6;
            if (*(int *)(lVar19 + 0x18) < (int)uVar6) {
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_035631b4(plVar12,uVar11,0,
                           *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
            }
            if (*(long *)(unaff_x19 + 0x720) != 0) {
              plVar12 = (long *)(unaff_x19 + 0x720);
              if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar6) {
                uVar7 = uVar6 | (int)uVar6 >> 0x10;
                uVar7 = uVar7 | (int)uVar7 >> 8;
                uVar7 = uVar7 | (int)uVar7 >> 4;
                uVar7 = uVar7 | (int)uVar7 >> 2;
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562eb8(plVar12,(uVar7 | (int)uVar7 >> 1) + 1,
                             *(undefined8 *)
                              Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
              }
              if (*(char *)(unaff_x19 + 0x359) != '\0') {
                if (*unaff_x26 == 0) goto LAB_05bea9b0;
                plVar23 = (long *)(*unaff_x26 + 0x38);
                lVar19 = *plVar23;
                if (lVar19 == 0) goto LAB_05bea9b0;
                iVar9 = *(int *)(unaff_x19 + 0x4a0);
                if (0x100 < *(int *)(lVar19 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03563108(plVar23,iVar10,1,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__)
                  ;
                  unaff_x24 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              if (0 < (int)uVar6) {
                lVar19 = 0;
                uVar27 = 0;
                lVar13 = 0x54;
                lVar29 = 0x20;
                do {
                  if (uVar27 != 0) {
                    lVar18 = *plVar12;
                    if (lVar18 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                    uVar22 = *(undefined8 *)(lVar18 + uVar27 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar15 = UnityEngine_Font__add_textureRebuilt(uVar22,0,0);
                    if ((uVar15 & 1) != 0) {
                      lVar18 = *unaff_x24;
                      plVar23 = (long *)*plVar12;
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar18 = *unaff_x24;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = lVar18 + lVar13;
                      in_stack_00000170 = *(undefined8 *)(lVar18 + -4);
                      in_stack_00000168 = *(undefined8 *)(lVar18 + -0xc);
                      in_stack_00000160 = *(undefined8 *)(lVar18 + -0x14);
                      in_stack_00000158 = *(undefined8 *)(lVar18 + -0x1c);
                      in_stack_00000150 = *(undefined8 *)(lVar18 + -0x24);
                      in_stack_00000148 = *(undefined8 *)(lVar18 + -0x2c);
                      in_stack_00000140 = *(undefined8 *)(lVar18 + -0x34);
                      lVar18 = FUN_05c48f74();
                      if (plVar23 == (long *)0x0) goto LAB_05bea9b0;
                      if ((lVar18 != 0) &&
                         (lVar16 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar16 == 0)) {
LAB_05bea9cc:
                        uVar22 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                        FUN_02d609b4(uVar22,0);
                      }
                      if (*(uint *)(plVar23 + 3) <= uVar27) goto LAB_05bea9c8;
                      plVar23[uVar27 + 4] = lVar18;
                      thunk_FUN_02dd37b4((long)plVar23 + lVar29,lVar18);
                      unaff_x24 = (long *)
                                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                      ;
                      if ((*unaff_x26 == 0) || (lVar18 = *(long *)(*unaff_x26 + 0x60), lVar18 == 0))
                      goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      puVar17 = (undefined8 *)(lVar18 + lVar19 + 0x30);
                      *puVar17 = 0;
                      thunk_FUN_02dd37b4(puVar17,0);
                    }
                    lVar18 = *plVar12;
                    if (lVar18 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                    lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_05bea9b0;
                    uVar22 = *(undefined8 *)(lVar18 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar15 = UnityEngine_Font__add_textureRebuilt(uVar22,0,0);
                    if ((uVar15 & 1) == 0) {
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0))
                      goto LAB_05bea9b0;
                      iVar9 = FUN_0606f30c(lVar18,0);
                      lVar18 = *unaff_x24;
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar18);
                        lVar18 = *unaff_x24;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = *(long *)(lVar18 + lVar13 + -0x1c);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      iVar10 = FUN_0606f30c(lVar18,0);
                      if (iVar9 != iVar10) goto LAB_05bea4b4;
                    }
                    else {
LAB_05bea4b4:
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar16 = *unaff_x24;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (*(int *)(lVar16 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar16 = *unaff_x24;
                      }
                      lVar16 = **(long **)(lVar16 + 0xb8);
                      if (lVar16 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      thunk_FUN_05c48a90(lVar18,*(undefined8 *)(lVar16 + lVar13 + -0x1c),0);
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar16 = **(long **)(*unaff_x24 + 0xb8);
                      if (lVar16 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar16 + lVar13 + -0x2c);
                      thunk_FUN_02dd37b4();
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar16 = **(long **)(*unaff_x24 + 0xb8);
                      if (lVar16 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(lVar16 + lVar13 + -0x24);
                      thunk_FUN_02dd37b4();
                    }
                    lVar18 = *unaff_x24;
                    if (*(int *)(lVar18 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar18 = *unaff_x24;
                    }
                    lVar16 = **(long **)(lVar18 + 0xb8);
                    if (lVar16 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                    if (*(char *)(lVar16 + lVar13 + -0x13) != '\0') {
                      lVar20 = *plVar12;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar16 = **(long **)(*unaff_x24 + 0xb8);
                        if (lVar16 == 0) goto LAB_05bea9b0;
                      }
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      FUN_05c48ac0(lVar20,*(undefined8 *)(lVar16 + lVar13 + -0x1c),0);
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar16 = **(long **)(*unaff_x24 + 0xb8);
                      if (lVar16 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)(lVar16 + lVar13 + -0xc);
                      thunk_FUN_02dd37b4();
                    }
                  }
                  lVar18 = *unaff_x24;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar18 = *unaff_x24;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_05bea9b0;
                  if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                  if ((*unaff_x26 == 0) || (lVar16 = *(long *)(*unaff_x26 + 0x60), lVar16 == 0))
                  goto LAB_05bea9b0;
                  if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                  lVar20 = *(long *)(lVar16 + lVar19 + 0x30);
                  uVar7 = *(uint *)(lVar18 + lVar13);
                  if (lVar20 == 0) {
                    if (uVar27 == 0) {
                      in_stack_00000128 = 0;
                      in_stack_00000120 = 0;
                      in_stack_00000138 = 0;
                      in_stack_00000130 = 0;
                      in_stack_00000108 = 0;
                      in_stack_00000100 = 0;
                      in_stack_00000118 = 0;
                      in_stack_00000110 = 0;
                      in_stack_000000f8 = 0;
                      in_stack_000000f0 = 0;
                      FUN_05c3debc(&stack0x000000f0,*(undefined8 *)(unaff_x19 + 0x3d8),uVar7 + 1,0);
                      memcpy(&stack0x000000a0,&stack0x000000f0,0x50);
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bea9c8;
                      memcpy((void *)(lVar16 + lVar19 + 0x20),&stack0x000000a0,0x50);
                      __dest = (void *)(lVar16 + 0x20);
                    }
                    else {
                      lVar18 = *plVar12;
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      uVar22 = FUN_05c48e08(lVar18,0);
                      in_stack_00000128 = 0;
                      in_stack_00000120 = 0;
                      in_stack_00000138 = 0;
                      in_stack_00000130 = 0;
                      in_stack_00000108 = 0;
                      in_stack_00000100 = 0;
                      in_stack_00000118 = 0;
                      in_stack_00000110 = 0;
                      in_stack_000000f8 = 0;
                      in_stack_000000f0 = 0;
                      FUN_05c3debc(&stack0x000000f0,uVar22,uVar7 + 1,0);
                      memcpy(&stack0x00000050,&stack0x000000f0,0x50);
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_05bea9c8;
                      __dest = (void *)(lVar16 + lVar19 + 0x20);
                      memcpy(__dest,&stack0x00000050,0x50);
                    }
                    thunk_FUN_02dd37b4(__dest,0);
                  }
                  else {
                    iVar9 = *(int *)(lVar20 + 0x18);
                    if (iVar9 < (int)(uVar7 * 4)) {
                      if ((int)uVar7 < 0x401) {
                        uVar21 = (int)uVar7 >> 0x10;
LAB_05bea834:
                        uVar7 = uVar7 | uVar21 | (int)(uVar7 | uVar21) >> 8;
                        uVar7 = uVar7 | (int)uVar7 >> 4;
                        uVar7 = uVar7 | (int)uVar7 >> 2;
                        iVar9 = (uVar7 | (int)uVar7 >> 1) + 1;
                      }
                      else {
LAB_05bea7c8:
                        iVar9 = uVar7 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_05c3ecd4(lVar16 + lVar19 + 0x20,iVar9,0);
                    }
                    else if ((0 < (int)uVar7) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
                      iVar10 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar10 = iVar9;
                      }
                      if (0x100 < (int)((iVar10 >> 2) - uVar7)) {
                        if (0x400 < (int)uVar7) goto LAB_05bea7c8;
                        uVar21 = uVar7 >> 0x10;
                        goto LAB_05bea834;
                      }
                    }
                  }
                  unaff_x24 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((*unaff_x26 == 0) || (lVar18 = *(long *)(*unaff_x26 + 0x60), lVar18 == 0))
                  goto LAB_05bea9b0;
                  lVar16 = *(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar16 = *unaff_x24;
                  }
                  lVar16 = **(long **)(lVar16 + 0xb8);
                  if (lVar16 == 0) goto LAB_05bea9b0;
                  if ((*(uint *)(lVar16 + 0x18) <= uVar27) || (*(uint *)(lVar18 + 0x18) <= uVar27))
                  goto LAB_05bea9c8;
                  *(undefined8 *)(lVar18 + lVar19 + 0x68) = *(undefined8 *)(lVar16 + lVar13 + -0x1c)
                  ;
                  thunk_FUN_02dd37b4();
                  uVar27 = uVar27 + 1;
                  lVar19 = lVar19 + 0x50;
                  lVar13 = lVar13 + 0x38;
                  lVar29 = lVar29 + 8;
                } while (uVar11 != uVar27);
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              lVar19 = *plVar12;
              if (lVar19 != 0) {
                lVar13 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3) + 0x20;
                lVar29 = (long)(int)uVar6 * 0x50 + 0x20;
                do {
                  uVar6 = (uint)uVar11;
                  if ((int)*(uint *)(lVar19 + 0x18) <= (int)uVar6) goto LAB_05bea11c;
                  if (*(uint *)(lVar19 + 0x18) <= uVar6) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  uVar22 = *(undefined8 *)(lVar19 + lVar13);
                  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar11 = FUN_0606a004(uVar22,0,0);
                  if ((uVar11 & 1) == 0) goto LAB_05bea11c;
                  if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x60), lVar19 == 0))
                  break;
                  uVar7 = *(uint *)(lVar19 + 0x18);
                  if ((int)uVar6 < (int)uVar7) {
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      uVar7 = *(uint *)(lVar19 + 0x18);
                    }
                    if (uVar7 <= uVar6) goto LAB_05bea9c8;
                    FUN_05c3fc70(lVar19 + lVar29,0,1,0);
                  }
                  lVar19 = *plVar12;
                  uVar11 = (ulong)(uVar6 + 1);
                  lVar29 = lVar29 + 0x50;
                  lVar13 = lVar13 + 8;
                } while (lVar19 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_05bea9b0;
  }
  uVar21 = 0;
  iStack0000000000000040 = 0;
LAB_05be8b1c:
  if (uVar7 <= uVar21) goto LAB_05bea9c8;
  puVar30 = (uint *)(unaff_x21 + (long)(int)uVar21 * 0x10 + 0x24);
  if (*puVar30 == 0) goto LAB_05bea110;
  if (*unaff_x26 == 0) goto LAB_05bea9b0;
  plVar12 = (long *)(*unaff_x26 + 0x38);
  lVar19 = *plVar12;
  iVar9 = *(int *)(unaff_x19 + 0x4a0);
  if ((lVar19 == 0) || (*(int *)(lVar19 + 0x18) <= iVar9)) {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03563108(plVar12,iVar9 + 1,1,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    uVar7 = *(uint *)(unaff_x21 + 0x18);
  }
  if (uVar7 <= uVar21) goto LAB_05bea9c8;
  uVar7 = *puVar30;
  if ((uVar7 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
    uVar11 = FUN_05c217f4();
    uVar25 = uStack00000000000001d8;
    if ((uVar11 & 1) == 0) goto LAB_05be8d80;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
    iVar9 = *(int *)(unaff_x21 + (long)(int)uVar21 * 0x10 + 0x28);
    if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x292) = 1;
    }
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    unaff_x24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar21 = uStack00000000000001d8;
    if (*(int *)(unaff_x19 + 0x65c) != 1) goto LAB_05be9d7c;
    lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = *(long *)puVar4;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 != 0) {
      if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar19 + 0x18)) {
        lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
        if ((*unaff_x26 != 0) && (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 != 0)) {
          if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
            *(short *)(lVar19 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
            *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
            thunk_FUN_02dd37b4();
            if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
               (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 != 0)) {
              uVar7 = *(uint *)(unaff_x19 + 0x4a0);
              if (uVar7 < *(uint *)(lVar19 + 0x18)) {
                *(undefined4 *)(lVar19 + (long)(int)uVar7 * 0x178 + 0x50) =
                     *(undefined4 *)(unaff_x19 + 0x120);
                if ((*(long *)(unaff_x19 + 0x6b0) != 0) &&
                   (lVar13 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar13 != 0)) {
                  uVar22 = FUN_03aac1c4(lVar13,*(undefined4 *)(unaff_x19 + 0x6bc),
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                       );
                  if (uVar7 < *(uint *)(lVar19 + 0x18)) {
                    *(undefined8 *)(lVar19 + (long)(int)uVar7 * 0x178 + 0x30) = uVar22;
                    thunk_FUN_02dd37b4();
                    if ((*unaff_x26 != 0) && (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 != 0)) {
                      uVar7 = *(uint *)(unaff_x19 + 0x4a0);
                      if (uVar7 < *(uint *)(lVar19 + 0x18)) {
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x65c);
                        lVar13 = lVar19 + (long)(int)uVar7 * 0x178;
                        *(int *)(lVar13 + 0x28) = iVar9;
                        *(undefined4 *)(lVar13 + 0x20) = uVar8;
                        if (uVar25 < *(uint *)(unaff_x21 + 0x18)) {
                          *(int *)(lVar19 + (long)(int)uVar7 * 0x178 + 0x2c) =
                               (*(int *)(unaff_x21 + (long)(int)uVar25 * 0x10 + 0x28) - iVar9) + 1;
                          *(undefined4 *)(unaff_x19 + 0x65c) = 0;
                          *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
                          iStack0000000000000040 = iStack0000000000000040 + 1;
                          unaff_x24 = (long *)
                                      Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                          ;
                          uVar21 = uVar25;
                          goto LAB_05be9d74;
                        }
                      }
                      goto LAB_05bea9c8;
                    }
                    goto LAB_05bea9b0;
                  }
                  goto LAB_05bea9c8;
                }
                goto LAB_05bea9b0;
              }
              goto LAB_05bea9c8;
            }
            goto LAB_05bea9b0;
          }
          goto LAB_05bea9c8;
        }
        goto LAB_05bea9b0;
      }
      goto LAB_05bea9c8;
    }
    goto LAB_05bea9b0;
  }
LAB_05be8d80:
  uStack00000000000001dc = 0;
  uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
  if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05be8e54;
  uVar25 = *(uint *)(unaff_x19 + 0x284);
  if ((uVar25 >> 4 & 1) == 0) {
    if ((uVar25 >> 3 & 1) == 0) {
      if ((uVar25 >> 5 & 1) != 0) goto LAB_05be8da8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_04f83744(uVar7,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_04f83be8(uVar7,0);
        goto LAB_05be8e50;
      }
    }
  }
  else {
LAB_05be8da8:
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f837e4(uVar7,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_04f83a70(uVar7,0);
LAB_05be8e50:
      uVar7 = uVar7 & 0xffff;
    }
  }
LAB_05be8e54:
  uVar25 = uVar21 + 1;
  if ((int)uVar25 < (int)*(uint *)(unaff_x21 + 0x18)) {
    if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
    uVar24 = *(uint *)(unaff_x21 + (long)(int)uVar25 * 0x10 + 0x24);
  }
  else {
    uVar24 = 0;
  }
  uStack0000000000000018 = uVar7;
  if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_05be8fd0:
    lVar19 = FUN_05c2c458();
    if (lVar19 == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
      FUN_05c2c9e8();
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar9 = FUN_05c41df4(0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
      if (iVar9 == 0) {
        uStack0000000000000018 = 0x25a1;
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uStack0000000000000018 = FUN_05c41df4(0);
      }
      *puVar30 = uStack0000000000000018;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar19 = FUN_05c09ca0(uStack0000000000000018,uVar14,1,uVar8,uVar2,(long)&stack0x000001d8 + 4,0
                           );
      if (lVar19 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar19 = FUN_05c4236c(0);
        if (lVar19 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar19 = FUN_05c4236c(0);
          if (lVar19 == 0) goto LAB_05bea9b0;
          if (0 < *(int *)(lVar19 + 0x18)) {
            lVar19 = *unaff_x22;
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar14 = FUN_05c4236c(0);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
            }
            lVar19 = FUN_05c0a248(uStack0000000000000018,lVar19,uVar14,1,uVar8,uVar2,
                                  (long)&stack0x000001d8 + 4,0);
            if (lVar19 != 0) goto LAB_05be9df8;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_05c41f68(0);
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
        }
        uVar11 = FUN_0606a004(uVar14,0,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar14 = FUN_05c41f68(0);
          uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar19 = FUN_05c09ca0(uStack0000000000000018,uVar14,1,uVar8,uVar2,
                                (long)&stack0x000001d8 + 4,0);
          if (lVar19 != 0) goto LAB_05be9df8;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
        *puVar30 = 0x20;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar19 = FUN_05c09ca0(0x20,uVar14,1,uVar8,uVar2,(long)&stack0x000001d8 + 4,0);
        if (lVar19 == 0) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
          *puVar30 = 3;
          uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          uStack0000000000000018 = 3;
          lVar19 = FUN_05c09ca0(3,uVar14,1,uVar8,uVar2,(long)&stack0x000001d8 + 4,0);
        }
        else {
          uStack0000000000000018 = 0x20;
        }
      }
LAB_05be9df8:
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05c41f0c(0);
      if ((uVar11 & 1) == 0) {
        plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
        if (uVar7 >> 0x10 == 0) {
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar7);
          lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
          if (plVar12 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar12[3] == 0) goto LAB_05bea9c8;
          plVar12[4] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 4,lVar13);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar13 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar12 + 3) < 2) goto LAB_05bea9c8;
          plVar12[5] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 5,lVar13);
          if (lVar19 == 0) goto LAB_05bea9b0;
          in_stack_00000180 = *(undefined4 *)(lVar19 + 0x14);
          lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar12 + 3) < 3) goto LAB_05bea9c8;
          plVar12[6] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 6,lVar13);
          lVar13 = thunk_FUN_0606f5c0();
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar12 + 3) < 4) goto LAB_05bea9c8;
          plVar12[7] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 7,lVar13);
          puVar17 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
        }
        else {
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar7);
          lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
          if (plVar12 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar12[3] == 0) goto LAB_05bea9c8;
          plVar12[4] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 4,lVar13);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar13 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar12 + 3) < 2) goto LAB_05bea9c8;
          plVar12[5] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 5,lVar13);
          if (lVar19 == 0) goto LAB_05bea9b0;
          in_stack_00000180 = *(undefined4 *)(lVar19 + 0x14);
          lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar12 + 3) < 3) goto LAB_05bea9c8;
          plVar12[6] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 6,lVar13);
          lVar13 = thunk_FUN_0606f5c0();
          if ((lVar13 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar12 + 3) < 4) goto LAB_05bea9c8;
          plVar12[7] = lVar13;
          thunk_FUN_02dd37b4(plVar12 + 7,lVar13);
          puVar17 = (undefined8 *)
                    Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
        }
        uVar14 = FUN_04e8e72c(*puVar17,plVar12,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602283c(uVar14);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_05c4c7a8(uVar7,0);
    if ((uVar24 == 0xfe0e) || ((uVar11 & 1) == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05c4c728(uVar7,0);
      if ((uVar24 != 0xfe0f) || ((uVar11 & 1) == 0)) goto LAB_05be8fd0;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar19 = FUN_05c4277c(0);
    if (lVar19 == 0) goto LAB_05be8fd0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar19 = FUN_05c4277c(0);
    if (lVar19 == 0) goto LAB_05bea9b0;
    if (*(int *)(lVar19 + 0x18) < 1) goto LAB_05be8fd0;
    lVar19 = *unaff_x22;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar14 = FUN_05c4277c(0);
    uVar8 = *(undefined4 *)(unaff_x19 + 0x280);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    }
    lVar19 = FUN_05c0a464(uVar7,lVar19,uVar14,1,uVar8,uVar2,(long)&stack0x000001d8 + 4,0);
    if (lVar19 == 0) goto LAB_05be8fd0;
  }
  if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  puVar17 = (undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  *puVar17 = 0;
  thunk_FUN_02dd37b4(puVar17,0);
  if (lVar19 == 0) goto LAB_05bea9b0;
  if (*(char *)(lVar19 + 0x10) == '\x01') {
    if (*(long *)(lVar19 + 0x18) == 0) goto LAB_05bea9b0;
    iVar9 = FUN_05bf59d4(*(long *)(lVar19 + 0x18),0);
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar10 = FUN_05bf59d4(*unaff_x22,0);
    if (iVar9 != iVar10) {
      plVar12 = *(long **)(lVar19 + 0x18);
      if (plVar12 == (long *)0x0) {
        *unaff_x22 = 0;
      }
      else {
        bVar3 = *(byte *)(*(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__ +
                         0x130);
        if (*(byte *)(*plVar12 + 0x130) < bVar3) {
          plVar12 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
                 *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__) {
          plVar12 = (long *)0x0;
        }
        *unaff_x22 = (long)plVar12;
      }
      thunk_FUN_02dd37b4();
    }
    bVar5 = iVar9 != iVar10;
    if ((uVar24 >> 4 == 0xfe0) || (uVar24 - 0xe0100 < 0xf0)) {
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar9 = FUN_05c03084(*unaff_x22,uStack0000000000000018,uVar24,0);
      if (iVar9 != 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar11 = FUN_05c05510(*unaff_x22,iVar9,&stack0x000001c8,0);
        if ((uVar11 & 1) != 0) {
          if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0))
          goto LAB_05bea9b0;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
          *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_000001c8;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
      *(undefined4 *)(unaff_x21 + (long)(int)uVar25 * 0x10 + 0x24) = 0x1a;
      uVar21 = uVar25;
    }
    if ((uVar6 & 1) == 0) goto LAB_05be9670;
    if (((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x178), lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
    uVar11 = FUN_04937278(lVar13,*(undefined4 *)(lVar19 + 0x28),&stack0x000001d0,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                         );
    if ((uVar11 & 1) != 0) {
      unaff_x24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (in_stack_000001d0 == 0) goto LAB_05bea110;
      iVar9 = 0;
      while (iVar9 < *(int *)(in_stack_000001d0 + 0x18)) {
        auVar31 = FUN_03a7e878(in_stack_000001d0,iVar9,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                              );
        lVar13 = auVar31._0_8_;
        if (lVar13 == 0) goto LAB_05bea9b0;
        uVar11 = *(ulong *)(lVar13 + 0x18);
        uVar7 = (uint)uVar11;
        if (1 < (int)uVar7) {
          uVar25 = 1;
          do {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar21 + uVar25) goto LAB_05bea9c8;
            if (*unaff_x22 == 0) goto LAB_05bea9b0;
            iVar10 = FUN_05c02fa8(*unaff_x22,
                                  *(undefined4 *)
                                   (unaff_x21 + (long)(int)(uVar21 + uVar25) * 0x10 + 0x24),0);
            if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_05bea9c8;
            if (iVar10 != *(int *)(lVar13 + (long)(int)uVar25 * 4 + 0x20)) goto LAB_05be95b4;
            uVar25 = uVar25 + 1;
          } while (uVar7 != uVar25);
        }
        if (auVar31._8_4_ != 0) {
          if (*unaff_x22 == 0) goto LAB_05bea9b0;
          uVar27 = FUN_05c05510(*unaff_x22,auVar31._8_8_ & 0xffffffff,&stack0x000001c0,0);
          if ((uVar27 & 1) != 0) {
            if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0))
            goto LAB_05bea9b0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
            *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_000001c0;
            thunk_FUN_02dd37b4();
            if ((int)uVar7 < 1) goto LAB_05be9668;
            uVar27 = 0;
            uVar25 = 0;
            if (uVar21 <= *(uint *)(unaff_x21 + 0x18)) {
              uVar25 = *(uint *)(unaff_x21 + 0x18) - uVar21;
            }
            goto LAB_05be9634;
          }
        }
LAB_05be95b4:
        iVar9 = iVar9 + 1;
        if (in_stack_000001d0 == 0) goto LAB_05bea9b0;
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_05be9670;
  while( true ) {
    lVar13 = unaff_x21 + (long)(int)(uVar21 + (int)uVar27) * 0x10;
    if (uVar27 == 0) {
      *(uint *)(lVar13 + 0x2c) = uVar7;
    }
    else {
      *(undefined4 *)(lVar13 + 0x24) = 0x1a;
    }
    uVar27 = uVar27 + 1;
    if ((uVar11 & 0xffffffff) == uVar27) break;
LAB_05be9634:
    if (uVar25 == uVar27) goto LAB_05bea9c8;
  }
LAB_05be9668:
  uVar21 = (uVar21 + uVar7) - 1;
LAB_05be9670:
  if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar12 = (long *)(lVar13 + 0x30);
  *plVar12 = lVar19;
  *(undefined4 *)(lVar13 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar12,lVar19);
  if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  uVar7 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_05bea9c8;
  lVar29 = lVar13 + (long)(int)uVar7 * 0x178;
  *(short *)(lVar29 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar29 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
  lVar13 = lVar13 + (long)(int)uVar7 * 0x178;
  *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)uVar21 * 0x10 + 0x28);
  *(long *)(lVar13 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  unaff_x24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar19 + 0x10) == '\x02') {
    plVar12 = *(long **)(lVar19 + 0x18);
    if (plVar12 == (long *)0x0) goto LAB_05bea9b0;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar13 = plVar12[0x11];
    lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = *unaff_x24;
    }
    uVar7 = FUN_05be3d0c(lVar13,plVar12,*(long *)(lVar19 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar7;
    lVar19 = **(long **)(*unaff_x24 + 0xb8);
    if (lVar19 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar19 + 0x18) <= uVar7) goto LAB_05bea9c8;
    lVar19 = lVar19 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
    if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 == 0))
    goto LAB_05bea9b0;
    uVar7 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar19 + 0x18) <= uVar7) goto LAB_05bea9c8;
    lVar19 = lVar19 + (long)(int)uVar7 * 0x178;
    *(undefined4 *)(lVar19 + 0x20) = 1;
    *(undefined4 *)(lVar19 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
    iStack0000000000000040 = iStack0000000000000040 + 1;
    goto LAB_05be9d74;
  }
  if (bVar5) {
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar9 = FUN_05bf59d4(*unaff_x22,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar10 = FUN_05bf59d4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar9 != iVar10) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05c4242c(0);
      if ((uVar11 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar14 = *(undefined8 *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar26 = *(undefined8 *)(*unaff_x22 + 0x88);
        uVar14 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_05c3d38c(uVar14,uVar26,0);
      }
      *in_stack_00000038 = uVar14;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      uVar14 = *in_stack_00000038;
      lVar29 = *unaff_x22;
      lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *(long *)puVar4;
      }
      uVar8 = FUN_05be3ad4(uVar14,lVar29,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
    }
  }
  if (*(long *)(lVar19 + 0x20) == 0) goto LAB_05bea9b0;
  iVar9 = FUN_06114b10(*(long *)(lVar19 + 0x20),0);
  if (0 < iVar9) {
    if (*(long *)(lVar19 + 0x20) == 0) goto LAB_05bea9b0;
    lVar13 = *unaff_x22;
    uVar14 = *in_stack_00000038;
    uVar8 = FUN_06114b10(*(long *)(lVar19 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    uVar14 = FUN_05c3ce0c(lVar13,uVar14,uVar8,0);
    *in_stack_00000038 = uVar14;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar14);
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar14 = *in_stack_00000038;
    lVar13 = *unaff_x22;
    lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = *(long *)puVar4;
    }
    uVar8 = FUN_05be3ad4(uVar14,lVar13,*(long *)(lVar19 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 != 0x200b) && ((uVar11 & 1) == 0)) {
    lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = *(long *)puVar4;
    }
    lVar13 = **(long **)(lVar19 + 0xb8);
    if (lVar13 == 0) goto LAB_05bea9b0;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_05bea9c8;
    if (*(int *)(lVar13 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
        if (lVar13 == 0) goto LAB_05bea9b0;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      if (bVar5) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
        uVar11 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar7,(long)&stack0x000001b8 + 4,
                              *(undefined8 *)PTR_DAT_0678dea8);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar11 & 1) == 0) {
LAB_05be9ad4:
          uVar26 = *in_stack_00000038;
          uVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar14,uVar26,0);
          puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          lVar13 = *unaff_x22;
          lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar19 = *(long *)puVar4;
          }
          uVar7 = FUN_05be3ad4(uVar14,lVar13,*(long *)(lVar19 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
          FUN_047c17c8(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar7,
                       *(undefined8 *)PTR_DAT_06768b20);
          lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar19 = *(long *)puVar4;
          }
          lVar13 = **(long **)(lVar19 + 0xb8);
          if (lVar13 == 0) goto LAB_05bea9b0;
          if (*(uint *)(lVar13 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
          uVar7 = in_stack_000001b8._4_4_;
          if (0x3ffe < *(int *)(lVar13 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
          goto LAB_05be9ad4;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar7 = *(uint *)(unaff_x19 + 0x120);
          lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        lVar13 = **(long **)(lVar19 + 0xb8);
      }
      else {
        uVar26 = *in_stack_00000038;
        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar14,uVar26,0);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar13 = *unaff_x22;
        lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar19 = *(long *)puVar4;
        }
        uVar7 = FUN_05be3ad4(uVar14,lVar13,*(long *)(lVar19 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        lVar13 = **(long **)(*(long *)puVar4 + 0xb8);
      }
      if (lVar13 == 0) goto LAB_05bea9b0;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_05bea9c8;
    lVar13 = lVar13 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
  }
  unaff_x24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar7 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar7;
  lVar19 = *unaff_x24;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar19 = *unaff_x24;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar13 = **(long **)(lVar19 + 0xb8);
  if (lVar13 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_05bea9c8;
  *(bool *)(lVar13 + (long)(int)uVar7 * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar13 == 0) goto LAB_05bea9b0;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_05bea9c8;
    puVar17 = (undefined8 *)(lVar13 + (long)(int)uVar7 * 0x38 + 0x48);
    *puVar17 = uVar22;
    thunk_FUN_02dd37b4(puVar17,uVar22);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar28;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = uVar22;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar22);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
  }
  uVar7 = *(uint *)(unaff_x19 + 0x4a0);
LAB_05be9d74:
  *(uint *)(unaff_x19 + 0x4a0) = uVar7 + 1;
LAB_05be9d7c:
  uVar7 = *(uint *)(unaff_x21 + 0x18);
  uVar21 = uVar21 + 1;
  if ((int)uVar7 <= (int)uVar21) goto LAB_05bea110;
  goto LAB_05be8b1c;
}


