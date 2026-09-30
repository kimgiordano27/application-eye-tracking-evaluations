/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_95
ENTRY_POINT: 05be881c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_16;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined4 Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_95(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  long lVar19;
  long lVar20;
  long unaff_x19;
  uint uVar21;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long *unaff_x26;
  long *unaff_x28;
  long lVar29;
  uint *puVar30;
  undefined1 auVar31 [16];
  uint uStack0000000000000018;
  long *in_stack_00000038;
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
  
  *(undefined4 *)(unaff_x19 + 0x65c) = 0;
  plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if (*(int *)(unaff_x19 + 0x310) == 1) {
    FUN_05c2c0b8();
    if (*(long *)(unaff_x19 + 0x668) == 0) {
      *(undefined4 *)(unaff_x19 + 0x310) = 3;
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05c41f0c(0);
      if ((uVar11 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar22 = thunk_FUN_0606f5c0(*unaff_x22,0);
        uVar22 = FUN_04e8db00(*(undefined8 *)
                               Method_UnityEngine_XR_InputFeatureUsage<Quaternion>_get_name__,uVar22
                              ,*(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
        }
        FUN_0602283c(uVar22);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_05bea9b0;
      iVar6 = FUN_0606f30c(*(long *)(unaff_x19 + 0x670),0);
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar7 = FUN_0606f30c(*unaff_x22,0);
      if (iVar6 != iVar7) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_05c4242c(0);
        if ((uVar11 & 1) == 0) {
LAB_05be8908:
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_05bea9b0;
          *(undefined8 *)(unaff_x19 + 0x678) = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
        }
        else {
          if (*in_stack_00000038 == 0) goto LAB_05bea9b0;
          iVar6 = FUN_0606f30c(*in_stack_00000038,0);
          if ((*(long *)(unaff_x19 + 0x670) == 0) ||
             (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x670) + 0x88), lVar12 == 0))
          goto LAB_05bea9b0;
          iVar7 = FUN_0606f30c(lVar12,0);
          if (iVar6 == iVar7) goto LAB_05be8908;
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_05bea9b0;
          uVar22 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar24 = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) ==
              0) {
            thunk_FUN_02dbd7b4();
          }
          uVar22 = FUN_05c3d38c(uVar22,uVar24,0);
          *(undefined8 *)(unaff_x19 + 0x678) = uVar22;
          plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        thunk_FUN_02dd37b4(unaff_x19 + 0x678);
        lVar12 = *plVar25;
        uVar22 = *(undefined8 *)(unaff_x19 + 0x678);
        uVar24 = *(undefined8 *)(unaff_x19 + 0x670);
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar12 = *plVar25;
        }
        uVar8 = FUN_05be3ad4(uVar22,uVar24,*(long *)(lVar12 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x680) = uVar8;
        lVar12 = **(long **)(*plVar25 + 0xb8);
        if (lVar12 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x330) == 0) {
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar8 = FUN_03b22888(*(long *)(unaff_x19 + 0x330),0x6c696761,
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
      plVar13 = *(long **)(unaff_x19 + 0x318);
      if (plVar13 == (long *)0x0) goto LAB_05bea9b0;
      (**(code **)(*plVar13 + 0x558))
                (plVar13,**(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar13 + 0x560));
    }
  }
  if (unaff_x21 == 0) goto LAB_05bea9b0;
  uVar9 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar9 < 1) {
    iStack0000000000000040 = 0;
LAB_05bea110:
    if (*(char *)(unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
LAB_05bea11c:
      return *(undefined4 *)(unaff_x19 + 0x4a0);
    }
    lVar12 = *unaff_x26;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 0x1c) = iStack0000000000000040;
      lVar14 = *plVar25;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar14 = *plVar25;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 != 0) {
        uVar8 = FUN_047c1490(lVar14,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                            );
        *(uint *)(lVar12 + 0x34) = uVar8;
        if (*unaff_x26 != 0) {
          plVar13 = (long *)(*unaff_x26 + 0x60);
          lVar12 = *plVar13;
          if (lVar12 != 0) {
            uVar11 = (ulong)uVar8;
            if (*(int *)(lVar12 + 0x18) < (int)uVar8) {
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_035631b4(plVar13,uVar11,0,
                           *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
            }
            if (*(long *)(unaff_x19 + 0x720) != 0) {
              plVar13 = (long *)(unaff_x19 + 0x720);
              if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar8) {
                uVar9 = uVar8 | (int)uVar8 >> 0x10;
                uVar9 = uVar9 | (int)uVar9 >> 8;
                uVar9 = uVar9 | (int)uVar9 >> 4;
                uVar9 = uVar9 | (int)uVar9 >> 2;
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562eb8(plVar13,(uVar9 | (int)uVar9 >> 1) + 1,
                             *(undefined8 *)
                              Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
              }
              if (*(char *)(unaff_x19 + 0x359) != '\0') {
                if (*unaff_x26 == 0) goto LAB_05bea9b0;
                plVar23 = (long *)(*unaff_x26 + 0x38);
                lVar12 = *plVar23;
                if (lVar12 == 0) goto LAB_05bea9b0;
                iVar6 = *(int *)(unaff_x19 + 0x4a0);
                if (0x100 < *(int *)(lVar12 + 0x18) - iVar6) {
                  iVar7 = 0x100;
                  if (0x100 < iVar6 + 1) {
                    iVar7 = iVar6 + 1;
                  }
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03563108(plVar23,iVar7,1,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__)
                  ;
                  plVar25 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              if (0 < (int)uVar8) {
                lVar12 = 0;
                uVar28 = 0;
                lVar14 = 0x54;
                lVar29 = 0x20;
                do {
                  if (uVar28 != 0) {
                    lVar19 = *plVar13;
                    if (lVar19 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                    uVar22 = *(undefined8 *)(lVar19 + uVar28 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar16 = UnityEngine_Font__add_textureRebuilt(uVar22,0,0);
                    if ((uVar16 & 1) != 0) {
                      lVar19 = *plVar25;
                      plVar23 = (long *)*plVar13;
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar19 = *plVar25;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = lVar19 + lVar14;
                      in_stack_00000170 = *(undefined8 *)(lVar19 + -4);
                      in_stack_00000168 = *(undefined8 *)(lVar19 + -0xc);
                      in_stack_00000160 = *(undefined8 *)(lVar19 + -0x14);
                      in_stack_00000158 = *(undefined8 *)(lVar19 + -0x1c);
                      in_stack_00000150 = *(undefined8 *)(lVar19 + -0x24);
                      in_stack_00000148 = *(undefined8 *)(lVar19 + -0x2c);
                      in_stack_00000140 = *(undefined8 *)(lVar19 + -0x34);
                      lVar19 = FUN_05c48f74();
                      if (plVar23 == (long *)0x0) goto LAB_05bea9b0;
                      if ((lVar19 != 0) &&
                         (lVar17 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar17 == 0)) {
LAB_05bea9cc:
                        uVar22 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                        FUN_02d609b4(uVar22,0);
                      }
                      if (*(uint *)(plVar23 + 3) <= uVar28) goto LAB_05bea9c8;
                      plVar23[uVar28 + 4] = lVar19;
                      thunk_FUN_02dd37b4((long)plVar23 + lVar29,lVar19);
                      plVar25 = (long *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                      if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x60), lVar19 == 0))
                      goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      puVar18 = (undefined8 *)(lVar19 + lVar12 + 0x30);
                      *puVar18 = 0;
                      thunk_FUN_02dd37b4(puVar18,0);
                    }
                    lVar19 = *plVar13;
                    if (lVar19 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                    lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                    if (lVar19 == 0) goto LAB_05bea9b0;
                    uVar22 = *(undefined8 *)(lVar19 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar16 = UnityEngine_Font__add_textureRebuilt(uVar22,0,0);
                    if ((uVar16 & 1) == 0) {
                      lVar19 = *plVar13;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0))
                      goto LAB_05bea9b0;
                      iVar6 = FUN_0606f30c(lVar19,0);
                      lVar19 = *plVar25;
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar19);
                        lVar19 = *plVar25;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = *(long *)(lVar19 + lVar14 + -0x1c);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      iVar7 = FUN_0606f30c(lVar19,0);
                      if (iVar6 != iVar7) goto LAB_05bea4b4;
                    }
                    else {
LAB_05bea4b4:
                      lVar19 = *plVar13;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar17 = *plVar25;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if (*(int *)(lVar17 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar17 = *plVar25;
                      }
                      lVar17 = **(long **)(lVar17 + 0xb8);
                      if (lVar17 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      thunk_FUN_05c48a90(lVar19,*(undefined8 *)(lVar17 + lVar14 + -0x1c),0);
                      lVar19 = *plVar13;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar17 = **(long **)(*plVar25 + 0xb8);
                      if (lVar17 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar17 + lVar14 + -0x2c);
                      thunk_FUN_02dd37b4();
                      lVar19 = *plVar13;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar17 = **(long **)(*plVar25 + 0xb8);
                      if (lVar17 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar17 + lVar14 + -0x24);
                      thunk_FUN_02dd37b4();
                    }
                    lVar19 = *plVar25;
                    if (*(int *)(lVar19 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar19 = *plVar25;
                    }
                    lVar17 = **(long **)(lVar19 + 0xb8);
                    if (lVar17 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                    if (*(char *)(lVar17 + lVar14 + -0x13) != '\0') {
                      lVar20 = *plVar13;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar28 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar17 = **(long **)(*plVar25 + 0xb8);
                        if (lVar17 == 0) goto LAB_05bea9b0;
                      }
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      FUN_05c48ac0(lVar20,*(undefined8 *)(lVar17 + lVar14 + -0x1c),0);
                      lVar19 = *plVar13;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar17 = **(long **)(*plVar25 + 0xb8);
                      if (lVar17 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar19 + 0x48) = *(undefined8 *)(lVar17 + lVar14 + -0xc);
                      thunk_FUN_02dd37b4();
                    }
                  }
                  lVar19 = *plVar25;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar19 = *plVar25;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_05bea9b0;
                  if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                  if ((*unaff_x26 == 0) || (lVar17 = *(long *)(*unaff_x26 + 0x60), lVar17 == 0))
                  goto LAB_05bea9b0;
                  if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                  lVar20 = *(long *)(lVar17 + lVar12 + 0x30);
                  uVar9 = *(uint *)(lVar19 + lVar14);
                  if (lVar20 == 0) {
                    if (uVar28 == 0) {
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
                      FUN_05c3debc(&stack0x000000f0,*(undefined8 *)(unaff_x19 + 0x3d8),uVar9 + 1,0);
                      memcpy(&stack0x000000a0,&stack0x000000f0,0x50);
                      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_05bea9c8;
                      memcpy((void *)(lVar17 + lVar12 + 0x20),&stack0x000000a0,0x50);
                      __dest = (void *)(lVar17 + 0x20);
                    }
                    else {
                      lVar19 = *plVar13;
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      lVar19 = *(long *)(lVar19 + uVar28 * 8 + 0x20);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      uVar22 = FUN_05c48e08(lVar19,0);
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
                      FUN_05c3debc(&stack0x000000f0,uVar22,uVar9 + 1,0);
                      memcpy(&stack0x00000050,&stack0x000000f0,0x50);
                      if (*(uint *)(lVar17 + 0x18) <= uVar28) goto LAB_05bea9c8;
                      __dest = (void *)(lVar17 + lVar12 + 0x20);
                      memcpy(__dest,&stack0x00000050,0x50);
                    }
                    thunk_FUN_02dd37b4(__dest,0);
                  }
                  else {
                    iVar6 = *(int *)(lVar20 + 0x18);
                    if (iVar6 < (int)(uVar9 * 4)) {
                      if ((int)uVar9 < 0x401) {
                        uVar21 = (int)uVar9 >> 0x10;
LAB_05bea834:
                        uVar9 = uVar9 | uVar21 | (int)(uVar9 | uVar21) >> 8;
                        uVar9 = uVar9 | (int)uVar9 >> 4;
                        uVar9 = uVar9 | (int)uVar9 >> 2;
                        iVar6 = (uVar9 | (int)uVar9 >> 1) + 1;
                      }
                      else {
LAB_05bea7c8:
                        iVar6 = uVar9 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_05c3ecd4(lVar17 + lVar12 + 0x20,iVar6,0);
                    }
                    else if ((0 < (int)uVar9) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
                      iVar7 = iVar6 + 3;
                      if (-1 < iVar6) {
                        iVar7 = iVar6;
                      }
                      if (0x100 < (int)((iVar7 >> 2) - uVar9)) {
                        if (0x400 < (int)uVar9) goto LAB_05bea7c8;
                        uVar21 = uVar9 >> 0x10;
                        goto LAB_05bea834;
                      }
                    }
                  }
                  plVar25 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x60), lVar19 == 0))
                  goto LAB_05bea9b0;
                  lVar17 = *(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if (*(int *)(lVar17 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar17 = *plVar25;
                  }
                  lVar17 = **(long **)(lVar17 + 0xb8);
                  if (lVar17 == 0) goto LAB_05bea9b0;
                  if ((*(uint *)(lVar17 + 0x18) <= uVar28) || (*(uint *)(lVar19 + 0x18) <= uVar28))
                  goto LAB_05bea9c8;
                  *(undefined8 *)(lVar19 + lVar12 + 0x68) = *(undefined8 *)(lVar17 + lVar14 + -0x1c)
                  ;
                  thunk_FUN_02dd37b4();
                  uVar28 = uVar28 + 1;
                  lVar12 = lVar12 + 0x50;
                  lVar14 = lVar14 + 0x38;
                  lVar29 = lVar29 + 8;
                } while (uVar11 != uVar28);
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              lVar12 = *plVar13;
              if (lVar12 != 0) {
                lVar14 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3) + 0x20;
                lVar29 = (long)(int)uVar8 * 0x50 + 0x20;
                do {
                  uVar8 = (uint)uVar11;
                  if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar8) goto LAB_05bea11c;
                  if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_05bea9c8;
                  uVar22 = *(undefined8 *)(lVar12 + lVar14);
                  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar11 = FUN_0606a004(uVar22,0,0);
                  if ((uVar11 & 1) == 0) goto LAB_05bea11c;
                  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x60), lVar12 == 0))
                  break;
                  uVar9 = *(uint *)(lVar12 + 0x18);
                  if ((int)uVar8 < (int)uVar9) {
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      uVar9 = *(uint *)(lVar12 + 0x18);
                    }
                    if (uVar9 <= uVar8) goto LAB_05bea9c8;
                    FUN_05c3fc70(lVar12 + lVar29,0,1,0);
                  }
                  lVar12 = *plVar13;
                  uVar11 = (ulong)(uVar8 + 1);
                  lVar29 = lVar29 + 0x50;
                  lVar14 = lVar14 + 8;
                } while (lVar12 != 0);
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
  if (uVar9 <= uVar21) goto LAB_05bea9c8;
  puVar30 = (uint *)(unaff_x21 + (long)(int)uVar21 * 0x10 + 0x24);
  if (*puVar30 == 0) goto LAB_05bea110;
  if (*unaff_x26 == 0) goto LAB_05bea9b0;
  plVar25 = (long *)(*unaff_x26 + 0x38);
  lVar12 = *plVar25;
  iVar6 = *(int *)(unaff_x19 + 0x4a0);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar6)) {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03563108(plVar25,iVar6 + 1,1,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    uVar9 = *(uint *)(unaff_x21 + 0x18);
  }
  if (uVar9 <= uVar21) goto LAB_05bea9c8;
  uVar9 = *puVar30;
  if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
    uVar11 = FUN_05c217f4();
    uVar27 = uStack00000000000001d8;
    if ((uVar11 & 1) == 0) goto LAB_05be8d80;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
    iVar6 = *(int *)(unaff_x21 + (long)(int)uVar21 * 0x10 + 0x28);
    if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x292) = 1;
    }
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar21 = uStack00000000000001d8;
    if (*(int *)(unaff_x19 + 0x65c) != 1) goto LAB_05be9d7c;
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar4;
    }
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 != 0) {
      if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        if ((*unaff_x26 != 0) && (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 != 0)) {
          if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
            *(short *)(lVar12 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
            *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
            thunk_FUN_02dd37b4();
            if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
               (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 != 0)) {
              uVar9 = *(uint *)(unaff_x19 + 0x4a0);
              if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                *(undefined4 *)(lVar12 + (long)(int)uVar9 * 0x178 + 0x50) =
                     *(undefined4 *)(unaff_x19 + 0x120);
                if ((*(long *)(unaff_x19 + 0x6b0) != 0) &&
                   (lVar14 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar14 != 0)) {
                  uVar22 = FUN_03aac1c4(lVar14,*(undefined4 *)(unaff_x19 + 0x6bc),
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                       );
                  if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + (long)(int)uVar9 * 0x178 + 0x30) = uVar22;
                    thunk_FUN_02dd37b4();
                    if ((*unaff_x26 != 0) && (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 != 0)) {
                      uVar9 = *(uint *)(unaff_x19 + 0x4a0);
                      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
                        uVar10 = *(undefined4 *)(unaff_x19 + 0x65c);
                        lVar14 = lVar12 + (long)(int)uVar9 * 0x178;
                        *(int *)(lVar14 + 0x28) = iVar6;
                        *(undefined4 *)(lVar14 + 0x20) = uVar10;
                        if (uVar27 < *(uint *)(unaff_x21 + 0x18)) {
                          *(int *)(lVar12 + (long)(int)uVar9 * 0x178 + 0x2c) =
                               (*(int *)(unaff_x21 + (long)(int)uVar27 * 0x10 + 0x28) - iVar6) + 1;
                          *(undefined4 *)(unaff_x19 + 0x65c) = 0;
                          *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
                          iStack0000000000000040 = iStack0000000000000040 + 1;
                          plVar25 = (long *)
                                    Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                          ;
                          uVar21 = uVar27;
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
  uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
  if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05be8e54;
  uVar27 = *(uint *)(unaff_x19 + 0x284);
  if ((uVar27 >> 4 & 1) == 0) {
    if ((uVar27 >> 3 & 1) == 0) {
      if ((uVar27 >> 5 & 1) != 0) goto LAB_05be8da8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_04f83744(uVar9,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar9 = FUN_04f83be8(uVar9,0);
        goto LAB_05be8e50;
      }
    }
  }
  else {
LAB_05be8da8:
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f837e4(uVar9,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_04f83a70(uVar9,0);
LAB_05be8e50:
      uVar9 = uVar9 & 0xffff;
    }
  }
LAB_05be8e54:
  uVar27 = uVar21 + 1;
  if ((int)uVar27 < (int)*(uint *)(unaff_x21 + 0x18)) {
    if (*(uint *)(unaff_x21 + 0x18) <= uVar27) goto LAB_05bea9c8;
    uVar26 = *(uint *)(unaff_x21 + (long)(int)uVar27 * 0x10 + 0x24);
  }
  else {
    uVar26 = 0;
  }
  uStack0000000000000018 = uVar9;
  if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_05be8fd0:
    lVar12 = FUN_05c2c458();
    if (lVar12 == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
      FUN_05c2c9e8();
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar6 = FUN_05c41df4(0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
      if (iVar6 == 0) {
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
      uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar12 = FUN_05c09ca0(uStack0000000000000018,uVar15,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,
                            0);
      if (lVar12 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar12 = FUN_05c4236c(0);
        if (lVar12 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar12 = FUN_05c4236c(0);
          if (lVar12 == 0) goto LAB_05bea9b0;
          if (0 < *(int *)(lVar12 + 0x18)) {
            lVar12 = *unaff_x22;
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar15 = FUN_05c4236c(0);
            uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
            }
            lVar12 = FUN_05c0a248(uStack0000000000000018,lVar12,uVar15,1,uVar10,uVar2,
                                  (long)&stack0x000001d8 + 4,0);
            if (lVar12 != 0) goto LAB_05be9df8;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_05c41f68(0);
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
        }
        uVar11 = FUN_0606a004(uVar15,0,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar15 = FUN_05c41f68(0);
          uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar12 = FUN_05c09ca0(uStack0000000000000018,uVar15,1,uVar10,uVar2,
                                (long)&stack0x000001d8 + 4,0);
          if (lVar12 != 0) goto LAB_05be9df8;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
        *puVar30 = 0x20;
        uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar12 = FUN_05c09ca0(0x20,uVar15,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0);
        if (lVar12 == 0) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
          *puVar30 = 3;
          uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          uStack0000000000000018 = 3;
          lVar12 = FUN_05c09ca0(3,uVar15,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0);
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
        plVar25 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
        if (uVar9 >> 0x10 == 0) {
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar9);
          lVar14 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
          if (plVar25 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar25[3] == 0) goto LAB_05bea9c8;
          plVar25[4] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 4,lVar14);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar14 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar25 + 3) < 2) goto LAB_05bea9c8;
          plVar25[5] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 5,lVar14);
          if (lVar12 == 0) goto LAB_05bea9b0;
          in_stack_00000180 = *(undefined4 *)(lVar12 + 0x14);
          lVar14 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar25 + 3) < 3) goto LAB_05bea9c8;
          plVar25[6] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 6,lVar14);
          lVar14 = thunk_FUN_0606f5c0();
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar25 + 3) < 4) goto LAB_05bea9c8;
          plVar25[7] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 7,lVar14);
          puVar18 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
        }
        else {
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar9);
          lVar14 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
          if (plVar25 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar25[3] == 0) goto LAB_05bea9c8;
          plVar25[4] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 4,lVar14);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar14 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar25 + 3) < 2) goto LAB_05bea9c8;
          plVar25[5] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 5,lVar14);
          if (lVar12 == 0) goto LAB_05bea9b0;
          in_stack_00000180 = *(undefined4 *)(lVar12 + 0x14);
          lVar14 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar25 + 3) < 3) goto LAB_05bea9c8;
          plVar25[6] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 6,lVar14);
          lVar14 = thunk_FUN_0606f5c0();
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar25 + 0x40)), lVar29 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar25 + 3) < 4) goto LAB_05bea9c8;
          plVar25[7] = lVar14;
          thunk_FUN_02dd37b4(plVar25 + 7,lVar14);
          puVar18 = (undefined8 *)
                    Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
        }
        uVar15 = FUN_04e8e72c(*puVar18,plVar25,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602283c(uVar15);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_05c4c7a8(uVar9,0);
    if ((uVar26 == 0xfe0e) || ((uVar11 & 1) == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05c4c728(uVar9,0);
      if ((uVar26 != 0xfe0f) || ((uVar11 & 1) == 0)) goto LAB_05be8fd0;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar12 = FUN_05c4277c(0);
    if (lVar12 == 0) goto LAB_05be8fd0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar12 = FUN_05c4277c(0);
    if (lVar12 == 0) goto LAB_05bea9b0;
    if (*(int *)(lVar12 + 0x18) < 1) goto LAB_05be8fd0;
    lVar12 = *unaff_x22;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar15 = FUN_05c4277c(0);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x280);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    }
    lVar12 = FUN_05c0a464(uVar9,lVar12,uVar15,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0);
    if (lVar12 == 0) goto LAB_05be8fd0;
  }
  if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  puVar18 = (undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  *puVar18 = 0;
  thunk_FUN_02dd37b4(puVar18,0);
  if (lVar12 == 0) goto LAB_05bea9b0;
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_05bea9b0;
    iVar6 = FUN_05bf59d4(*(long *)(lVar12 + 0x18),0);
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar7 = FUN_05bf59d4(*unaff_x22,0);
    if (iVar6 != iVar7) {
      plVar25 = *(long **)(lVar12 + 0x18);
      if (plVar25 == (long *)0x0) {
        *unaff_x22 = 0;
      }
      else {
        bVar3 = *(byte *)(*(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__ +
                         0x130);
        if (*(byte *)(*plVar25 + 0x130) < bVar3) {
          plVar25 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
                 *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__) {
          plVar25 = (long *)0x0;
        }
        *unaff_x22 = (long)plVar25;
      }
      thunk_FUN_02dd37b4();
    }
    bVar5 = iVar6 != iVar7;
    if ((uVar26 >> 4 == 0xfe0) || (uVar26 - 0xe0100 < 0xf0)) {
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar6 = FUN_05c03084(*unaff_x22,uStack0000000000000018,uVar26,0);
      if (iVar6 != 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar11 = FUN_05c05510(*unaff_x22,iVar6,&stack0x000001c8,0);
        if ((uVar11 & 1) != 0) {
          if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
          goto LAB_05bea9b0;
          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
          *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_000001c8;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar27) goto LAB_05bea9c8;
      *(undefined4 *)(unaff_x21 + (long)(int)uVar27 * 0x10 + 0x24) = 0x1a;
      uVar21 = uVar27;
    }
    if ((uVar8 & 1) == 0) goto LAB_05be9670;
    if (((*unaff_x22 == 0) || (lVar14 = *(long *)(*unaff_x22 + 0x178), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x38), lVar14 == 0)) goto LAB_05bea9b0;
    uVar11 = FUN_04937278(lVar14,*(undefined4 *)(lVar12 + 0x28),&stack0x000001d0,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                         );
    if ((uVar11 & 1) != 0) {
      plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (in_stack_000001d0 == 0) goto LAB_05bea110;
      iVar6 = 0;
      while (iVar6 < *(int *)(in_stack_000001d0 + 0x18)) {
        auVar31 = FUN_03a7e878(in_stack_000001d0,iVar6,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                              );
        lVar14 = auVar31._0_8_;
        if (lVar14 == 0) goto LAB_05bea9b0;
        uVar11 = *(ulong *)(lVar14 + 0x18);
        uVar9 = (uint)uVar11;
        if (1 < (int)uVar9) {
          uVar27 = 1;
          do {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar21 + uVar27) goto LAB_05bea9c8;
            if (*unaff_x22 == 0) goto LAB_05bea9b0;
            iVar7 = FUN_05c02fa8(*unaff_x22,
                                 *(undefined4 *)
                                  (unaff_x21 + (long)(int)(uVar21 + uVar27) * 0x10 + 0x24),0);
            if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_05bea9c8;
            if (iVar7 != *(int *)(lVar14 + (long)(int)uVar27 * 4 + 0x20)) goto LAB_05be95b4;
            uVar27 = uVar27 + 1;
          } while (uVar9 != uVar27);
        }
        if (auVar31._8_4_ != 0) {
          if (*unaff_x22 == 0) goto LAB_05bea9b0;
          uVar28 = FUN_05c05510(*unaff_x22,auVar31._8_8_ & 0xffffffff,&stack0x000001c0,0);
          if ((uVar28 & 1) != 0) {
            if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
            goto LAB_05bea9b0;
            if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
            *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_000001c0;
            thunk_FUN_02dd37b4();
            if ((int)uVar9 < 1) goto LAB_05be9668;
            uVar28 = 0;
            uVar27 = 0;
            if (uVar21 <= *(uint *)(unaff_x21 + 0x18)) {
              uVar27 = *(uint *)(unaff_x21 + 0x18) - uVar21;
            }
            goto LAB_05be9634;
          }
        }
LAB_05be95b4:
        iVar6 = iVar6 + 1;
        if (in_stack_000001d0 == 0) goto LAB_05bea9b0;
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_05be9670;
  while( true ) {
    lVar14 = unaff_x21 + (long)(int)(uVar21 + (int)uVar28) * 0x10;
    if (uVar28 == 0) {
      *(uint *)(lVar14 + 0x2c) = uVar9;
    }
    else {
      *(undefined4 *)(lVar14 + 0x24) = 0x1a;
    }
    uVar28 = uVar28 + 1;
    if ((uVar11 & 0xffffffff) == uVar28) break;
LAB_05be9634:
    if (uVar27 == uVar28) goto LAB_05bea9c8;
  }
LAB_05be9668:
  uVar21 = (uVar21 + uVar9) - 1;
LAB_05be9670:
  if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar25 = (long *)(lVar14 + 0x30);
  *plVar25 = lVar12;
  *(undefined4 *)(lVar14 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar25,lVar12);
  if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0)) goto LAB_05bea9b0;
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bea9c8;
  lVar29 = lVar14 + (long)(int)uVar9 * 0x178;
  *(short *)(lVar29 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar29 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= uVar21) goto LAB_05bea9c8;
  lVar14 = lVar14 + (long)(int)uVar9 * 0x178;
  *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)uVar21 * 0x10 + 0x28);
  *(long *)(lVar14 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar12 + 0x10) == '\x02') {
    plVar13 = *(long **)(lVar12 + 0x18);
    if (plVar13 == (long *)0x0) goto LAB_05bea9b0;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar14 = plVar13[0x11];
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *plVar25;
    }
    uVar9 = FUN_05be3d0c(lVar14,plVar13,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar9;
    lVar12 = **(long **)(*plVar25 + 0xb8);
    if (lVar12 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_05bea9c8;
    lVar12 = lVar12 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
    if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0))
    goto LAB_05bea9b0;
    uVar9 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_05bea9c8;
    lVar12 = lVar12 + (long)(int)uVar9 * 0x178;
    *(undefined4 *)(lVar12 + 0x20) = 1;
    *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
    iStack0000000000000040 = iStack0000000000000040 + 1;
    goto LAB_05be9d74;
  }
  if (bVar5) {
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar6 = FUN_05bf59d4(*unaff_x22,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar7 = FUN_05bf59d4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar6 != iVar7) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_05c4242c(0);
      if ((uVar11 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        lVar14 = *(long *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar15 = *(undefined8 *)(*unaff_x22 + 0x88);
        lVar14 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        lVar14 = FUN_05c3d38c(lVar14,uVar15,0);
      }
      *in_stack_00000038 = lVar14;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar29 = *in_stack_00000038;
      lVar19 = *unaff_x22;
      lVar14 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar14 = *(long *)puVar4;
      }
      uVar10 = FUN_05be3ad4(lVar29,lVar19,*(long *)(lVar14 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
    }
  }
  if (*(long *)(lVar12 + 0x20) == 0) goto LAB_05bea9b0;
  iVar6 = FUN_06114b10(*(long *)(lVar12 + 0x20),0);
  if (0 < iVar6) {
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_05bea9b0;
    lVar14 = *unaff_x22;
    lVar29 = *in_stack_00000038;
    uVar10 = FUN_06114b10(*(long *)(lVar12 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    lVar12 = FUN_05c3ce0c(lVar14,lVar29,uVar10,0);
    *in_stack_00000038 = lVar12;
    thunk_FUN_02dd37b4(in_stack_00000038,lVar12);
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    lVar14 = *in_stack_00000038;
    lVar29 = *unaff_x22;
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar4;
    }
    uVar10 = FUN_05be3ad4(lVar14,lVar29,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 != 0x200b) && ((uVar11 & 1) == 0)) {
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar4;
    }
    lVar14 = **(long **)(lVar12 + 0xb8);
    if (lVar14 == 0) goto LAB_05bea9b0;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bea9c8;
    if (*(int *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar14 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
        if (lVar14 == 0) goto LAB_05bea9b0;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      if (bVar5) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
        uVar11 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar9,(long)&stack0x000001b8 + 4,
                              *(undefined8 *)PTR_DAT_0678dea8);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar11 & 1) == 0) {
LAB_05be9ad4:
          lVar12 = *in_stack_00000038;
          uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar15,lVar12,0);
          puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          lVar14 = *unaff_x22;
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar4;
          }
          uVar9 = FUN_05be3ad4(uVar15,lVar14,*(long *)(lVar12 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
          FUN_047c17c8(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar9,
                       *(undefined8 *)PTR_DAT_06768b20);
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar4;
          }
          lVar14 = **(long **)(lVar12 + 0xb8);
          if (lVar14 == 0) goto LAB_05bea9b0;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
          uVar9 = in_stack_000001b8._4_4_;
          if (0x3ffe < *(int *)(lVar14 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
          goto LAB_05be9ad4;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        lVar14 = **(long **)(lVar12 + 0xb8);
      }
      else {
        lVar12 = *in_stack_00000038;
        uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar15,lVar12,0);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar14 = *unaff_x22;
        lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar12 = *(long *)puVar4;
        }
        uVar9 = FUN_05be3ad4(uVar15,lVar14,*(long *)(lVar12 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar14 = **(long **)(*(long *)puVar4 + 0xb8);
      }
      if (lVar14 == 0) goto LAB_05bea9b0;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bea9c8;
    lVar14 = lVar14 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
  }
  plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) = *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar9 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar9;
  lVar12 = *plVar25;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *plVar25;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar14 = **(long **)(lVar12 + 0xb8);
  if (lVar14 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bea9c8;
  *(bool *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar14 = **(long **)(*plVar25 + 0xb8);
      if (lVar14 == 0) goto LAB_05bea9b0;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bea9c8;
    puVar18 = (undefined8 *)(lVar14 + (long)(int)uVar9 * 0x38 + 0x48);
    *puVar18 = uVar22;
    thunk_FUN_02dd37b4(puVar18,uVar22);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar24;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = uVar22;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar22);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
  }
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
LAB_05be9d74:
  *(uint *)(unaff_x19 + 0x4a0) = uVar9 + 1;
LAB_05be9d7c:
  uVar9 = *(uint *)(unaff_x21 + 0x18);
  uVar21 = uVar21 + 1;
  if ((int)uVar9 <= (int)uVar21) goto LAB_05bea110;
  goto LAB_05be8b1c;
}


