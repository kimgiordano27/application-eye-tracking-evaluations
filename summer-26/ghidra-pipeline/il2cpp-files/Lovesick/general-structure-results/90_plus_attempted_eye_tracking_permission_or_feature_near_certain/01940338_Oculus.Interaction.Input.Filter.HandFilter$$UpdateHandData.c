/*
FUNCTION_NAME: Oculus.Interaction.Input.Filter.HandFilter$$UpdateHandData
ENTRY_POINT: 01940338
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_Input_Filter_HandFilter__UpdateHandData(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined8 *unaff_x23;
  int iVar19;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar20;
  float fVar21;
  float unaff_s8;
  float fVar22;
  float fVar23;
  float unaff_s11;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    lVar17 = *(long *)(unaff_x19 + 0x48);
    FUN_01359cb4(0,*(long *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x50),&stack0x000000a0,
                 *unaff_x21);
    if (lVar17 != 0) {
      fVar20 = fStack00000000000000a0;
      if (fStack00000000000000a0 <= unaff_s8) {
        fVar20 = unaff_s8;
      }
      FUN_00ac1d04(unaff_s11 / fVar20,lVar17,*unaff_x29);
      lVar17 = unaff_x20[0x22];
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x48) != 0)) {
        lVar18 = *(long *)(unaff_x19 + 0x50);
        FUN_01359cb4(0,*(long *)(lVar17 + 0x48),*(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                     *(undefined8 *)Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                    );
        if (lVar18 != 0) {
          FUN_00ac20f0(lVar18,fStack00000000000000a0,*unaff_x26);
          lVar17 = unaff_x20[0x22];
          if ((lVar17 != 0) && (*(long *)(lVar17 + 0x28) != 0)) {
            lVar18 = *(long *)(unaff_x19 + 0x58);
            FUN_01359cb4(0,*(long *)(lVar17 + 0x28),*(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                         *(undefined8 *)
                          Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__);
            if (lVar18 != 0) {
              FUN_00ad3d7c(fStack00000000000000a0,uStack00000000000000a4,uStack00000000000000a8,
                           uStack00000000000000ac,lVar18,
                           *(undefined8 *)Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
              if (unaff_x20[0x21] != 0) {
                FUN_0132138c(unaff_x20[0x21],0,&stack0x000000a0,*unaff_x23);
                if ((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) != 0) &&
                   (lVar17 = *(long *)(CONCAT44(uStack00000000000000a4,fStack00000000000000a0) +
                                      0x18), lVar17 != 0)) {
                  lVar18 = *(long *)
                            Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                  ;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  uVar10 = FUN_00da5b18(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
                  if ((uVar10 & 1) == 0) {
                    *(undefined4 *)(lVar17 + 0x18) = 0;
                  }
                  else {
                    iVar19 = *(int *)(lVar17 + 0x18);
                    *(undefined4 *)(lVar17 + 0x18) = 0;
                    if (0 < iVar19) {
                      FUN_0179519c(*(undefined8 *)(lVar17 + 0x10),0,iVar19,0);
                    }
                  }
                  if (unaff_x20[0x21] != 0) {
                    FUN_0132138c(unaff_x20[0x21],0,&stack0x000000a0,*unaff_x23);
                    if ((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) != 0) &&
                       (lVar17 = *(long *)(CONCAT44(uStack00000000000000a4,fStack00000000000000a0) +
                                          0x18), lVar17 != 0)) {
                      FUN_00ac20f0(lVar17,0,*unaff_x26);
                      if (unaff_x20[0x22] != 0) {
                        uVar11 = FUN_01945330(unaff_x20[0x22],0);
                        *(undefined8 *)(unaff_x19 + 0x60) = uVar11;
                        if (unaff_x20[0x22] != 0) {
                          iVar8 = FUN_01945380(unaff_x20[0x22],0);
                          iVar19 = 0;
                          *(int *)(unaff_x19 + 0x68) = iVar8;
                          *(undefined4 *)(unaff_x19 + 0x88) = 0;
                          while (iVar19 < iVar8) {
                            if ((unaff_x20 == (long *)0x0) || (unaff_x20[0x22] == 0))
                            goto LAB_01940870;
                            iVar8 = FUN_019453d4(unaff_x20[0x22],0);
                            if (unaff_x20[0x22] == 0) goto LAB_01940870;
                            iVar1 = *(int *)(unaff_x19 + 0x88);
                            iVar9 = FUN_019453d4(unaff_x20[0x22],0);
                            puVar2 = 
                            Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                            ;
                            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
                            FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar8 + 1) * iVar19,
                                         &stack0x000000a0,
                                         *(undefined8 *)
                                          Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                        );
                            fVar20 = fStack00000000000000a0;
                            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
                            FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar9 + 1) * (iVar1 + 1),
                                         &stack0x000000a0,*(undefined8 *)puVar2);
                            fVar21 = *(float *)(unaff_x20 + 0x23);
                            fVar23 = *(float *)((long)unaff_x20 + 0x11c);
                            fVar22 = fStack00000000000000a0 - fVar20;
                            if (DAT_03775509 == '\0') {
                              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                              DAT_03775509 = '\x01';
                            }
                            puVar3 = StringLiteral_2735;
                            puVar2 = StringLiteral_645;
                            fVar23 = (fVar22 / fVar21) * fVar23;
                            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            fVar21 = DAT_028aa038;
                            lVar17 = unaff_x20[0x22];
                            iVar19 = -0x7fffffff;
                            if ((float)(int)fVar23 != INFINITY) {
                              iVar19 = (int)fVar23 + 1;
                            }
                            if (lVar17 == 0) goto LAB_01940870;
                            iVar8 = 0;
                            while (puVar4 = Method_Obi_ObiNativeList<Aabb>_Swap__, iVar8 < iVar19) {
                              iVar8 = iVar8 + 1;
                              uVar11 = FUN_019453dc(fVar20 + (fVar22 / (float)iVar19) * (float)iVar8
                                                    ,lVar17,0);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x18) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x28);
                              FUN_0194515c(*(long *)(lVar17 + 0x18),*(undefined1 *)(lVar17 + 0x50),0
                                          );
                              if (lVar18 == 0) goto LAB_01940870;
                              FUN_00ac4f98(lVar18,*unaff_x28);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x30);
                              FUN_01359cb4(uVar11,*(long *)(lVar17 + 0x20),
                                           *(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                                           *(undefined8 *)puVar3);
                              if (lVar18 == 0) goto LAB_01940870;
                              FUN_00ac4f98(fStack00000000000000a0,uStack00000000000000a4,
                                           uStack00000000000000a8,lVar18,*unaff_x28);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x30) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x38);
                              FUN_01359cb4(uVar11,*(long *)(lVar17 + 0x30),
                                           *(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                                           *unaff_x21);
                              if (lVar18 == 0) goto LAB_01940870;
                              FUN_00ac1d04(fStack00000000000000a0,lVar18,*unaff_x29);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x38) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x40);
                              FUN_01359cb4(uVar11,*(long *)(lVar17 + 0x38),
                                           *(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                                           *unaff_x21);
                              fVar23 = fStack00000000000000a0;
                              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (lVar18 == 0) goto LAB_01940870;
                              if (fVar23 <= fVar21) {
                                fVar23 = fVar21;
                              }
                              FUN_00ac1d04(unaff_s11 / fVar23,lVar18,*unaff_x29);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x40) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x48);
                              FUN_01359cb4(uVar11,*(long *)(lVar17 + 0x40),
                                           *(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                                           *unaff_x21);
                              if (lVar18 == 0) goto LAB_01940870;
                              fVar23 = fStack00000000000000a0;
                              if (fStack00000000000000a0 <= fVar21) {
                                fVar23 = fVar21;
                              }
                              FUN_00ac1d04(unaff_s11 / fVar23,lVar18,*unaff_x29);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x48) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x50);
                              FUN_01359cb4(uVar11,*(long *)(lVar17 + 0x48),
                                           *(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                          );
                              if (lVar18 == 0) goto LAB_01940870;
                              FUN_00ac20f0(lVar18,fStack00000000000000a0,*unaff_x26);
                              lVar17 = unaff_x20[0x22];
                              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x28) == 0))
                              goto LAB_01940870;
                              lVar18 = *(long *)(unaff_x19 + 0x58);
                              FUN_01359cb4(uVar11,*(long *)(lVar17 + 0x28),
                                           *(undefined1 *)(lVar17 + 0x50),&stack0x000000a0,
                                           *(undefined8 *)
                                            Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__
                                          );
                              if (lVar18 == 0) goto LAB_01940870;
                              FUN_00ad3d7c(fStack00000000000000a0,uStack00000000000000a4,
                                           uStack00000000000000a8,uStack00000000000000ac,lVar18,
                                           *(undefined8 *)
                                            Method_System_ReadOnlySpan<byte>_GetPinnableReference__)
                              ;
                              lVar17 = unaff_x20[0x22];
                              if (lVar17 == 0) goto LAB_01940870;
                            }
                            if ((*(char *)(lVar17 + 0x50) == '\0') ||
                               (iVar19 = *(int *)(unaff_x19 + 0x88),
                               iVar19 != *(int *)(unaff_x19 + 0x68) + -1)) {
                              if (unaff_x20[0x21] == 0) goto LAB_01940870;
                              FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,
                                           &stack0x000000a0,
                                           *(undefined8 *)Method_Obi_ObiNativeList<Aabb>_Swap__);
                              if ((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) == 0) ||
                                 (lVar17 = *(long *)(CONCAT44(uStack00000000000000a4,
                                                              fStack00000000000000a0) + 0x18),
                                 lVar17 == 0)) goto LAB_01940870;
                              lVar18 = *(long *)
                                        Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                              ;
                              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                              uVar10 = FUN_00da5b18(*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                     200));
                              if ((uVar10 & 1) == 0) {
                                *(undefined4 *)(lVar17 + 0x18) = 0;
                              }
                              else {
                                iVar19 = *(int *)(lVar17 + 0x18);
                                *(undefined4 *)(lVar17 + 0x18) = 0;
                                if (0 < iVar19) {
                                  FUN_0179519c(*(undefined8 *)(lVar17 + 0x10),0,iVar19,0);
                                }
                              }
                              if (unaff_x20[0x21] == 0) goto LAB_01940870;
                              FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,
                                           &stack0x000000a0,*(undefined8 *)puVar4);
                              if (((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) == 0) ||
                                  (*(long *)(unaff_x19 + 0x28) == 0)) ||
                                 (lVar17 = *(long *)(CONCAT44(uStack00000000000000a4,
                                                              fStack00000000000000a0) + 0x18),
                                 lVar17 == 0)) goto LAB_01940870;
                              FUN_00ac20f0(lVar17,*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,
                                           *unaff_x26);
                              iVar19 = *(int *)(unaff_x19 + 0x88);
                            }
                            if (iVar19 % 100 == 0) {
                              iVar8 = *(int *)(unaff_x19 + 0x68);
                              lVar17 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                              if (lVar17 != 0) {
                                FUN_01919300((float)iVar19 / (float)iVar8,lVar17,
                                             *(undefined8 *)
                                              UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                             ,0);
                                *(long *)(unaff_x19 + 0x18) = lVar17;
                                *(undefined4 *)(unaff_x19 + 0x10) = 1;
                                return 1;
                              }
                              goto LAB_01940870;
                            }
                            iVar8 = *(int *)(unaff_x19 + 0x68);
                            iVar19 = iVar19 + 1;
                            *(int *)(unaff_x19 + 0x88) = iVar19;
                          }
                          if ((*(long *)(unaff_x19 + 0x28) != 0) && (unaff_x20 != (long *)0x0)) {
                            iVar19 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                            lVar17 = unaff_x20[0x22];
                            *(int *)((long)unaff_x20 + 0x24) = iVar19;
                            *(int *)((long)unaff_x20 + 0x124) = iVar19;
                            puVar7 = StringLiteral_6246;
                            puVar6 = 
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                            ;
                            puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                            puVar4 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__
                            ;
                            puVar3 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                            puVar2 = 
                            Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                            ;
                            if (lVar17 != 0) {
                              iVar19 = iVar19 - (*(byte *)(lVar17 + 0x50) ^ 1);
                              *(int *)(unaff_x19 + 0x6c) = iVar19;
                              if (iVar19 < 1) {
                                fVar20 = 0.0;
                              }
                              else {
                                fVar20 = *(float *)(lVar17 + 0x60) / (float)iVar19;
                              }
                              *(float *)(unaff_x20 + 0x24) = fVar20;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar6);
                              unaff_x20[9] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xb] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xd] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xe] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xf] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x10] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x12] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x11] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[10] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xc] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x13] = lVar17;
                              lVar17 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x26] = lVar17;
                              *(undefined4 *)(unaff_x19 + 0x88) = 0;
                              puVar2 = 
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              ;
                              uVar16 = 0;
                              puVar13 = (undefined8 *)OVREyeGaze_TypeInfo;
                              while (OVREyeGaze_TypeInfo = (undefined *)puVar13,
                                    unaff_x20 != (long *)0x0) {
                                if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar16) {
                                  FUN_0194553c();
                                  plVar12 = (long *)(**(code **)(*unaff_x20 + 600))();
                                  *(long **)(unaff_x19 + 0x70) = plVar12;
                                  puVar2 = 
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                  ;
                                  if (plVar12 != (long *)0x0) {
                                    lVar17 = *plVar12;
                                    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
                                    if (uVar10 == 0) goto LAB_01940e28;
                                    piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                    goto LAB_01940e10;
                                  }
                                  break;
                                }
                                if (*(long *)(unaff_x19 + 0x40) == 0) break;
                                lVar17 = unaff_x20[0xf];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar16,&stack0x000000a0,
                                             *puVar13);
                                if (lVar17 == 0) break;
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
                                  FUN_00da5194();
                                }
                                *(float *)(lVar17 + (long)(int)uVar16 * 4 + 0x20) =
                                     fStack00000000000000a0;
                                if (*(long *)(unaff_x19 + 0x48) == 0) break;
                                uVar16 = *(uint *)(unaff_x19 + 0x88);
                                lVar17 = unaff_x20[0x10];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar16,&stack0x000000a0,
                                             *puVar13);
                                if (lVar17 == 0) break;
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                *(float *)(lVar17 + (long)(int)uVar16 * 4 + 0x20) =
                                     fStack00000000000000a0;
                                if (*(long *)(unaff_x19 + 0x28) == 0) break;
                                uVar16 = *(uint *)(unaff_x19 + 0x88);
                                lVar17 = unaff_x20[9];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar16,&stack0x000000a0,
                                             *(undefined8 *)
                                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                                            );
                                if (lVar17 == 0) break;
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                lVar17 = lVar17 + (long)(int)uVar16 * 0xc;
                                *(ulong *)(lVar17 + 0x20) =
                                     CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
                                *(undefined4 *)(lVar17 + 0x28) = uStack00000000000000a8;
                                lVar17 = unaff_x20[9];
                                if (lVar17 == 0) break;
                                uVar16 = *(uint *)(unaff_x19 + 0x88);
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                lVar18 = unaff_x20[10];
                                if (lVar18 == 0) break;
                                if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_01941128;
                                lVar17 = lVar17 + (long)(int)uVar16 * 0xc;
                                uVar14 = *(undefined4 *)(lVar17 + 0x28);
                                lVar18 = lVar18 + (long)(int)uVar16 * 0x10;
                                *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)(lVar17 + 0x20);
                                *(undefined4 *)(lVar18 + 0x28) = uVar14;
                                *(undefined4 *)(lVar18 + 0x2c) = 0;
                                lVar17 = unaff_x20[10];
                                if (lVar17 == 0) break;
                                uVar16 = *(uint *)(unaff_x19 + 0x88);
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                *(undefined4 *)(lVar17 + (long)(int)uVar16 * 0x10 + 0x2c) =
                                     0x3f800000;
                                lVar17 = unaff_x20[0x12];
                                if (DAT_03774e1c == '\0') {
                                  thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                  DAT_03774e1c = '\x01';
                                }
                                if (*(long *)(unaff_x19 + 0x38) == 0) break;
                                uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
                                fVar20 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
                                FUN_0132138c(*(long *)(unaff_x19 + 0x38),
                                             *(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
                                             *puVar13);
                                if (lVar17 == 0) break;
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                fVar21 = *(float *)(unaff_x20 + 0x23);
                                lVar17 = lVar17 + (long)(int)uVar16 * 0xc;
                                *(ulong *)(lVar17 + 0x20) =
                                     CONCAT44((float)((ulong)uVar11 >> 0x20) *
                                              fStack00000000000000a0 * fVar21,
                                              (float)uVar11 * fStack00000000000000a0 * fVar21);
                                *(float *)(lVar17 + 0x28) = fVar20 * fStack00000000000000a0 * fVar21
                                ;
                                if (*(long *)(unaff_x19 + 0x50) == 0) break;
                                uVar16 = *(uint *)(unaff_x19 + 0x88);
                                lVar17 = unaff_x20[0x11];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar16,&stack0x000000a0,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                                            );
                                if (lVar17 == 0) break;
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                *(float *)(lVar17 + (long)(int)uVar16 * 4 + 0x20) =
                                     fStack00000000000000a0;
                                if (*(long *)(unaff_x19 + 0x58) == 0) break;
                                uVar16 = *(uint *)(unaff_x19 + 0x88);
                                lVar17 = unaff_x20[0x13];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar16,&stack0x000000a0,
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                                            );
                                if (lVar17 == 0) break;
                                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_01941128;
                                lVar17 = lVar17 + (long)(int)uVar16 * 0x10;
                                *(ulong *)(lVar17 + 0x28) =
                                     CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
                                *(ulong *)(lVar17 + 0x20) =
                                     CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
                                iVar19 = *(int *)(unaff_x19 + 0x88);
                                if (iVar19 % 100 == 0) {
                                  iVar8 = *(int *)((long)unaff_x20 + 0x24);
                                  lVar17 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                                  if (lVar17 != 0) {
                                    FUN_01919300((float)iVar19 / (float)iVar8,lVar17,
                                                 *(undefined8 *)StringLiteral_13935,0);
                                    *(long *)(unaff_x19 + 0x18) = lVar17;
                                    uVar14 = 2;
                                    goto LAB_019410f0;
                                  }
                                  break;
                                }
                                uVar16 = iVar19 + 1;
                                *(uint *)(unaff_x19 + 0x88) = uVar16;
                                puVar13 = (undefined8 *)OVREyeGaze_TypeInfo;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_01940870;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar13 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar13 = (undefined8 *)
            FUN_00d59724(plVar12,*(long *)
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ,0);
LAB_01940e8c:
  uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
  if ((uVar10 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar12;
      if (plVar12 != (long *)0x0) {
        lVar17 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,0);
LAB_01940f54:
        uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar10 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar12 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar12;
            if (plVar12 != (long *)0x0) {
              lVar17 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar10 != 0) {
                piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    puVar13 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,0);
LAB_0194101c:
              uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if ((uVar10 & 1) == 0) {
                return 0;
              }
              plVar12 = *(long **)(unaff_x19 + 0x80);
              if (plVar12 != (long *)0x0) {
                lVar17 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar10 != 0) {
                  piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar13 = (undefined8 *)(lVar17 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar10 = uVar10 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,1);
BufferedAudioStream__Stop:
                uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
                uVar14 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar12 = *(long **)(unaff_x19 + 0x78);
          if (plVar12 != (long *)0x0) {
            lVar17 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar10 != 0) {
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar17 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar10 = uVar10 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,1);
LAB_019410b4:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
            uVar14 = 4;
LAB_019410f0:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar14;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar12 = *(long **)(unaff_x19 + 0x70);
    if (plVar12 != (long *)0x0) {
      lVar17 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,1);
LAB_0194108c:
      uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      uVar14 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


