/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_103
ENTRY_POINT: 05be8bf4
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


undefined4 Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_103(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  long lVar19;
  long lVar20;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  ulong uVar21;
  long *unaff_x22;
  long *plVar22;
  int unaff_w23;
  long *plVar23;
  undefined4 unaff_w24;
  long *plVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long *unaff_x26;
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
  
code_r0x05be8bf4:
  puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if (!(bool)in_ZR) goto LAB_05be9d7c;
  lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *(long *)puVar5;
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 == 0) goto LAB_05bea9b0;
  if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
    if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(unaff_x19 + 0x4a0) < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (int)*(uint *)(unaff_x19 + 0x4a0) * unaff_x27;
      *(short *)(lVar12 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
      thunk_FUN_02dd37b4();
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
      uVar9 = *(uint *)(unaff_x19 + 0x4a0);
      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
        *(undefined4 *)(lVar12 + (int)uVar9 * unaff_x27 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120)
        ;
        if ((*(long *)(unaff_x19 + 0x6b0) == 0) ||
           (lVar13 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar13 == 0)) goto LAB_05bea9b0;
        uVar14 = FUN_03aac1c4(lVar13,*(undefined4 *)(unaff_x19 + 0x6bc),
                              *(undefined8 *)
                               Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                             );
        if (uVar9 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + (int)uVar9 * unaff_x27 + 0x30) = uVar14;
          thunk_FUN_02dd37b4();
          if ((*in_stack_00000048 == 0) ||
             (lVar12 = *(long *)(*in_stack_00000048 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
          uVar9 = *(uint *)(unaff_x19 + 0x4a0);
          if (uVar9 < *(uint *)(lVar12 + 0x18)) {
            uVar2 = *(undefined4 *)(unaff_x19 + 0x65c);
            lVar13 = lVar12 + (int)uVar9 * unaff_x27;
            *(int *)(lVar13 + 0x28) = unaff_w23;
            *(undefined4 *)(lVar13 + 0x20) = uVar2;
            if (unaff_w20 < *(uint *)(unaff_x21 + 0x18)) {
              *(int *)(lVar12 + (int)uVar9 * unaff_x27 + 0x2c) =
                   (*(int *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28) - unaff_w23) + 1;
              *(undefined4 *)(unaff_x19 + 0x65c) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = unaff_w24;
              in_stack_00000040 = in_stack_00000040 + 1;
              plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
              unaff_x26 = in_stack_00000048;
LAB_05be9d74:
              *(uint *)(unaff_x19 + 0x4a0) = uVar9 + 1;
LAB_05be9d7c:
              uVar7 = *(uint *)(unaff_x21 + 0x18);
              uVar9 = unaff_w20 + 1;
              if ((int)uVar7 <= (int)uVar9) {
LAB_05bea110:
                if (*(char *)(unaff_x19 + 0x42d) != '\0') {
                  *(undefined1 *)(unaff_x19 + 0x42d) = 0;
                  goto LAB_05bea11c;
                }
                lVar12 = *unaff_x26;
                if (lVar12 == 0) goto LAB_05bea9b0;
                *(int *)(lVar12 + 0x1c) = in_stack_00000040;
                lVar13 = *plVar24;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar13 = *plVar24;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                if (lVar13 == 0) goto LAB_05bea9b0;
                uVar9 = FUN_047c1490(lVar13,*(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                                    );
                *(uint *)(lVar12 + 0x34) = uVar9;
                if (*unaff_x26 == 0) goto LAB_05bea9b0;
                plVar22 = (long *)(*unaff_x26 + 0x60);
                lVar12 = *plVar22;
                if (lVar12 == 0) goto LAB_05bea9b0;
                uVar21 = (ulong)uVar9;
                if (*(int *)(lVar12 + 0x18) < (int)uVar9) {
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_035631b4(plVar22,uVar21,0,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__)
                  ;
                }
                if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_05bea9b0;
                plVar22 = (long *)(unaff_x19 + 0x720);
                if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar9) {
                  uVar7 = uVar9 | (int)uVar9 >> 0x10;
                  uVar7 = uVar7 | (int)uVar7 >> 8;
                  uVar7 = uVar7 | (int)uVar7 >> 4;
                  uVar7 = uVar7 | (int)uVar7 >> 2;
                  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03562eb8(plVar22,(uVar7 | (int)uVar7 >> 1) + 1,
                               *(undefined8 *)
                                Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__)
                  ;
                }
                if (*(char *)(unaff_x19 + 0x359) != '\0') {
                  if (*unaff_x26 == 0) goto LAB_05bea9b0;
                  plVar23 = (long *)(*unaff_x26 + 0x38);
                  lVar12 = *plVar23;
                  if (lVar12 == 0) goto LAB_05bea9b0;
                  iVar10 = *(int *)(unaff_x19 + 0x4a0);
                  if (0x100 < *(int *)(lVar12 + 0x18) - iVar10) {
                    iVar11 = 0x100;
                    if (0x100 < iVar10 + 1) {
                      iVar11 = iVar10 + 1;
                    }
                    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_03563108(plVar23,iVar11,1,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
                    plVar24 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  }
                }
                puVar5 = 
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                ;
                if ((int)uVar9 < 1) goto LAB_05bea8e8;
                lVar12 = 0;
                uVar27 = 0;
                lVar13 = 0x54;
                lVar29 = 0x20;
                goto LAB_05bea2bc;
              }
              if (uVar7 <= uVar9) goto LAB_05bea9c8;
              puVar30 = (uint *)(unaff_x21 + (long)(int)uVar9 * 0x10 + 0x24);
              if (*puVar30 == 0) goto LAB_05bea110;
              if (*unaff_x26 == 0) goto LAB_05bea9b0;
              plVar24 = (long *)(*unaff_x26 + 0x38);
              lVar12 = *plVar24;
              iVar10 = *(int *)(unaff_x19 + 0x4a0);
              if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar10)) {
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03563108(plVar24,iVar10 + 1,1,
                             *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
                uVar7 = *(uint *)(unaff_x21 + 0x18);
              }
              if (uVar7 <= uVar9) goto LAB_05bea9c8;
              uVar7 = *puVar30;
              if ((uVar7 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
                unaff_w24 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar21 = FUN_05c217f4();
                if ((uVar21 & 1) != 0) goto code_r0x05be8bc0;
              }
              uStack00000000000001dc = 0;
              uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar14 = *(undefined8 *)(unaff_x19 + 0x118);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x120);
              if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05be8e54;
              uVar1 = *(uint *)(unaff_x19 + 0x284);
              if ((uVar1 >> 4 & 1) == 0) {
                if ((uVar1 >> 3 & 1) == 0) {
                  if ((uVar1 >> 5 & 1) != 0) goto LAB_05be8da8;
                }
                else {
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar21 = FUN_04f83744(uVar7,0);
                  if ((uVar21 & 1) != 0) {
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
                uVar21 = FUN_04f837e4(uVar7,0);
                if ((uVar21 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar7 = FUN_04f83a70(uVar7,0);
LAB_05be8e50:
                  uVar7 = uVar7 & 0xffff;
                }
              }
LAB_05be8e54:
              uVar1 = unaff_w20 + 2;
              if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x18)) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_05bea9c8;
                uVar25 = *(uint *)(unaff_x21 + (long)(int)uVar1 * 0x10 + 0x24);
              }
              else {
                uVar25 = 0;
              }
              uStack0000000000000018 = uVar7;
              if (*(char *)(unaff_x19 + 0x33b) == '\0') {
LAB_05be8fd0:
                lVar12 = FUN_05c2c458();
                if (lVar12 == 0) {
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_05bea9c8;
                  FUN_05c2c9e8();
                  if (*(int *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                              + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  iVar10 = FUN_05c41df4(0);
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_05bea9c8;
                  if (iVar10 == 0) {
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
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
                  uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
                  if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4
                              ) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  lVar12 = FUN_05c09ca0(uStack0000000000000018,uVar15,1,uVar8,uVar3,
                                        (long)&stack0x000001d8 + 4,0);
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
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
                        uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
                        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__
                                    + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(*(long *)
                                              Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__)
                          ;
                        }
                        lVar12 = FUN_05c0a248(uStack0000000000000018,lVar12,uVar15,1,uVar8,uVar3,
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
                    uVar21 = FUN_0606a004(uVar15,0,0);
                    if ((uVar21 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                                  + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar15 = FUN_05c41f68(0);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
                      uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
                      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ +
                                  0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)
                                            Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
                      }
                      lVar12 = FUN_05c09ca0(uStack0000000000000018,uVar15,1,uVar8,uVar3,
                                            (long)&stack0x000001d8 + 4,0);
                      if (lVar12 != 0) goto LAB_05be9df8;
                    }
                    if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_05bea9c8;
                    *puVar30 = 0x20;
                    uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
                    uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
                    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ +
                                0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    lVar12 = FUN_05c09ca0(0x20,uVar15,1,uVar8,uVar3,(long)&stack0x000001d8 + 4,0);
                    if (lVar12 == 0) {
                      if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_05bea9c8;
                      *puVar30 = 3;
                      uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x284);
                      uVar3 = *(undefined4 *)(unaff_x19 + 0x23c);
                      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ +
                                  0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uStack0000000000000018 = 3;
                      lVar12 = FUN_05c09ca0(3,uVar15,1,uVar8,uVar3,(long)&stack0x000001d8 + 4,0);
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
                  uVar21 = FUN_05c41f0c(0);
                  unaff_x26 = in_stack_00000048;
                  if ((uVar21 & 1) == 0) {
                    plVar24 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
                    if (uVar7 >> 0x10 == 0) {
                      in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar7);
                      lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                                  &stack0x000000f0);
                      if (plVar24 == (long *)0x0) goto LAB_05bea9b0;
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if ((int)plVar24[3] == 0) goto LAB_05bea9c8;
                      plVar24[4] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 4,lVar13);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
                      lVar13 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if (*(uint *)(plVar24 + 3) < 2) goto LAB_05bea9c8;
                      plVar24[5] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 5,lVar13);
                      if (lVar12 == 0) goto LAB_05bea9b0;
                      in_stack_00000180 = *(undefined4 *)(lVar12 + 0x14);
                      lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                                  &stack0x00000180);
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if (*(uint *)(plVar24 + 3) < 3) goto LAB_05bea9c8;
                      plVar24[6] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 6,lVar13);
                      lVar13 = thunk_FUN_0606f5c0();
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if (*(uint *)(plVar24 + 3) < 4) goto LAB_05bea9c8;
                      plVar24[7] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 7,lVar13);
                      puVar18 = (undefined8 *)
                                Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
                    }
                    else {
                      in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,uVar7);
                      lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                                  &stack0x000000f0);
                      if (plVar24 == (long *)0x0) goto LAB_05bea9b0;
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if ((int)plVar24[3] == 0) goto LAB_05bea9c8;
                      plVar24[4] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 4,lVar13);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
                      lVar13 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if (*(uint *)(plVar24 + 3) < 2) goto LAB_05bea9c8;
                      plVar24[5] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 5,lVar13);
                      if (lVar12 == 0) goto LAB_05bea9b0;
                      in_stack_00000180 = *(undefined4 *)(lVar12 + 0x14);
                      lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),
                                                  &stack0x00000180);
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if (*(uint *)(plVar24 + 3) < 3) goto LAB_05bea9c8;
                      plVar24[6] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 6,lVar13);
                      lVar13 = thunk_FUN_0606f5c0();
                      if ((lVar13 != 0) &&
                         (lVar29 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar24 + 0x40)),
                         lVar29 == 0)) goto LAB_05bea9cc;
                      if (*(uint *)(plVar24 + 3) < 4) goto LAB_05bea9c8;
                      plVar24[7] = lVar13;
                      thunk_FUN_02dd37b4(plVar24 + 7,lVar13);
                      puVar18 = (undefined8 *)
                                Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__
                      ;
                    }
                    uVar15 = FUN_04e8e72c(*puVar18,plVar24,0);
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
                uVar21 = FUN_05c4c7a8(uVar7,0);
                if ((uVar25 == 0xfe0e) || ((uVar21 & 1) == 0)) {
                  if (*(int *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                              + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar21 = FUN_05c4c728(uVar7,0);
                  if ((uVar25 != 0xfe0f) || ((uVar21 & 1) == 0)) goto LAB_05be8fd0;
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
                uVar8 = *(undefined4 *)(unaff_x19 + 0x280);
                uVar3 = *(undefined4 *)(unaff_x19 + 0x238);
                if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4)
                    == 0) {
                  thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__)
                  ;
                }
                lVar12 = FUN_05c0a464(uVar7,lVar12,uVar15,1,uVar8,uVar3,(long)&stack0x000001d8 + 4,0
                                     );
                unaff_x26 = in_stack_00000048;
                if (lVar12 == 0) goto LAB_05be8fd0;
              }
              if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0))
              goto LAB_05bea9b0;
              if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
              puVar18 = (undefined8 *)
                        (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
              *puVar18 = 0;
              thunk_FUN_02dd37b4(puVar18,0);
              if (lVar12 == 0) goto LAB_05bea9b0;
              unaff_w20 = uVar9;
              if (*(char *)(lVar12 + 0x10) == '\x01') {
                if (*(long *)(lVar12 + 0x18) == 0) goto LAB_05bea9b0;
                iVar10 = FUN_05bf59d4(*(long *)(lVar12 + 0x18),0);
                if (*unaff_x22 == 0) goto LAB_05bea9b0;
                iVar11 = FUN_05bf59d4(*unaff_x22,0);
                if (iVar10 != iVar11) {
                  plVar24 = *(long **)(lVar12 + 0x18);
                  if (plVar24 == (long *)0x0) {
                    *unaff_x22 = 0;
                  }
                  else {
                    bVar4 = *(byte *)(*(long *)
                                       Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__
                                     + 0x130);
                    if (*(byte *)(*plVar24 + 0x130) < bVar4) {
                      plVar24 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar4 * 8 + -8) !=
                             *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__
                            ) {
                      plVar24 = (long *)0x0;
                    }
                    *unaff_x22 = (long)plVar24;
                  }
                  thunk_FUN_02dd37b4();
                }
                bVar6 = iVar10 != iVar11;
                if ((uVar25 >> 4 == 0xfe0) || (uVar25 - 0xe0100 < 0xf0)) {
                  if (*unaff_x22 == 0) goto LAB_05bea9b0;
                  iVar10 = FUN_05c03084(*unaff_x22,uStack0000000000000018,uVar25,0);
                  if (iVar10 != 0) {
                    if (*unaff_x22 == 0) goto LAB_05bea9b0;
                    uVar21 = FUN_05c05510(*unaff_x22,iVar10,&stack0x000001c8,0);
                    if ((uVar21 & 1) != 0) {
                      if ((*in_stack_00000048 == 0) ||
                         (lVar13 = *(long *)(*in_stack_00000048 + 0x38), lVar13 == 0))
                      goto LAB_05bea9b0;
                      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0))
                      goto LAB_05bea9c8;
                      *(undefined8 *)
                       (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                           in_stack_000001c8;
                      thunk_FUN_02dd37b4();
                    }
                  }
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_05bea9c8;
                  *(undefined4 *)(unaff_x21 + (long)(int)uVar1 * 0x10 + 0x24) = 0x1a;
                  unaff_w20 = uVar1;
                }
                unaff_x26 = in_stack_00000048;
                if ((in_stack_00000010 & 0x100000000) == 0) goto LAB_05be9670;
                if (((*unaff_x22 == 0) || (lVar13 = *(long *)(*unaff_x22 + 0x178), lVar13 == 0)) ||
                   (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
                uVar21 = FUN_04937278(lVar13,*(undefined4 *)(lVar12 + 0x28),&stack0x000001d0,
                                      *(undefined8 *)
                                       Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                                     );
                if ((uVar21 & 1) != 0) {
                  plVar24 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  unaff_x28 = (long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                  ;
                  if (in_stack_000001d0 == 0) goto LAB_05bea110;
                  iVar10 = 0;
                  while (iVar10 < *(int *)(in_stack_000001d0 + 0x18)) {
                    auVar31 = FUN_03a7e878(in_stack_000001d0,iVar10,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                                          );
                    lVar13 = auVar31._0_8_;
                    if (lVar13 == 0) goto LAB_05bea9b0;
                    uVar21 = *(ulong *)(lVar13 + 0x18);
                    uVar9 = (uint)uVar21;
                    if (1 < (int)uVar9) {
                      uVar7 = 1;
                      do {
                        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20 + uVar7) goto LAB_05bea9c8;
                        if (*unaff_x22 == 0) goto LAB_05bea9b0;
                        iVar11 = FUN_05c02fa8(*unaff_x22,
                                              *(undefined4 *)
                                               (unaff_x21 + (long)(int)(unaff_w20 + uVar7) * 0x10 +
                                               0x24),0);
                        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_05bea9c8;
                        if (iVar11 != *(int *)(lVar13 + (long)(int)uVar7 * 4 + 0x20))
                        goto LAB_05be95b4;
                        uVar7 = uVar7 + 1;
                      } while (uVar9 != uVar7);
                    }
                    if (auVar31._8_4_ != 0) {
                      if (*unaff_x22 == 0) goto LAB_05bea9b0;
                      uVar27 = FUN_05c05510(*unaff_x22,auVar31._8_8_ & 0xffffffff,&stack0x000001c0,0
                                           );
                      if ((uVar27 & 1) != 0) {
                        if ((*in_stack_00000048 == 0) ||
                           (lVar13 = *(long *)(*in_stack_00000048 + 0x38), lVar13 == 0))
                        goto LAB_05bea9b0;
                        if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0))
                        goto LAB_05bea9c8;
                        *(undefined8 *)
                         (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                             in_stack_000001c0;
                        thunk_FUN_02dd37b4();
                        if ((int)uVar9 < 1) goto LAB_05be9668;
                        uVar27 = 0;
                        uVar7 = 0;
                        if (unaff_w20 <= *(uint *)(unaff_x21 + 0x18)) {
                          uVar7 = *(uint *)(unaff_x21 + 0x18) - unaff_w20;
                        }
                        goto LAB_05be9634;
                      }
                    }
LAB_05be95b4:
                    iVar10 = iVar10 + 1;
                    if (in_stack_000001d0 == 0) goto LAB_05bea9b0;
                  }
                }
              }
              else {
                bVar6 = false;
              }
              goto LAB_05be9670;
            }
          }
        }
      }
    }
  }
  goto LAB_05bea9c8;
code_r0x05be8bc0:
  if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_05bea9c8;
  unaff_w23 = *(int *)(unaff_x21 + (long)(int)uVar9 * 0x10 + 0x28);
  unaff_x27 = 0x178;
  if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x292) = 1;
  }
  in_ZR = *(int *)(unaff_x19 + 0x65c) == 1;
  unaff_w20 = uStack00000000000001d8;
  goto code_r0x05be8bf4;
  while( true ) {
    lVar13 = unaff_x21 + (long)(int)(unaff_w20 + (int)uVar27) * 0x10;
    if (uVar27 == 0) {
      *(uint *)(lVar13 + 0x2c) = uVar9;
    }
    else {
      *(undefined4 *)(lVar13 + 0x24) = 0x1a;
    }
    uVar27 = uVar27 + 1;
    if ((uVar21 & 0xffffffff) == uVar27) break;
LAB_05be9634:
    if (uVar7 == uVar27) goto LAB_05bea9c8;
  }
LAB_05be9668:
  unaff_w20 = (unaff_w20 + uVar9) - 1;
LAB_05be9670:
  if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar24 = (long *)(lVar13 + 0x30);
  *plVar24 = lVar12;
  *(undefined4 *)(lVar13 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar24,lVar12);
  if ((*unaff_x26 == 0) || (lVar13 = *(long *)(*unaff_x26 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_05bea9c8;
  lVar29 = lVar13 + (long)(int)uVar9 * 0x178;
  *(short *)(lVar29 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar29 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
  lVar13 = lVar13 + (long)(int)uVar9 * 0x178;
  *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28);
  *(long *)(lVar13 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar12 + 0x10) == '\x02') {
    plVar22 = *(long **)(lVar12 + 0x18);
    if (plVar22 == (long *)0x0) goto LAB_05bea9b0;
    bVar4 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar13 = plVar22[0x11];
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *plVar24;
    }
    uVar9 = FUN_05be3d0c(lVar13,plVar22,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar9;
    lVar12 = **(long **)(*plVar24 + 0xb8);
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
    *(undefined4 *)(unaff_x19 + 0x120) = uVar2;
    in_stack_00000040 = in_stack_00000040 + 1;
    goto LAB_05be9d74;
  }
  if (bVar6) {
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar10 = FUN_05bf59d4(*unaff_x22,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar11 = FUN_05bf59d4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar10 != iVar11) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar21 = FUN_05c4242c(0);
      if ((uVar21 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar15 = *(undefined8 *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar26 = *(undefined8 *)(*unaff_x22 + 0x88);
        uVar15 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_05c3d38c(uVar15,uVar26,0);
      }
      *in_stack_00000038 = uVar15;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      uVar15 = *in_stack_00000038;
      lVar29 = *unaff_x22;
      lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *(long *)puVar5;
      }
      uVar8 = FUN_05be3ad4(uVar15,lVar29,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
      unaff_x26 = in_stack_00000048;
    }
  }
  if (*(long *)(lVar12 + 0x20) == 0) goto LAB_05bea9b0;
  iVar10 = FUN_06114b10(*(long *)(lVar12 + 0x20),0);
  if (0 < iVar10) {
    if (*(long *)(lVar12 + 0x20) == 0) goto LAB_05bea9b0;
    lVar13 = *unaff_x22;
    uVar15 = *in_stack_00000038;
    uVar8 = FUN_06114b10(*(long *)(lVar12 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    uVar15 = FUN_05c3ce0c(lVar13,uVar15,uVar8,0);
    *in_stack_00000038 = uVar15;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar15);
    puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar15 = *in_stack_00000038;
    lVar13 = *unaff_x22;
    lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar12 = *(long *)puVar5;
    }
    uVar8 = FUN_05be3ad4(uVar15,lVar13,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
    bVar6 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
    unaff_x26 = in_stack_00000048;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar21 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  unaff_x28 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 == 0x200b) || ((uVar21 & 1) != 0)) goto LAB_05be9c54;
  lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *(long *)puVar5;
  }
  lVar13 = **(long **)(lVar12 + 0xb8);
  if (lVar13 == 0) goto LAB_05bea9b0;
  uVar9 = *(uint *)(unaff_x19 + 0x120);
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_05bea9c8;
  if (*(int *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = **(long **)(*(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                          0xb8);
      if (lVar13 == 0) goto LAB_05bea9b0;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
    }
  }
  else {
    if (bVar6) {
      if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
      uVar21 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar9,(long)&stack0x000001b8 + 4,
                            *(undefined8 *)PTR_DAT_0678dea8);
      puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if ((uVar21 & 1) == 0) {
LAB_05be9ad4:
        uVar26 = *in_stack_00000038;
        uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar15,uVar26,0);
        puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar13 = *unaff_x22;
        lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar12 = *(long *)puVar5;
        }
        uVar9 = FUN_05be3ad4(uVar15,lVar13,*(long *)(lVar12 + 0xb8),
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
          lVar12 = *(long *)puVar5;
        }
        lVar13 = **(long **)(lVar12 + 0xb8);
        if (lVar13 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar13 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
        uVar9 = in_stack_000001b8._4_4_;
        if (0x3ffe < *(int *)(lVar13 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
        goto LAB_05be9ad4;
      }
      *(uint *)(unaff_x19 + 0x120) = uVar9;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        uVar9 = *(uint *)(unaff_x19 + 0x120);
        lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      }
      lVar13 = **(long **)(lVar12 + 0xb8);
    }
    else {
      uVar26 = *in_stack_00000038;
      uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
      FUN_060369d4(uVar15,uVar26,0);
      puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar13 = *unaff_x22;
      lVar12 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar12 = *(long *)puVar5;
      }
      uVar9 = FUN_05be3ad4(uVar15,lVar13,*(long *)(lVar12 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar9;
      lVar13 = **(long **)(*(long *)puVar5 + 0xb8);
    }
    if (lVar13 == 0) goto LAB_05bea9b0;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_05bea9c8;
  lVar13 = lVar13 + (long)(int)uVar9 * 0x38;
  *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
LAB_05be9c54:
  plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*unaff_x26 == 0) || (lVar12 = *(long *)(*unaff_x26 + 0x38), lVar12 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar9 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar9;
  lVar12 = *plVar24;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar12 = *plVar24;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar13 = **(long **)(lVar12 + 0xb8);
  if (lVar13 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_05bea9c8;
  *(bool *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x41) = bVar6;
  if (bVar6) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = **(long **)(*plVar24 + 0xb8);
      if (lVar13 == 0) goto LAB_05bea9b0;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_05bea9c8;
    puVar18 = (undefined8 *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x48);
    *puVar18 = uVar14;
    thunk_FUN_02dd37b4(puVar18,uVar14);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar28;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = uVar14;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar14);
    *(undefined4 *)(unaff_x19 + 0x120) = uVar2;
  }
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  goto LAB_05be9d74;
LAB_05bea2bc:
  do {
    if (uVar27 != 0) {
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
      uVar14 = *(undefined8 *)(lVar19 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = UnityEngine_Font__add_textureRebuilt(uVar14,0,0);
      if ((uVar16 & 1) != 0) {
        lVar19 = *plVar24;
        plVar23 = (long *)*plVar22;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar19 = *plVar24;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = lVar19 + lVar13;
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
           (lVar17 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0)) {
LAB_05bea9cc:
          uVar14 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar14,0);
        }
        if (*(uint *)(plVar23 + 3) <= uVar27) goto LAB_05bea9c8;
        plVar23[uVar27 + 4] = lVar19;
        thunk_FUN_02dd37b4((long)plVar23 + lVar29,lVar19);
        plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((*in_stack_00000048 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000048 + 0x60), lVar19 == 0)) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        puVar18 = (undefined8 *)(lVar19 + lVar12 + 0x30);
        *puVar18 = 0;
        thunk_FUN_02dd37b4(puVar18,0);
      }
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
      lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_05bea9b0;
      uVar14 = *(undefined8 *)(lVar19 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = UnityEngine_Font__add_textureRebuilt(uVar14,0,0);
      if ((uVar16 & 1) == 0) {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_05bea9b0;
        iVar10 = FUN_0606f30c(lVar19,0);
        lVar19 = *plVar24;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar19);
          lVar19 = *plVar24;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + lVar13 + -0x1c);
        if (lVar19 == 0) goto LAB_05bea9b0;
        iVar11 = FUN_0606f30c(lVar19,0);
        if (iVar10 != iVar11) goto LAB_05bea4b4;
      }
      else {
LAB_05bea4b4:
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = *plVar24;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar17 = *plVar24;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        if (lVar19 == 0) goto LAB_05bea9b0;
        thunk_FUN_05c48a90(lVar19,*(undefined8 *)(lVar17 + lVar13 + -0x1c),0);
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = **(long **)(*plVar24 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar17 + lVar13 + -0x2c);
        thunk_FUN_02dd37b4();
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = **(long **)(*plVar24 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar17 + lVar13 + -0x24);
        thunk_FUN_02dd37b4();
      }
      lVar19 = *plVar24;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *plVar24;
      }
      lVar17 = **(long **)(lVar19 + 0xb8);
      if (lVar17 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
      if (*(char *)(lVar17 + lVar13 + -0x13) != '\0') {
        lVar20 = *plVar22;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar17 = **(long **)(*plVar24 + 0xb8);
          if (lVar17 == 0) goto LAB_05bea9b0;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        if (lVar20 == 0) goto LAB_05bea9b0;
        FUN_05c48ac0(lVar20,*(undefined8 *)(lVar17 + lVar13 + -0x1c),0);
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar17 = **(long **)(*plVar24 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar19 + 0x48) = *(undefined8 *)(lVar17 + lVar13 + -0xc);
        thunk_FUN_02dd37b4();
      }
    }
    lVar19 = *plVar24;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = *plVar24;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
    if ((*in_stack_00000048 == 0) || (lVar17 = *(long *)(*in_stack_00000048 + 0x60), lVar17 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
    lVar20 = *(long *)(lVar17 + lVar12 + 0x30);
    uVar7 = *(uint *)(lVar19 + lVar13);
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
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_05bea9c8;
        memcpy((void *)(lVar17 + lVar12 + 0x20),&stack0x000000a0,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05bea9c8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05bea9b0;
        uVar14 = FUN_05c48e08(lVar19,0);
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
        FUN_05c3debc(&stack0x000000f0,uVar14,uVar7 + 1,0);
        memcpy(&stack0x00000050,&stack0x000000f0,0x50);
        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05bea9c8;
        __dest = (void *)(lVar17 + lVar12 + 0x20);
        memcpy(__dest,&stack0x00000050,0x50);
      }
      thunk_FUN_02dd37b4(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar20 + 0x18);
      if (iVar10 < (int)(uVar7 * 4)) {
        if ((int)uVar7 < 0x401) {
          uVar1 = (int)uVar7 >> 0x10;
LAB_05bea834:
          uVar7 = uVar7 | uVar1 | (int)(uVar7 | uVar1) >> 8;
          uVar7 = uVar7 | (int)uVar7 >> 4;
          uVar7 = uVar7 | (int)uVar7 >> 2;
          iVar10 = (uVar7 | (int)uVar7 >> 1) + 1;
        }
        else {
LAB_05bea7c8:
          iVar10 = uVar7 + 0x100;
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05c3ecd4(lVar17 + lVar12 + 0x20,iVar10,0);
      }
      else if ((0 < (int)uVar7) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
        iVar11 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if (0x100 < (int)((iVar11 >> 2) - uVar7)) {
          if (0x400 < (int)uVar7) goto LAB_05bea7c8;
          uVar1 = uVar7 >> 0x10;
          goto LAB_05bea834;
        }
      }
    }
    plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if ((*in_stack_00000048 == 0) || (lVar19 = *(long *)(*in_stack_00000048 + 0x60), lVar19 == 0))
    goto LAB_05bea9b0;
    lVar17 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar17 = *plVar24;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_05bea9b0;
    if ((*(uint *)(lVar17 + 0x18) <= uVar27) || (*(uint *)(lVar19 + 0x18) <= uVar27))
    goto LAB_05bea9c8;
    *(undefined8 *)(lVar19 + lVar12 + 0x68) = *(undefined8 *)(lVar17 + lVar13 + -0x1c);
    thunk_FUN_02dd37b4();
    uVar27 = uVar27 + 1;
    lVar12 = lVar12 + 0x50;
    lVar13 = lVar13 + 0x38;
    lVar29 = lVar29 + 8;
  } while (uVar21 != uVar27);
LAB_05bea8e8:
  puVar5 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  lVar12 = *plVar22;
  if (lVar12 != 0) {
    lVar13 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 0x20;
    lVar29 = (long)(int)uVar9 * 0x50 + 0x20;
    do {
      uVar9 = (uint)uVar21;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar9) {
LAB_05bea11c:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar9) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar14 = *(undefined8 *)(lVar12 + lVar13);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar21 = FUN_0606a004(uVar14,0,0);
      if ((uVar21 & 1) == 0) goto LAB_05bea11c;
      if ((*in_stack_00000048 == 0) || (lVar12 = *(long *)(*in_stack_00000048 + 0x60), lVar12 == 0))
      break;
      uVar7 = *(uint *)(lVar12 + 0x18);
      if ((int)uVar9 < (int)uVar7) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar7 = *(uint *)(lVar12 + 0x18);
        }
        if (uVar7 <= uVar9) goto LAB_05bea9c8;
        FUN_05c3fc70(lVar12 + lVar29,0,1,0);
      }
      lVar12 = *plVar22;
      uVar21 = (ulong)(uVar9 + 1);
      lVar29 = lVar29 + 0x50;
      lVar13 = lVar13 + 8;
    } while (lVar12 != 0);
  }
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


