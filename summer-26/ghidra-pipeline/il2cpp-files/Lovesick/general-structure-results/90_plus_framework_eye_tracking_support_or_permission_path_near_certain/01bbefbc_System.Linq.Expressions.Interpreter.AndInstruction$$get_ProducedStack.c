/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.AndInstruction$$get_ProducedStack
ENTRY_POINT: 01bbefbc
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

void System_Linq_Expressions_Interpreter_AndInstruction__get_ProducedStack(ulong param_1)

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
  long unaff_x19;
  undefined8 *puVar11;
  int iVar12;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong uVar13;
  ulong uVar14;
  long unaff_x25;
  long lVar15;
  ulong uVar16;
  double dVar17;
  float fVar18;
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
  undefined8 uStack0000000000000020;
  long in_stack_00000038;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  undefined8 in_stack_00000058;
  
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
  FUN_017b46ec();
  *(undefined8 *)(unaff_x19 + 0x70) = unaff_x22;
  if (unaff_x25 != 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x25 + 0x24);
    *(undefined1 *)(unaff_x19 + 0x14) = *(undefined1 *)(unaff_x25 + 0x20);
    puVar3 = 
    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
    puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    puVar1 = OVREyeGaze_TypeInfo;
    if (((in_stack_00000038 != 0) && (*(long *)(in_stack_00000038 + 0x10) != 0)) &&
       (*(long *)(in_stack_00000038 + 0x20) != 0)) {
      iVar6 = *(int *)(*(long *)(in_stack_00000038 + 0x10) + 0x18);
      FUN_0132138c(*(long *)(in_stack_00000038 + 0x20),iVar6 + -1,&stack0x00000048,
                   *(undefined8 *)OVREyeGaze_TypeInfo);
      *(float *)(unaff_x19 + 0x38) = fStack0000000000000048;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar6);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar6);
      *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar6);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar6);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
      uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar6);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
      lVar7 = *(long *)(in_stack_00000038 + 0x30);
      if (lVar7 != 0) {
        fVar18 = (*(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x20)) * 0.5;
        fVar20 = (*(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x24)) * 0.5;
        _fStack0000000000000050 = 0;
        in_stack_00000058 = 0;
        _fStack0000000000000048 = 0;
        FUN_02687990((*(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x1c)) * 0.5,fVar18,fVar20,
                     *(float *)(lVar7 + 0x1c) - *(float *)(lVar7 + 0x10),
                     *(float *)(lVar7 + 0x20) - *(float *)(lVar7 + 0x14),
                     *(float *)(lVar7 + 0x24) - *(float *)(lVar7 + 0x18),&stack0x00000048,0);
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000058;
        *(undefined8 *)(unaff_x19 + 0x50) = _fStack0000000000000050;
        *(ulong *)(unaff_x19 + 0x48) = _fStack0000000000000048;
        FUN_02687be0(unaff_x19 + 0x48,0);
        FUN_02687be0(unaff_x19 + 0x48,0);
        if (fVar20 <= fVar18) {
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
          fVar18 = -*(float *)(*(long *)(*(long *)
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
          fVar18 = *(float *)(*(long *)(*(long *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                       + 0xb8) + 0x18);
          uStack0000000000000020 =
               *(undefined8 *)
                (*(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 0x1c);
        }
        lVar7 = *(long *)(unaff_x19 + 0x18);
        *(float *)(unaff_x19 + 0x60) = fVar18;
        *(undefined8 *)(unaff_x19 + 100) = uStack0000000000000020;
        puVar3 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
        puVar11 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
        ;
        puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
        fVar20 = DAT_028aa038;
        if (lVar7 != 0) {
          uVar14 = 0;
          lVar15 = 0x28;
          fVar32 = -1.0;
          do {
            if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar14) {
              if (*(int *)(unaff_x19 + 0x10) != 0) {
                return;
              }
              if (*(char *)(unaff_x19 + 0x14) == '\0') goto LAB_01bbf9a8;
              lVar7 = *(long *)(unaff_x19 + 0x28);
              if (lVar7 != 0) {
                if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_01bbfbf4;
                fVar18 = *(float *)(lVar7 + 0x20);
                lVar15 = *(long *)(unaff_x19 + 0x20);
                if (lVar15 != 0) {
                  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01bbfbf4;
                  fVar20 = *(float *)(lVar15 + 0x20);
                  fVar26 = *(float *)(lVar7 + 0x24);
                  fVar28 = *(float *)(lVar7 + 0x28);
                  fVar31 = *(float *)(lVar15 + 0x24);
                  pfVar8 = (float *)(lVar7 + 0x20) +
                           ((*(long *)(lVar7 + 0x18) << 0x20) + -0x100000000 >> 0x20) * 3;
                  fVar22 = *pfVar8;
                  fVar21 = pfVar8[1];
                  fVar24 = pfVar8[2];
                  fVar19 = *(float *)(lVar15 + 0x28);
                  if (DAT_03775508 == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_03775508 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  fVar23 = SQRT((fVar24 * fVar24 + fVar22 * fVar22 + fVar21 * fVar21) *
                                (fVar28 * fVar28 + fVar18 * fVar18 + fVar26 * fVar26));
                  fVar25 = 0.0;
                  if (DAT_028aa5c8 <= fVar23) {
                    fVar23 = (fVar24 * fVar28 + fVar22 * fVar18 + fVar21 * fVar26) / fVar23;
                    if (fVar23 < -1.0) {
                      fVar23 = fVar32;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    dVar17 = acos((double)fVar23);
                    fVar25 = (float)dVar17 * DAT_028aa158;
                  }
                  fVar23 = 1.0;
                  if ((fVar22 * fVar26 - fVar21 * fVar18) * fVar19 +
                      (fVar21 * fVar28 - fVar24 * fVar26) * fVar20 +
                      (fVar24 * fVar18 - fVar22 * fVar28) * fVar31 < 0.0) {
                    fVar23 = -1.0;
                  }
                  if (ABS(fVar23 * fVar25) <= DAT_028aa040) goto LAB_01bbf9a0;
                  lVar7 = *(long *)(unaff_x19 + 0x28);
                  if (lVar7 != 0) {
                    lVar15 = 0;
                    uVar14 = 1;
                    goto LAB_01bbf8ec;
                  }
                }
              }
              break;
            }
            if (*(long *)(in_stack_00000038 + 0x10) == 0) break;
            FUN_0132138c(*(long *)(in_stack_00000038 + 0x10),uVar14 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)puVar3);
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
            *(ulong *)((undefined4 *)(lVar7 + lVar15) + -2) = _fStack0000000000000048;
            *(undefined4 *)(lVar7 + lVar15) = fStack0000000000000050;
            if (*(long *)(in_stack_00000038 + 0x18) == 0) break;
            lVar7 = *(long *)(unaff_x19 + 0x20);
            FUN_0132138c(*(long *)(in_stack_00000038 + 0x18),uVar14 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)puVar3);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
            *(ulong *)((undefined4 *)(lVar7 + lVar15) + -2) = _fStack0000000000000048;
            *(undefined4 *)(lVar7 + lVar15) = fStack0000000000000050;
            if (*(long *)(in_stack_00000038 + 0x20) == 0) break;
            lVar7 = *(long *)(unaff_x19 + 0x40);
            FUN_0132138c(*(long *)(in_stack_00000038 + 0x20),uVar14 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)puVar1);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
            *(float *)(lVar7 + uVar14 * 4 + 0x20) = fStack0000000000000048;
            lVar7 = *(long *)(unaff_x19 + 0x40);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
            lVar9 = *(long *)(unaff_x19 + 0x30);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01bbfbf4;
            *(float *)(lVar9 + uVar14 * 4 + 0x20) =
                 *(float *)(lVar7 + uVar14 * 4 + 0x20) / *(float *)(unaff_x19 + 0x38);
            if (*(int *)(unaff_x19 + 0x10) == 0) {
              fVar31 = (float)uStack0000000000000020;
              if (lVar15 == 0x28) {
                if (*(long *)(in_stack_00000038 + 0x18) == 0) break;
                lVar7 = *(long *)(unaff_x19 + 0x28);
                FUN_0132138c(*(long *)(in_stack_00000038 + 0x18),0,&stack0x00000048,
                             *(undefined8 *)puVar3);
                fVar19 = fStack0000000000000050 * fVar31;
                fVar26 = fStack000000000000004c * uStack0000000000000020._4_4_;
                fVar21 = fStack0000000000000048 * uStack0000000000000020._4_4_;
                fVar24 = fVar18 * fStack0000000000000050;
                fVar22 = fVar18 * fStack000000000000004c;
                fVar31 = fStack0000000000000048 * fVar31;
                if (DAT_0377518c == '\0') {
                  thunk_FUN_00d48444(puVar2);
                  DAT_0377518c = '\x01';
                }
                fVar19 = fVar19 - fVar26;
                fVar21 = fVar21 - fVar24;
                fVar22 = fVar22 - fVar31;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar31 = SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar21 * fVar21);
                if (fVar31 <= fVar20) {
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
                  fVar19 = *pfVar8;
                  fVar21 = pfVar8[1];
                  fVar22 = pfVar8[2];
                }
                else {
                  fVar19 = fVar19 / fVar31;
                  fVar21 = fVar21 / fVar31;
                  fVar22 = fVar22 / fVar31;
                }
                if (lVar7 == 0) break;
                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01bbfbf4;
                *(float *)(lVar7 + 0x20) = fVar19;
                *(float *)(lVar7 + 0x24) = fVar21;
                *(float *)(lVar7 + 0x28) = fVar22;
              }
              else {
                lVar7 = *(long *)(unaff_x19 + 0x18);
                if (lVar7 == 0) break;
                if ((*(uint *)(lVar7 + 0x18) <= uVar14) ||
                   (uVar10 = (int)uVar14 - 1, *(uint *)(lVar7 + 0x18) <= uVar10)) goto LAB_01bbfbf4;
                lVar9 = *(long *)(unaff_x19 + 0x20);
                if (lVar9 == 0) break;
                if (((uint)*(ulong *)(lVar9 + 0x18) <= uVar10) ||
                   ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar14)) goto LAB_01bbfbf4;
                lVar7 = lVar7 + lVar15;
                lVar9 = lVar9 + lVar15;
                fVar22 = *(float *)(lVar7 + -8) - *(float *)(lVar7 + -0x14);
                fVar26 = (float)*(undefined8 *)(lVar7 + -4) - (float)*(undefined8 *)(lVar7 + -0x10);
                fVar28 = (float)((ulong)*(undefined8 *)(lVar7 + -4) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar7 + -0x10) >> 0x20);
                fVar19 = (float)*(undefined8 *)(lVar9 + -0x10);
                fVar25 = fVar22 * fVar22 + fVar26 * fVar26 + fVar28 * fVar28;
                fVar21 = (float)((ulong)*(undefined8 *)(lVar9 + -0x10) >> 0x20);
                fVar30 = uStack0000000000000020._4_4_ * fVar28 + fVar18 * fVar22 + fVar31 * fVar26;
                fVar27 = fVar28 * fVar21 + fVar22 * *(float *)(lVar9 + -0x14) + fVar26 * fVar19;
                fVar24 = (fVar22 + fVar22) / fVar25;
                fVar23 = (fVar26 + fVar26) / fVar25;
                fVar25 = (fVar28 + fVar28) / fVar25;
                fVar29 = *(float *)(lVar9 + -8);
                fVar22 = fVar29 - (*(float *)(lVar9 + -0x14) - fVar24 * fVar27);
                fVar26 = (float)*(undefined8 *)(lVar9 + -4);
                fVar19 = fVar26 - (fVar19 - fVar23 * fVar27);
                fVar28 = (float)((ulong)*(undefined8 *)(lVar9 + -4) >> 0x20);
                fVar21 = fVar28 - (fVar21 - fVar25 * fVar27);
                fVar18 = fVar18 - fVar30 * fVar24;
                fVar31 = fVar31 - fVar23 * fVar30;
                uStack0000000000000020._4_4_ = uStack0000000000000020._4_4_ - fVar25 * fVar30;
                fVar24 = fVar21 * fVar21 + fVar22 * fVar22 + fVar19 * fVar19;
                fVar23 = uStack0000000000000020._4_4_ * fVar21 + fVar18 * fVar22 + fVar31 * fVar19;
                fVar18 = fVar18 + fVar23 * ((fVar22 * -2.0) / fVar24);
                fVar31 = fVar31 + ((fVar19 * -2.0) / fVar24) * fVar23;
                uStack0000000000000020._4_4_ =
                     uStack0000000000000020._4_4_ + ((fVar21 * -2.0) / fVar24) * fVar23;
                uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,fVar31);
                if (DAT_0377518c == '\0') {
                  thunk_FUN_00d48444(puVar2);
                  DAT_0377518c = '\x01';
                }
                fVar19 = fVar28 * fVar31 - fVar26 * uStack0000000000000020._4_4_;
                fVar21 = fVar29 * uStack0000000000000020._4_4_ - fVar28 * fVar18;
                fVar31 = fVar18 * fVar26 - fVar29 * fVar31;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                fVar22 = SQRT(fVar31 * fVar31 + fVar19 * fVar19 + fVar21 * fVar21);
                if (fVar22 <= fVar20) {
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
                  fVar31 = *(float *)(*(undefined8 **)
                                       (*(long *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                       + 0xb8) + 1);
                }
                else {
                  uVar5 = CONCAT44(fVar21 / fVar22,fVar19 / fVar22);
                  fVar31 = fVar31 / fVar22;
                }
                lVar7 = *(long *)(unaff_x19 + 0x28);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
                *(undefined8 *)((float *)(lVar7 + lVar15) + -2) = uVar5;
                *(float *)(lVar7 + lVar15) = fVar31;
              }
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x20);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
              lVar9 = *(long *)(unaff_x19 + 0x28);
              fVar31 = fVar32;
              if (*(char *)(unaff_x25 + 0x5c) != '\0') {
                fVar31 = 1.0;
              }
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_01bbfbf4;
              pfVar8 = (float *)(lVar7 + lVar15);
              fVar19 = *(float *)(unaff_x19 + 0x60);
              fVar21 = *(float *)(unaff_x19 + 100);
              fVar22 = *(float *)(unaff_x19 + 0x68);
              fVar24 = pfVar8[-1];
              fVar26 = *pfVar8;
              fVar28 = pfVar8[-2];
              pfVar8 = (float *)(lVar9 + lVar15);
              pfVar8[-2] = (fVar24 * fVar22 - fVar26 * fVar21) * fVar31;
              pfVar8[-1] = (fVar26 * fVar19 - fVar28 * fVar22) * fVar31;
              *pfVar8 = (fVar28 * fVar21 - fVar24 * fVar19) * fVar31;
            }
            lVar7 = *(long *)(unaff_x19 + 0x18);
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 0xc;
          } while (lVar7 != 0);
        }
      }
    }
  }
  goto LAB_01bbfbc0;
LAB_01bbf8ec:
  do {
    iVar6 = (int)*(undefined8 *)(lVar7 + 0x18);
    if ((long)iVar6 <= (long)uVar14) goto LAB_01bbf9a0;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar14) {
LAB_01bbfbf4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = lVar7 + lVar15;
    fVar18 = *(float *)(lVar7 + 0x2c);
    fVar20 = *(float *)(lVar7 + 0x30);
    FUN_02698d50(fVar23 * fVar25 * ((float)(int)uVar14 / ((float)iVar6 + -1.0)),fVar18,fVar20,
                 *(undefined4 *)(lVar7 + 0x34),0);
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
    lVar9 = lVar7 + lVar15;
    fVar19 = (float)FUN_02699088(0);
    fVar31 = 1.0;
    if (*(char *)(unaff_x25 + 0x5c) != '\0') {
      fVar31 = -1.0;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_01bbfbf4;
    *(float *)(lVar9 + 0x2c) = fVar19 * fVar31;
    *(float *)(lVar9 + 0x30) = fVar18 * fVar31;
    *(float *)(lVar9 + 0x34) = fVar20 * fVar31;
    uVar14 = uVar14 + 1;
    lVar15 = lVar15 + 0xc;
    lVar7 = *(long *)(unaff_x19 + 0x28);
  } while (lVar7 != 0);
  goto LAB_01bbfbc0;
LAB_01bbf9a0:
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    return;
  }
LAB_01bbf9a8:
  lVar7 = *(long *)(in_stack_00000038 + 0x28);
  if (lVar7 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) + -1 <= iVar6) {
        return;
      }
      if (*(char *)(unaff_x19 + 0x14) == '\0') {
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
      fVar20 = (float)FUN_01bbcbb8(unaff_x25,iVar6);
      fVar20 = fVar20 + *(float *)(unaff_x25 + 0x58);
      fVar18 = (float)FUN_01bbcbb8(unaff_x25,iVar12);
      fVar18 = (fVar18 + *(float *)(unaff_x25 + 0x58)) - fVar20;
      fVar18 = fVar18 - (float)(int)(fVar18 / 360.0) * 360.0;
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      fVar31 = fVar18 + -360.0;
      if (fVar18 <= 180.0) {
        fVar31 = fVar18;
      }
      if (*(long *)(in_stack_00000038 + 0x28) == 0) break;
      FUN_0132138c(*(long *)(in_stack_00000038 + 0x28),iVar6,&stack0x00000048,*puVar11);
      uVar14 = _fStack0000000000000048;
      if (*(long *)(in_stack_00000038 + 0x28) == 0) break;
      iVar12 = (int)fStack0000000000000048;
      uVar16 = _fStack0000000000000048 & 0xffffffff;
      FUN_0132138c(*(long *)(in_stack_00000038 + 0x28),iVar6 + 1,&stack0x00000048,*puVar11);
      lVar7 = *(long *)(in_stack_00000038 + 0x28);
      if (lVar7 == 0) break;
      uVar10 = (int)fStack0000000000000048 - iVar12;
      if (iVar6 == *(int *)(lVar7 + 0x18) + -2) {
        uVar10 = uVar10 + 1;
      }
      if (0 < (int)uVar10) {
        uVar13 = 0;
        lVar7 = uVar14 << 0x20;
        do {
          lVar15 = *(long *)(unaff_x19 + 0x20);
          if (lVar15 == 0) goto LAB_01bbfbc0;
          uVar14 = uVar16 + uVar13;
          if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01bbfbf4;
          lVar15 = lVar15 + (lVar7 >> 0x20) * 0xc;
          fVar18 = *(float *)(lVar15 + 0x20);
          fVar19 = *(float *)(lVar15 + 0x24);
          FUN_02698d50(fVar20 + fVar31 * ((float)(int)uVar13 / ((float)(int)uVar10 + -1.0)),fVar18,
                       fVar19,*(undefined4 *)(lVar15 + 0x28),0);
          lVar15 = *(long *)(unaff_x19 + 0x28);
          if (lVar15 == 0) goto LAB_01bbfbc0;
          if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01bbfbf4;
          lVar9 = lVar15 + (lVar7 >> 0x20) * 0xc;
          fVar22 = (float)FUN_02699088(0);
          fVar21 = 1.0;
          if (*(char *)(unaff_x25 + 0x5c) != '\0') {
            fVar21 = fVar32;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01bbfbf4;
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 0x100000000;
          *(float *)(lVar9 + 0x20) = fVar22 * fVar21;
          *(float *)(lVar9 + 0x24) = fVar18 * fVar21;
          *(float *)(lVar9 + 0x28) = fVar19 * fVar21;
        } while (uVar10 != uVar13);
        lVar7 = *(long *)(in_stack_00000038 + 0x28);
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


