/*
FUNCTION_NAME: Oculus.Interaction.Input.Visuals.ControllerVisual$$set_ForceOffVisibility
ENTRY_POINT: 0194096c
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


undefined8 Oculus_Interaction_Input_Visuals_ControllerVisual__set_ForceOffVisibility(long param_1)

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
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w22;
  uint uVar19;
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
  
  while (iVar13 = (int)((ulong)param_1 >> 0x20),
        unaff_w22 + ((iVar13 >> 5) - (iVar13 >> 0x1f)) * -100 != 0) {
    iVar13 = unaff_w22 + 1;
    *(int *)(unaff_x19 + 0x88) = iVar13;
    if (*(int *)(unaff_x19 + 0x68) <= iVar13) {
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (unaff_x20 == (long *)0x0)) goto LAB_01940870;
      iVar13 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18);
      lVar15 = unaff_x20[0x22];
      *(int *)((long)unaff_x20 + 0x24) = iVar13;
      *(int *)((long)unaff_x20 + 0x124) = iVar13;
      puVar7 = StringLiteral_6246;
      puVar6 = 
      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
      puVar4 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
      puVar3 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
      puVar2 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
      if (lVar15 == 0) goto LAB_01940870;
      iVar13 = iVar13 - (*(byte *)(lVar15 + 0x50) ^ 1);
      *(int *)(unaff_x19 + 0x6c) = iVar13;
      if (iVar13 < 1) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = *(float *)(lVar15 + 0x60) / (float)iVar13;
      }
      *(float *)(unaff_x20 + 0x24) = fVar20;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6);
      unaff_x20[9] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar7,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0xb] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0xd] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0xe] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0xf] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0x10] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0x12] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0x11] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[10] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar7,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0xc] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0x13] = lVar15;
      lVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x124));
      unaff_x20[0x26] = lVar15;
      *(undefined4 *)(unaff_x19 + 0x88) = 0;
      puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      uVar19 = 0;
      puVar11 = (undefined8 *)OVREyeGaze_TypeInfo;
      goto joined_r0x01940b30;
    }
    if ((unaff_x20 == (long *)0x0) || (unaff_x20[0x22] == 0)) goto LAB_01940870;
    iVar8 = FUN_019453d4(unaff_x20[0x22],0);
    if (unaff_x20[0x22] == 0) goto LAB_01940870;
    iVar1 = *(int *)(unaff_x19 + 0x88);
    iVar9 = FUN_019453d4(unaff_x20[0x22],0);
    puVar2 = 
    Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
    ;
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
    FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar8 + 1) * iVar13,&stack0x000000a0,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                );
    fVar20 = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
    FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar9 + 1) * (iVar1 + 1),&stack0x000000a0,
                 *(undefined8 *)puVar2);
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
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar21 = DAT_028aa038;
    lVar15 = unaff_x20[0x22];
    iVar13 = -0x7fffffff;
    if ((float)(int)fVar23 != INFINITY) {
      iVar13 = (int)fVar23 + 1;
    }
    if (lVar15 == 0) goto LAB_01940870;
    iVar8 = 0;
    while (puVar4 = Method_Obi_ObiNativeList<Aabb>_Swap__, iVar8 < iVar13) {
      iVar8 = iVar8 + 1;
      uVar12 = FUN_019453dc(fVar20 + (fVar22 / (float)iVar13) * (float)iVar8,lVar15,0);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x28);
      FUN_0194515c(*(long *)(lVar15 + 0x18),*(undefined1 *)(lVar15 + 0x50),0);
      if (lVar17 == 0) goto LAB_01940870;
      FUN_00ac4f98(lVar17,*unaff_x28);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x30);
      FUN_01359cb4(uVar12,*(long *)(lVar15 + 0x20),*(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                   *(undefined8 *)puVar3);
      if (lVar17 == 0) goto LAB_01940870;
      FUN_00ac4f98(fStack00000000000000a0,uStack00000000000000a4,uStack00000000000000a8,lVar17,
                   *unaff_x28);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x30) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x38);
      FUN_01359cb4(uVar12,*(long *)(lVar15 + 0x30),*(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                   *unaff_x21);
      if (lVar17 == 0) goto LAB_01940870;
      FUN_00ac1d04(fStack00000000000000a0,lVar17,*unaff_x29);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x40);
      FUN_01359cb4(uVar12,*(long *)(lVar15 + 0x38),*(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                   *unaff_x21);
      fVar23 = fStack00000000000000a0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar17 == 0) goto LAB_01940870;
      if (fVar23 <= fVar21) {
        fVar23 = fVar21;
      }
      FUN_00ac1d04(unaff_s11 / fVar23,lVar17,*unaff_x29);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x40) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x48);
      FUN_01359cb4(uVar12,*(long *)(lVar15 + 0x40),*(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                   *unaff_x21);
      if (lVar17 == 0) goto LAB_01940870;
      fVar23 = fStack00000000000000a0;
      if (fStack00000000000000a0 <= fVar21) {
        fVar23 = fVar21;
      }
      FUN_00ac1d04(unaff_s11 / fVar23,lVar17,*unaff_x29);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x48) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x50);
      FUN_01359cb4(uVar12,*(long *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                   *(undefined8 *)Method_System_Collections_Generic_List<CharacterZone>_get_Item__);
      if (lVar17 == 0) goto LAB_01940870;
      FUN_00ac20f0(lVar17,fStack00000000000000a0,*unaff_x26);
      lVar15 = unaff_x20[0x22];
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_01940870;
      lVar17 = *(long *)(unaff_x19 + 0x58);
      FUN_01359cb4(uVar12,*(long *)(lVar15 + 0x28),*(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                   *(undefined8 *)Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__);
      if (lVar17 == 0) goto LAB_01940870;
      FUN_00ad3d7c(fStack00000000000000a0,uStack00000000000000a4,uStack00000000000000a8,
                   uStack00000000000000ac,lVar17,
                   *(undefined8 *)Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
      lVar15 = unaff_x20[0x22];
      if (lVar15 == 0) goto LAB_01940870;
    }
    if ((*(char *)(lVar15 + 0x50) == '\0') ||
       (unaff_w22 = *(int *)(unaff_x19 + 0x88), unaff_w22 != *(int *)(unaff_x19 + 0x68) + -1)) {
      if (unaff_x20[0x21] == 0) goto LAB_01940870;
      FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,&stack0x000000a0,
                   *(undefined8 *)Method_Obi_ObiNativeList<Aabb>_Swap__);
      if ((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) == 0) ||
         (lVar15 = *(long *)(CONCAT44(uStack00000000000000a4,fStack00000000000000a0) + 0x18),
         lVar15 == 0)) goto LAB_01940870;
      lVar17 = *(long *)
                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
      ;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
      if ((uVar16 & 1) == 0) {
        *(undefined4 *)(lVar15 + 0x18) = 0;
      }
      else {
        iVar13 = *(int *)(lVar15 + 0x18);
        *(undefined4 *)(lVar15 + 0x18) = 0;
        if (0 < iVar13) {
          FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar13,0);
        }
      }
      if (unaff_x20[0x21] == 0) goto LAB_01940870;
      FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,&stack0x000000a0,
                   *(undefined8 *)puVar4);
      if (((CONCAT44(uStack00000000000000a4,fStack00000000000000a0) == 0) ||
          (*(long *)(unaff_x19 + 0x28) == 0)) ||
         (lVar15 = *(long *)(CONCAT44(uStack00000000000000a4,fStack00000000000000a0) + 0x18),
         lVar15 == 0)) goto LAB_01940870;
      FUN_00ac20f0(lVar15,*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,*unaff_x26);
      unaff_w22 = *(int *)(unaff_x19 + 0x88);
    }
    param_1 = (long)unaff_w22 * 0x51eb851f;
  }
  iVar13 = *(int *)(unaff_x19 + 0x68);
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
  if (lVar15 != 0) {
    FUN_01919300((float)unaff_w22 / (float)iVar13,lVar15,
                 *(undefined8 *)UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo,0);
    *(long *)(unaff_x19 + 0x18) = lVar15;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return 1;
  }
  goto LAB_01940870;
joined_r0x01940b30:
  OVREyeGaze_TypeInfo = (undefined *)puVar11;
  if (unaff_x20 == (long *)0x0) goto LAB_01940870;
  if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar19) {
    FUN_0194553c();
    plVar10 = (long *)(**(code **)(*unaff_x20 + 600))();
    *(long **)(unaff_x19 + 0x70) = plVar10;
    puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar10 != (long *)0x0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 == 0) goto LAB_01940e28;
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      goto LAB_01940e10;
    }
    goto LAB_01940870;
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01940870;
  lVar15 = unaff_x20[0xf];
  FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar19,&stack0x000000a0,*puVar11);
  if (lVar15 == 0) goto LAB_01940870;
  if (*(uint *)(lVar15 + 0x18) <= uVar19) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(float *)(lVar15 + (long)(int)uVar19 * 4 + 0x20) = fStack00000000000000a0;
  if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01940870;
  uVar19 = *(uint *)(unaff_x19 + 0x88);
  lVar15 = unaff_x20[0x10];
  FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar19,&stack0x000000a0,*puVar11);
  if (lVar15 == 0) goto LAB_01940870;
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  *(float *)(lVar15 + (long)(int)uVar19 * 4 + 0x20) = fStack00000000000000a0;
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01940870;
  uVar19 = *(uint *)(unaff_x19 + 0x88);
  lVar15 = unaff_x20[9];
  FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar19,&stack0x000000a0,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
  if (lVar15 == 0) goto LAB_01940870;
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  lVar15 = lVar15 + (long)(int)uVar19 * 0xc;
  *(ulong *)(lVar15 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
  *(undefined4 *)(lVar15 + 0x28) = uStack00000000000000a8;
  lVar15 = unaff_x20[9];
  if (lVar15 == 0) goto LAB_01940870;
  uVar19 = *(uint *)(unaff_x19 + 0x88);
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  lVar17 = unaff_x20[10];
  if (lVar17 == 0) goto LAB_01940870;
  if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_01941128;
  lVar15 = lVar15 + (long)(int)uVar19 * 0xc;
  uVar14 = *(undefined4 *)(lVar15 + 0x28);
  lVar17 = lVar17 + (long)(int)uVar19 * 0x10;
  *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar15 + 0x20);
  *(undefined4 *)(lVar17 + 0x28) = uVar14;
  *(undefined4 *)(lVar17 + 0x2c) = 0;
  lVar15 = unaff_x20[10];
  if (lVar15 == 0) goto LAB_01940870;
  uVar19 = *(uint *)(unaff_x19 + 0x88);
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  *(undefined4 *)(lVar15 + (long)(int)uVar19 * 0x10 + 0x2c) = 0x3f800000;
  lVar15 = unaff_x20[0x12];
  if (DAT_03774e1c == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774e1c = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_01940870;
  uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
  fVar20 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
  FUN_0132138c(*(long *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
               *puVar11);
  if (lVar15 == 0) goto LAB_01940870;
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  fVar21 = *(float *)(unaff_x20 + 0x23);
  lVar15 = lVar15 + (long)(int)uVar19 * 0xc;
  *(ulong *)(lVar15 + 0x20) =
       CONCAT44((float)((ulong)uVar12 >> 0x20) * fStack00000000000000a0 * fVar21,
                (float)uVar12 * fStack00000000000000a0 * fVar21);
  *(float *)(lVar15 + 0x28) = fVar20 * fStack00000000000000a0 * fVar21;
  if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01940870;
  uVar19 = *(uint *)(unaff_x19 + 0x88);
  lVar15 = unaff_x20[0x11];
  FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar19,&stack0x000000a0,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__);
  if (lVar15 == 0) goto LAB_01940870;
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  *(float *)(lVar15 + (long)(int)uVar19 * 4 + 0x20) = fStack00000000000000a0;
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_01940870;
  uVar19 = *(uint *)(unaff_x19 + 0x88);
  lVar15 = unaff_x20[0x13];
  FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar19,&stack0x000000a0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
              );
  if (lVar15 == 0) goto LAB_01940870;
  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_01941128;
  lVar15 = lVar15 + (long)(int)uVar19 * 0x10;
  *(ulong *)(lVar15 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
  *(ulong *)(lVar15 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
  iVar13 = *(int *)(unaff_x19 + 0x88);
  if (iVar13 % 100 == 0) {
    iVar8 = *(int *)((long)unaff_x20 + 0x24);
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
    if (lVar15 != 0) {
      FUN_01919300((float)iVar13 / (float)iVar8,lVar15,*(undefined8 *)StringLiteral_13935,0);
      *(long *)(unaff_x19 + 0x18) = lVar15;
      uVar14 = 2;
      goto LAB_019410f0;
    }
    goto LAB_01940870;
  }
  uVar19 = iVar13 + 1;
  *(uint *)(unaff_x19 + 0x88) = uVar19;
  puVar11 = (undefined8 *)OVREyeGaze_TypeInfo;
  goto joined_r0x01940b30;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar11 = (undefined8 *)
            FUN_00d59724(plVar10,*(long *)
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ,0);
LAB_01940e8c:
  uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if ((uVar16 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar10;
      if (plVar10 != (long *)0x0) {
        lVar15 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_01940f54:
        uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar16 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar10;
            if (plVar10 != (long *)0x0) {
              lVar15 = *plVar10;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_0194101c:
              uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar16 & 1) == 0) {
                return 0;
              }
              plVar10 = *(long **)(unaff_x19 + 0x80);
              if (plVar10 != (long *)0x0) {
                lVar15 = *plVar10;
                uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar16 = uVar16 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
BufferedAudioStream__Stop:
                uVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
                uVar14 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar10 = *(long **)(unaff_x19 + 0x78);
          if (plVar10 != (long *)0x0) {
            lVar15 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
LAB_019410b4:
            uVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
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
    plVar10 = *(long **)(unaff_x19 + 0x70);
    if (plVar10 != (long *)0x0) {
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
LAB_0194108c:
      uVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      uVar14 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


