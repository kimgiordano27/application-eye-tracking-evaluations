/*
FUNCTION_NAME: Oculus.Interaction.Input.Filter.HandFilter$$.ctor
ENTRY_POINT: 01940880
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_Input_Filter_HandFilter___ctor(void)

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
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  uint in_w8;
  undefined4 uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar18;
  long lVar19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_s11;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  while( true ) {
    if ((in_w8 == 0) ||
       (iVar14 = *(int *)(unaff_x19 + 0x88), iVar14 != *(int *)(unaff_x19 + 0x68) + -1)) {
      if (unaff_x20[0x21] == 0) goto LAB_01940870;
      FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,&stack0x000000a0,*unaff_x23);
      if ((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) == 0) ||
         (lVar19 = *(long *)(CONCAT44(uStack00000000000000a4,fStack00000000000000a0) + 0x18),
         lVar19 == 0)) goto LAB_01940870;
      lVar16 = *(long *)
                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
      ;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar19 + 0x18) = 0;
      }
      else {
        iVar14 = *(int *)(lVar19 + 0x18);
        *(undefined4 *)(lVar19 + 0x18) = 0;
        if (0 < iVar14) {
          FUN_0179519c(*(undefined8 *)(lVar19 + 0x10),0,iVar14,0);
        }
      }
      if (unaff_x20[0x21] == 0) goto LAB_01940870;
      FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,&stack0x000000a0,*unaff_x23);
      if (((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) == 0) ||
          (*(long *)(unaff_x19 + 0x28) == 0)) ||
         (lVar19 = *(long *)(CONCAT44(uStack00000000000000a4,fStack00000000000000a0) + 0x18),
         lVar19 == 0)) goto LAB_01940870;
      FUN_00ac20f0(lVar19,*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,*unaff_x26);
      iVar14 = *(int *)(unaff_x19 + 0x88);
    }
    if (iVar14 % 100 == 0) break;
    iVar14 = iVar14 + 1;
    *(int *)(unaff_x19 + 0x88) = iVar14;
    if (*(int *)(unaff_x19 + 0x68) <= iVar14) {
      if ((*(long *)(unaff_x19 + 0x28) != 0) && (unaff_x20 != (long *)0x0)) {
        iVar14 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18);
        lVar19 = unaff_x20[0x22];
        *(int *)((long)unaff_x20 + 0x24) = iVar14;
        *(int *)((long)unaff_x20 + 0x124) = iVar14;
        puVar7 = StringLiteral_6246;
        puVar6 = 
        Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
        puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
        puVar4 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
        puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
        puVar3 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
        if (lVar19 != 0) {
          iVar14 = iVar14 - (*(byte *)(lVar19 + 0x50) ^ 1);
          *(int *)(unaff_x19 + 0x6c) = iVar14;
          if (iVar14 < 1) {
            fVar20 = 0.0;
          }
          else {
            fVar20 = *(float *)(lVar19 + 0x60) / (float)iVar14;
          }
          *(float *)(unaff_x20 + 0x24) = fVar20;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar6);
          unaff_x20[9] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar7,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0xb] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0xd] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0xe] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0xf] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0x10] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0x12] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0x11] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[10] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar7,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0xc] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0x13] = lVar19;
          lVar19 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)((long)unaff_x20 + 0x124));
          unaff_x20[0x26] = lVar19;
          *(undefined4 *)(unaff_x19 + 0x88) = 0;
          puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
          uVar18 = 0;
          if (unaff_x20 != (long *)0x0) goto LAB_01940db0;
        }
      }
      goto LAB_01940870;
    }
    if ((unaff_x20 == (long *)0x0) || (unaff_x20[0x22] == 0)) goto LAB_01940870;
    iVar8 = FUN_019453d4(unaff_x20[0x22],0);
    if (unaff_x20[0x22] == 0) goto LAB_01940870;
    iVar1 = *(int *)(unaff_x19 + 0x88);
    iVar9 = FUN_019453d4(unaff_x20[0x22],0);
    puVar3 = 
    Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
    ;
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
    FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar8 + 1) * iVar14,&stack0x000000a0,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                );
    fVar20 = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
    FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar9 + 1) * (iVar1 + 1),&stack0x000000a0,
                 *(undefined8 *)puVar3);
    fVar21 = *(float *)(unaff_x20 + 0x23);
    fVar23 = *(float *)((long)unaff_x20 + 0x11c);
    fVar22 = fStack00000000000000a0 - fVar20;
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    puVar2 = StringLiteral_2735;
    puVar3 = StringLiteral_645;
    fVar23 = (fVar22 / fVar21) * fVar23;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar21 = DAT_028aa038;
    lVar19 = unaff_x20[0x22];
    iVar14 = -0x7fffffff;
    if ((float)(int)fVar23 != INFINITY) {
      iVar14 = (int)fVar23 + 1;
    }
    if (lVar19 == 0) goto LAB_01940870;
    iVar8 = 0;
    while (iVar8 < iVar14) {
      iVar8 = iVar8 + 1;
      uVar13 = FUN_019453dc(fVar20 + (fVar22 / (float)iVar14) * (float)iVar8,lVar19,0);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x18) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x28);
      FUN_0194515c(*(long *)(lVar19 + 0x18),*(undefined1 *)(lVar19 + 0x50),0);
      if (lVar16 == 0) goto LAB_01940870;
      FUN_00ac4f98(lVar16,*unaff_x28);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x30);
      FUN_01359cb4(uVar13,*(long *)(lVar19 + 0x20),*(undefined1 *)(lVar19 + 0x50),&stack0x000000a0,
                   *(undefined8 *)puVar2);
      if (lVar16 == 0) goto LAB_01940870;
      FUN_00ac4f98(fStack00000000000000a0,uStack00000000000000a4,uStack00000000000000a8,lVar16,
                   *unaff_x28);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x30) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x38);
      FUN_01359cb4(uVar13,*(long *)(lVar19 + 0x30),*(undefined1 *)(lVar19 + 0x50),&stack0x000000a0,
                   *unaff_x21);
      if (lVar16 == 0) goto LAB_01940870;
      FUN_00ac1d04(fStack00000000000000a0,lVar16,*unaff_x29);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x38) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x40);
      FUN_01359cb4(uVar13,*(long *)(lVar19 + 0x38),*(undefined1 *)(lVar19 + 0x50),&stack0x000000a0,
                   *unaff_x21);
      fVar23 = fStack00000000000000a0;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar16 == 0) goto LAB_01940870;
      if (fVar23 <= fVar21) {
        fVar23 = fVar21;
      }
      FUN_00ac1d04(unaff_s11 / fVar23,lVar16,*unaff_x29);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x40) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x48);
      FUN_01359cb4(uVar13,*(long *)(lVar19 + 0x40),*(undefined1 *)(lVar19 + 0x50),&stack0x000000a0,
                   *unaff_x21);
      if (lVar16 == 0) goto LAB_01940870;
      fVar23 = fStack00000000000000a0;
      if (fStack00000000000000a0 <= fVar21) {
        fVar23 = fVar21;
      }
      FUN_00ac1d04(unaff_s11 / fVar23,lVar16,*unaff_x29);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x48) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x50);
      FUN_01359cb4(uVar13,*(long *)(lVar19 + 0x48),*(undefined1 *)(lVar19 + 0x50),&stack0x000000a0,
                   *(undefined8 *)Method_System_Collections_Generic_List<CharacterZone>_get_Item__);
      if (lVar16 == 0) goto LAB_01940870;
      FUN_00ac20f0(lVar16,fStack00000000000000a0,*unaff_x26);
      lVar19 = unaff_x20[0x22];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x28) == 0)) goto LAB_01940870;
      lVar16 = *(long *)(unaff_x19 + 0x58);
      FUN_01359cb4(uVar13,*(long *)(lVar19 + 0x28),*(undefined1 *)(lVar19 + 0x50),&stack0x000000a0,
                   *(undefined8 *)Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__);
      if (lVar16 == 0) goto LAB_01940870;
      FUN_00ad3d7c(fStack00000000000000a0,uStack00000000000000a4,uStack00000000000000a8,
                   uStack00000000000000ac,lVar16,
                   *(undefined8 *)Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
      lVar19 = unaff_x20[0x22];
      if (lVar19 == 0) goto LAB_01940870;
    }
    in_w8 = (uint)*(byte *)(lVar19 + 0x50);
    unaff_x23 = (undefined8 *)Method_Obi_ObiNativeList<Aabb>_Swap__;
  }
  iVar8 = *(int *)(unaff_x19 + 0x68);
  lVar19 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
  if (lVar19 != 0) {
    FUN_01919300((float)iVar14 / (float)iVar8,lVar19,
                 *(undefined8 *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo,0);
    *(long *)(unaff_x19 + 0x18) = lVar19;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return 1;
  }
  goto LAB_01940870;
  while( true ) {
    uVar18 = iVar14 + 1;
    *(uint *)(unaff_x19 + 0x88) = uVar18;
    if (unaff_x20 == (long *)0x0) break;
LAB_01940db0:
    puVar2 = OVREyeGaze_TypeInfo;
    if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar18) {
      FUN_0194553c();
      plVar11 = (long *)(**(code **)(*unaff_x20 + 600))();
      *(long **)(unaff_x19 + 0x70) = plVar11;
      puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar11 != (long *)0x0) {
        lVar19 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar10 == 0) goto LAB_01940e28;
        piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        goto LAB_01940e10;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    lVar19 = unaff_x20[0xf];
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar18,&stack0x000000a0,
                 *(undefined8 *)OVREyeGaze_TypeInfo);
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(float *)(lVar19 + (long)(int)uVar18 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    uVar18 = *(uint *)(unaff_x19 + 0x88);
    lVar19 = unaff_x20[0x10];
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar18,&stack0x000000a0,*(undefined8 *)puVar2);
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    *(float *)(lVar19 + (long)(int)uVar18 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    uVar18 = *(uint *)(unaff_x19 + 0x88);
    lVar19 = unaff_x20[9];
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar18,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    lVar19 = lVar19 + (long)(int)uVar18 * 0xc;
    *(ulong *)(lVar19 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    *(undefined4 *)(lVar19 + 0x28) = uStack00000000000000a8;
    lVar19 = unaff_x20[9];
    if (lVar19 == 0) break;
    uVar18 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    lVar16 = unaff_x20[10];
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_01941128;
    lVar19 = lVar19 + (long)(int)uVar18 * 0xc;
    uVar15 = *(undefined4 *)(lVar19 + 0x28);
    lVar16 = lVar16 + (long)(int)uVar18 * 0x10;
    *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar19 + 0x20);
    *(undefined4 *)(lVar16 + 0x28) = uVar15;
    *(undefined4 *)(lVar16 + 0x2c) = 0;
    lVar19 = unaff_x20[10];
    if (lVar19 == 0) break;
    uVar18 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    *(undefined4 *)(lVar19 + (long)(int)uVar18 * 0x10 + 0x2c) = 0x3f800000;
    lVar19 = unaff_x20[0x12];
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
    fVar20 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14);
    FUN_0132138c(*(long *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
                 *(undefined8 *)puVar2);
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    fVar21 = *(float *)(unaff_x20 + 0x23);
    lVar19 = lVar19 + (long)(int)uVar18 * 0xc;
    *(ulong *)(lVar19 + 0x20) =
         CONCAT44((float)((ulong)uVar13 >> 0x20) * fStack00000000000000a0 * fVar21,
                  (float)uVar13 * fStack00000000000000a0 * fVar21);
    *(float *)(lVar19 + 0x28) = fVar20 * fStack00000000000000a0 * fVar21;
    if (*(long *)(unaff_x19 + 0x50) == 0) break;
    uVar18 = *(uint *)(unaff_x19 + 0x88);
    lVar19 = unaff_x20[0x11];
    FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar18,&stack0x000000a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                );
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    *(float *)(lVar19 + (long)(int)uVar18 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    uVar18 = *(uint *)(unaff_x19 + 0x88);
    lVar19 = unaff_x20[0x13];
    FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar18,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                );
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_01941128;
    lVar19 = lVar19 + (long)(int)uVar18 * 0x10;
    *(ulong *)(lVar19 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(ulong *)(lVar19 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    iVar14 = *(int *)(unaff_x19 + 0x88);
    if (iVar14 % 100 == 0) {
      iVar8 = *(int *)((long)unaff_x20 + 0x24);
      lVar19 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
      if (lVar19 != 0) {
        FUN_01919300((float)iVar14 / (float)iVar8,lVar19,*(undefined8 *)StringLiteral_13935,0);
        *(long *)(unaff_x19 + 0x18) = lVar19;
        uVar15 = 2;
        goto LAB_019410f0;
      }
      break;
    }
  }
  goto LAB_01940870;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar12 = (undefined8 *)(lVar19 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar12 = (undefined8 *)
            FUN_00d59724(plVar11,*(long *)
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ,0);
LAB_01940e8c:
  uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  if ((uVar10 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar11;
      if (plVar11 != (long *)0x0) {
        lVar19 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,0);
LAB_01940f54:
        uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar10 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar11;
            if (plVar11 != (long *)0x0) {
              lVar19 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                    puVar12 = (undefined8 *)(lVar19 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,0);
LAB_0194101c:
              uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              if ((uVar10 & 1) == 0) {
                return 0;
              }
              plVar11 = *(long **)(unaff_x19 + 0x80);
              if (plVar11 != (long *)0x0) {
                lVar19 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                      puVar12 = (undefined8 *)(lVar19 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,1);
BufferedAudioStream__Stop:
                uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
                uVar15 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar11 = *(long **)(unaff_x19 + 0x78);
          if (plVar11 != (long *)0x0) {
            lVar19 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar19 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,1);
LAB_019410b4:
            uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
            uVar15 = 4;
LAB_019410f0:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar15;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar11 = *(long **)(unaff_x19 + 0x70);
    if (plVar11 != (long *)0x0) {
      lVar19 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar19 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,1);
LAB_0194108c:
      uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      uVar15 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


