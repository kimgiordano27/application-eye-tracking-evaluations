/*
FUNCTION_NAME: Unity.AppUI.UI.FloatField.UxmlSerializedData$$.ctor
ENTRY_POINT: 05892754
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


long Unity_AppUI_UI_FloatField_UxmlSerializedData___ctor(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  short sVar18;
  undefined4 uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar23;
  ulong extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar24;
  undefined2 *puVar25;
  long lVar26;
  ulong unaff_x19;
  uint uVar27;
  ulong uVar28;
  int iVar29;
  int unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  undefined2 *unaff_x29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long in_stack_00000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  uint uStack0000000000000028;
  int iStack000000000000002c;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  uint *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = in_stack_00000038;
code_r0x05892754:
  if (0x17 < unaff_w25) {
    uVar21 = thunk_FUN_02f6ef30(Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                ,auVar31._8_8_);
    uVar21 = FUN_04f520a0(uVar21,0);
    thunk_FUN_02f6ef30(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                      );
    uVar22 = thunk_FUN_02f45270();
    FUN_050be224(uVar22,uVar21,0);
    uVar21 = thunk_FUN_02f6ef30(Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar22,uVar21);
  }
  uVar28 = 0x25;
  iVar29 = unaff_w24;
LAB_05892780:
  in_stack_00000038 = auVar31._0_8_;
  unaff_w24 = iVar29 + 1;
  if (unaff_w24 < unaff_w23) goto LAB_05892680;
LAB_05892948:
  do {
    do {
      uVar24 = unaff_x19 & 0xffffffff;
LAB_0589294c:
      if (unaff_w28 < unaff_w24) {
        uVar27 = *in_stack_00000050;
        lVar26 = (long)unaff_w24 - (long)unaff_w28;
        puVar25 = (undefined2 *)(unaff_x27 + (long)unaff_w28 * 2);
        do {
          lVar26 = lVar26 + -1;
          unaff_x29[(int)uVar27] = *puVar25;
          uVar27 = uVar27 + 1;
          puVar25 = puVar25 + 1;
        } while (lVar26 != 0);
        *in_stack_00000050 = uVar27;
        unaff_w28 = unaff_w24;
      }
      uVar23 = (ulong)(uint)(unaff_w23 - unaff_w24);
      if (unaff_w23 - unaff_w24 == 0) {
        return in_stack_00000038;
      }
      if ((uVar24 & 1) == 0) {
        if (((uint)uVar28 & 0xffff) < 0x80) {
          uVar27 = *in_stack_00000050;
          *in_stack_00000050 = uVar27 + 1;
          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(in_stack_00000038 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          unaff_w24 = unaff_w24 + 3;
          *(short *)(in_stack_00000038 + (long)(int)uVar27 * 2 + 0x20) = (short)uVar28;
LAB_058929e4:
          auVar31._8_8_ = uVar23;
          auVar31._0_8_ = in_stack_00000038;
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
          *(char *)(in_stack_00000030 + 0x20) = (char)uVar28;
          if (unaff_w24 < unaff_w23) {
            uVar27 = 1;
            do {
              if ((*(short *)(unaff_x27 + (long)unaff_w24 * 2) != 0x25) ||
                 (unaff_w23 <= unaff_w24 + 2)) break;
              uVar2 = *(undefined2 *)(unaff_x27 + (long)(unaff_w24 + 2) * 2);
              uVar4 = *(undefined2 *)(unaff_x27 + (long)(unaff_w24 + 1) * 2);
              if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4)
                  == 0) {
                thunk_FUN_02f6670c();
              }
              sVar18 = FUN_058912e4(uVar4,uVar2);
              if ((ushort)(sVar18 + 1U) < 0x81) break;
              if (*(uint *)(in_stack_00000030 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar26 = (long)(int)uVar27;
              unaff_w24 = unaff_w24 + 3;
              uVar27 = uVar27 + 1;
              *(char *)(in_stack_00000030 + lVar26 + 0x20) = (char)sVar18;
            } while (unaff_w24 < unaff_w23);
          }
          else {
            uVar27 = 1;
          }
          plVar20 = (long *)FUN_04f87cb4(0);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          plVar20 = (long *)(**(code **)(*plVar20 + 0x1d8))
                                      (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
          if (plVar20 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_067d5f48 + 0x130);
            if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_067d5f48)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar20);
            }
          }
          uVar21 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d5e60);
          FUN_04f75784(uVar21,*(undefined8 *)PTR_DAT_067cbf00,0);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_04f89a78(plVar20,uVar21,0);
          uVar21 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d6190);
          FUN_05156f14(uVar21,*(undefined8 *)PTR_DAT_067cbf00,0);
          FUN_04f89b34(plVar20,uVar21,0);
          uVar21 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,
                                *(undefined4 *)(in_stack_00000030 + 0x18));
          uVar19 = (**(code **)(*plVar20 + 0x2c8))
                             (plVar20,in_stack_00000030,0,uVar27,uVar21,0,
                              *(undefined8 *)(*plVar20 + 0x2d0));
          if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) ==
              0) {
            thunk_FUN_02f6670c();
          }
          FUN_058913e4(unaff_x29,in_stack_00000038,in_stack_00000050,uVar21,uVar19,in_stack_00000030
                       ,uVar27,uStack0000000000000028 & 1);
          auVar31._8_8_ = extraout_x1_02;
          auVar31._0_8_ = in_stack_00000038;
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
          if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) ==
              0) {
            thunk_FUN_02f6670c();
          }
          FUN_058918a0(uVar2,in_stack_00000038,in_stack_00000050);
          unaff_w24 = unaff_w24 + 1;
          in_stack_00000040._4_1_ = in_stack_00000040._4_1_ + -1;
          uVar23 = extraout_x1_01;
          goto LAB_058929e4;
        }
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        auVar31 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,
                               *(int *)(in_stack_00000038 + 0x18) + 0x5a);
        lVar26 = auVar31._0_8_;
        if (lVar26 == 0) {
          puVar25 = (undefined2 *)0x0;
        }
        else {
          puVar25 = (undefined2 *)0x0;
          if (*(int *)(lVar26 + 0x18) != 0) {
            puVar25 = (undefined2 *)(lVar26 + 0x20);
          }
        }
        uVar28 = (ulong)*in_stack_00000050;
        if (0 < (int)*in_stack_00000050) {
          do {
            uVar28 = uVar28 - 1;
            *puVar25 = *unaff_x29;
            puVar25 = puVar25 + 1;
            unaff_x29 = unaff_x29 + 1;
          } while (uVar28 != 0);
        }
        in_stack_00000040._4_1_ = '\x1e';
        unaff_x19 = 1;
        if (lVar26 == 0) {
          unaff_x29 = (undefined2 *)0x0;
        }
        else {
          unaff_x29 = (undefined2 *)0x0;
          if (*(int *)(lVar26 + 0x18) != 0) {
            unaff_x29 = (undefined2 *)(lVar26 + 0x20);
          }
        }
        if (iStack0000000000000024 == 0) {
          if (iStack0000000000000020 < unaff_w23) {
            uVar27 = *in_stack_00000050;
            lVar26 = (long)unaff_w23 - (long)iStack0000000000000020;
            puVar25 = (undefined2 *)(unaff_x27 + (long)iStack0000000000000020 * 2);
            do {
              lVar26 = lVar26 + -1;
              unaff_x29[(int)uVar27] = *puVar25;
              uVar27 = uVar27 + 1;
              puVar25 = puVar25 + 1;
            } while (lVar26 != 0);
            *in_stack_00000050 = uVar27;
          }
          return in_stack_00000018;
        }
      }
      in_stack_00000038 = auVar31._0_8_;
      if (unaff_w23 <= unaff_w24) {
        uVar28 = 0;
        goto LAB_05892948;
      }
LAB_05892680:
      in_stack_00000038 = auVar31._0_8_;
      uVar3 = *(ushort *)(unaff_x27 + (long)unaff_w24 * 2);
      uVar28 = (ulong)uVar3;
      iVar29 = unaff_w24;
      if (uVar3 != 0x25) {
        if (((unaff_x26 & 1) != 0) ||
           ((((uVar24 = 1, (uint)uVar3 != (in_stack_00000058._4_4_ & 0xffff) &&
              (uVar27 = (uint)uVar3, uVar27 != (uStack000000000000004c & 0xffff))) &&
             (uVar27 != (uStack0000000000000048 & 0xffff))) &&
            (((unaff_w25 >> 2 & 1) != 0 || ((0x1f < uVar27 && ((uVar27 - 0xa0 & 0xffff) < 0xffdf))))
            )))) goto LAB_05892780;
        goto LAB_0589294c;
      }
      if ((unaff_w25 >> 1 & 1) == 0) {
LAB_058929ec:
        uVar24 = 1;
        uVar28 = 0x25;
        goto LAB_0589294c;
      }
      iVar29 = unaff_w24 + 2;
      if (unaff_w23 <= iVar29) {
        if (7 < (int)unaff_w25) goto code_r0x05892754;
        goto LAB_058929ec;
      }
      uVar4 = *(undefined2 *)(unaff_x27 + (long)iVar29 * 2);
      uVar2 = *(undefined2 *)(unaff_x27 + (long)unaff_w24 * 2 + 2);
      if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      auVar30 = FUN_058912e4(uVar2,uVar4);
      uVar21 = auVar30._8_8_;
      auVar31._8_8_ = uVar21;
      auVar31._0_8_ = in_stack_00000038;
      auVar17._8_8_ = uVar21;
      auVar17._0_8_ = in_stack_00000038;
      auVar9._8_8_ = uVar21;
      auVar9._0_8_ = in_stack_00000038;
      auVar8._8_8_ = uVar21;
      auVar8._0_8_ = in_stack_00000038;
      auVar7._8_8_ = uVar21;
      auVar7._0_8_ = in_stack_00000038;
      auVar6._8_8_ = uVar21;
      auVar6._0_8_ = in_stack_00000038;
      uVar28 = auVar30._0_8_ & 0xffffffff;
      uVar27 = auVar30._0_4_;
      if (7 < (int)unaff_w25) {
        if (((uVar27 ^ 0xffffffff) & 0xffff) != 0) goto LAB_05892948;
        if (0x17 < unaff_w25) {
          uVar21 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                     );
          uVar21 = FUN_04f520a0(uVar21,0);
          thunk_FUN_02f6ef30(
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                            );
          uVar22 = thunk_FUN_02f45270();
          FUN_050be224(uVar22,uVar21,0);
          uVar21 = thunk_FUN_02f6ef30(
                                     Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar22,uVar21);
        }
        uVar28 = 0xffff;
        iVar29 = unaff_w24;
        goto LAB_05892780;
      }
      auVar31 = auVar6;
      if ((uVar27 & 0xffff) == 0x25) goto LAB_05892780;
      if ((uVar27 & 0xffff) == 0xffff) {
        uVar28 = 0xffff;
        iVar29 = unaff_w24;
        auVar31 = auVar17;
        if ((unaff_w25 & 1) == 0) goto LAB_05892780;
        uVar24 = 1;
        goto LAB_0589294c;
      }
      auVar31 = auVar7;
      if ((((uVar27 & 0xffff) == (in_stack_00000058._4_4_ & 0xffff)) ||
          (auVar31 = auVar8, (uVar27 & 0xffff) == (uStack000000000000004c & 0xffff))) ||
         (auVar31 = auVar9, (uVar27 & 0xffff) == (uStack0000000000000048 & 0xffff)))
      goto LAB_05892780;
      if ((unaff_w25 >> 2 & 1) == 0) {
        if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0)
        {
          thunk_FUN_02f6670c();
          uVar21 = extraout_x1;
        }
        auVar12._8_8_ = uVar21;
        auVar12._0_8_ = in_stack_00000038;
        auVar11._8_8_ = uVar21;
        auVar11._0_8_ = in_stack_00000038;
        auVar10._8_8_ = uVar21;
        auVar10._0_8_ = in_stack_00000038;
        auVar30._8_8_ = uVar21;
        auVar30._0_8_ = in_stack_00000038;
        auVar31._8_8_ = uVar21;
        if ((((((uVar27 & 0xffff) < 0x20) || (auVar31 = auVar30, 0xffde < (uVar27 - 0xa0 & 0xffff)))
             || (auVar31 = auVar10, (uVar27 - 0x23 & 0xffff) < 4)) ||
            (auVar31 = auVar11, (uVar27 - 0x3b & 0xffff) < 6 && (uVar27 & 0xfffd) != 0x3c)) ||
           ((uVar5 = (uVar27 & 0xffff) - 0x2b, uVar5 < 0x32 &&
            (auVar31 = auVar12, (1L << ((ulong)uVar5 & 0x3f) & 0x2000000000013U) != 0))))
        goto LAB_05892780;
      }
      auVar31._8_8_ = uVar21;
      auVar13._8_8_ = uVar21;
      auVar13._0_8_ = in_stack_00000038;
    } while (iStack000000000000002c == 0);
    if (0x9f < (uVar27 & 0xffff)) {
      if ((0x6ba < (uVar27 - 0xa0 >> 5 & 0x7ff)) && (0x4cf < (uVar27 + 0x700 & 0xffff))) {
        uVar5 = uVar27 + 0x10 >> 9 & 0x7f;
        if ((uVar5 < 0x7f) && ((_uStack0000000000000028 & 1) != 0)) {
          auVar31 = auVar13;
          if (0x18 < (uVar27 + 0x2000 >> 8 & 0xff)) goto LAB_05892780;
        }
        else if (uVar5 < 0x7f) goto LAB_05892780;
      }
      goto LAB_05892948;
    }
    if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      uVar21 = extraout_x1_00;
    }
    auVar16._8_8_ = uVar21;
    auVar16._0_8_ = in_stack_00000038;
    auVar15._8_8_ = uVar21;
    auVar15._0_8_ = in_stack_00000038;
    auVar14._8_8_ = uVar21;
    auVar14._0_8_ = in_stack_00000038;
    auVar31._8_8_ = uVar21;
    if (((0x5e < (uVar27 - 0x20 & 0xffff)) || (auVar31 = auVar14, (uVar27 - 0x23 & 0xffff) < 4)) ||
       ((auVar31 = auVar15, (uVar27 - 0x3b & 0xffff) < 6 && (uVar27 & 0x7d) != 0x3c ||
        ((uVar27 = (uVar27 & 0xffff) - 0x2b, uVar27 < 0x32 &&
         (auVar31 = auVar16, (1L << ((ulong)uVar27 & 0x3f) & 0x2000000000013U) != 0))))))
    goto LAB_05892780;
  } while( true );
}


