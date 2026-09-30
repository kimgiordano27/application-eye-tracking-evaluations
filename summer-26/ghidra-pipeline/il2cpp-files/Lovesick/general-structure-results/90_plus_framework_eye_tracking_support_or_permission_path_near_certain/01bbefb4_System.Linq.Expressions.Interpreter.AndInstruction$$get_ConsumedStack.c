/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.AndInstruction$$get_ConsumedStack
ENTRY_POINT: 01bbefb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01bbf840) */
/* WARNING: Removing unreachable block (ram,0x01bbfa44) */

void System_Linq_Expressions_Interpreter_AndInstruction__get_ConsumedStack
               (ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x25;
  long lVar16;
  ulong uVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack0000000000000020;
  long lStack0000000000000038;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  undefined8 in_stack_00000058;
  
  lStack0000000000000038 = param_4;
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    *(undefined1 *)(unaff_x23 + 0x77d) = 1;
  }
  FUN_017b46ec(param_2,0);
  lVar7 = lStack0000000000000038;
  *(undefined8 *)(param_2 + 0x70) = unaff_x22;
  if (unaff_x25 != 0) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(unaff_x25 + 0x24);
    *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(unaff_x25 + 0x20);
    puVar3 = 
    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
    puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    puVar1 = OVREyeGaze_TypeInfo;
    if (((lStack0000000000000038 != 0) && (*(long *)(lStack0000000000000038 + 0x10) != 0)) &&
       (*(long *)(lStack0000000000000038 + 0x20) != 0)) {
      iVar6 = *(int *)(*(long *)(lStack0000000000000038 + 0x10) + 0x18);
      FUN_0132138c(*(long *)(lStack0000000000000038 + 0x20),iVar6 + -1,&stack0x00000048,
                   *(undefined8 *)OVREyeGaze_TypeInfo);
      *(float *)(param_2 + 0x38) = fStack0000000000000048;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar6);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar6);
      *(undefined8 *)(param_2 + 0x28) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar6);
      *(undefined8 *)(param_2 + 0x20) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar6);
      *(undefined8 *)(param_2 + 0x40) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar6);
      *(undefined8 *)(param_2 + 0x30) = uVar5;
      lVar7 = *(long *)(lVar7 + 0x30);
      if (lVar7 != 0) {
        fVar19 = (*(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x20)) * 0.5;
        fVar21 = (*(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x24)) * 0.5;
        _fStack0000000000000050 = 0;
        in_stack_00000058 = 0;
        _fStack0000000000000048 = 0;
        FUN_02687990((*(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x1c)) * 0.5,fVar19,fVar21,
                     *(float *)(lVar7 + 0x1c) - *(float *)(lVar7 + 0x10),
                     *(float *)(lVar7 + 0x20) - *(float *)(lVar7 + 0x14),
                     *(float *)(lVar7 + 0x24) - *(float *)(lVar7 + 0x18),&stack0x00000048,0);
        *(undefined8 *)(param_2 + 0x58) = in_stack_00000058;
        *(undefined8 *)(param_2 + 0x50) = _fStack0000000000000050;
        *(ulong *)(param_2 + 0x48) = _fStack0000000000000048;
        FUN_02687be0(param_2 + 0x48,0);
        FUN_02687be0(param_2 + 0x48,0);
        if (fVar21 <= fVar19) {
          if (DAT_03775377 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03775377 = '\x01';
          }
          uVar5 = *(undefined8 *)
                   (*(long *)(*(long *)
                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                             + 0xb8) + 0x4c);
          fVar19 = -*(float *)(*(long *)(*(long *)
                                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        + 0xb8) + 0x48);
          uStack0000000000000020 = CONCAT44(-(float)((ulong)uVar5 >> 0x20),-(float)uVar5);
        }
        else {
          if (DAT_037750c4 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_037750c4 = '\x01';
          }
          fVar19 = *(float *)(*(long *)(*(long *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                       + 0xb8) + 0x18);
          uStack0000000000000020 =
               *(undefined8 *)
                (*(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 0x1c);
        }
        lVar7 = lStack0000000000000038;
        lVar13 = *(long *)(param_2 + 0x18);
        *(float *)(param_2 + 0x60) = fVar19;
        *(undefined8 *)(param_2 + 100) = uStack0000000000000020;
        puVar3 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
        puVar11 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
        ;
        puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
        fVar21 = DAT_028aa038;
        if (lVar13 != 0) {
          uVar15 = 0;
          lVar16 = 0x28;
          fVar33 = -1.0;
          do {
            if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar15) {
              if (*(int *)(param_2 + 0x10) != 0) {
                return;
              }
              if (*(char *)(param_2 + 0x14) == '\0') goto LAB_01bbf9a8;
              lVar7 = *(long *)(param_2 + 0x28);
              if (lVar7 != 0) {
                if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_01bbfbf4;
                fVar19 = *(float *)(lVar7 + 0x20);
                lVar13 = *(long *)(param_2 + 0x20);
                if (lVar13 != 0) {
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01bbfbf4;
                  fVar21 = *(float *)(lVar13 + 0x20);
                  fVar27 = *(float *)(lVar7 + 0x24);
                  fVar29 = *(float *)(lVar7 + 0x28);
                  fVar32 = *(float *)(lVar13 + 0x24);
                  pfVar8 = (float *)(lVar7 + 0x20) +
                           ((*(long *)(lVar7 + 0x18) << 0x20) + -0x100000000 >> 0x20) * 3;
                  fVar23 = *pfVar8;
                  fVar22 = pfVar8[1];
                  fVar25 = pfVar8[2];
                  fVar20 = *(float *)(lVar13 + 0x28);
                  if (DAT_03775508 == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_03775508 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  fVar24 = SQRT((fVar25 * fVar25 + fVar23 * fVar23 + fVar22 * fVar22) *
                                (fVar29 * fVar29 + fVar19 * fVar19 + fVar27 * fVar27));
                  fVar26 = 0.0;
                  if (DAT_028aa5c8 <= fVar24) {
                    fVar24 = (fVar25 * fVar29 + fVar23 * fVar19 + fVar22 * fVar27) / fVar24;
                    if (fVar24 < -1.0) {
                      fVar24 = fVar33;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    dVar18 = acos((double)fVar24);
                    fVar26 = (float)dVar18 * DAT_028aa158;
                  }
                  fVar24 = 1.0;
                  if ((fVar23 * fVar27 - fVar22 * fVar19) * fVar20 +
                      (fVar22 * fVar29 - fVar25 * fVar27) * fVar21 +
                      (fVar25 * fVar19 - fVar23 * fVar29) * fVar32 < 0.0) {
                    fVar24 = -1.0;
                  }
                  if (ABS(fVar24 * fVar26) <= DAT_028aa040) goto LAB_01bbf9a0;
                  lVar7 = *(long *)(param_2 + 0x28);
                  if (lVar7 != 0) {
                    lVar13 = 0;
                    uVar15 = 1;
                    goto LAB_01bbf8ec;
                  }
                }
              }
              break;
            }
            if (*(long *)(lStack0000000000000038 + 0x10) == 0) break;
            FUN_0132138c(*(long *)(lStack0000000000000038 + 0x10),uVar15 & 0xffffffff,
                         &stack0x00000048,*(undefined8 *)puVar3);
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
            *(ulong *)((undefined4 *)(lVar13 + lVar16) + -2) = _fStack0000000000000048;
            *(undefined4 *)(lVar13 + lVar16) = fStack0000000000000050;
            if (*(long *)(lVar7 + 0x18) == 0) break;
            lVar13 = *(long *)(param_2 + 0x20);
            FUN_0132138c(*(long *)(lVar7 + 0x18),uVar15 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)puVar3);
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
            *(ulong *)((undefined4 *)(lVar13 + lVar16) + -2) = _fStack0000000000000048;
            *(undefined4 *)(lVar13 + lVar16) = fStack0000000000000050;
            if (*(long *)(lVar7 + 0x20) == 0) break;
            lVar13 = *(long *)(param_2 + 0x40);
            FUN_0132138c(*(long *)(lVar7 + 0x20),uVar15 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)puVar1);
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
            *(float *)(lVar13 + uVar15 * 4 + 0x20) = fStack0000000000000048;
            lVar13 = *(long *)(param_2 + 0x40);
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
            lVar9 = *(long *)(param_2 + 0x30);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_01bbfbf4;
            *(float *)(lVar9 + uVar15 * 4 + 0x20) =
                 *(float *)(lVar13 + uVar15 * 4 + 0x20) / *(float *)(param_2 + 0x38);
            if (*(int *)(param_2 + 0x10) == 0) {
              fVar32 = (float)uStack0000000000000020;
              if (lVar16 == 0x28) {
                if (*(long *)(lVar7 + 0x18) == 0) break;
                lVar13 = *(long *)(param_2 + 0x28);
                FUN_0132138c(*(long *)(lVar7 + 0x18),0,&stack0x00000048,*(undefined8 *)puVar3);
                fVar20 = fStack0000000000000050 * fVar32;
                fVar27 = fStack000000000000004c * uStack0000000000000020._4_4_;
                fVar22 = fStack0000000000000048 * uStack0000000000000020._4_4_;
                fVar25 = fVar19 * fStack0000000000000050;
                fVar23 = fVar19 * fStack000000000000004c;
                fVar32 = fStack0000000000000048 * fVar32;
                if (DAT_0377518c == '\0') {
                  thunk_FUN_00d48444(puVar2);
                  DAT_0377518c = '\x01';
                }
                fVar20 = fVar20 - fVar27;
                fVar22 = fVar22 - fVar25;
                fVar23 = fVar23 - fVar32;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar32 = SQRT(fVar23 * fVar23 + fVar20 * fVar20 + fVar22 * fVar22);
                if (fVar32 <= fVar21) {
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  pfVar8 = *(float **)
                            (*(long *)
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            + 0xb8);
                  fVar20 = *pfVar8;
                  fVar22 = pfVar8[1];
                  fVar23 = pfVar8[2];
                }
                else {
                  fVar20 = fVar20 / fVar32;
                  fVar22 = fVar22 / fVar32;
                  fVar23 = fVar23 / fVar32;
                }
                if (lVar13 == 0) break;
                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01bbfbf4;
                *(float *)(lVar13 + 0x20) = fVar20;
                *(float *)(lVar13 + 0x24) = fVar22;
                *(float *)(lVar13 + 0x28) = fVar23;
              }
              else {
                lVar13 = *(long *)(param_2 + 0x18);
                if (lVar13 == 0) break;
                if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                   (uVar10 = (int)uVar15 - 1, *(uint *)(lVar13 + 0x18) <= uVar10))
                goto LAB_01bbfbf4;
                lVar9 = *(long *)(param_2 + 0x20);
                if (lVar9 == 0) break;
                if (((uint)*(ulong *)(lVar9 + 0x18) <= uVar10) ||
                   ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar15)) goto LAB_01bbfbf4;
                lVar13 = lVar13 + lVar16;
                lVar9 = lVar9 + lVar16;
                fVar23 = *(float *)(lVar13 + -8) - *(float *)(lVar13 + -0x14);
                fVar27 = (float)*(undefined8 *)(lVar13 + -4) -
                         (float)*(undefined8 *)(lVar13 + -0x10);
                fVar29 = (float)((ulong)*(undefined8 *)(lVar13 + -4) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar13 + -0x10) >> 0x20);
                fVar20 = (float)*(undefined8 *)(lVar9 + -0x10);
                fVar26 = fVar23 * fVar23 + fVar27 * fVar27 + fVar29 * fVar29;
                fVar22 = (float)((ulong)*(undefined8 *)(lVar9 + -0x10) >> 0x20);
                fVar31 = uStack0000000000000020._4_4_ * fVar29 + fVar19 * fVar23 + fVar32 * fVar27;
                fVar28 = fVar29 * fVar22 + fVar23 * *(float *)(lVar9 + -0x14) + fVar27 * fVar20;
                fVar25 = (fVar23 + fVar23) / fVar26;
                fVar24 = (fVar27 + fVar27) / fVar26;
                fVar26 = (fVar29 + fVar29) / fVar26;
                fVar30 = *(float *)(lVar9 + -8);
                fVar23 = fVar30 - (*(float *)(lVar9 + -0x14) - fVar25 * fVar28);
                fVar27 = (float)*(undefined8 *)(lVar9 + -4);
                fVar20 = fVar27 - (fVar20 - fVar24 * fVar28);
                fVar29 = (float)((ulong)*(undefined8 *)(lVar9 + -4) >> 0x20);
                fVar22 = fVar29 - (fVar22 - fVar26 * fVar28);
                fVar19 = fVar19 - fVar31 * fVar25;
                fVar32 = fVar32 - fVar24 * fVar31;
                uStack0000000000000020._4_4_ = uStack0000000000000020._4_4_ - fVar26 * fVar31;
                fVar25 = fVar22 * fVar22 + fVar23 * fVar23 + fVar20 * fVar20;
                fVar24 = uStack0000000000000020._4_4_ * fVar22 + fVar19 * fVar23 + fVar32 * fVar20;
                fVar19 = fVar19 + fVar24 * ((fVar23 * -2.0) / fVar25);
                fVar32 = fVar32 + ((fVar20 * -2.0) / fVar25) * fVar24;
                uStack0000000000000020._4_4_ =
                     uStack0000000000000020._4_4_ + ((fVar22 * -2.0) / fVar25) * fVar24;
                uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,fVar32);
                if (DAT_0377518c == '\0') {
                  thunk_FUN_00d48444(puVar2);
                  DAT_0377518c = '\x01';
                }
                fVar20 = fVar29 * fVar32 - fVar27 * uStack0000000000000020._4_4_;
                fVar22 = fVar30 * uStack0000000000000020._4_4_ - fVar29 * fVar19;
                fVar32 = fVar19 * fVar27 - fVar30 * fVar32;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar23 = SQRT(fVar32 * fVar32 + fVar20 * fVar20 + fVar22 * fVar22);
                if (fVar23 <= fVar21) {
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  uVar5 = **(undefined8 **)
                            (*(long *)
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            + 0xb8);
                  fVar32 = *(float *)(*(undefined8 **)
                                       (*(long *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                       + 0xb8) + 1);
                }
                else {
                  uVar5 = CONCAT44(fVar22 / fVar23,fVar20 / fVar23);
                  fVar32 = fVar32 / fVar23;
                }
                lVar13 = *(long *)(param_2 + 0x28);
                if (lVar13 == 0) break;
                if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
                *(undefined8 *)((float *)(lVar13 + lVar16) + -2) = uVar5;
                *(float *)(lVar13 + lVar16) = fVar32;
              }
            }
            else {
              lVar13 = *(long *)(param_2 + 0x20);
              if (lVar13 == 0) break;
              if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
              lVar9 = *(long *)(param_2 + 0x28);
              fVar32 = fVar33;
              if (*(char *)(unaff_x25 + 0x5c) != '\0') {
                fVar32 = 1.0;
              }
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_01bbfbf4;
              pfVar8 = (float *)(lVar13 + lVar16);
              fVar20 = *(float *)(param_2 + 0x60);
              fVar22 = *(float *)(param_2 + 100);
              fVar23 = *(float *)(param_2 + 0x68);
              fVar25 = pfVar8[-1];
              fVar27 = *pfVar8;
              fVar29 = pfVar8[-2];
              pfVar8 = (float *)(lVar9 + lVar16);
              pfVar8[-2] = (fVar25 * fVar23 - fVar27 * fVar22) * fVar32;
              pfVar8[-1] = (fVar27 * fVar20 - fVar29 * fVar23) * fVar32;
              *pfVar8 = (fVar29 * fVar22 - fVar25 * fVar20) * fVar32;
            }
            lVar13 = *(long *)(param_2 + 0x18);
            uVar15 = uVar15 + 1;
            lVar16 = lVar16 + 0xc;
          } while (lVar13 != 0);
        }
      }
    }
  }
  goto LAB_01bbfbc0;
LAB_01bbf8ec:
  do {
    iVar6 = (int)*(undefined8 *)(lVar7 + 0x18);
    if ((long)iVar6 <= (long)uVar15) goto LAB_01bbf9a0;
    lVar7 = *(long *)(param_2 + 0x20);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) {
LAB_01bbfbf4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = lVar7 + lVar13;
    fVar19 = *(float *)(lVar7 + 0x2c);
    fVar21 = *(float *)(lVar7 + 0x30);
    FUN_02698d50(fVar24 * fVar26 * ((float)(int)uVar15 / ((float)iVar6 + -1.0)),fVar19,fVar21,
                 *(undefined4 *)(lVar7 + 0x34),0);
    lVar7 = *(long *)(param_2 + 0x28);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_01bbfbf4;
    lVar16 = lVar7 + lVar13;
    fVar20 = (float)FUN_02699088(0);
    fVar32 = 1.0;
    if (*(char *)(unaff_x25 + 0x5c) != '\0') {
      fVar32 = -1.0;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_01bbfbf4;
    *(float *)(lVar16 + 0x2c) = fVar20 * fVar32;
    *(float *)(lVar16 + 0x30) = fVar19 * fVar32;
    *(float *)(lVar16 + 0x34) = fVar21 * fVar32;
    uVar15 = uVar15 + 1;
    lVar13 = lVar13 + 0xc;
    lVar7 = *(long *)(param_2 + 0x28);
  } while (lVar7 != 0);
  goto LAB_01bbfbc0;
LAB_01bbf9a0:
  if (*(int *)(param_2 + 0x10) != 0) {
    return;
  }
LAB_01bbf9a8:
  lVar7 = *(long *)(lStack0000000000000038 + 0x28);
  if (lVar7 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) + -1 <= iVar6) {
        return;
      }
      if (*(char *)(param_2 + 0x14) == '\0') {
        iVar12 = iVar6 + 1;
      }
      else {
        iVar4 = FUN_01bba4bc(unaff_x25);
        iVar12 = 0;
        if (iVar4 != 0) {
          iVar12 = (iVar6 + 1) / iVar4;
        }
        iVar12 = (iVar6 + 1) - iVar12 * iVar4;
      }
      fVar21 = (float)FUN_01bbcbb8(unaff_x25,iVar6);
      fVar21 = fVar21 + *(float *)(unaff_x25 + 0x58);
      fVar19 = (float)FUN_01bbcbb8(unaff_x25,iVar12);
      lVar7 = lStack0000000000000038;
      fVar19 = (fVar19 + *(float *)(unaff_x25 + 0x58)) - fVar21;
      fVar19 = fVar19 - (float)(int)(fVar19 / 360.0) * 360.0;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      fVar32 = fVar19 + -360.0;
      if (fVar19 <= 180.0) {
        fVar32 = fVar19;
      }
      if (*(long *)(lStack0000000000000038 + 0x28) == 0) break;
      FUN_0132138c(*(long *)(lStack0000000000000038 + 0x28),iVar6,&stack0x00000048,*puVar11);
      uVar15 = _fStack0000000000000048;
      lVar13 = *(long *)(lVar7 + 0x28);
      if (lVar13 == 0) break;
      iVar12 = (int)fStack0000000000000048;
      uVar17 = _fStack0000000000000048 & 0xffffffff;
      FUN_0132138c(lVar13,iVar6 + 1,&stack0x00000048,*puVar11);
      lVar7 = *(long *)(lVar7 + 0x28);
      if (lVar7 == 0) break;
      uVar10 = (int)fStack0000000000000048 - iVar12;
      if (iVar6 == *(int *)(lVar7 + 0x18) + -2) {
        uVar10 = uVar10 + 1;
      }
      if (0 < (int)uVar10) {
        uVar14 = 0;
        lVar7 = uVar15 << 0x20;
        do {
          lVar13 = *(long *)(param_2 + 0x20);
          if (lVar13 == 0) goto LAB_01bbfbc0;
          uVar15 = uVar17 + uVar14;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
          lVar13 = lVar13 + (lVar7 >> 0x20) * 0xc;
          fVar19 = *(float *)(lVar13 + 0x20);
          fVar20 = *(float *)(lVar13 + 0x24);
          FUN_02698d50(fVar21 + fVar32 * ((float)(int)uVar14 / ((float)(int)uVar10 + -1.0)),fVar19,
                       fVar20,*(undefined4 *)(lVar13 + 0x28),0);
          lVar13 = *(long *)(param_2 + 0x28);
          if (lVar13 == 0) goto LAB_01bbfbc0;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
          lVar16 = lVar13 + (lVar7 >> 0x20) * 0xc;
          fVar23 = (float)FUN_02699088(0);
          fVar22 = 1.0;
          if (*(char *)(unaff_x25 + 0x5c) != '\0') {
            fVar22 = fVar33;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01bbfbf4;
          uVar14 = uVar14 + 1;
          lVar7 = lVar7 + 0x100000000;
          *(float *)(lVar16 + 0x20) = fVar23 * fVar22;
          *(float *)(lVar16 + 0x24) = fVar19 * fVar22;
          *(float *)(lVar16 + 0x28) = fVar20 * fVar22;
        } while (uVar10 != uVar14);
        lVar7 = *(long *)(lStack0000000000000038 + 0x28);
        puVar11 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
        ;
      }
      iVar6 = iVar6 + 1;
    } while (lVar7 != 0);
  }
LAB_01bbfbc0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


