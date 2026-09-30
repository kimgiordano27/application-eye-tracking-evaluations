/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_94
ENTRY_POINT: 05be8754
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


undefined4
Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_94
          (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  void *__dest;
  long lVar20;
  long lVar21;
  long unaff_x19;
  uint uVar22;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  long *plVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  uint *puVar32;
  undefined1 auVar33 [16];
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
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  uint uStack00000000000001d8;
  undefined1 uStack00000000000001dc;
  
  uStack0000000000000188 = param_2._8_8_;
  uStack0000000000000180 = param_2._0_8_;
  FUN_05be391c();
  in_stack_000000f8 = uStack0000000000000188;
  in_stack_000000f0 = uStack0000000000000180;
  in_stack_00000108 = in_stack_00000198;
  in_stack_00000100 = in_stack_00000190;
  in_stack_00000118 = in_stack_000001a8;
  in_stack_00000110 = in_stack_000001a0;
  in_stack_00000120 = in_stack_000001b0;
  FUN_0427197c(*(long *)(*unaff_x23 + 0xb8) + 0x10,&stack0x000000f0,*unaff_x20);
  plVar27 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  lVar12 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  if (lVar12 == 0) goto LAB_05bea9b0;
  FUN_047c195c(lVar12,*(undefined8 *)
                       Method_UnityEngine_Pool_CollectionPool<List<Column>,_Column>_Get__);
  FUN_05be3ad4(*(undefined8 *)(unaff_x19 + 0x118),*(undefined8 *)(unaff_x19 + 0x100),
               *(long *)(*unaff_x23 + 0xb8),*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8));
  plVar1 = (long *)(unaff_x19 + 0x3a0);
  if (*(long *)(unaff_x19 + 0x3a0) == 0) {
    uVar2 = *(undefined4 *)(unaff_x19 + 0x490);
    uVar23 = thunk_FUN_02d9d534(*plVar27);
    FUN_05c4b424(uVar23,uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x3a0) = uVar23;
    thunk_FUN_02dd37b4(plVar1,uVar23);
  }
  else {
    plVar25 = (long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
    lVar12 = *plVar25;
    if (lVar12 == 0) goto LAB_05bea9b0;
    iVar7 = *(int *)(unaff_x19 + 0x490);
    if (*(int *)(lVar12 + 0x18) < iVar7) {
      if (*(int *)(*plVar27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03563108(plVar25,iVar7,0,
                   *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    }
  }
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
      uVar13 = FUN_05c41f0c(0);
      if ((uVar13 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar23 = thunk_FUN_0606f5c0(*unaff_x22,0);
        uVar23 = FUN_04e8db00(*(undefined8 *)
                               Method_UnityEngine_XR_InputFeatureUsage<Quaternion>_get_name__,uVar23
                              ,*(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
        }
        FUN_0602283c(uVar23);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_05bea9b0;
      iVar7 = FUN_0606f30c(*(long *)(unaff_x19 + 0x670),0);
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar8 = FUN_0606f30c(*unaff_x22,0);
      if (iVar7 != iVar8) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar13 = FUN_05c4242c(0);
        if ((uVar13 & 1) == 0) {
LAB_05be8908:
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_05bea9b0;
          *(undefined8 *)(unaff_x19 + 0x678) = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
        }
        else {
          if (*in_stack_00000038 == 0) goto LAB_05bea9b0;
          iVar7 = FUN_0606f30c(*in_stack_00000038,0);
          if ((*(long *)(unaff_x19 + 0x670) == 0) ||
             (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x670) + 0x88), lVar12 == 0))
          goto LAB_05bea9b0;
          iVar8 = FUN_0606f30c(lVar12,0);
          if (iVar7 == iVar8) goto LAB_05be8908;
          if (*(long *)(unaff_x19 + 0x670) == 0) goto LAB_05bea9b0;
          uVar23 = *(undefined8 *)(unaff_x19 + 0x118);
          uVar26 = *(undefined8 *)(*(long *)(unaff_x19 + 0x670) + 0x88);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) ==
              0) {
            thunk_FUN_02dbd7b4();
          }
          uVar23 = FUN_05c3d38c(uVar23,uVar26,0);
          *(undefined8 *)(unaff_x19 + 0x678) = uVar23;
          plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        thunk_FUN_02dd37b4(unaff_x19 + 0x678);
        lVar12 = *plVar25;
        uVar23 = *(undefined8 *)(unaff_x19 + 0x678);
        uVar26 = *(undefined8 *)(unaff_x19 + 0x670);
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar12 = *plVar25;
        }
        uVar9 = FUN_05be3ad4(uVar23,uVar26,*(long *)(lVar12 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x680) = uVar9;
        lVar12 = **(long **)(*plVar25 + 0xb8);
        if (lVar12 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar12 + 0x18) <= uVar9) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined4 *)(lVar12 + (long)(int)uVar9 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x330) == 0) {
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar9 = FUN_03b22888(*(long *)(unaff_x19 + 0x330),0x6c696761,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_AppendWithCapacity__
                      );
  if (*(int *)(unaff_x19 + 0x310) == 6) {
    uVar23 = *(undefined8 *)(unaff_x19 + 0x318);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar13 = FUN_0606a004(uVar23,0,0);
    if (((uVar13 & 1) != 0) && (*(char *)(unaff_x19 + 0x42d) == '\0')) {
      plVar14 = *(long **)(unaff_x19 + 0x318);
      if (plVar14 == (long *)0x0) goto LAB_05bea9b0;
      (**(code **)(*plVar14 + 0x558))
                (plVar14,**(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar14 + 0x560));
    }
  }
  if (unaff_x21 == 0) goto LAB_05bea9b0;
  uVar10 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar10 < 1) {
    iStack0000000000000040 = 0;
LAB_05bea110:
    if (*(char *)(unaff_x19 + 0x42d) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
LAB_05bea11c:
      return *(undefined4 *)(unaff_x19 + 0x4a0);
    }
    lVar12 = *plVar1;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 0x1c) = iStack0000000000000040;
      lVar15 = *plVar25;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar15 = *plVar25;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 != 0) {
        uVar9 = FUN_047c1490(lVar15,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                            );
        *(uint *)(lVar12 + 0x34) = uVar9;
        if (*plVar1 != 0) {
          plVar14 = (long *)(*plVar1 + 0x60);
          lVar12 = *plVar14;
          if (lVar12 != 0) {
            uVar13 = (ulong)uVar9;
            if (*(int *)(lVar12 + 0x18) < (int)uVar9) {
              if (*(int *)(*plVar27 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_035631b4(plVar14,uVar13,0,
                           *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
            }
            if (*(long *)(unaff_x19 + 0x720) != 0) {
              plVar14 = (long *)(unaff_x19 + 0x720);
              if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar9) {
                uVar10 = uVar9 | (int)uVar9 >> 0x10;
                uVar10 = uVar10 | (int)uVar10 >> 8;
                uVar10 = uVar10 | (int)uVar10 >> 4;
                uVar10 = uVar10 | (int)uVar10 >> 2;
                if (*(int *)(*plVar27 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562eb8(plVar14,(uVar10 | (int)uVar10 >> 1) + 1,
                             *(undefined8 *)
                              Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
              }
              if (*(char *)(unaff_x19 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_05bea9b0;
                plVar24 = (long *)(*plVar1 + 0x38);
                lVar12 = *plVar24;
                if (lVar12 == 0) goto LAB_05bea9b0;
                iVar7 = *(int *)(unaff_x19 + 0x4a0);
                if (0x100 < *(int *)(lVar12 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*plVar27 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03563108(plVar24,iVar8,1,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__)
                  ;
                  plVar25 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
              }
              puVar5 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              if (0 < (int)uVar9) {
                lVar12 = 0;
                uVar30 = 0;
                lVar15 = 0x54;
                lVar31 = 0x20;
                do {
                  if (uVar30 != 0) {
                    lVar20 = *plVar14;
                    if (lVar20 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                    uVar23 = *(undefined8 *)(lVar20 + uVar30 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar17 = UnityEngine_Font__add_textureRebuilt(uVar23,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar20 = *plVar25;
                      plVar27 = (long *)*plVar14;
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar20 = *plVar25;
                      }
                      lVar20 = **(long **)(lVar20 + 0xb8);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = lVar20 + lVar15;
                      in_stack_00000170 = *(undefined8 *)(lVar20 + -4);
                      in_stack_00000168 = *(undefined8 *)(lVar20 + -0xc);
                      in_stack_00000160 = *(undefined8 *)(lVar20 + -0x14);
                      in_stack_00000158 = *(undefined8 *)(lVar20 + -0x1c);
                      in_stack_00000150 = *(undefined8 *)(lVar20 + -0x24);
                      in_stack_00000148 = *(undefined8 *)(lVar20 + -0x2c);
                      in_stack_00000140 = *(undefined8 *)(lVar20 + -0x34);
                      lVar20 = FUN_05c48f74();
                      if (plVar27 == (long *)0x0) goto LAB_05bea9b0;
                      if ((lVar20 != 0) &&
                         (lVar18 = thunk_FUN_02d9d438(lVar20,*(undefined8 *)(*plVar27 + 0x40)),
                         lVar18 == 0)) {
LAB_05bea9cc:
                        uVar23 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                        FUN_02d609b4(uVar23,0);
                      }
                      if (*(uint *)(plVar27 + 3) <= uVar30) goto LAB_05bea9c8;
                      plVar27[uVar30 + 4] = lVar20;
                      thunk_FUN_02dd37b4((long)plVar27 + lVar31,lVar20);
                      plVar25 = (long *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                      if ((*plVar1 == 0) || (lVar20 = *(long *)(*plVar1 + 0x60), lVar20 == 0))
                      goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      puVar19 = (undefined8 *)(lVar20 + lVar12 + 0x30);
                      *puVar19 = 0;
                      thunk_FUN_02dd37b4(puVar19,0);
                    }
                    lVar20 = *plVar14;
                    if (lVar20 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                    lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                    if (lVar20 == 0) goto LAB_05bea9b0;
                    uVar23 = *(undefined8 *)(lVar20 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar17 = UnityEngine_Font__add_textureRebuilt(uVar23,0,0);
                    if ((uVar17 & 1) == 0) {
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0))
                      goto LAB_05bea9b0;
                      iVar7 = FUN_0606f30c(lVar20,0);
                      lVar20 = *plVar25;
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar20);
                        lVar20 = *plVar25;
                      }
                      lVar20 = **(long **)(lVar20 + 0xb8);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + lVar15 + -0x1c);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      iVar8 = FUN_0606f30c(lVar20,0);
                      if (iVar7 != iVar8) goto LAB_05bea4b4;
                    }
                    else {
LAB_05bea4b4:
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar18 = *plVar25;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar18 = *plVar25;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      thunk_FUN_05c48a90(lVar20,*(undefined8 *)(lVar18 + lVar15 + -0x1c),0);
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar18 = **(long **)(*plVar25 + 0xb8);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar18 + lVar15 + -0x2c);
                      thunk_FUN_02dd37b4();
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar18 = **(long **)(*plVar25 + 0xb8);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar18 + lVar15 + -0x24);
                      thunk_FUN_02dd37b4();
                    }
                    lVar20 = *plVar25;
                    if (*(int *)(lVar20 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar20 = *plVar25;
                    }
                    lVar18 = **(long **)(lVar20 + 0xb8);
                    if (lVar18 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                    if (*(char *)(lVar18 + lVar15 + -0x13) != '\0') {
                      lVar21 = *plVar14;
                      if (lVar21 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar21 = *(long *)(lVar21 + uVar30 * 8 + 0x20);
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar18 = **(long **)(*plVar25 + 0xb8);
                        if (lVar18 == 0) goto LAB_05bea9b0;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      if (lVar21 == 0) goto LAB_05bea9b0;
                      FUN_05c48ac0(lVar21,*(undefined8 *)(lVar18 + lVar15 + -0x1c),0);
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar18 = **(long **)(*plVar25 + 0xb8);
                      if (lVar18 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)(lVar18 + lVar15 + -0xc);
                      thunk_FUN_02dd37b4();
                    }
                  }
                  lVar20 = *plVar25;
                  if (*(int *)(lVar20 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar20 = *plVar25;
                  }
                  lVar20 = **(long **)(lVar20 + 0xb8);
                  if (lVar20 == 0) goto LAB_05bea9b0;
                  if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                  if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x60), lVar18 == 0))
                  goto LAB_05bea9b0;
                  if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                  lVar21 = *(long *)(lVar18 + lVar12 + 0x30);
                  uVar10 = *(uint *)(lVar20 + lVar15);
                  if (lVar21 == 0) {
                    if (uVar30 == 0) {
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
                      FUN_05c3debc(&stack0x000000f0,*(undefined8 *)(unaff_x19 + 0x3d8),uVar10 + 1,0)
                      ;
                      memcpy(&stack0x000000a0,&stack0x000000f0,0x50);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_05bea9c8;
                      memcpy((void *)(lVar18 + lVar12 + 0x20),&stack0x000000a0,0x50);
                      __dest = (void *)(lVar18 + 0x20);
                    }
                    else {
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      lVar20 = *(long *)(lVar20 + uVar30 * 8 + 0x20);
                      if (lVar20 == 0) goto LAB_05bea9b0;
                      uVar23 = FUN_05c48e08(lVar20,0);
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
                      FUN_05c3debc(&stack0x000000f0,uVar23,uVar10 + 1,0);
                      memcpy(&stack0x00000050,&stack0x000000f0,0x50);
                      if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_05bea9c8;
                      __dest = (void *)(lVar18 + lVar12 + 0x20);
                      memcpy(__dest,&stack0x00000050,0x50);
                    }
                    thunk_FUN_02dd37b4(__dest,0);
                  }
                  else {
                    iVar7 = *(int *)(lVar21 + 0x18);
                    if (iVar7 < (int)(uVar10 * 4)) {
                      if ((int)uVar10 < 0x401) {
                        uVar22 = (int)uVar10 >> 0x10;
LAB_05bea834:
                        uVar10 = uVar10 | uVar22 | (int)(uVar10 | uVar22) >> 8;
                        uVar10 = uVar10 | (int)uVar10 >> 4;
                        uVar10 = uVar10 | (int)uVar10 >> 2;
                        iVar7 = (uVar10 | (int)uVar10 >> 1) + 1;
                      }
                      else {
LAB_05bea7c8:
                        iVar7 = uVar10 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_05c3ecd4(lVar18 + lVar12 + 0x20,iVar7,0);
                    }
                    else if ((0 < (int)uVar10) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
                      iVar8 = iVar7 + 3;
                      if (-1 < iVar7) {
                        iVar8 = iVar7;
                      }
                      if (0x100 < (int)((iVar8 >> 2) - uVar10)) {
                        if (0x400 < (int)uVar10) goto LAB_05bea7c8;
                        uVar22 = uVar10 >> 0x10;
                        goto LAB_05bea834;
                      }
                    }
                  }
                  plVar25 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((*plVar1 == 0) || (lVar20 = *(long *)(*plVar1 + 0x60), lVar20 == 0))
                  goto LAB_05bea9b0;
                  lVar18 = *(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if (*(int *)(lVar18 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar18 = *plVar25;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_05bea9b0;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar30) || (*(uint *)(lVar20 + 0x18) <= uVar30))
                  goto LAB_05bea9c8;
                  *(undefined8 *)(lVar20 + lVar12 + 0x68) = *(undefined8 *)(lVar18 + lVar15 + -0x1c)
                  ;
                  thunk_FUN_02dd37b4();
                  uVar30 = uVar30 + 1;
                  lVar12 = lVar12 + 0x50;
                  lVar15 = lVar15 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar13 != uVar30);
              }
              puVar5 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              lVar12 = *plVar14;
              if (lVar12 != 0) {
                lVar15 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
                lVar31 = (long)(int)uVar9 * 0x50 + 0x20;
                do {
                  uVar9 = (uint)uVar13;
                  if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar9) goto LAB_05bea11c;
                  if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_05bea9c8;
                  uVar23 = *(undefined8 *)(lVar12 + lVar15);
                  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar13 = FUN_0606a004(uVar23,0,0);
                  if ((uVar13 & 1) == 0) goto LAB_05bea11c;
                  if ((*plVar1 == 0) || (lVar12 = *(long *)(*plVar1 + 0x60), lVar12 == 0)) break;
                  uVar10 = *(uint *)(lVar12 + 0x18);
                  if ((int)uVar9 < (int)uVar10) {
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      uVar10 = *(uint *)(lVar12 + 0x18);
                    }
                    if (uVar10 <= uVar9) goto LAB_05bea9c8;
                    FUN_05c3fc70(lVar12 + lVar31,0,1,0);
                  }
                  lVar12 = *plVar14;
                  uVar13 = (ulong)(uVar9 + 1);
                  lVar31 = lVar31 + 0x50;
                  lVar15 = lVar15 + 8;
                } while (lVar12 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_05bea9b0;
  }
  uVar22 = 0;
  iStack0000000000000040 = 0;
LAB_05be8b1c:
  if (uVar10 <= uVar22) goto LAB_05bea9c8;
  puVar32 = (uint *)(unaff_x21 + (long)(int)uVar22 * 0x10 + 0x24);
  if (*puVar32 == 0) goto LAB_05bea110;
  if (*plVar1 == 0) goto LAB_05bea9b0;
  plVar25 = (long *)(*plVar1 + 0x38);
  lVar12 = *plVar25;
  iVar7 = *(int *)(unaff_x19 + 0x4a0);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar7)) {
    if (*(int *)(*plVar27 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03563108(plVar25,iVar7 + 1,1,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    uVar10 = *(uint *)(unaff_x21 + 0x18);
  }
  if (uVar10 <= uVar22) goto LAB_05bea9c8;
  uVar10 = *puVar32;
  if ((uVar10 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    uVar2 = *(undefined4 *)(unaff_x19 + 0x120);
    uVar13 = FUN_05c217f4();
    uVar29 = uStack00000000000001d8;
    if ((uVar13 & 1) == 0) goto LAB_05be8d80;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_05bea9c8;
    iVar7 = *(int *)(unaff_x21 + (long)(int)uVar22 * 0x10 + 0x28);
    if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x292) = 1;
    }
    puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar22 = uStack00000000000001d8;
    if (*(int *)(unaff_x19 + 0x65c) != 1) goto LAB_05be9d7c;
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar5;
    }
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 != 0) {
      if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar12 = *(long *)(*plVar1 + 0x38), lVar12 != 0)) {
          if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
            *(short *)(lVar12 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
            *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
            thunk_FUN_02dd37b4();
            if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
               (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 != 0)) {
              uVar10 = *(uint *)(unaff_x19 + 0x4a0);
              if (uVar10 < *(uint *)(lVar12 + 0x18)) {
                *(undefined4 *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x50) =
                     *(undefined4 *)(unaff_x19 + 0x120);
                if ((*(long *)(unaff_x19 + 0x6b0) != 0) &&
                   (lVar15 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar15 != 0)) {
                  uVar23 = FUN_03aac1c4(lVar15,*(undefined4 *)(unaff_x19 + 0x6bc),
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                       );
                  if (uVar10 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x30) = uVar23;
                    thunk_FUN_02dd37b4();
                    if ((*plVar1 != 0) && (lVar12 = *(long *)(*plVar1 + 0x38), lVar12 != 0)) {
                      uVar10 = *(uint *)(unaff_x19 + 0x4a0);
                      if (uVar10 < *(uint *)(lVar12 + 0x18)) {
                        uVar11 = *(undefined4 *)(unaff_x19 + 0x65c);
                        lVar15 = lVar12 + (long)(int)uVar10 * 0x178;
                        *(int *)(lVar15 + 0x28) = iVar7;
                        *(undefined4 *)(lVar15 + 0x20) = uVar11;
                        if (uVar29 < *(uint *)(unaff_x21 + 0x18)) {
                          *(int *)(lVar12 + (long)(int)uVar10 * 0x178 + 0x2c) =
                               (*(int *)(unaff_x21 + (long)(int)uVar29 * 0x10 + 0x28) - iVar7) + 1;
                          *(undefined4 *)(unaff_x19 + 0x65c) = 0;
                          *(undefined4 *)(unaff_x19 + 0x120) = uVar2;
                          iStack0000000000000040 = iStack0000000000000040 + 1;
                          plVar25 = (long *)
                                    Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                          ;
                          uVar22 = uVar29;
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
  uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar2 = *(undefined4 *)(unaff_x19 + 0x120);
  if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05be8e54;
  uVar29 = *(uint *)(unaff_x19 + 0x284);
  if ((uVar29 >> 4 & 1) == 0) {
    if ((uVar29 >> 3 & 1) == 0) {
      if ((uVar29 >> 5 & 1) != 0) goto LAB_05be8da8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar13 = FUN_04f83744(uVar10,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_04f83be8(uVar10,0);
        goto LAB_05be8e50;
      }
    }
  }
  else {
LAB_05be8da8:
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar13 = FUN_04f837e4(uVar10,0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_04f83a70(uVar10,0);
LAB_05be8e50:
      uVar10 = uVar10 & 0xffff;
    }
  }
LAB_05be8e54:
  uVar29 = uVar22 + 1;
  if ((int)uVar29 < (int)*(uint *)(unaff_x21 + 0x18)) {
    if (*(uint *)(unaff_x21 + 0x18) <= uVar29) goto LAB_05bea9c8;
    uVar28 = *(uint *)(unaff_x21 + (long)(int)uVar29 * 0x10 + 0x24);
  }
  else {
    uVar28 = 0;
  }
  uStack0000000000000018 = uVar10;
  if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_05be8fd0:
    lVar12 = FUN_05c2c458();
    if (lVar12 == 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_05bea9c8;
      FUN_05c2c9e8();
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar7 = FUN_05c41df4(0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_05bea9c8;
      if (iVar7 == 0) {
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
      *puVar32 = uStack0000000000000018;
      uVar16 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x284);
      uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar12 = FUN_05c09ca0(uStack0000000000000018,uVar16,1,uVar11,uVar3,(long)&stack0x000001d8 + 4,
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
            uVar16 = FUN_05c4236c(0);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x284);
            uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
            }
            lVar12 = FUN_05c0a248(uStack0000000000000018,lVar12,uVar16,1,uVar11,uVar3,
                                  (long)&stack0x000001d8 + 4,0);
            if (lVar12 != 0) goto LAB_05be9df8;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar16 = FUN_05c41f68(0);
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
        }
        uVar13 = FUN_0606a004(uVar16,0,0);
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar16 = FUN_05c41f68(0);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar12 = FUN_05c09ca0(uStack0000000000000018,uVar16,1,uVar11,uVar3,
                                (long)&stack0x000001d8 + 4,0);
          if (lVar12 != 0) goto LAB_05be9df8;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_05bea9c8;
        *puVar32 = 0x20;
        uVar16 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar11 = *(undefined4 *)(unaff_x19 + 0x284);
        uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar12 = FUN_05c09ca0(0x20,uVar16,1,uVar11,uVar3,(long)&stack0x000001d8 + 4,0);
        if (lVar12 == 0) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_05bea9c8;
          *puVar32 = 3;
          uVar16 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          uStack0000000000000018 = 3;
          lVar12 = FUN_05c09ca0(3,uVar16,1,uVar11,uVar3,(long)&stack0x000001d8 + 4,0);
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
      uVar13 = FUN_05c41f0c(0);
      if ((uVar13 & 1) == 0) {
        plVar27 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
        if (uVar10 >> 0x10 == 0) {
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar10);
          lVar15 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
          if (plVar27 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar27[3] == 0) goto LAB_05bea9c8;
          plVar27[4] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 4,lVar15);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar15 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar27 + 3) < 2) goto LAB_05bea9c8;
          plVar27[5] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 5,lVar15);
          if (lVar12 == 0) goto LAB_05bea9b0;
          uStack0000000000000180 =
               CONCAT44(uStack0000000000000180._4_4_,*(undefined4 *)(lVar12 + 0x14));
          lVar15 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar27 + 3) < 3) goto LAB_05bea9c8;
          plVar27[6] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 6,lVar15);
          lVar15 = thunk_FUN_0606f5c0();
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar27 + 3) < 4) goto LAB_05bea9c8;
          plVar27[7] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 7,lVar15);
          puVar19 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
        }
        else {
          in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar10);
          lVar15 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
          if (plVar27 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar27[3] == 0) goto LAB_05bea9c8;
          plVar27[4] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 4,lVar15);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar15 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar27 + 3) < 2) goto LAB_05bea9c8;
          plVar27[5] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 5,lVar15);
          if (lVar12 == 0) goto LAB_05bea9b0;
          uStack0000000000000180 =
               CONCAT44(uStack0000000000000180._4_4_,*(undefined4 *)(lVar12 + 0x14));
          lVar15 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar27 + 3) < 3) goto LAB_05bea9c8;
          plVar27[6] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 6,lVar15);
          lVar15 = thunk_FUN_0606f5c0();
          if ((lVar15 != 0) &&
             (lVar31 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar27 + 3) < 4) goto LAB_05bea9c8;
          plVar27[7] = lVar15;
          thunk_FUN_02dd37b4(plVar27 + 7,lVar15);
          puVar19 = (undefined8 *)
                    Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
        }
        uVar16 = FUN_04e8e72c(*puVar19,plVar27,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602283c(uVar16);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar13 = FUN_05c4c7a8(uVar10,0);
    if ((uVar28 == 0xfe0e) || ((uVar13 & 1) == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar13 = FUN_05c4c728(uVar10,0);
      if ((uVar28 != 0xfe0f) || ((uVar13 & 1) == 0)) goto LAB_05be8fd0;
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
    uVar16 = FUN_05c4277c(0);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x280);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x238);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    }
    lVar12 = FUN_05c0a464(uVar10,lVar12,uVar16,1,uVar11,uVar3,(long)&stack0x000001d8 + 4,0);
    if (lVar12 == 0) goto LAB_05be8fd0;
  }
  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  puVar19 = (undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  *puVar19 = 0;
  thunk_FUN_02dd37b4(puVar19,0);
  if (lVar12 == 0) goto LAB_05bea9b0;
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_05bea9b0;
    iVar7 = FUN_05bf59d4(*(long *)(lVar12 + 0x18),0);
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*unaff_x22,0);
    if (iVar7 != iVar8) {
      plVar27 = *(long **)(lVar12 + 0x18);
      if (plVar27 == (long *)0x0) {
        *unaff_x22 = 0;
      }
      else {
        bVar4 = *(byte *)(*(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__ +
                         0x130);
        if (*(byte *)(*plVar27 + 0x130) < bVar4) {
          plVar27 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar4 * 8 + -8) !=
                 *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__) {
          plVar27 = (long *)0x0;
        }
        *unaff_x22 = (long)plVar27;
      }
      thunk_FUN_02dd37b4();
    }
    bVar6 = iVar7 != iVar8;
    if ((uVar28 >> 4 == 0xfe0) || (uVar28 - 0xe0100 < 0xf0)) {
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar7 = FUN_05c03084(*unaff_x22,uStack0000000000000018,uVar28,0);
      if (iVar7 != 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar13 = FUN_05c05510(*unaff_x22,iVar7,&stack0x000001c8,0);
        if ((uVar13 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
          goto LAB_05bea9b0;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
          *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_000001c8;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar29) goto LAB_05bea9c8;
      *(undefined4 *)(unaff_x21 + (long)(int)uVar29 * 0x10 + 0x24) = 0x1a;
      uVar22 = uVar29;
    }
    if ((uVar9 & 1) == 0) goto LAB_05be9670;
    if (((*unaff_x22 == 0) || (lVar15 = *(long *)(*unaff_x22 + 0x178), lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x38), lVar15 == 0)) goto LAB_05bea9b0;
    uVar13 = FUN_04937278(lVar15,*(undefined4 *)(lVar12 + 0x28),&stack0x000001d0,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                         );
    if ((uVar13 & 1) != 0) {
      plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      plVar27 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (in_stack_000001d0 == 0) goto LAB_05bea110;
      iVar7 = 0;
      while (iVar7 < *(int *)(in_stack_000001d0 + 0x18)) {
        auVar33 = FUN_03a7e878(in_stack_000001d0,iVar7,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                              );
        lVar15 = auVar33._0_8_;
        if (lVar15 == 0) goto LAB_05bea9b0;
        uVar13 = *(ulong *)(lVar15 + 0x18);
        uVar10 = (uint)uVar13;
        if (1 < (int)uVar10) {
          uVar29 = 1;
          do {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar22 + uVar29) goto LAB_05bea9c8;
            if (*unaff_x22 == 0) goto LAB_05bea9b0;
            iVar8 = FUN_05c02fa8(*unaff_x22,
                                 *(undefined4 *)
                                  (unaff_x21 + (long)(int)(uVar22 + uVar29) * 0x10 + 0x24),0);
            if (*(uint *)(lVar15 + 0x18) <= uVar29) goto LAB_05bea9c8;
            if (iVar8 != *(int *)(lVar15 + (long)(int)uVar29 * 4 + 0x20)) goto LAB_05be95b4;
            uVar29 = uVar29 + 1;
          } while (uVar10 != uVar29);
        }
        if (auVar33._8_4_ != 0) {
          if (*unaff_x22 == 0) goto LAB_05bea9b0;
          uVar30 = FUN_05c05510(*unaff_x22,auVar33._8_8_ & 0xffffffff,&stack0x000001c0,0);
          if ((uVar30 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
            goto LAB_05bea9b0;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
            *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_000001c0;
            thunk_FUN_02dd37b4();
            if ((int)uVar10 < 1) goto LAB_05be9668;
            uVar30 = 0;
            uVar29 = 0;
            if (uVar22 <= *(uint *)(unaff_x21 + 0x18)) {
              uVar29 = *(uint *)(unaff_x21 + 0x18) - uVar22;
            }
            goto LAB_05be9634;
          }
        }
LAB_05be95b4:
        iVar7 = iVar7 + 1;
        if (in_stack_000001d0 == 0) goto LAB_05bea9b0;
      }
    }
  }
  else {
    bVar6 = false;
  }
  goto LAB_05be9670;
  while( true ) {
    lVar15 = unaff_x21 + (long)(int)(uVar22 + (int)uVar30) * 0x10;
    if (uVar30 == 0) {
      *(uint *)(lVar15 + 0x2c) = uVar10;
    }
    else {
      *(undefined4 *)(lVar15 + 0x24) = 0x1a;
    }
    uVar30 = uVar30 + 1;
    if ((uVar13 & 0xffffffff) == uVar30) break;
LAB_05be9634:
    if (uVar29 == uVar30) goto LAB_05bea9c8;
  }
LAB_05be9668:
  uVar22 = (uVar22 + uVar10) - 1;
LAB_05be9670:
  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar27 = (long *)(lVar15 + 0x30);
  *plVar27 = lVar12;
  *(undefined4 *)(lVar15 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar27,lVar12);
  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0)) goto LAB_05bea9b0;
  uVar10 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_05bea9c8;
  lVar31 = lVar15 + (long)(int)uVar10 * 0x178;
  *(short *)(lVar31 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar31 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_05bea9c8;
  lVar15 = lVar15 + (long)(int)uVar10 * 0x178;
  *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)uVar22 * 0x10 + 0x28);
  *(long *)(lVar15 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar27 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar12 + 0x10) == '\x02') {
    plVar14 = *(long **)(lVar12 + 0x18);
    if (plVar14 == (long *)0x0) goto LAB_05bea9b0;
    bVar4 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar15 = plVar14[0x11];
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *plVar25;
    }
    uVar10 = FUN_05be3d0c(lVar15,plVar14,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar10;
    lVar12 = **(long **)(*plVar25 + 0xb8);
    if (lVar12 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_05bea9c8;
    lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar12 = *(long *)(*plVar1 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
    uVar10 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_05bea9c8;
    lVar12 = lVar12 + (long)(int)uVar10 * 0x178;
    *(undefined4 *)(lVar12 + 0x20) = 1;
    *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar2;
    iStack0000000000000040 = iStack0000000000000040 + 1;
    goto LAB_05be9d74;
  }
  if (bVar6) {
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar7 = FUN_05bf59d4(*unaff_x22,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar7 != iVar8) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar13 = FUN_05c4242c(0);
      if ((uVar13 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        lVar15 = *(long *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar16 = *(undefined8 *)(*unaff_x22 + 0x88);
        lVar15 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        lVar15 = FUN_05c3d38c(lVar15,uVar16,0);
      }
      *in_stack_00000038 = lVar15;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar31 = *in_stack_00000038;
      lVar20 = *unaff_x22;
      lVar15 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar15 = *(long *)puVar5;
      }
      uVar11 = FUN_05be3ad4(lVar31,lVar20,*(long *)(lVar15 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
    }
  }
  if (*(long *)(lVar12 + 0x20) == 0) goto LAB_05bea9b0;
  iVar7 = FUN_06114b10(*(long *)(lVar12 + 0x20),0);
  if (0 < iVar7) {
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_05bea9b0;
    lVar15 = *unaff_x22;
    lVar31 = *in_stack_00000038;
    uVar11 = FUN_06114b10(*(long *)(lVar12 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    lVar12 = FUN_05c3ce0c(lVar15,lVar31,uVar11,0);
    *in_stack_00000038 = lVar12;
    thunk_FUN_02dd37b4(in_stack_00000038,lVar12);
    puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    lVar15 = *in_stack_00000038;
    lVar31 = *unaff_x22;
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar5;
    }
    uVar11 = FUN_05be3ad4(lVar15,lVar31,*(long *)(lVar12 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    bVar6 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar13 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar27 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 != 0x200b) && ((uVar13 & 1) == 0)) {
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar5;
    }
    lVar15 = **(long **)(lVar12 + 0xb8);
    if (lVar15 == 0) goto LAB_05bea9b0;
    uVar10 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_05bea9c8;
    if (*(int *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar15 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
        if (lVar15 == 0) goto LAB_05bea9b0;
        uVar10 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      if (bVar6) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
        uVar13 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar10,(long)&stack0x000001b8 + 4,
                              *(undefined8 *)PTR_DAT_0678dea8);
        puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar13 & 1) == 0) {
LAB_05be9ad4:
          lVar12 = *in_stack_00000038;
          uVar16 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar16,lVar12,0);
          puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          lVar15 = *unaff_x22;
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar5;
          }
          uVar10 = FUN_05be3ad4(uVar16,lVar15,*(long *)(lVar12 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
          FUN_047c17c8(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar10,
                       *(undefined8 *)PTR_DAT_06768b20);
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar5;
          }
          lVar15 = **(long **)(lVar12 + 0xb8);
          if (lVar15 == 0) goto LAB_05bea9b0;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
          uVar10 = in_stack_000001b8._4_4_;
          if (0x3ffe < *(int *)(lVar15 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
          goto LAB_05be9ad4;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar10;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar10 = *(uint *)(unaff_x19 + 0x120);
          lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        lVar15 = **(long **)(lVar12 + 0xb8);
      }
      else {
        lVar12 = *in_stack_00000038;
        uVar16 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar16,lVar12,0);
        puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar15 = *unaff_x22;
        lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar12 = *(long *)puVar5;
        }
        uVar10 = FUN_05be3ad4(uVar16,lVar15,*(long *)(lVar12 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar10;
        lVar15 = **(long **)(*(long *)puVar5 + 0xb8);
      }
      if (lVar15 == 0) goto LAB_05bea9b0;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_05bea9c8;
    lVar15 = lVar15 + (long)(int)uVar10 * 0x38;
    *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
  }
  plVar25 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*plVar1 == 0) || (lVar12 = *(long *)(*plVar1 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) = *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*plVar1 == 0) || (lVar12 = *(long *)(*plVar1 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar10 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar10;
  lVar12 = *plVar25;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *plVar25;
    uVar10 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar15 = **(long **)(lVar12 + 0xb8);
  if (lVar15 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_05bea9c8;
  *(bool *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x41) = bVar6;
  if (bVar6) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar15 = **(long **)(*plVar25 + 0xb8);
      if (lVar15 == 0) goto LAB_05bea9b0;
      uVar10 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_05bea9c8;
    puVar19 = (undefined8 *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x48);
    *puVar19 = uVar23;
    thunk_FUN_02dd37b4(puVar19,uVar23);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar26;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = uVar23;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar23);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar2;
  }
  uVar10 = *(uint *)(unaff_x19 + 0x4a0);
LAB_05be9d74:
  *(uint *)(unaff_x19 + 0x4a0) = uVar10 + 1;
LAB_05be9d7c:
  uVar10 = *(uint *)(unaff_x21 + 0x18);
  uVar22 = uVar22 + 1;
  if ((int)uVar10 <= (int)uVar22) goto LAB_05bea110;
  goto LAB_05be8b1c;
}


