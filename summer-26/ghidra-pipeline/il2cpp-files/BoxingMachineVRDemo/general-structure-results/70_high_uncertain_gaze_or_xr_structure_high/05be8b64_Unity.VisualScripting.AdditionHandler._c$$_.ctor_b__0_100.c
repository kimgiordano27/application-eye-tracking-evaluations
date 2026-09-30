/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_100
ENTRY_POINT: 05be8b64
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


undefined4 Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_100(undefined **param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  long *plVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar21;
  int unaff_w23;
  long *plVar22;
  long *unaff_x24;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 uVar27;
  long lVar28;
  uint *unaff_x29;
  undefined1 auVar29 [16];
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined8 *in_stack_00000038;
  int in_stack_00000040;
  long *in_stack_00000048;
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
  
code_r0x05be8b64:
  FUN_03563108(unaff_x24,unaff_w23 + 1,1,*(undefined8 *)param_1[0x1ad]);
  uVar7 = *(uint *)(unaff_x21 + 0x18);
LAB_05be8b80:
  if (unaff_w20 < uVar7) {
    uVar7 = *unaff_x29;
    if ((uVar7 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
      uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar10 = FUN_05c217f4();
      uVar24 = uStack00000000000001d8;
      if ((uVar10 & 1) == 0) goto LAB_05be8d80;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
      iVar8 = *(int *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28);
      if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x292) = 1;
      }
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      unaff_w20 = uStack00000000000001d8;
      if (*(int *)(unaff_x19 + 0x65c) != 1) goto LAB_05be9d7c;
      lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
      if (lVar11 != 0) {
        if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
          *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
          if ((*unaff_x26 != 0) && (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 != 0)) {
            if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
              *(short *)(lVar11 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
              *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
              thunk_FUN_02dd37b4();
              if ((*(long *)(unaff_x19 + 0x3a0) != 0) &&
                 (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar11 != 0)) {
                uVar7 = *(uint *)(unaff_x19 + 0x4a0);
                if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x50) =
                       *(undefined4 *)(unaff_x19 + 0x120);
                  if ((*(long *)(unaff_x19 + 0x6b0) != 0) &&
                     (lVar12 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar12 != 0)) {
                    uVar13 = FUN_03aac1c4(lVar12,*(undefined4 *)(unaff_x19 + 0x6bc),
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                         );
                    if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x30) = uVar13;
                      thunk_FUN_02dd37b4();
                      if ((*in_stack_00000048 != 0) &&
                         (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 != 0)) {
                        uVar7 = *(uint *)(unaff_x19 + 0x4a0);
                        if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                          uVar6 = *(undefined4 *)(unaff_x19 + 0x65c);
                          lVar12 = lVar11 + (long)(int)uVar7 * 0x178;
                          *(int *)(lVar12 + 0x28) = iVar8;
                          *(undefined4 *)(lVar12 + 0x20) = uVar6;
                          if (uVar24 < *(uint *)(unaff_x21 + 0x18)) {
                            *(int *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x2c) =
                                 (*(int *)(unaff_x21 + (long)(int)uVar24 * 0x10 + 0x28) - iVar8) + 1
                            ;
                            *(undefined4 *)(unaff_x19 + 0x65c) = 0;
                            *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
                            in_stack_00000040 = in_stack_00000040 + 1;
                            plVar18 = (long *)
                                      Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                            ;
                            unaff_x26 = in_stack_00000048;
                            unaff_w20 = uVar24;
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
    uVar27 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
    if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05be8e54;
    uVar24 = *(uint *)(unaff_x19 + 0x284);
    if ((uVar24 >> 4 & 1) == 0) {
      if ((uVar24 >> 3 & 1) == 0) {
        if ((uVar24 >> 5 & 1) != 0) goto LAB_05be8da8;
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_04f83744(uVar7,0);
        if ((uVar10 & 1) != 0) {
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
      uVar10 = FUN_04f837e4(uVar7,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_04f83a70(uVar7,0);
LAB_05be8e50:
        uVar7 = uVar7 & 0xffff;
      }
    }
LAB_05be8e54:
    uVar24 = unaff_w20 + 1;
    if ((int)uVar24 < (int)*(uint *)(unaff_x21 + 0x18)) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_05bea9c8;
      uVar23 = *(uint *)(unaff_x21 + (long)(int)uVar24 * 0x10 + 0x24);
    }
    else {
      uVar23 = 0;
    }
    uStack0000000000000018 = uVar7;
    if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_05be8fd0:
      lVar11 = FUN_05c2c458();
      if (lVar11 == 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
        FUN_05c2c9e8();
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        iVar8 = FUN_05c41df4(0);
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
        if (iVar8 == 0) {
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
        *unaff_x29 = uStack0000000000000018;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar6 = *(undefined4 *)(unaff_x19 + 0x284);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar11 = FUN_05c09ca0(uStack0000000000000018,uVar14,1,uVar6,uVar2,(long)&stack0x000001d8 + 4
                              ,0);
        if (lVar11 == 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar11 = FUN_05c4236c(0);
          if (lVar11 != 0) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            lVar11 = FUN_05c4236c(0);
            if (lVar11 == 0) goto LAB_05bea9b0;
            if (0 < *(int *)(lVar11 + 0x18)) {
              lVar11 = *unaff_x22;
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar14 = FUN_05c4236c(0);
              uVar6 = *(undefined4 *)(unaff_x19 + 0x284);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
              if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) ==
                  0) {
                thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
              }
              lVar11 = FUN_05c0a248(uStack0000000000000018,lVar11,uVar14,1,uVar6,uVar2,
                                    (long)&stack0x000001d8 + 4,0);
              if (lVar11 != 0) goto LAB_05be9df8;
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
          uVar10 = FUN_0606a004(uVar14,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar14 = FUN_05c41f68(0);
            uVar6 = *(undefined4 *)(unaff_x19 + 0x284);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
            }
            lVar11 = FUN_05c09ca0(uStack0000000000000018,uVar14,1,uVar6,uVar2,
                                  (long)&stack0x000001d8 + 4,0);
            if (lVar11 != 0) goto LAB_05be9df8;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
          *unaff_x29 = 0x20;
          uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar6 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          lVar11 = FUN_05c09ca0(0x20,uVar14,1,uVar6,uVar2,(long)&stack0x000001d8 + 4,0);
          if (lVar11 == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
            *unaff_x29 = 3;
            uVar14 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar6 = *(undefined4 *)(unaff_x19 + 0x284);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4();
            }
            uStack0000000000000018 = 3;
            lVar11 = FUN_05c09ca0(3,uVar14,1,uVar6,uVar2,(long)&stack0x000001d8 + 4,0);
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
        uVar10 = FUN_05c41f0c(0);
        unaff_x26 = in_stack_00000048;
        if ((uVar10 & 1) == 0) {
          plVar18 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
          if (uVar7 >> 0x10 == 0) {
            in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar7);
            lVar12 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
            if (plVar18 == (long *)0x0) goto LAB_05bea9b0;
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if ((int)plVar18[3] == 0) goto LAB_05bea9c8;
            plVar18[4] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 4,lVar12);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
            lVar12 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if (*(uint *)(plVar18 + 3) < 2) goto LAB_05bea9c8;
            plVar18[5] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 5,lVar12);
            if (lVar11 == 0) goto LAB_05bea9b0;
            in_stack_00000180 = *(undefined4 *)(lVar11 + 0x14);
            lVar12 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if (*(uint *)(plVar18 + 3) < 3) goto LAB_05bea9c8;
            plVar18[6] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 6,lVar12);
            lVar12 = thunk_FUN_0606f5c0();
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if (*(uint *)(plVar18 + 3) < 4) goto LAB_05bea9c8;
            plVar18[7] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 7,lVar12);
            puVar17 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
          }
          else {
            in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar7);
            lVar12 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
            if (plVar18 == (long *)0x0) goto LAB_05bea9b0;
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if ((int)plVar18[3] == 0) goto LAB_05bea9c8;
            plVar18[4] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 4,lVar12);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
            lVar12 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if (*(uint *)(plVar18 + 3) < 2) goto LAB_05bea9c8;
            plVar18[5] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 5,lVar12);
            if (lVar11 == 0) goto LAB_05bea9b0;
            in_stack_00000180 = *(undefined4 *)(lVar11 + 0x14);
            lVar12 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if (*(uint *)(plVar18 + 3) < 3) goto LAB_05bea9c8;
            plVar18[6] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 6,lVar12);
            lVar12 = thunk_FUN_0606f5c0();
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_02d9d438(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar28 == 0))
            goto LAB_05bea9cc;
            if (*(uint *)(plVar18 + 3) < 4) goto LAB_05bea9c8;
            plVar18[7] = lVar12;
            thunk_FUN_02dd37b4(plVar18 + 7,lVar12);
            puVar17 = (undefined8 *)
                      Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
          }
          uVar14 = FUN_04e8e72c(*puVar17,plVar18,0);
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
      uVar10 = FUN_05c4c7a8(uVar7,0);
      if ((uVar23 == 0xfe0e) || ((uVar10 & 1) == 0)) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_05c4c728(uVar7,0);
        if ((uVar23 != 0xfe0f) || ((uVar10 & 1) == 0)) goto LAB_05be8fd0;
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar11 = FUN_05c4277c(0);
      if (lVar11 == 0) goto LAB_05be8fd0;
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar11 = FUN_05c4277c(0);
      if (lVar11 == 0) goto LAB_05bea9b0;
      if (*(int *)(lVar11 + 0x18) < 1) goto LAB_05be8fd0;
      lVar11 = *unaff_x22;
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_05c4277c(0);
      uVar6 = *(undefined4 *)(unaff_x19 + 0x280);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
      }
      lVar11 = FUN_05c0a464(uVar7,lVar11,uVar14,1,uVar6,uVar2,(long)&stack0x000001d8 + 4,0);
      unaff_x26 = in_stack_00000048;
      if (lVar11 == 0) goto LAB_05be8fd0;
    }
    if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
    puVar17 = (undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
    *puVar17 = 0;
    thunk_FUN_02dd37b4(puVar17,0);
    if (lVar11 == 0) goto LAB_05bea9b0;
    if (*(char *)(lVar11 + 0x10) != '\x01') {
      bVar5 = false;
      goto LAB_05be9670;
    }
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*(long *)(lVar11 + 0x18),0);
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar9 = FUN_05bf59d4(*unaff_x22,0);
    if (iVar8 != iVar9) {
      plVar18 = *(long **)(lVar11 + 0x18);
      if (plVar18 == (long *)0x0) {
        *unaff_x22 = 0;
      }
      else {
        bVar3 = *(byte *)(*(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__ +
                         0x130);
        if (*(byte *)(*plVar18 + 0x130) < bVar3) {
          plVar18 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
                 *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__) {
          plVar18 = (long *)0x0;
        }
        *unaff_x22 = (long)plVar18;
      }
      thunk_FUN_02dd37b4();
    }
    bVar5 = iVar8 != iVar9;
    if ((uVar23 >> 4 == 0xfe0) || (uVar23 - 0xe0100 < 0xf0)) {
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar8 = FUN_05c03084(*unaff_x22,uStack0000000000000018,uVar23,0);
      if (iVar8 != 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar10 = FUN_05c05510(*unaff_x22,iVar8,&stack0x000001c8,0);
        if ((uVar10 & 1) != 0) {
          if ((*in_stack_00000048 == 0) ||
             (lVar12 = *(long *)(*in_stack_00000048 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
          *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_000001c8;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar24) goto LAB_05bea9c8;
      *(undefined4 *)(unaff_x21 + (long)(int)uVar24 * 0x10 + 0x24) = 0x1a;
      unaff_w20 = uVar24;
    }
    unaff_x26 = in_stack_00000048;
    if ((in_stack_00000010 & 0x100000000) == 0) goto LAB_05be9670;
    if (((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x178), lVar12 != 0)) &&
       (lVar12 = *(long *)(lVar12 + 0x38), lVar12 != 0)) {
      uVar10 = FUN_04937278(lVar12,*(undefined4 *)(lVar11 + 0x28),&stack0x000001d0,
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                           );
      if ((uVar10 & 1) == 0) goto LAB_05be9670;
      plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (in_stack_000001d0 != 0) {
        iVar8 = 0;
        while (iVar8 < *(int *)(in_stack_000001d0 + 0x18)) {
          auVar29 = FUN_03a7e878(in_stack_000001d0,iVar8,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                                );
          lVar12 = auVar29._0_8_;
          if (lVar12 == 0) goto LAB_05bea9b0;
          uVar10 = *(ulong *)(lVar12 + 0x18);
          uVar7 = (uint)uVar10;
          if (1 < (int)uVar7) {
            uVar24 = 1;
            do {
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20 + uVar24) goto LAB_05bea9c8;
              if (*unaff_x22 == 0) goto LAB_05bea9b0;
              iVar9 = FUN_05c02fa8(*unaff_x22,
                                   *(undefined4 *)
                                    (unaff_x21 + (long)(int)(unaff_w20 + uVar24) * 0x10 + 0x24),0);
              if (*(uint *)(lVar12 + 0x18) <= uVar24) goto LAB_05bea9c8;
              if (iVar9 != *(int *)(lVar12 + (long)(int)uVar24 * 4 + 0x20)) goto LAB_05be95b4;
              uVar24 = uVar24 + 1;
            } while (uVar7 != uVar24);
          }
          if (auVar29._8_4_ != 0) {
            if (*unaff_x22 == 0) goto LAB_05bea9b0;
            uVar26 = FUN_05c05510(*unaff_x22,auVar29._8_8_ & 0xffffffff,&stack0x000001c0,0);
            if ((uVar26 & 1) != 0) {
              if ((*in_stack_00000048 == 0) ||
                 (lVar12 = *(long *)(*in_stack_00000048 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
              *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                   in_stack_000001c0;
              thunk_FUN_02dd37b4();
              if ((int)uVar7 < 1) goto LAB_05be9668;
              uVar26 = 0;
              uVar24 = 0;
              if (unaff_w20 <= *(uint *)(unaff_x21 + 0x18)) {
                uVar24 = *(uint *)(unaff_x21 + 0x18) - unaff_w20;
              }
              goto LAB_05be9634;
            }
          }
LAB_05be95b4:
          iVar8 = iVar8 + 1;
          if (in_stack_000001d0 == 0) goto LAB_05bea9b0;
        }
        goto LAB_05be9670;
      }
      goto LAB_05bea110;
    }
    goto LAB_05bea9b0;
  }
  goto LAB_05bea9c8;
  while( true ) {
    lVar12 = unaff_x21 + (long)(int)(unaff_w20 + (int)uVar26) * 0x10;
    if (uVar26 == 0) {
      *(uint *)(lVar12 + 0x2c) = uVar7;
    }
    else {
      *(undefined4 *)(lVar12 + 0x24) = 0x1a;
    }
    uVar26 = uVar26 + 1;
    if ((uVar10 & 0xffffffff) == uVar26) break;
LAB_05be9634:
    if (uVar24 == uVar26) goto LAB_05bea9c8;
  }
LAB_05be9668:
  unaff_w20 = (unaff_w20 + uVar7) - 1;
LAB_05be9670:
  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar18 = (long *)(lVar12 + 0x30);
  *plVar18 = lVar11;
  *(undefined4 *)(lVar12 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar18,lVar11);
  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  uVar7 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_05bea9c8;
  lVar28 = lVar12 + (long)(int)uVar7 * 0x178;
  *(short *)(lVar28 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar28 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
  lVar12 = lVar12 + (long)(int)uVar7 * 0x178;
  *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28);
  *(long *)(lVar12 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar11 + 0x10) == '\x02') {
    plVar21 = *(long **)(lVar11 + 0x18);
    if (plVar21 == (long *)0x0) goto LAB_05bea9b0;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar21 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar12 = plVar21[0x11];
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *plVar18;
    }
    uVar7 = FUN_05be3d0c(lVar12,plVar21,*(long *)(lVar11 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar7;
    lVar11 = **(long **)(*plVar18 + 0xb8);
    if (lVar11 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
    if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0))
    goto LAB_05bea9b0;
    uVar7 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)uVar7 * 0x178;
    *(undefined4 *)(lVar11 + 0x20) = 1;
    *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
    in_stack_00000040 = in_stack_00000040 + 1;
    goto LAB_05be9d74;
  }
  if (bVar5) {
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*unaff_x22,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar9 = FUN_05bf59d4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_05c4242c(0);
      if ((uVar10 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar14 = *(undefined8 *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar25 = *(undefined8 *)(*unaff_x22 + 0x88);
        uVar14 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_05c3d38c(uVar14,uVar25,0);
      }
      *in_stack_00000038 = uVar14;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      uVar14 = *in_stack_00000038;
      lVar28 = *unaff_x22;
      lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar12 = *(long *)puVar4;
      }
      uVar6 = FUN_05be3ad4(uVar14,lVar28,*(long *)(lVar12 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar6;
      unaff_x26 = in_stack_00000048;
    }
  }
  if (*(long *)(lVar11 + 0x20) == 0) goto LAB_05bea9b0;
  iVar8 = FUN_06114b10(*(long *)(lVar11 + 0x20),0);
  if (0 < iVar8) {
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_05bea9b0;
    lVar12 = *unaff_x22;
    uVar14 = *in_stack_00000038;
    uVar6 = FUN_06114b10(*(long *)(lVar11 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    uVar14 = FUN_05c3ce0c(lVar12,uVar14,uVar6,0);
    *in_stack_00000038 = uVar14;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar14);
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar14 = *in_stack_00000038;
    lVar12 = *unaff_x22;
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    uVar6 = FUN_05be3ad4(uVar14,lVar12,*(long *)(lVar11 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar6;
    unaff_x26 = in_stack_00000048;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar10 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 != 0x200b) && ((uVar10 & 1) == 0)) {
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    lVar12 = **(long **)(lVar11 + 0xb8);
    if (lVar12 == 0) goto LAB_05bea9b0;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_05bea9c8;
    if (*(int *)(lVar12 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar12 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
        if (lVar12 == 0) goto LAB_05bea9b0;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      if (bVar5) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
        uVar10 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar7,(long)&stack0x000001b8 + 4,
                              *(undefined8 *)PTR_DAT_0678dea8);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar10 & 1) == 0) {
LAB_05be9ad4:
          uVar25 = *in_stack_00000038;
          uVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar14,uVar25,0);
          puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          lVar12 = *unaff_x22;
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar11 = *(long *)puVar4;
          }
          uVar7 = FUN_05be3ad4(uVar14,lVar12,*(long *)(lVar11 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
          FUN_047c17c8(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar7,
                       *(undefined8 *)PTR_DAT_06768b20);
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar11 = *(long *)puVar4;
          }
          lVar12 = **(long **)(lVar11 + 0xb8);
          if (lVar12 == 0) goto LAB_05bea9b0;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
          uVar7 = in_stack_000001b8._4_4_;
          if (0x3ffe < *(int *)(lVar12 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
          goto LAB_05be9ad4;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar7 = *(uint *)(unaff_x19 + 0x120);
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        lVar12 = **(long **)(lVar11 + 0xb8);
      }
      else {
        uVar25 = *in_stack_00000038;
        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar14,uVar25,0);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar12 = *unaff_x22;
        lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *(long *)puVar4;
        }
        uVar7 = FUN_05be3ad4(uVar14,lVar12,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        lVar12 = **(long **)(*(long *)puVar4 + 0xb8);
      }
      if (lVar12 == 0) goto LAB_05bea9b0;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_05bea9c8;
    lVar12 = lVar12 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
  }
  plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar7 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar7;
  lVar11 = *plVar18;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *plVar18;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar12 = **(long **)(lVar11 + 0xb8);
  if (lVar12 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_05bea9c8;
  *(bool *)(lVar12 + (long)(int)uVar7 * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = **(long **)(*plVar18 + 0xb8);
      if (lVar12 == 0) goto LAB_05bea9b0;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_05bea9c8;
    puVar17 = (undefined8 *)(lVar12 + (long)(int)uVar7 * 0x38 + 0x48);
    *puVar17 = uVar13;
    thunk_FUN_02dd37b4(puVar17,uVar13);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar27;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = uVar13;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar13);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
  }
  uVar7 = *(uint *)(unaff_x19 + 0x4a0);
LAB_05be9d74:
  *(uint *)(unaff_x19 + 0x4a0) = uVar7 + 1;
LAB_05be9d7c:
  uVar7 = *(uint *)(unaff_x21 + 0x18);
  unaff_w20 = unaff_w20 + 1;
  if ((int)unaff_w20 < (int)uVar7) {
    if (uVar7 <= unaff_w20) goto LAB_05bea9c8;
    unaff_x29 = (uint *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x24);
    if (*unaff_x29 != 0) {
      if (*unaff_x26 == 0) goto LAB_05bea9b0;
      unaff_x24 = (long *)(*unaff_x26 + 0x38);
      unaff_w23 = *(int *)(unaff_x19 + 0x4a0);
      if ((*unaff_x24 == 0) || (*(int *)(*unaff_x24 + 0x18) <= unaff_w23)) goto LAB_05be8b50;
      goto LAB_05be8b80;
    }
  }
LAB_05bea110:
  if (*(char *)(unaff_x19 + 0x42d) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x42d) = 0;
    goto LAB_05bea11c;
  }
  lVar11 = *unaff_x26;
  if (lVar11 == 0) goto LAB_05bea9b0;
  *(int *)(lVar11 + 0x1c) = in_stack_00000040;
  lVar12 = *plVar18;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *plVar18;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) goto LAB_05bea9b0;
  uVar7 = FUN_047c1490(lVar12,*(undefined8 *)
                               Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__);
  *(uint *)(lVar11 + 0x34) = uVar7;
  if (*unaff_x26 == 0) goto LAB_05bea9b0;
  plVar21 = (long *)(*unaff_x26 + 0x60);
  lVar11 = *plVar21;
  if (lVar11 == 0) goto LAB_05bea9b0;
  uVar10 = (ulong)uVar7;
  if (*(int *)(lVar11 + 0x18) < (int)uVar7) {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_035631b4(plVar21,uVar10,0,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
  }
  if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_05bea9b0;
  plVar21 = (long *)(unaff_x19 + 0x720);
  if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar7) {
    uVar24 = uVar7 | (int)uVar7 >> 0x10;
    uVar24 = uVar24 | (int)uVar24 >> 8;
    uVar24 = uVar24 | (int)uVar24 >> 4;
    uVar24 = uVar24 | (int)uVar24 >> 2;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03562eb8(plVar21,(uVar24 | (int)uVar24 >> 1) + 1,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__)
    ;
  }
  if (*(char *)(unaff_x19 + 0x359) != '\0') {
    if (*unaff_x26 == 0) goto LAB_05bea9b0;
    plVar22 = (long *)(*unaff_x26 + 0x38);
    lVar11 = *plVar22;
    if (lVar11 == 0) goto LAB_05bea9b0;
    iVar8 = *(int *)(unaff_x19 + 0x4a0);
    if (0x100 < *(int *)(lVar11 + 0x18) - iVar8) {
      iVar9 = 0x100;
      if (0x100 < iVar8 + 1) {
        iVar9 = iVar8 + 1;
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03563108(plVar22,iVar9,1,
                   *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
      plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    }
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  if ((int)uVar7 < 1) goto LAB_05bea8e8;
  lVar11 = 0;
  uVar26 = 0;
  lVar12 = 0x54;
  lVar28 = 0x20;
  goto LAB_05bea2bc;
LAB_05be8b50:
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  param_1 = &Method_System_Collections_Generic_HashSet<Guid>_get_Count__;
  goto code_r0x05be8b64;
LAB_05bea2bc:
  do {
    if (uVar26 != 0) {
      lVar19 = *plVar21;
      if (lVar19 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
      uVar13 = *(undefined8 *)(lVar19 + uVar26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = UnityEngine_Font__add_textureRebuilt(uVar13,0,0);
      if ((uVar15 & 1) != 0) {
        lVar19 = *plVar18;
        plVar22 = (long *)*plVar21;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar19 = *plVar18;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = lVar19 + lVar12;
        in_stack_00000170 = *(undefined8 *)(lVar19 + -4);
        in_stack_00000168 = *(undefined8 *)(lVar19 + -0xc);
        in_stack_00000160 = *(undefined8 *)(lVar19 + -0x14);
        in_stack_00000158 = *(undefined8 *)(lVar19 + -0x1c);
        in_stack_00000150 = *(undefined8 *)(lVar19 + -0x24);
        in_stack_00000148 = *(undefined8 *)(lVar19 + -0x2c);
        in_stack_00000140 = *(undefined8 *)(lVar19 + -0x34);
        lVar19 = FUN_05c48f74();
        if (plVar22 == (long *)0x0) goto LAB_05bea9b0;
        if ((lVar19 != 0) &&
           (lVar16 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar16 == 0)) {
LAB_05bea9cc:
          uVar13 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar13,0);
        }
        if (*(uint *)(plVar22 + 3) <= uVar26) goto LAB_05bea9c8;
        plVar22[uVar26 + 4] = lVar19;
        thunk_FUN_02dd37b4((long)plVar22 + lVar28,lVar19);
        plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((*in_stack_00000048 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000048 + 0x60), lVar19 == 0)) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        puVar17 = (undefined8 *)(lVar19 + lVar11 + 0x30);
        *puVar17 = 0;
        thunk_FUN_02dd37b4(puVar17,0);
      }
      lVar19 = *plVar21;
      if (lVar19 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
      lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_05bea9b0;
      uVar13 = *(undefined8 *)(lVar19 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar15 = UnityEngine_Font__add_textureRebuilt(uVar13,0,0);
      if ((uVar15 & 1) == 0) {
        lVar19 = *plVar21;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
        iVar8 = FUN_0606f30c(lVar19,0);
        lVar19 = *plVar18;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar19);
          lVar19 = *plVar18;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + lVar12 + -0x1c);
        if (lVar19 == 0) goto LAB_05bea9b0;
        iVar9 = FUN_0606f30c(lVar19,0);
        if (iVar8 != iVar9) goto LAB_05bea4b4;
      }
      else {
LAB_05bea4b4:
        lVar19 = *plVar21;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar16 = *plVar18;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar16 = *plVar18;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
        if (lVar19 == 0) goto LAB_05bea9b0;
        thunk_FUN_05c48a90(lVar19,*(undefined8 *)(lVar16 + lVar12 + -0x1c),0);
        lVar19 = *plVar21;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar16 = **(long **)(*plVar18 + 0xb8);
        if (lVar16 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar16 + lVar12 + -0x2c);
        thunk_FUN_02dd37b4();
        lVar19 = *plVar21;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar16 = **(long **)(*plVar18 + 0xb8);
        if (lVar16 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar16 + lVar12 + -0x24);
        thunk_FUN_02dd37b4();
      }
      lVar19 = *plVar18;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *plVar18;
      }
      lVar16 = **(long **)(lVar19 + 0xb8);
      if (lVar16 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
      if (*(char *)(lVar16 + lVar12 + -0x13) != '\0') {
        lVar20 = *plVar21;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar16 = **(long **)(*plVar18 + 0xb8);
          if (lVar16 == 0) goto LAB_05bea9b0;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
        if (lVar20 == 0) goto LAB_05bea9b0;
        FUN_05c48ac0(lVar20,*(undefined8 *)(lVar16 + lVar12 + -0x1c),0);
        lVar19 = *plVar21;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar16 = **(long **)(*plVar18 + 0xb8);
        if (lVar16 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar19 + 0x48) = *(undefined8 *)(lVar16 + lVar12 + -0xc);
        thunk_FUN_02dd37b4();
      }
    }
    lVar19 = *plVar18;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = *plVar18;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
    if ((*in_stack_00000048 == 0) || (lVar16 = *(long *)(*in_stack_00000048 + 0x60), lVar16 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
    lVar20 = *(long *)(lVar16 + lVar11 + 0x30);
    uVar24 = *(uint *)(lVar19 + lVar12);
    if (lVar20 == 0) {
      if (uVar26 == 0) {
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
        FUN_05c3debc(&stack0x000000f0,*(undefined8 *)(unaff_x19 + 0x3d8),uVar24 + 1,0);
        memcpy(&stack0x000000a0,&stack0x000000f0,0x50);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bea9c8;
        memcpy((void *)(lVar16 + lVar11 + 0x20),&stack0x000000a0,0x50);
        __dest = (void *)(lVar16 + 0x20);
      }
      else {
        lVar19 = *plVar21;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        uVar13 = FUN_05c48e08(lVar19,0);
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
        FUN_05c3debc(&stack0x000000f0,uVar13,uVar24 + 1,0);
        memcpy(&stack0x00000050,&stack0x000000f0,0x50);
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05bea9c8;
        __dest = (void *)(lVar16 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000050,0x50);
      }
      thunk_FUN_02dd37b4(__dest,0);
    }
    else {
      iVar8 = *(int *)(lVar20 + 0x18);
      if (iVar8 < (int)(uVar24 * 4)) {
        if ((int)uVar24 < 0x401) {
          uVar23 = (int)uVar24 >> 0x10;
LAB_05bea834:
          uVar24 = uVar24 | uVar23 | (int)(uVar24 | uVar23) >> 8;
          uVar24 = uVar24 | (int)uVar24 >> 4;
          uVar24 = uVar24 | (int)uVar24 >> 2;
          iVar8 = (uVar24 | (int)uVar24 >> 1) + 1;
        }
        else {
LAB_05bea7c8:
          iVar8 = uVar24 + 0x100;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05c3ecd4(lVar16 + lVar11 + 0x20,iVar8,0);
      }
      else if ((0 < (int)uVar24) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
        iVar9 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar9 = iVar8;
        }
        if (0x100 < (int)((iVar9 >> 2) - uVar24)) {
          if (0x400 < (int)uVar24) goto LAB_05bea7c8;
          uVar23 = uVar24 >> 0x10;
          goto LAB_05bea834;
        }
      }
    }
    plVar18 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if ((*in_stack_00000048 == 0) || (lVar19 = *(long *)(*in_stack_00000048 + 0x60), lVar19 == 0))
    goto LAB_05bea9b0;
    lVar16 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar16 = *plVar18;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_05bea9b0;
    if ((*(uint *)(lVar16 + 0x18) <= uVar26) || (*(uint *)(lVar19 + 0x18) <= uVar26))
    goto LAB_05bea9c8;
    *(undefined8 *)(lVar19 + lVar11 + 0x68) = *(undefined8 *)(lVar16 + lVar12 + -0x1c);
    thunk_FUN_02dd37b4();
    uVar26 = uVar26 + 1;
    lVar11 = lVar11 + 0x50;
    lVar12 = lVar12 + 0x38;
    lVar28 = lVar28 + 8;
  } while (uVar10 != uVar26);
LAB_05bea8e8:
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  lVar11 = *plVar21;
  if (lVar11 != 0) {
    lVar12 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3) + 0x20;
    lVar28 = (long)(int)uVar7 * 0x50 + 0x20;
    do {
      uVar7 = (uint)uVar10;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar7) {
LAB_05bea11c:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar13 = *(undefined8 *)(lVar11 + lVar12);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_0606a004(uVar13,0,0);
      if ((uVar10 & 1) == 0) goto LAB_05bea11c;
      if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x60), lVar11 == 0))
      break;
      uVar24 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar7 < (int)uVar24) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar24 = *(uint *)(lVar11 + 0x18);
        }
        if (uVar24 <= uVar7) goto LAB_05bea9c8;
        FUN_05c3fc70(lVar11 + lVar28,0,1,0);
      }
      lVar11 = *plVar21;
      uVar10 = (ulong)(uVar7 + 1);
      lVar28 = lVar28 + 0x50;
      lVar12 = lVar12 + 8;
    } while (lVar11 != 0);
  }
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


