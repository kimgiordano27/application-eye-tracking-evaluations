/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 07fb0dd4
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_18;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering
               (void *param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar24;
  int iVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 *unaff_x24;
  long lVar29;
  long *unaff_x25;
  uint uVar30;
  uint *puVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_00000080;
  int in_stack_00000090;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  int in_stack_000000d0;
  int in_stack_000000e0;
  undefined8 in_stack_000000f8;
  int in_stack_00000100;
  
  memcpy(param_1,param_2,param_3);
  lVar17 = *unaff_x25;
  uVar26 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar17 = *unaff_x25;
  }
  puVar20 = *(undefined8 **)(lVar17 + 0xb8);
  lVar27 = puVar20[2];
  if (lVar27 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar20 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar28 = *puVar20;
    lVar27 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fe61f0);
    FUN_05cec5a4(lVar27,uVar28,*(undefined8 *)PTR_DAT_08fe6210,0);
    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10) = lVar27;
  }
  FUN_04d47e70(&stack0x00000080,uVar26,lVar27,*unaff_x24);
  iVar3 = in_stack_00000100;
  iVar15 = in_stack_000000b0;
  bVar1 = in_stack_000000d0 != 0x30 || in_stack_00000080 != 0x31;
  uVar30 = (uint)bVar1;
  uStack000000000000000c = (uint)bVar1;
  if (in_stack_000000d0 == 0x30 && in_stack_00000080 == 0x31) {
    if (in_stack_000000b0 < in_stack_00000100) {
      iVar25 = (in_stack_000000f8._4_4_ + in_stack_00000100) - in_stack_000000a8._4_4_;
      iVar4 = in_stack_000000b0;
    }
    else {
      iVar25 = (in_stack_000000b0 - in_stack_00000100) + in_stack_000000a8._4_4_;
      iVar4 = in_stack_00000100;
    }
    iVar2 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = iVar2 >> 3;
    _in_stack_00000070 = FUN_07fd3a20();
    puVar12 = PTR_DAT_08fe4ef0;
    auVar33 = FUN_07fd3e18(&stack0x00000070,*(undefined8 *)PTR_DAT_08fe4ef0,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd3e60(&stack0x00000070,*(undefined8 *)puVar12,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4010(&stack0x00000070,iVar4 % 8,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd3fc8(&stack0x00000070,iVar2,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4178(&stack0x00000070,iVar25,0);
    _in_stack_00000070 = auVar33;
    lVar17 = FUN_040316d0(*(undefined8 *)PTR_DAT_08fe35a8,1);
    puVar12 = PTR_DAT_08fe3338;
    lVar27 = *(long *)PTR_DAT_08fe3338;
    if (*(int *)(lVar27 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar27);
      lVar27 = *(long *)puVar12;
    }
    if (lVar17 == 0) goto LAB_07fb16d8;
    if (*(int *)(lVar17 + 0x18) == 0) {
LAB_07fb16d4:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar26 = **(undefined8 **)(lVar27 + 0xb8);
    *(undefined8 *)(lVar17 + 0x28) = (*(undefined8 **)(lVar27 + 0xb8))[1];
    *(undefined8 *)(lVar17 + 0x20) = uVar26;
    FUN_07fd425c(&stack0x00000070,lVar17,0);
    uVar26 = FUN_07fb16dc(&stack0x000000d0);
    uVar28 = FUN_07fb16dc(&stack0x00000080);
    auVar33 = FUN_07fd3a20();
    puVar12 = PTR_DAT_08f8b768;
    lVar17 = *(long *)PTR_DAT_08f8b768;
    _in_stack_00000070 = auVar33;
    if (in_stack_000000e0 < 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar17 = *(long *)puVar12;
      }
      puVar21 = (undefined4 *)(*(long *)(lVar17 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar17 = *(long *)puVar12;
      }
      puVar21 = (undefined4 *)(*(long *)(lVar17 + 0xb8) + 4);
    }
    auVar33 = FUN_07fd3f4c(&stack0x00000070,*puVar21,0);
    iVar25 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar25 = iVar3;
    }
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd3fc8(&stack0x00000070,(iVar25 >> 3) - iVar2,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4010(&stack0x00000070,iVar3 % 8,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4178(&stack0x00000070,in_stack_000000f8._4_4_,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4558(&stack0x00000070,uVar26,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fb1818(&stack0x000000d0);
    auVar33 = FUN_07fd46ec(&stack0x00000070,auVar33._0_8_,auVar33._8_8_,0);
    _in_stack_00000070 = auVar33;
    uVar18 = FUN_07fb18e4(&stack0x000000d0);
    FUN_07fd4614(&stack0x00000070,uVar18,0);
    auVar33 = FUN_07fd3a20();
    lVar17 = *(long *)puVar12;
    _in_stack_00000070 = auVar33;
    if (in_stack_00000090 < 0) {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar17 = *(long *)puVar12;
      }
      puVar21 = (undefined4 *)(*(long *)(lVar17 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar17 = *(long *)puVar12;
      }
      puVar21 = (undefined4 *)(*(long *)(lVar17 + 0xb8) + 4);
    }
    auVar33 = FUN_07fd3f4c(&stack0x00000070,*puVar21,0);
    iVar3 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar3 = iVar15;
    }
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd3fc8(&stack0x00000070,(iVar3 >> 3) - iVar2,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4010(&stack0x00000070,iVar15 % 8,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4178(&stack0x00000070,in_stack_000000a8._4_4_,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fd4558(&stack0x00000070,uVar28,0);
    _in_stack_00000070 = auVar33;
    auVar33 = FUN_07fb1818(&stack0x00000080);
    auVar33 = FUN_07fd46ec(&stack0x00000070,auVar33._0_8_,auVar33._8_8_,0);
    _in_stack_00000070 = auVar33;
    uVar18 = FUN_07fb18e4(&stack0x00000080);
    FUN_07fd4614(&stack0x00000070,uVar18,0);
    auVar33 = FUN_07fd3a20();
    puVar12 = PTR_DAT_08f65db8;
    _in_stack_00000070 = auVar33;
    lVar17 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f65db8,2);
    uVar30 = uStack000000000000000c;
    auVar8._8_8_ = in_stack_00000068;
    auVar8._0_8_ = in_stack_00000060;
    auVar33._8_8_ = in_stack_00000020;
    auVar33._0_8_ = in_stack_00000018;
    if (lVar17 == 0) goto LAB_07fb16d8;
    if ((*(int *)(lVar17 + 0x18) == 0) ||
       (*(undefined8 *)(lVar17 + 0x20) = uVar28, puVar14 = PTR_DAT_08fe1a80,
       puVar13 = PTR_DAT_08f6c8c8, _in_stack_00000018 = auVar33, _in_stack_00000060 = auVar8,
       *(int *)(lVar17 + 0x18) == 1)) goto LAB_07fb16d4;
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)PTR_DAT_08fe6268;
    uVar18 = System_Runtime_CompilerServices_Unsafe__SizeOf<RenderTargetIdentifier>
                       (*(undefined8 *)puVar13,lVar17,*(undefined8 *)puVar14);
    FUN_07fd4558(&stack0x00000070,uVar18,0);
    auVar33 = FUN_07fd3a20();
    _in_stack_00000070 = auVar33;
    lVar17 = FUN_040316d0(*(undefined8 *)puVar12,2);
    auVar9._8_8_ = in_stack_00000068;
    auVar9._0_8_ = in_stack_00000060;
    auVar5._8_8_ = in_stack_00000020;
    auVar5._0_8_ = in_stack_00000018;
    if (lVar17 == 0) goto LAB_07fb16d8;
    if ((*(int *)(lVar17 + 0x18) == 0) ||
       (*(undefined8 *)(lVar17 + 0x20) = uVar28, _in_stack_00000018 = auVar5,
       _in_stack_00000060 = auVar9, *(int *)(lVar17 + 0x18) == 1)) goto LAB_07fb16d4;
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)PTR_DAT_08fe6278;
    uVar28 = System_Runtime_CompilerServices_Unsafe__SizeOf<RenderTargetIdentifier>
                       (*(undefined8 *)puVar13,lVar17,*(undefined8 *)puVar14);
    FUN_07fd4558(&stack0x00000070,uVar28,0);
    auVar33 = FUN_07fd3a20();
    _in_stack_00000070 = auVar33;
    lVar17 = FUN_040316d0(*(undefined8 *)puVar12,2);
    auVar10._8_8_ = in_stack_00000068;
    auVar10._0_8_ = in_stack_00000060;
    auVar6._8_8_ = in_stack_00000020;
    auVar6._0_8_ = in_stack_00000018;
    if (lVar17 == 0) goto LAB_07fb16d8;
    if ((*(int *)(lVar17 + 0x18) == 0) ||
       (*(undefined8 *)(lVar17 + 0x20) = uVar26, _in_stack_00000018 = auVar6,
       _in_stack_00000060 = auVar10, *(int *)(lVar17 + 0x18) == 1)) goto LAB_07fb16d4;
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)PTR_DAT_08fe6238;
    uVar28 = System_Runtime_CompilerServices_Unsafe__SizeOf<RenderTargetIdentifier>
                       (*(undefined8 *)puVar13,lVar17,*(undefined8 *)puVar14);
    FUN_07fd4558(&stack0x00000070,uVar28,0);
    auVar33 = FUN_07fd3a20();
    _in_stack_00000070 = auVar33;
    lVar17 = FUN_040316d0(*(undefined8 *)puVar12,2);
    auVar11._8_8_ = in_stack_00000068;
    auVar11._0_8_ = in_stack_00000060;
    auVar7._8_8_ = in_stack_00000020;
    auVar7._0_8_ = in_stack_00000018;
    if (lVar17 == 0) goto LAB_07fb16d8;
    if ((*(int *)(lVar17 + 0x18) == 0) ||
       (*(undefined8 *)(lVar17 + 0x20) = uVar26, _in_stack_00000018 = auVar7,
       _in_stack_00000060 = auVar11, *(int *)(lVar17 + 0x18) == 1)) goto LAB_07fb16d4;
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)PTR_DAT_08fe6240;
    uVar26 = System_Runtime_CompilerServices_Unsafe__SizeOf<RenderTargetIdentifier>
                       (*(undefined8 *)puVar13,lVar17,*(undefined8 *)puVar14);
    FUN_07fd4558(&stack0x00000070,uVar26,0);
  }
  lVar17 = *(long *)(unaff_x20 + 0x38);
  if (lVar17 != 0) {
    uVar22 = *(ulong *)(lVar17 + 0x18);
    if (0 < (int)uVar22) {
      uVar32 = 0;
      puVar31 = (uint *)(lVar17 + 0x50);
      do {
        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_07fb16d4;
        if ((puVar31[-4] == 1) &&
           (((puVar24 = puVar31 + -0xc, (uVar30 & 1) != 0 || (puVar31[-0xb] != 1)) ||
            ((*puVar24 & 0xfffffffe) != 0x30)))) {
          lVar27 = FUN_07fb1978(puVar24);
          if (lVar27 != 0) {
            uVar26 = FUN_07fb1a80(puVar24);
            auVar33 = FUN_07fd39b8(unaff_x19,0);
            _in_stack_00000018 = auVar33;
            uVar28 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fe61f8,&stack0x00000018);
            lVar23 = *unaff_x25;
            if (*(int *)(lVar23 + 0xe4) == 0) {
              thunk_FUN_0408f364(lVar23);
              lVar23 = *unaff_x25;
            }
            puVar20 = *(undefined8 **)(lVar23 + 0xb8);
            lVar29 = puVar20[3];
            if (lVar29 == 0) {
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_0408f364(lVar23);
                puVar20 = *(undefined8 **)(*unaff_x25 + 0xb8);
              }
              uVar18 = *puVar20;
              lVar29 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fe61e8);
              FUN_0534d240(lVar29,uVar18,*(undefined8 *)PTR_DAT_08fe6218,0);
              *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18) = lVar29;
              uVar30 = uStack000000000000000c;
            }
            uVar26 = FUN_04d045fc(uVar26,uVar28,lVar29,*(undefined8 *)PTR_DAT_08fe6200);
            auVar33 = FUN_07fd3a20(unaff_x19,uVar26,0);
            _in_stack_00000070 = auVar33;
            uVar28 = FUN_07fb1c78(puVar24);
            auVar33 = FUN_07fd3e18(&stack0x00000070,uVar28,0);
            _in_stack_00000070 = auVar33;
            auVar33 = FUN_07fd3e60(&stack0x00000070,lVar27,0);
            _in_stack_00000070 = auVar33;
            auVar33 = FUN_07fd3fc8(&stack0x00000070,*puVar31 >> 3,0);
            _in_stack_00000070 = auVar33;
            auVar33 = FUN_07fd4010(&stack0x00000070,*puVar31 & 7,0);
            _in_stack_00000070 = auVar33;
            auVar33 = FUN_07fd4178(&stack0x00000070,puVar31[-1],0);
            _in_stack_00000070 = auVar33;
            uVar16 = FUN_07fb1d68(puVar24);
            auVar33 = FUN_07fd3f4c(&stack0x00000070,uVar16,0);
            _in_stack_00000070 = auVar33;
            auVar33 = FUN_07fb1818(puVar24);
            auVar33 = FUN_07fd46ec(&stack0x00000070,auVar33._0_8_,auVar33._8_8_,0);
            _in_stack_00000070 = auVar33;
            uVar28 = FUN_07fb18e4(puVar24);
            auVar33 = FUN_07fd4614(&stack0x00000070,uVar28,0);
            _in_stack_00000060 = auVar33;
            uVar28 = FUN_07fb16dc(puVar24);
            uVar19 = FUN_07368ba4(uVar28,0);
            if ((uVar19 & 1) == 0) {
              FUN_07fd4558(&stack0x00000060,uVar28,0);
            }
            lVar27 = FUN_07fb1ebc(puVar24);
            if (lVar27 != 0) {
              FUN_07fd425c(&stack0x00000060,lVar27,0);
            }
            FUN_07fb206c(puVar24,puVar24,uVar26,&stack0x00000118);
          }
        }
        uVar32 = uVar32 + 1;
        puVar31 = puVar31 + 0x12;
      } while ((uVar22 & 0xffffffff) != uVar32);
    }
    FUN_07fd3bf0(unaff_x19,0);
    return;
  }
LAB_07fb16d8:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


