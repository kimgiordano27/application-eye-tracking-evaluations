/*
FUNCTION_NAME: Unity.AppUI.UI.FloatField.UxmlSerializedData$$CreateInstance
ENTRY_POINT: 05892704
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Unity_AppUI_UI_FloatField_UxmlSerializedData__CreateInstance(ulong param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  short sVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint in_w8;
  ulong uVar11;
  undefined2 *puVar12;
  long lVar13;
  ulong unaff_x19;
  uint uVar14;
  ulong unaff_x20;
  int iVar15;
  int unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  undefined2 *unaff_x29;
  ulong in_stack_00000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  uint uStack0000000000000028;
  int iStack000000000000002c;
  long in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  uint *in_stack_00000050;
  undefined8 in_stack_00000058;
  
code_r0x05892704:
  uVar14 = (uint)unaff_x20;
  uVar11 = 1;
  if (((uVar14 != (in_w8 & 0xffff)) && (uVar14 != (uStack000000000000004c & 0xffff))) &&
     (uVar14 != (uStack0000000000000048 & 0xffff))) {
    iVar15 = unaff_w24;
    if ((unaff_w25 >> 2 & 1) != 0) goto LAB_05892780;
    if ((0x1f < uVar14) && ((uVar14 - 0xa0 & 0xffff) < 0xffdf)) goto LAB_05892780;
  }
LAB_0589294c:
  do {
    if (unaff_w28 < unaff_w24) {
      uVar14 = *in_stack_00000050;
      lVar13 = (long)unaff_w24 - (long)unaff_w28;
      puVar12 = (undefined2 *)(unaff_x27 + (long)unaff_w28 * 2);
      do {
        lVar13 = lVar13 + -1;
        unaff_x29[(int)uVar14] = *puVar12;
        uVar14 = uVar14 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar13 != 0);
      *in_stack_00000050 = uVar14;
      unaff_w28 = unaff_w24;
    }
    iVar15 = unaff_w23 - unaff_w24;
    if (iVar15 == 0) {
      return in_stack_00000038;
    }
    if ((uVar11 & 1) == 0) {
      if (((uint)unaff_x20 & 0xffff) < 0x80) {
        uVar14 = *in_stack_00000050;
        *in_stack_00000050 = uVar14 + 1;
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(param_1,iVar15);
        }
        if (*(uint *)(in_stack_00000038 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        unaff_w24 = unaff_w24 + 3;
        *(short *)(in_stack_00000038 + (long)(int)uVar14 * 2 + 0x20) = (short)unaff_x20;
LAB_058929e4:
        unaff_x19 = 0;
        unaff_w28 = unaff_w24;
      }
      else {
        if ((in_stack_00000030 == 0) &&
           (in_stack_00000030 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320),
           in_stack_00000030 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(in_stack_00000030 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        unaff_w24 = unaff_w24 + 3;
        *(char *)(in_stack_00000030 + 0x20) = (char)unaff_x20;
        if (unaff_w24 < unaff_w23) {
          uVar14 = 1;
          do {
            if ((*(short *)(unaff_x27 + (long)unaff_w24 * 2) != 0x25) ||
               (unaff_w23 <= unaff_w24 + 2)) break;
            uVar2 = *(undefined2 *)(unaff_x27 + (long)(unaff_w24 + 2) * 2);
            uVar4 = *(undefined2 *)(unaff_x27 + (long)(unaff_w24 + 1) * 2);
            if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4)
                == 0) {
              thunk_FUN_02f6670c();
            }
            sVar6 = FUN_058912e4(uVar4,uVar2);
            if ((ushort)(sVar6 + 1U) < 0x81) break;
            if (*(uint *)(in_stack_00000030 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            lVar13 = (long)(int)uVar14;
            unaff_w24 = unaff_w24 + 3;
            uVar14 = uVar14 + 1;
            *(char *)(in_stack_00000030 + lVar13 + 0x20) = (char)sVar6;
          } while (unaff_w24 < unaff_w23);
        }
        else {
          uVar14 = 1;
        }
        plVar8 = (long *)FUN_04f87cb4(0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_067d5f48 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_067d5f48)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar8);
          }
        }
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d5e60);
        FUN_04f75784(uVar9,*(undefined8 *)PTR_DAT_067cbf00,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_04f89a78(plVar8,uVar9,0);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d6190);
        FUN_05156f14(uVar9,*(undefined8 *)PTR_DAT_067cbf00,0);
        FUN_04f89b34(plVar8,uVar9,0);
        uVar9 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,
                             *(undefined4 *)(in_stack_00000030 + 0x18));
        uVar7 = (**(code **)(*plVar8 + 0x2c8))
                          (plVar8,in_stack_00000030,0,uVar14,uVar9,0,
                           *(undefined8 *)(*plVar8 + 0x2d0));
        if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0)
        {
          thunk_FUN_02f6670c();
        }
        param_1 = FUN_058913e4(unaff_x29,in_stack_00000038,in_stack_00000050,uVar9,uVar7,
                               in_stack_00000030,uVar14,uStack0000000000000028 & 1);
        unaff_x19 = 0;
        unaff_w28 = unaff_w24;
        if (unaff_w24 == unaff_w23) {
          return in_stack_00000038;
        }
      }
    }
    else {
      if (in_stack_00000040._4_1_ != '\0') {
        uVar2 = *(undefined2 *)(unaff_x27 + (long)unaff_w24 * 2);
        if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0)
        {
          thunk_FUN_02f6670c();
        }
        param_1 = FUN_058918a0(uVar2,in_stack_00000038,in_stack_00000050);
        unaff_w24 = unaff_w24 + 1;
        in_stack_00000040._4_1_ = in_stack_00000040._4_1_ + -1;
        goto LAB_058929e4;
      }
      if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(param_1,iVar15);
      }
      param_1 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,
                             *(int *)(in_stack_00000038 + 0x18) + 0x5a);
      if (param_1 == 0) {
        puVar12 = (undefined2 *)0x0;
      }
      else {
        puVar12 = (undefined2 *)0x0;
        if (*(int *)(param_1 + 0x18) != 0) {
          puVar12 = (undefined2 *)(param_1 + 0x20);
        }
      }
      uVar11 = (ulong)*in_stack_00000050;
      if (0 < (int)*in_stack_00000050) {
        do {
          uVar11 = uVar11 - 1;
          *puVar12 = *unaff_x29;
          puVar12 = puVar12 + 1;
          unaff_x29 = unaff_x29 + 1;
        } while (uVar11 != 0);
      }
      in_stack_00000040._4_1_ = '\x1e';
      unaff_x19 = 1;
      if (param_1 == 0) {
        unaff_x29 = (undefined2 *)0x0;
      }
      else {
        unaff_x29 = (undefined2 *)0x0;
        if (*(int *)(param_1 + 0x18) != 0) {
          unaff_x29 = (undefined2 *)(param_1 + 0x20);
        }
      }
      in_stack_00000038 = param_1;
      if (iStack0000000000000024 == 0) {
        if (iStack0000000000000020 < unaff_w23) {
          uVar14 = *in_stack_00000050;
          lVar13 = (long)unaff_w23 - (long)iStack0000000000000020;
          puVar12 = (undefined2 *)(unaff_x27 + (long)iStack0000000000000020 * 2);
          do {
            lVar13 = lVar13 + -1;
            unaff_x29[(int)uVar14] = *puVar12;
            uVar14 = uVar14 + 1;
            puVar12 = puVar12 + 1;
          } while (lVar13 != 0);
          *in_stack_00000050 = uVar14;
        }
        return in_stack_00000018;
      }
    }
    if (unaff_w24 < unaff_w23) {
      do {
        uVar3 = *(ushort *)(unaff_x27 + (long)unaff_w24 * 2);
        unaff_x20 = (ulong)uVar3;
        if (uVar3 != 0x25) {
          iVar15 = unaff_w24;
          in_w8 = in_stack_00000058._4_4_;
          if ((unaff_x26 & 1) != 0) goto LAB_05892780;
          goto code_r0x05892704;
        }
        if ((unaff_w25 >> 1 & 1) == 0) {
LAB_058929ec:
          uVar11 = 1;
          unaff_x20 = 0x25;
          goto LAB_0589294c;
        }
        iVar15 = unaff_w24 + 2;
        if (iVar15 < unaff_w23) {
          uVar4 = *(undefined2 *)(unaff_x27 + (long)iVar15 * 2);
          uVar2 = *(undefined2 *)(unaff_x27 + (long)unaff_w24 * 2 + 2);
          if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) ==
              0) {
            thunk_FUN_02f6670c();
          }
          param_1 = FUN_058912e4(uVar2,uVar4);
          unaff_x20 = param_1 & 0xffffffff;
          uVar14 = (uint)param_1;
          if ((int)unaff_w25 < 8) {
            if ((uVar14 & 0xffff) != 0x25) {
              if ((uVar14 & 0xffff) == 0xffff) {
                unaff_x20 = 0xffff;
                iVar15 = unaff_w24;
                if ((unaff_w25 & 1) != 0) {
                  uVar11 = 1;
                  goto LAB_0589294c;
                }
              }
              else if ((((uVar14 & 0xffff) != (in_stack_00000058._4_4_ & 0xffff)) &&
                       ((uVar14 & 0xffff) != (uStack000000000000004c & 0xffff))) &&
                      ((uVar14 & 0xffff) != (uStack0000000000000048 & 0xffff))) {
                if ((unaff_w25 >> 2 & 1) == 0) {
                  param_1 = *(ulong *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__;
                  if (*(int *)(param_1 + 0xe4) == 0) {
                    param_1 = thunk_FUN_02f6670c();
                  }
                  if ((0x1f < (uVar14 & 0xffff)) && ((uVar14 - 0xa0 & 0xffff) < 0xffdf)) {
                    if (((3 < (uVar14 - 0x23 & 0xffff)) &&
                        (5 < (uVar14 - 0x3b & 0xffff) || (uVar14 & 0xfffd) == 0x3c)) &&
                       ((uVar5 = (uVar14 & 0xffff) - 0x2b, 0x31 < uVar5 ||
                        ((1L << ((ulong)uVar5 & 0x3f) & 0x2000000000013U) == 0))))
                    goto LAB_05892850;
                  }
                }
                else {
LAB_05892850:
                  if (iStack000000000000002c == 0) break;
                  if ((uVar14 & 0xffff) < 0xa0) {
                    param_1 = *(ulong *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__;
                    if (*(int *)(param_1 + 0xe4) == 0) {
                      param_1 = thunk_FUN_02f6670c();
                    }
                    if ((uVar14 - 0x20 & 0xffff) < 0x5f) {
                      if (((3 < (uVar14 - 0x23 & 0xffff)) &&
                          (5 < (uVar14 - 0x3b & 0xffff) || (uVar14 & 0x7d) == 0x3c)) &&
                         ((uVar14 = (uVar14 & 0xffff) - 0x2b, 0x31 < uVar14 ||
                          ((1L << ((ulong)uVar14 & 0x3f) & 0x2000000000013U) == 0)))) break;
                    }
                  }
                  else {
                    if (((uVar14 - 0xa0 >> 5 & 0x7ff) < 0x6bb) ||
                       ((uVar14 + 0x700 & 0xffff) < 0x4d0)) break;
                    uVar5 = uVar14 + 0x10 >> 9 & 0x7f;
                    if ((uVar5 < 0x7f) && ((_uStack0000000000000028 & 1) != 0)) {
                      if ((uVar14 + 0x2000 >> 8 & 0xff) < 0x19) break;
                    }
                    else if (0x7e < uVar5) break;
                  }
                }
              }
            }
          }
          else {
            if (((uVar14 ^ 0xffffffff) & 0xffff) != 0) break;
            if (0x17 < unaff_w25) {
              uVar9 = thunk_FUN_02f6ef30(
                                        Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                        );
              uVar9 = FUN_04f520a0(uVar9,0);
              thunk_FUN_02f6ef30(
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                                );
              uVar10 = thunk_FUN_02f45270();
              FUN_050be224(uVar10,uVar9,0);
              uVar9 = thunk_FUN_02f6ef30(
                                        Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02f0888c(uVar10,uVar9);
            }
            unaff_x20 = 0xffff;
            iVar15 = unaff_w24;
          }
        }
        else {
          if ((int)unaff_w25 < 8) goto LAB_058929ec;
          if (0x17 < unaff_w25) {
            uVar9 = thunk_FUN_02f6ef30(
                                      Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                      );
            uVar9 = FUN_04f520a0(uVar9,0);
            thunk_FUN_02f6ef30(
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                              );
            uVar10 = thunk_FUN_02f45270();
            FUN_050be224(uVar10,uVar9,0);
            uVar9 = thunk_FUN_02f6ef30(
                                      Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar10,uVar9);
          }
          unaff_x20 = 0x25;
          iVar15 = unaff_w24;
        }
LAB_05892780:
        unaff_w24 = iVar15 + 1;
      } while (unaff_w24 < unaff_w23);
    }
    else {
      unaff_x20 = 0;
    }
    uVar11 = unaff_x19 & 0xffffffff;
  } while( true );
}


