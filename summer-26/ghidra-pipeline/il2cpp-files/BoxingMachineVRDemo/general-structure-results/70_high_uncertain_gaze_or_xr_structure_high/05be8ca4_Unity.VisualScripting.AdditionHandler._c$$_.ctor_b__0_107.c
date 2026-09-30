/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_107
ENTRY_POINT: 05be8ca4
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


undefined4 Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_107(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  ulong uVar20;
  long *unaff_x22;
  long *plVar21;
  int unaff_w23;
  long *plVar22;
  undefined4 unaff_w24;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  long unaff_x25;
  undefined8 uVar26;
  ulong uVar27;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined8 uVar28;
  long lVar29;
  uint *puVar30;
  undefined1 auVar31 [16];
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
  
code_r0x05be8ca4:
  *(undefined4 *)(unaff_x25 + unaff_x26 * unaff_x27 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
  if ((*(long *)(unaff_x19 + 0x6b0) == 0) ||
     (lVar11 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar11 == 0)) goto LAB_05bea9b0;
  uVar12 = FUN_03aac1c4(lVar11,*(undefined4 *)(unaff_x19 + 0x6bc),
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                       );
  if ((uint)unaff_x26 < *(uint *)(unaff_x25 + 0x18)) {
    *(undefined8 *)(unaff_x25 + unaff_x26 * unaff_x27 + 0x30) = uVar12;
    thunk_FUN_02dd37b4();
    if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 == 0))
    goto LAB_05bea9b0;
    uVar8 = *(uint *)(unaff_x19 + 0x4a0);
    if (uVar8 < *(uint *)(lVar11 + 0x18)) {
      uVar1 = *(undefined4 *)(unaff_x19 + 0x65c);
      lVar19 = lVar11 + (int)uVar8 * unaff_x27;
      *(int *)(lVar19 + 0x28) = unaff_w23;
      *(undefined4 *)(lVar19 + 0x20) = uVar1;
      if (unaff_w20 < *(uint *)(unaff_x21 + 0x18)) {
        *(int *)(lVar11 + (int)uVar8 * unaff_x27 + 0x2c) =
             (*(int *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28) - unaff_w23) + 1;
        *(undefined4 *)(unaff_x19 + 0x65c) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = unaff_w24;
        in_stack_00000040 = in_stack_00000040 + 1;
        plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
LAB_05be9d74:
        *(uint *)(unaff_x19 + 0x4a0) = uVar8 + 1;
        uVar8 = unaff_w20;
        while( true ) {
          uVar6 = *(uint *)(unaff_x21 + 0x18);
          uVar25 = uVar8 + 1;
          if ((int)uVar6 <= (int)uVar25) goto LAB_05bea110;
          if (uVar6 <= uVar25) goto LAB_05bea9c8;
          puVar30 = (uint *)(unaff_x21 + (long)(int)uVar25 * 0x10 + 0x24);
          if (*puVar30 == 0) goto LAB_05bea110;
          if (*in_stack_00000048 == 0) goto LAB_05bea9b0;
          plVar23 = (long *)(*in_stack_00000048 + 0x38);
          lVar11 = *plVar23;
          iVar9 = *(int *)(unaff_x19 + 0x4a0);
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar9)) {
            if (*(int *)(*unaff_x28 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_03563108(plVar23,iVar9 + 1,1,
                         *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
            uVar6 = *(uint *)(unaff_x21 + 0x18);
          }
          if (uVar6 <= uVar25) goto LAB_05bea9c8;
          uVar6 = *puVar30;
          if ((uVar6 != 0x3c) || (*(char *)(unaff_x19 + 0x33a) == '\0')) break;
          unaff_w24 = *(undefined4 *)(unaff_x19 + 0x120);
          uVar20 = FUN_05c217f4();
          unaff_w20 = uStack00000000000001d8;
          if ((uVar20 & 1) == 0) break;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
          unaff_w23 = *(int *)(unaff_x21 + (long)(int)uVar25 * 0x10 + 0x28);
          unaff_x27 = 0x178;
          if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x292) = 1;
          }
          puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          uVar8 = uStack00000000000001d8;
          if (*(int *)(unaff_x19 + 0x65c) == 1) {
            lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar11 = *(long *)puVar4;
            }
            lVar11 = **(long **)(lVar11 + 0xb8);
            if (lVar11 == 0) goto LAB_05bea9b0;
            if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_05bea9c8;
            lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
            *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
            if ((*in_stack_00000048 == 0) ||
               (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 == 0)) goto LAB_05bea9b0;
            if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
            lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
            *(short *)(lVar11 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
            *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
            thunk_FUN_02dd37b4();
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (unaff_x25 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), unaff_x25 == 0))
            goto LAB_05bea9b0;
            unaff_x26 = (long)(int)*(uint *)(unaff_x19 + 0x4a0);
            if (*(uint *)(unaff_x25 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
            goto code_r0x05be8ca4;
          }
        }
        uStack00000000000001dc = 0;
        uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar12 = *(undefined8 *)(unaff_x19 + 0x118);
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
            uVar20 = FUN_04f83744(uVar6,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_04f83be8(uVar6,0);
              goto LAB_05be8e50;
            }
          }
        }
        else {
LAB_05be8da8:
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar20 = FUN_04f837e4(uVar6,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_04f83a70(uVar6,0);
LAB_05be8e50:
            uVar6 = uVar6 & 0xffff;
          }
        }
LAB_05be8e54:
        uVar8 = uVar8 + 2;
        if ((int)uVar8 < (int)*(uint *)(unaff_x21 + 0x18)) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_05bea9c8;
          uVar24 = *(uint *)(unaff_x21 + (long)(int)uVar8 * 0x10 + 0x24);
        }
        else {
          uVar24 = 0;
        }
        uStack0000000000000018 = uVar6;
        if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_05be8fd0:
          lVar11 = FUN_05c2c458();
          if (lVar11 == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
            FUN_05c2c9e8();
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            iVar9 = FUN_05c41df4(0);
            if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
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
            uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x284);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4();
            }
            lVar11 = FUN_05c09ca0(uStack0000000000000018,uVar13,1,uVar7,uVar2,
                                  (long)&stack0x000001d8 + 4,0);
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
                  uVar13 = FUN_05c4236c(0);
                  uVar7 = *(undefined4 *)(unaff_x19 + 0x284);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
                  if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4
                              ) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)
                                        Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
                  }
                  lVar11 = FUN_05c0a248(uStack0000000000000018,lVar11,uVar13,1,uVar7,uVar2,
                                        (long)&stack0x000001d8 + 4,0);
                  if (lVar11 != 0) goto LAB_05be9df8;
                }
              }
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar13 = FUN_05c41f68(0);
              if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
              }
              uVar20 = FUN_0606a004(uVar13,0,0);
              if ((uVar20 & 1) != 0) {
                if (*(int *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar13 = FUN_05c41f68(0);
                uVar7 = *(undefined4 *)(unaff_x19 + 0x284);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
                if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4)
                    == 0) {
                  thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__)
                  ;
                }
                lVar11 = FUN_05c09ca0(uStack0000000000000018,uVar13,1,uVar7,uVar2,
                                      (long)&stack0x000001d8 + 4,0);
                if (lVar11 != 0) goto LAB_05be9df8;
              }
              if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
              *puVar30 = 0x20;
              uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x284);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
              if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) ==
                  0) {
                thunk_FUN_02dbd7b4();
              }
              lVar11 = FUN_05c09ca0(0x20,uVar13,1,uVar7,uVar2,(long)&stack0x000001d8 + 4,0);
              if (lVar11 == 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar25) goto LAB_05bea9c8;
                *puVar30 = 3;
                uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar7 = *(undefined4 *)(unaff_x19 + 0x284);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
                if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4)
                    == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uStack0000000000000018 = 3;
                lVar11 = FUN_05c09ca0(3,uVar13,1,uVar7,uVar2,(long)&stack0x000001d8 + 4,0);
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
            uVar20 = FUN_05c41f0c(0);
            if ((uVar20 & 1) == 0) {
              plVar23 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
              if (uVar6 >> 0x10 == 0) {
                in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar6);
                lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                            &stack0x000000f0);
                if (plVar23 == (long *)0x0) goto LAB_05bea9b0;
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if ((int)plVar23[3] == 0) goto LAB_05bea9c8;
                plVar23[4] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 4,lVar19);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
                lVar19 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if (*(uint *)(plVar23 + 3) < 2) goto LAB_05bea9c8;
                plVar23[5] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 5,lVar19);
                if (lVar11 == 0) goto LAB_05bea9b0;
                in_stack_00000180 = *(undefined4 *)(lVar11 + 0x14);
                lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                            &stack0x00000180);
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if (*(uint *)(plVar23 + 3) < 3) goto LAB_05bea9c8;
                plVar23[6] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 6,lVar19);
                lVar19 = thunk_FUN_0606f5c0();
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if (*(uint *)(plVar23 + 3) < 4) goto LAB_05bea9c8;
                plVar23[7] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 7,lVar19);
                puVar16 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
              }
              else {
                in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar6);
                lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                            &stack0x000000f0);
                if (plVar23 == (long *)0x0) goto LAB_05bea9b0;
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if ((int)plVar23[3] == 0) goto LAB_05bea9c8;
                plVar23[4] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 4,lVar19);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
                lVar19 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if (*(uint *)(plVar23 + 3) < 2) goto LAB_05bea9c8;
                plVar23[5] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 5,lVar19);
                if (lVar11 == 0) goto LAB_05bea9b0;
                in_stack_00000180 = *(undefined4 *)(lVar11 + 0x14);
                lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                            &stack0x00000180);
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if (*(uint *)(plVar23 + 3) < 3) goto LAB_05bea9c8;
                plVar23[6] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 6,lVar19);
                lVar19 = thunk_FUN_0606f5c0();
                if ((lVar19 != 0) &&
                   (lVar29 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar29 == 0)) goto LAB_05bea9cc;
                if (*(uint *)(plVar23 + 3) < 4) goto LAB_05bea9c8;
                plVar23[7] = lVar19;
                thunk_FUN_02dd37b4(plVar23 + 7,lVar19);
                puVar16 = (undefined8 *)
                          Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
              }
              uVar13 = FUN_04e8e72c(*puVar16,plVar23,0);
              if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0602283c(uVar13);
            }
          }
        }
        else {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar20 = FUN_05c4c7a8(uVar6,0);
          if ((uVar24 == 0xfe0e) || ((uVar20 & 1) == 0)) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar20 = FUN_05c4c728(uVar6,0);
            if ((uVar24 != 0xfe0f) || ((uVar20 & 1) == 0)) goto LAB_05be8fd0;
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
          uVar13 = FUN_05c4277c(0);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x280);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar11 = FUN_05c0a464(uVar6,lVar11,uVar13,1,uVar7,uVar2,(long)&stack0x000001d8 + 4,0);
          if (lVar11 == 0) goto LAB_05be8fd0;
        }
        if ((*in_stack_00000048 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000048 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
        puVar16 = (undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
        *puVar16 = 0;
        thunk_FUN_02dd37b4(puVar16,0);
        if (lVar11 == 0) goto LAB_05bea9b0;
        unaff_w20 = uVar25;
        if (*(char *)(lVar11 + 0x10) == '\x01') {
          if (*(long *)(lVar11 + 0x18) == 0) goto LAB_05bea9b0;
          iVar9 = FUN_05bf59d4(*(long *)(lVar11 + 0x18),0);
          if (*unaff_x22 == 0) goto LAB_05bea9b0;
          iVar10 = FUN_05bf59d4(*unaff_x22,0);
          if (iVar9 != iVar10) {
            plVar23 = *(long **)(lVar11 + 0x18);
            if (plVar23 == (long *)0x0) {
              *unaff_x22 = 0;
            }
            else {
              bVar3 = *(byte *)(*(long *)
                                 Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__ +
                               0x130);
              if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                plVar23 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
                       *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__) {
                plVar23 = (long *)0x0;
              }
              *unaff_x22 = (long)plVar23;
            }
            thunk_FUN_02dd37b4();
          }
          bVar5 = iVar9 != iVar10;
          if ((uVar24 >> 4 == 0xfe0) || (uVar24 - 0xe0100 < 0xf0)) {
            if (*unaff_x22 == 0) goto LAB_05bea9b0;
            iVar9 = FUN_05c03084(*unaff_x22,uStack0000000000000018,uVar24,0);
            if (iVar9 != 0) {
              if (*unaff_x22 == 0) goto LAB_05bea9b0;
              uVar20 = FUN_05c05510(*unaff_x22,iVar9,&stack0x000001c8,0);
              if ((uVar20 & 1) != 0) {
                if ((*in_stack_00000048 == 0) ||
                   (lVar19 = *(long *)(*in_stack_00000048 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
                if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
                *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                     in_stack_000001c8;
                thunk_FUN_02dd37b4();
              }
            }
            if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_05bea9c8;
            *(undefined4 *)(unaff_x21 + (long)(int)uVar8 * 0x10 + 0x24) = 0x1a;
            unaff_w20 = uVar8;
          }
          if ((in_stack_00000010 & 0x100000000) == 0) goto LAB_05be9670;
          if (((*unaff_x22 == 0) || (lVar19 = *(long *)(*unaff_x22 + 0x178), lVar19 == 0)) ||
             (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
          uVar20 = FUN_04937278(lVar19,*(undefined4 *)(lVar11 + 0x28),&stack0x000001d0,
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                               );
          if ((uVar20 & 1) != 0) {
            plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            unaff_x28 = (long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
            if (in_stack_000001d0 == 0) {
LAB_05bea110:
              if (*(char *)(unaff_x19 + 0x42d) != '\0') {
                *(undefined1 *)(unaff_x19 + 0x42d) = 0;
                goto LAB_05bea11c;
              }
              lVar11 = *in_stack_00000048;
              if (lVar11 == 0) goto LAB_05bea9b0;
              *(int *)(lVar11 + 0x1c) = in_stack_00000040;
              lVar19 = *plVar23;
              if (*(int *)(lVar19 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar19 = *plVar23;
              }
              lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
              if (lVar19 == 0) goto LAB_05bea9b0;
              uVar8 = FUN_047c1490(lVar19,*(undefined8 *)
                                           Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                                  );
              *(uint *)(lVar11 + 0x34) = uVar8;
              if (*in_stack_00000048 == 0) goto LAB_05bea9b0;
              plVar21 = (long *)(*in_stack_00000048 + 0x60);
              lVar11 = *plVar21;
              if (lVar11 == 0) goto LAB_05bea9b0;
              uVar20 = (ulong)uVar8;
              if (*(int *)(lVar11 + 0x18) < (int)uVar8) {
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_035631b4(plVar21,uVar20,0,
                             *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
              }
              if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_05bea9b0;
              plVar21 = (long *)(unaff_x19 + 0x720);
              if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar8) {
                uVar25 = uVar8 | (int)uVar8 >> 0x10;
                uVar25 = uVar25 | (int)uVar25 >> 8;
                uVar25 = uVar25 | (int)uVar25 >> 4;
                uVar25 = uVar25 | (int)uVar25 >> 2;
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562eb8(plVar21,(uVar25 | (int)uVar25 >> 1) + 1,
                             *(undefined8 *)
                              Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
              }
              if (*(char *)(unaff_x19 + 0x359) != '\0') {
                if (*in_stack_00000048 == 0) goto LAB_05bea9b0;
                plVar22 = (long *)(*in_stack_00000048 + 0x38);
                lVar11 = *plVar22;
                if (lVar11 == 0) goto LAB_05bea9b0;
                iVar9 = *(int *)(unaff_x19 + 0x4a0);
                if (0x100 < *(int *)(lVar11 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03563108(plVar22,iVar10,1,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__)
                  ;
                  plVar23 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              if ((int)uVar8 < 1) goto LAB_05bea8e8;
              lVar11 = 0;
              uVar27 = 0;
              lVar19 = 0x54;
              lVar29 = 0x20;
              goto LAB_05bea2bc;
            }
            iVar9 = 0;
            while (iVar9 < *(int *)(in_stack_000001d0 + 0x18)) {
              auVar31 = FUN_03a7e878(in_stack_000001d0,iVar9,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                                    );
              lVar19 = auVar31._0_8_;
              if (lVar19 == 0) goto LAB_05bea9b0;
              uVar20 = *(ulong *)(lVar19 + 0x18);
              uVar8 = (uint)uVar20;
              if (1 < (int)uVar8) {
                uVar25 = 1;
                do {
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20 + uVar25) goto LAB_05bea9c8;
                  if (*unaff_x22 == 0) goto LAB_05bea9b0;
                  iVar10 = FUN_05c02fa8(*unaff_x22,
                                        *(undefined4 *)
                                         (unaff_x21 + (long)(int)(unaff_w20 + uVar25) * 0x10 + 0x24)
                                        ,0);
                  if (*(uint *)(lVar19 + 0x18) <= uVar25) goto LAB_05bea9c8;
                  if (iVar10 != *(int *)(lVar19 + (long)(int)uVar25 * 4 + 0x20)) goto LAB_05be95b4;
                  uVar25 = uVar25 + 1;
                } while (uVar8 != uVar25);
              }
              if (auVar31._8_4_ != 0) {
                if (*unaff_x22 == 0) goto LAB_05bea9b0;
                uVar27 = FUN_05c05510(*unaff_x22,auVar31._8_8_ & 0xffffffff,&stack0x000001c0,0);
                if ((uVar27 & 1) != 0) {
                  if ((*in_stack_00000048 == 0) ||
                     (lVar19 = *(long *)(*in_stack_00000048 + 0x38), lVar19 == 0))
                  goto LAB_05bea9b0;
                  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
                  *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                       in_stack_000001c0;
                  thunk_FUN_02dd37b4();
                  if ((int)uVar8 < 1) goto LAB_05be9668;
                  uVar27 = 0;
                  uVar25 = 0;
                  if (unaff_w20 <= *(uint *)(unaff_x21 + 0x18)) {
                    uVar25 = *(uint *)(unaff_x21 + 0x18) - unaff_w20;
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
      }
    }
  }
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
  while( true ) {
    lVar19 = unaff_x21 + (long)(int)(unaff_w20 + (int)uVar27) * 0x10;
    if (uVar27 == 0) {
      *(uint *)(lVar19 + 0x2c) = uVar8;
    }
    else {
      *(undefined4 *)(lVar19 + 0x24) = 0x1a;
    }
    uVar27 = uVar27 + 1;
    if ((uVar20 & 0xffffffff) == uVar27) break;
LAB_05be9634:
    if (uVar25 == uVar27) goto LAB_05bea9c8;
  }
LAB_05be9668:
  unaff_w20 = (unaff_w20 + uVar8) - 1;
LAB_05be9670:
  if ((*in_stack_00000048 == 0) || (lVar19 = *(long *)(*in_stack_00000048 + 0x38), lVar19 == 0))
  goto LAB_05bea9b0;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar23 = (long *)(lVar19 + 0x30);
  *plVar23 = lVar11;
  *(undefined4 *)(lVar19 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar23,lVar11);
  if ((*in_stack_00000048 == 0) || (lVar19 = *(long *)(*in_stack_00000048 + 0x38), lVar19 == 0))
  goto LAB_05bea9b0;
  uVar8 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05bea9c8;
  lVar29 = lVar19 + (long)(int)uVar8 * 0x178;
  *(short *)(lVar29 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar29 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
  lVar19 = lVar19 + (long)(int)uVar8 * 0x178;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28);
  *(long *)(lVar19 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
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
    lVar19 = plVar21[0x11];
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *plVar23;
    }
    uVar8 = FUN_05be3d0c(lVar19,plVar21,*(long *)(lVar11 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar8;
    lVar11 = **(long **)(*plVar23 + 0xb8);
    if (lVar11 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)uVar8 * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
    if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 == 0))
    goto LAB_05bea9b0;
    uVar8 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)uVar8 * 0x178;
    *(undefined4 *)(lVar11 + 0x20) = 1;
    *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
    in_stack_00000040 = in_stack_00000040 + 1;
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
      uVar20 = FUN_05c4242c(0);
      if ((uVar20 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar13 = *(undefined8 *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar26 = *(undefined8 *)(*unaff_x22 + 0x88);
        uVar13 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        uVar13 = FUN_05c3d38c(uVar13,uVar26,0);
      }
      *in_stack_00000038 = uVar13;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      uVar13 = *in_stack_00000038;
      lVar29 = *unaff_x22;
      lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *(long *)puVar4;
      }
      uVar7 = FUN_05be3ad4(uVar13,lVar29,*(long *)(lVar19 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
    }
  }
  if (*(long *)(lVar11 + 0x20) == 0) goto LAB_05bea9b0;
  iVar9 = FUN_06114b10(*(long *)(lVar11 + 0x20),0);
  if (0 < iVar9) {
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_05bea9b0;
    lVar19 = *unaff_x22;
    uVar13 = *in_stack_00000038;
    uVar7 = FUN_06114b10(*(long *)(lVar11 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    uVar13 = FUN_05c3ce0c(lVar19,uVar13,uVar7,0);
    *in_stack_00000038 = uVar13;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar13);
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar13 = *in_stack_00000038;
    lVar19 = *unaff_x22;
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    uVar7 = FUN_05be3ad4(uVar13,lVar19,*(long *)(lVar11 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar20 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 == 0x200b) || ((uVar20 & 1) != 0)) goto LAB_05be9c54;
  lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *(long *)puVar4;
  }
  lVar19 = **(long **)(lVar11 + 0xb8);
  if (lVar19 == 0) goto LAB_05bea9b0;
  uVar8 = *(uint *)(unaff_x19 + 0x120);
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05bea9c8;
  if (*(int *)(lVar19 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = **(long **)(*(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                          0xb8);
      if (lVar19 == 0) goto LAB_05bea9b0;
      uVar8 = *(uint *)(unaff_x19 + 0x120);
    }
  }
  else {
    if (bVar5) {
      if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
      uVar20 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar8,(long)&stack0x000001b8 + 4,
                            *(undefined8 *)PTR_DAT_0678dea8);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if ((uVar20 & 1) == 0) {
LAB_05be9ad4:
        uVar26 = *in_stack_00000038;
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar13,uVar26,0);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar19 = *unaff_x22;
        lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *(long *)puVar4;
        }
        uVar8 = FUN_05be3ad4(uVar13,lVar19,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
        FUN_047c17c8(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar8,
                     *(undefined8 *)PTR_DAT_06768b20);
        lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      }
      else {
        lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *(long *)puVar4;
        }
        lVar19 = **(long **)(lVar11 + 0xb8);
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
        uVar8 = in_stack_000001b8._4_4_;
        if (0x3ffe < *(int *)(lVar19 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
        goto LAB_05be9ad4;
      }
      *(uint *)(unaff_x19 + 0x120) = uVar8;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        uVar8 = *(uint *)(unaff_x19 + 0x120);
        lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      }
      lVar19 = **(long **)(lVar11 + 0xb8);
    }
    else {
      uVar26 = *in_stack_00000038;
      uVar13 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
      FUN_060369d4(uVar13,uVar26,0);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar19 = *unaff_x22;
      lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar11 = *(long *)puVar4;
      }
      uVar8 = FUN_05be3ad4(uVar13,lVar19,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar8;
      lVar19 = **(long **)(*(long *)puVar4 + 0xb8);
    }
    if (lVar19 == 0) goto LAB_05bea9b0;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05bea9c8;
  lVar19 = lVar19 + (long)(int)uVar8 * 0x38;
  *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
LAB_05be9c54:
  plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 == 0))
  goto LAB_05bea9b0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 == 0))
  goto LAB_05bea9b0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar8 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar8;
  lVar11 = *plVar23;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *plVar23;
    uVar8 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar19 = **(long **)(lVar11 + 0xb8);
  if (lVar19 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05bea9c8;
  *(bool *)(lVar19 + (long)(int)uVar8 * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = **(long **)(*plVar23 + 0xb8);
      if (lVar19 == 0) goto LAB_05bea9b0;
      uVar8 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05bea9c8;
    puVar16 = (undefined8 *)(lVar19 + (long)(int)uVar8 * 0x38 + 0x48);
    *puVar16 = uVar12;
    thunk_FUN_02dd37b4(puVar16,uVar12);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar28;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = uVar12;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar12);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
  }
  uVar8 = *(uint *)(unaff_x19 + 0x4a0);
  goto LAB_05be9d74;
LAB_05bea2bc:
  do {
    if (uVar27 != 0) {
      lVar17 = *plVar21;
      if (lVar17 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
      uVar12 = *(undefined8 *)(lVar17 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
      if ((uVar14 & 1) != 0) {
        lVar17 = *plVar23;
        plVar22 = (long *)*plVar21;
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar17 = *plVar23;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = lVar17 + lVar19;
        in_stack_00000170 = *(undefined8 *)(lVar17 + -4);
        in_stack_00000168 = *(undefined8 *)(lVar17 + -0xc);
        in_stack_00000160 = *(undefined8 *)(lVar17 + -0x14);
        in_stack_00000158 = *(undefined8 *)(lVar17 + -0x1c);
        in_stack_00000150 = *(undefined8 *)(lVar17 + -0x24);
        in_stack_00000148 = *(undefined8 *)(lVar17 + -0x2c);
        in_stack_00000140 = *(undefined8 *)(lVar17 + -0x34);
        lVar17 = FUN_05c48f74();
        if (plVar22 == (long *)0x0) goto LAB_05bea9b0;
        if ((lVar17 != 0) &&
           (lVar15 = thunk_FUN_02d9d438(lVar17,*(undefined8 *)(*plVar22 + 0x40)), lVar15 == 0)) {
LAB_05bea9cc:
          uVar12 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar12,0);
        }
        if (*(uint *)(plVar22 + 3) <= uVar27) goto LAB_05bea9c8;
        plVar22[uVar27 + 4] = lVar17;
        thunk_FUN_02dd37b4((long)plVar22 + lVar29,lVar17);
        plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((*in_stack_00000048 == 0) ||
           (lVar17 = *(long *)(*in_stack_00000048 + 0x60), lVar17 == 0)) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        puVar16 = (undefined8 *)(lVar17 + lVar11 + 0x30);
        *puVar16 = 0;
        thunk_FUN_02dd37b4(puVar16,0);
      }
      lVar17 = *plVar21;
      if (lVar17 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
      lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
      if (lVar17 == 0) goto LAB_05bea9b0;
      uVar12 = *(undefined8 *)(lVar17 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
      if ((uVar14 & 1) == 0) {
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_05bea9b0;
        iVar9 = FUN_0606f30c(lVar17,0);
        lVar17 = *plVar23;
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar17);
          lVar17 = *plVar23;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *(long *)(lVar17 + lVar19 + -0x1c);
        if (lVar17 == 0) goto LAB_05bea9b0;
        iVar10 = FUN_0606f30c(lVar17,0);
        if (iVar9 != iVar10) goto LAB_05bea4b4;
      }
      else {
LAB_05bea4b4:
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar15 = *plVar23;
        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = *plVar23;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
        if (lVar17 == 0) goto LAB_05bea9b0;
        thunk_FUN_05c48a90(lVar17,*(undefined8 *)(lVar15 + lVar19 + -0x1c),0);
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar15 = **(long **)(*plVar23 + 0xb8);
        if (lVar15 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar15 + lVar19 + -0x2c);
        thunk_FUN_02dd37b4();
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar15 = **(long **)(*plVar23 + 0xb8);
        if (lVar15 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar15 + lVar19 + -0x24);
        thunk_FUN_02dd37b4();
      }
      lVar17 = *plVar23;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar17 = *plVar23;
      }
      lVar15 = **(long **)(lVar17 + 0xb8);
      if (lVar15 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
      if (*(char *)(lVar15 + lVar19 + -0x13) != '\0') {
        lVar18 = *plVar21;
        if (lVar18 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = **(long **)(*plVar23 + 0xb8);
          if (lVar15 == 0) goto LAB_05bea9b0;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
        if (lVar18 == 0) goto LAB_05bea9b0;
        FUN_05c48ac0(lVar18,*(undefined8 *)(lVar15 + lVar19 + -0x1c),0);
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar15 = **(long **)(*plVar23 + 0xb8);
        if (lVar15 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar17 + 0x48) = *(undefined8 *)(lVar15 + lVar19 + -0xc);
        thunk_FUN_02dd37b4();
      }
    }
    lVar17 = *plVar23;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar17 = *plVar23;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
    if ((*in_stack_00000048 == 0) || (lVar15 = *(long *)(*in_stack_00000048 + 0x60), lVar15 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
    lVar18 = *(long *)(lVar15 + lVar11 + 0x30);
    uVar25 = *(uint *)(lVar17 + lVar19);
    if (lVar18 == 0) {
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
        FUN_05c3debc(&stack0x000000f0,*(undefined8 *)(unaff_x19 + 0x3d8),uVar25 + 1,0);
        memcpy(&stack0x000000a0,&stack0x000000f0,0x50);
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05bea9c8;
        memcpy((void *)(lVar15 + lVar11 + 0x20),&stack0x000000a0,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *(long *)(lVar17 + uVar27 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05bea9b0;
        uVar12 = FUN_05c48e08(lVar17,0);
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
        FUN_05c3debc(&stack0x000000f0,uVar12,uVar25 + 1,0);
        memcpy(&stack0x00000050,&stack0x000000f0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_05bea9c8;
        __dest = (void *)(lVar15 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000050,0x50);
      }
      thunk_FUN_02dd37b4(__dest,0);
    }
    else {
      iVar9 = *(int *)(lVar18 + 0x18);
      if (iVar9 < (int)(uVar25 * 4)) {
        if ((int)uVar25 < 0x401) {
          uVar6 = (int)uVar25 >> 0x10;
LAB_05bea834:
          uVar25 = uVar25 | uVar6 | (int)(uVar25 | uVar6) >> 8;
          uVar25 = uVar25 | (int)uVar25 >> 4;
          uVar25 = uVar25 | (int)uVar25 >> 2;
          iVar9 = (uVar25 | (int)uVar25 >> 1) + 1;
        }
        else {
LAB_05bea7c8:
          iVar9 = uVar25 + 0x100;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05c3ecd4(lVar15 + lVar11 + 0x20,iVar9,0);
      }
      else if ((0 < (int)uVar25) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
        iVar10 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar10 = iVar9;
        }
        if (0x100 < (int)((iVar10 >> 2) - uVar25)) {
          if (0x400 < (int)uVar25) goto LAB_05bea7c8;
          uVar6 = uVar25 >> 0x10;
          goto LAB_05bea834;
        }
      }
    }
    plVar23 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if ((*in_stack_00000048 == 0) || (lVar17 = *(long *)(*in_stack_00000048 + 0x60), lVar17 == 0))
    goto LAB_05bea9b0;
    lVar15 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar15 = *plVar23;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_05bea9b0;
    if ((*(uint *)(lVar15 + 0x18) <= uVar27) || (*(uint *)(lVar17 + 0x18) <= uVar27))
    goto LAB_05bea9c8;
    *(undefined8 *)(lVar17 + lVar11 + 0x68) = *(undefined8 *)(lVar15 + lVar19 + -0x1c);
    thunk_FUN_02dd37b4();
    uVar27 = uVar27 + 1;
    lVar11 = lVar11 + 0x50;
    lVar19 = lVar19 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar20 != uVar27);
LAB_05bea8e8:
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  lVar11 = *plVar21;
  if (lVar11 != 0) {
    lVar19 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3) + 0x20;
    lVar29 = (long)(int)uVar8 * 0x50 + 0x20;
    do {
      uVar8 = (uint)uVar20;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar8) {
LAB_05bea11c:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_05bea9c8;
      uVar12 = *(undefined8 *)(lVar11 + lVar19);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar20 = FUN_0606a004(uVar12,0,0);
      if ((uVar20 & 1) == 0) goto LAB_05bea11c;
      if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x60), lVar11 == 0))
      break;
      uVar25 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar8 < (int)uVar25) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar25 = *(uint *)(lVar11 + 0x18);
        }
        if (uVar25 <= uVar8) goto LAB_05bea9c8;
        FUN_05c3fc70(lVar11 + lVar29,0,1,0);
      }
      lVar11 = *plVar21;
      uVar20 = (ulong)(uVar8 + 1);
      lVar29 = lVar29 + 0x50;
      lVar19 = lVar19 + 8;
    } while (lVar11 != 0);
  }
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


