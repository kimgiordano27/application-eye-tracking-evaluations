/*
FUNCTION_NAME: Oculus.Platform.CAPI$$DictionaryToOVRKeyValuePairs
ENTRY_POINT: 01943e7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 122
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Platform_CAPI__DictionaryToOVRKeyValuePairs(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar15;
  long lVar16;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s11;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  
  FUN_00ad3d7c();
  if (unaff_x20[0x21] != 0) {
    FUN_0132138c(unaff_x20[0x21],0,&stack0x000000b0,*unaff_x26);
    if ((CONCAT44(uStack00000000000000b4,fStack00000000000000b0) != 0) &&
       (lVar16 = *(long *)(CONCAT44(uStack00000000000000b4,fStack00000000000000b0) + 0x18),
       lVar16 != 0)) {
      lVar13 = *(long *)
                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
      ;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      if ((uVar7 & 1) == 0) {
        *(undefined4 *)(lVar16 + 0x18) = 0;
      }
      else {
        iVar11 = *(int *)(lVar16 + 0x18);
        *(undefined4 *)(lVar16 + 0x18) = 0;
        if (0 < iVar11) {
          FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar11,0);
        }
      }
      if (unaff_x20[0x21] != 0) {
        FUN_0132138c(unaff_x20[0x21],0,&stack0x000000b0,*unaff_x26);
        if (((CONCAT44(uStack00000000000000b4,fStack00000000000000b0) != 0) &&
            (lVar16 = *(long *)(CONCAT44(uStack00000000000000b4,fStack00000000000000b0) + 0x18),
            lVar16 != 0)) && (FUN_00ac20f0(lVar16,0,*unaff_x27), unaff_x20[0x22] != 0)) {
          uVar8 = FUN_01945330();
          *(undefined8 *)(unaff_x19 + 0x50) = uVar8;
          if (unaff_x20[0x22] != 0) {
            iVar6 = FUN_01945380();
            iVar11 = 0;
            *(int *)(unaff_x19 + 0x58) = iVar6;
            *(undefined4 *)(unaff_x19 + 0x70) = 0;
            while (puVar1 = 
                   Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                  , iVar11 < iVar6) {
              if (((unaff_x20 == (long *)0x0) || (unaff_x20[0x22] == 0)) ||
                 (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_01944208;
              FUN_01383784(*(long *)(unaff_x19 + 0x50),iVar11 * 0x15,&stack0x000000b0,
                           *(undefined8 *)
                            Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                          );
              fVar17 = fStack00000000000000b0;
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01944208;
              FUN_01383784(*(long *)(unaff_x19 + 0x50),iVar11 * 0x15 + 0x15,&stack0x000000b0,
                           *(undefined8 *)puVar1);
              fVar18 = *(float *)(unaff_x20 + 0x23);
              fVar20 = *(float *)((long)unaff_x20 + 0x11c);
              fVar19 = fStack00000000000000b0 - fVar17;
              if (DAT_03775509 == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_03775509 = '\x01';
              }
              fVar20 = (fVar19 / fVar18) * fVar20;
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              fVar18 = DAT_028aa038;
              lVar16 = unaff_x20[0x22];
              iVar11 = -0x7fffffff;
              if ((float)(int)fVar20 != INFINITY) {
                iVar11 = (int)fVar20 + 1;
              }
              if (lVar16 == 0) goto LAB_01944208;
              iVar6 = 0;
              while (puVar1 = Method_Obi_ObiNativeList<Aabb>_Swap__, iVar6 < iVar11) {
                iVar6 = iVar6 + 1;
                uVar8 = FUN_019453dc(fVar17 + (fVar19 / (float)iVar11) * (float)iVar6);
                lVar16 = unaff_x20[0x22];
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0x18) == 0)) goto LAB_01944208;
                lVar13 = *(long *)(unaff_x19 + 0x28);
                FUN_0194515c(*(long *)(lVar16 + 0x18),*(undefined1 *)(lVar16 + 0x50));
                if (lVar13 == 0) goto LAB_01944208;
                FUN_00ac4f98(lVar13,*unaff_x24);
                lVar16 = unaff_x20[0x22];
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0x30) == 0)) goto LAB_01944208;
                lVar13 = *(long *)(unaff_x19 + 0x30);
                FUN_01359cb4(uVar8,*(long *)(lVar16 + 0x30),*(undefined1 *)(lVar16 + 0x50),
                             &stack0x000000b0,*unaff_x28);
                if (lVar13 == 0) goto LAB_01944208;
                FUN_00ac1d04(fStack00000000000000b0,lVar13,*unaff_x21);
                lVar16 = unaff_x20[0x22];
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0x38) == 0)) goto LAB_01944208;
                lVar13 = *(long *)(unaff_x19 + 0x38);
                FUN_01359cb4(uVar8,*(long *)(lVar16 + 0x38),*(undefined1 *)(lVar16 + 0x50),
                             &stack0x000000b0,*unaff_x28);
                fVar20 = fStack00000000000000b0;
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (lVar13 == 0) goto LAB_01944208;
                if (fVar20 <= fVar18) {
                  fVar20 = fVar18;
                }
                FUN_00ac1d04(unaff_s11 / fVar20,lVar13,*unaff_x21);
                lVar16 = unaff_x20[0x22];
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0x48) == 0)) goto LAB_01944208;
                lVar13 = *(long *)(unaff_x19 + 0x40);
                FUN_01359cb4(uVar8,*(long *)(lVar16 + 0x48),*(undefined1 *)(lVar16 + 0x50),
                             &stack0x000000b0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<CharacterZone>_get_Item__);
                if (lVar13 == 0) goto LAB_01944208;
                FUN_00ac20f0(lVar13,fStack00000000000000b0,*unaff_x27);
                lVar16 = unaff_x20[0x22];
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0x28) == 0)) goto LAB_01944208;
                lVar13 = *(long *)(unaff_x19 + 0x48);
                FUN_01359cb4(uVar8,*(long *)(lVar16 + 0x28),*(undefined1 *)(lVar16 + 0x50),
                             &stack0x000000b0,*unaff_x25);
                if (lVar13 == 0) goto LAB_01944208;
                FUN_00ad3d7c(fStack00000000000000b0,uStack00000000000000b4,uStack00000000000000b8,
                             uStack00000000000000bc,lVar13,
                             *(undefined8 *)Method_System_ReadOnlySpan<byte>_GetPinnableReference__)
                ;
                lVar16 = unaff_x20[0x22];
                if (lVar16 == 0) goto LAB_01944208;
              }
              if ((*(char *)(lVar16 + 0x50) == '\0') ||
                 (iVar11 = *(int *)(unaff_x19 + 0x70), iVar11 != *(int *)(unaff_x19 + 0x58) + -1)) {
                if (unaff_x20[0x21] == 0) goto LAB_01944208;
                FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x70) + 1,&stack0x000000b0,
                             *(undefined8 *)Method_Obi_ObiNativeList<Aabb>_Swap__);
                if ((CONCAT44(uStack00000000000000b4,fStack00000000000000b0) == 0) ||
                   (lVar16 = *(long *)(CONCAT44(uStack00000000000000b4,fStack00000000000000b0) +
                                      0x18), lVar16 == 0)) goto LAB_01944208;
                lVar13 = *(long *)
                          Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                ;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                uVar7 = FUN_00da5b18(*(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
                if ((uVar7 & 1) == 0) {
                  *(undefined4 *)(lVar16 + 0x18) = 0;
                }
                else {
                  iVar11 = *(int *)(lVar16 + 0x18);
                  *(undefined4 *)(lVar16 + 0x18) = 0;
                  if (0 < iVar11) {
                    FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar11,0);
                  }
                }
                if (unaff_x20[0x21] == 0) goto LAB_01944208;
                FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x70) + 1,&stack0x000000b0,
                             *(undefined8 *)puVar1);
                if (((CONCAT44(uStack00000000000000b4,fStack00000000000000b0) == 0) ||
                    (*(long *)(unaff_x19 + 0x28) == 0)) ||
                   (lVar16 = *(long *)(CONCAT44(uStack00000000000000b4,fStack00000000000000b0) +
                                      0x18), lVar16 == 0)) goto LAB_01944208;
                FUN_00ac20f0(lVar16,*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,*unaff_x27);
                iVar11 = *(int *)(unaff_x19 + 0x70);
              }
              if (iVar11 % 100 == 0) {
                iVar6 = *(int *)(unaff_x19 + 0x58);
                lVar16 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                if (lVar16 != 0) {
                  FUN_01919300((float)iVar11 / (float)iVar6,lVar16,
                               *(undefined8 *)
                                UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo,0);
                  *(long *)(unaff_x19 + 0x18) = lVar16;
                  *(undefined4 *)(unaff_x19 + 0x10) = 1;
                  return 1;
                }
                goto LAB_01944208;
              }
              iVar6 = *(int *)(unaff_x19 + 0x58);
              iVar11 = iVar11 + 1;
              *(int *)(unaff_x19 + 0x70) = iVar11;
            }
            if ((*(long *)(unaff_x19 + 0x28) != 0) && (unaff_x20 != (long *)0x0)) {
              iVar11 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18);
              lVar16 = unaff_x20[0x22];
              *(int *)((long)unaff_x20 + 0x24) = iVar11;
              *(int *)((long)unaff_x20 + 0x124) = (int)unaff_x20[0x27] + iVar11;
              puVar5 = 
              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
              ;
              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
              puVar3 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
              puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
              puVar1 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
              if (lVar16 != 0) {
                iVar11 = iVar11 - (*(byte *)(lVar16 + 0x50) ^ 1);
                *(int *)(unaff_x19 + 0x5c) = iVar11;
                if (iVar11 < 1) {
                  fVar17 = 0.0;
                }
                else {
                  fVar17 = *(float *)(lVar16 + 0x60) / (float)iVar11;
                }
                *(float *)(unaff_x20 + 0x24) = fVar17;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar5);
                unaff_x20[9] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar1,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[10] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[0xd] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[0xf] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[0x12] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[0x11] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[0x13] = lVar16;
                lVar16 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)((long)unaff_x20 + 0x124)
                                     );
                unaff_x20[0x26] = lVar16;
                *(undefined4 *)(unaff_x19 + 0x70) = 0;
                puVar1 = 
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                uVar15 = 0;
                puVar10 = (undefined8 *)OVREyeGaze_TypeInfo;
                while (OVREyeGaze_TypeInfo = (undefined *)puVar10, unaff_x20 != (long *)0x0) {
                  if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar15) {
                    FUN_0194553c();
                    plVar9 = (long *)(**(code **)(*unaff_x20 + 600))();
                    *(long **)(unaff_x19 + 0x60) = plVar9;
                    puVar1 = 
                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
                    if (plVar9 != (long *)0x0) {
                      lVar16 = *plVar9;
                      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
                      if (uVar7 == 0) goto LAB_0194476c;
                      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      goto LAB_01944754;
                    }
                    break;
                  }
                  if (*(long *)(unaff_x19 + 0x38) == 0) break;
                  lVar16 = unaff_x20[0xf];
                  FUN_0132138c(*(long *)(unaff_x19 + 0x38),uVar15,&stack0x000000b0,*puVar10);
                  if (lVar16 == 0) break;
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  *(float *)(lVar16 + (long)(int)uVar15 * 4 + 0x20) = fStack00000000000000b0;
                  if (*(long *)(unaff_x19 + 0x28) == 0) break;
                  uVar15 = *(uint *)(unaff_x19 + 0x70);
                  lVar16 = unaff_x20[9];
                  FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar15,&stack0x000000b0,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                              );
                  if (lVar16 == 0) break;
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  lVar16 = lVar16 + (long)(int)uVar15 * 0xc;
                  *(ulong *)(lVar16 + 0x20) =
                       CONCAT44(uStack00000000000000b4,fStack00000000000000b0);
                  *(undefined4 *)(lVar16 + 0x28) = uStack00000000000000b8;
                  lVar16 = unaff_x20[9];
                  if (lVar16 == 0) break;
                  uVar15 = *(uint *)(unaff_x19 + 0x70);
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  lVar13 = unaff_x20[10];
                  if (lVar13 == 0) break;
                  if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_0194499c;
                  lVar16 = lVar16 + (long)(int)uVar15 * 0xc;
                  uVar12 = *(undefined4 *)(lVar16 + 0x28);
                  lVar13 = lVar13 + (long)(int)uVar15 * 0x10;
                  *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
                  *(undefined4 *)(lVar13 + 0x28) = uVar12;
                  *(undefined4 *)(lVar13 + 0x2c) = 0;
                  lVar16 = unaff_x20[10];
                  if (lVar16 == 0) break;
                  uVar15 = *(uint *)(unaff_x19 + 0x70);
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  *(undefined4 *)(lVar16 + (long)(int)uVar15 * 0x10 + 0x2c) = 0x3f800000;
                  lVar16 = unaff_x20[0x12];
                  if (DAT_03774e1c == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774e1c = '\x01';
                  }
                  if (*(long *)(unaff_x19 + 0x30) == 0) break;
                  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
                  fVar17 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14);
                  FUN_0132138c(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x70),
                               &stack0x000000b0,*puVar10);
                  if (lVar16 == 0) break;
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  fVar18 = *(float *)(unaff_x20 + 0x23);
                  lVar16 = lVar16 + (long)(int)uVar15 * 0xc;
                  *(ulong *)(lVar16 + 0x20) =
                       CONCAT44((float)((ulong)uVar8 >> 0x20) * fStack00000000000000b0 * fVar18,
                                (float)uVar8 * fStack00000000000000b0 * fVar18);
                  *(float *)(lVar16 + 0x28) = fVar17 * fStack00000000000000b0 * fVar18;
                  if (*(long *)(unaff_x19 + 0x40) == 0) break;
                  uVar15 = *(uint *)(unaff_x19 + 0x70);
                  lVar16 = unaff_x20[0x11];
                  FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar15,&stack0x000000b0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                              );
                  if (lVar16 == 0) break;
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  *(float *)(lVar16 + (long)(int)uVar15 * 4 + 0x20) = fStack00000000000000b0;
                  if (*(long *)(unaff_x19 + 0x48) == 0) break;
                  uVar15 = *(uint *)(unaff_x19 + 0x70);
                  lVar16 = unaff_x20[0x13];
                  FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar15,&stack0x000000b0,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                              );
                  if (lVar16 == 0) break;
                  if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_0194499c;
                  lVar16 = lVar16 + (long)(int)uVar15 * 0x10;
                  *(ulong *)(lVar16 + 0x28) =
                       CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
                  *(ulong *)(lVar16 + 0x20) =
                       CONCAT44(uStack00000000000000b4,fStack00000000000000b0);
                  iVar11 = *(int *)(unaff_x19 + 0x70);
                  if (iVar11 % 100 == 0) {
                    iVar6 = *(int *)((long)unaff_x20 + 0x24);
                    lVar16 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                    if (lVar16 != 0) {
                      FUN_01919300((float)iVar11 / (float)iVar6,lVar16,
                                   *(undefined8 *)
                                    UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo,0);
                      *(long *)(unaff_x19 + 0x18) = lVar16;
                      uVar12 = 2;
                      goto LAB_01944990;
                    }
                    break;
                  }
                  uVar15 = iVar11 + 1;
                  *(uint *)(unaff_x19 + 0x70) = uVar15;
                  puVar10 = (undefined8 *)OVREyeGaze_TypeInfo;
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_01944208;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_01944754:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_019447d0;
    }
  }
LAB_0194476c:
  puVar10 = (undefined8 *)
            FUN_00d59724(plVar9,*(long *)
                                 Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ,0);
LAB_019447d0:
  uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if ((uVar7 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x68) = plVar9;
      if (plVar9 != (long *)0x0) {
        lVar16 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_01944898;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,0);
LAB_01944898:
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar7 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            lVar16 = unaff_x20[0x26];
            *(undefined4 *)(unaff_x20 + 0x25) = 0;
            if (lVar16 != 0) {
              uVar15 = *(uint *)(lVar16 + 0x18);
              if (0 < (long)((ulong)uVar15 << 0x20)) {
                uVar7 = 0;
                fVar17 = 0.0;
                do {
                  if (uVar15 == uVar7) {
LAB_0194499c:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar13 = uVar7 * 4;
                  uVar7 = uVar7 + 1;
                  fVar17 = *(float *)(lVar16 + 0x20 + lVar13) + fVar17;
                  *(float *)(unaff_x20 + 0x25) = fVar17;
                } while ((long)uVar7 < (long)(int)uVar15);
              }
              return 0;
            }
          }
        }
        else {
          plVar9 = *(long **)(unaff_x19 + 0x68);
          if (plVar9 != (long *)0x0) {
            lVar16 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_0194497c;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,1);
LAB_0194497c:
            uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
            uVar12 = 4;
            goto LAB_01944990;
          }
        }
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x19 + 0x60);
    if (plVar9 != (long *)0x0) {
      lVar16 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_01944954;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,1);
LAB_01944954:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar12 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
LAB_01944990:
      *(undefined4 *)(unaff_x19 + 0x10) = uVar12;
      return 1;
    }
  }
LAB_01944208:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


