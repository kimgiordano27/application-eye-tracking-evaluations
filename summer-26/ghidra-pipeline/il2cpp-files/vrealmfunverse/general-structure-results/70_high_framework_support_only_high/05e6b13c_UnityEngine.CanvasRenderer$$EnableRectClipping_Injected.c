/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$EnableRectClipping_Injected
ENTRY_POINT: 05e6b13c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
UnityEngine_CanvasRenderer__EnableRectClipping_Injected
          (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,float param_5
          )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320a88);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    *(undefined1 *)(unaff_x21 + 0x683) = 1;
  }
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  if ((unaff_x19 == 0) || (uVar7 = FUN_05e2d6e0(), (uVar7 & 1) == 0)) {
    return 0;
  }
  if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_05e6b428;
  uVar7 = FUN_05e66d68(*(undefined8 *)(*(long *)(unaff_x19 + 0x88) + 0x110));
  FUN_05e2da3c(&stack0x000000b0);
  fVar17 = (float)uStack00000000000000e0;
  uVar5 = uStack00000000000000d0;
  uVar4 = in_stack_000000c8;
  uVar3 = in_stack_000000c0;
  uVar2 = in_stack_000000b8;
  fVar18 = fStack00000000000000b0;
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
  ;
  _fStack0000000000000018 = in_stack_000000c0;
  _fStack0000000000000010 = in_stack_000000b8;
  in_stack_000000f0 = uStack00000000000000e4;
  in_stack_000000f8 = uStack00000000000000ec;
  if (*(int *)(*(long *)
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_05e69c80();
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05e6ba08();
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    if ((uVar8 & 1) != 0) goto LAB_05e6b224;
    if ((uVar7 & 1) == 0) {
      lVar13 = *(long *)(unaff_x19 + 0x88);
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__ + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x110) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x128)
        ;
        return 1;
      }
      goto LAB_05e6b428;
    }
  }
  else {
LAB_05e6b224:
    if ((uVar7 & 1) == 0) {
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x148) == 0)) goto LAB_05e6b428;
      in_stack_00000088 = uVar4;
      lVar13 = *(long *)(unaff_x19 + 0x88);
      fStack0000000000000070 = fVar18;
      fStack0000000000000074 = fStack00000000000000b4;
      in_stack_00000080 = uVar3;
      in_stack_00000078 = uVar2;
      in_stack_00000090 = uVar5;
      in_stack_00000098._4_4_ = fStack00000000000000dc;
      uStack00000000000000a0 = fVar17;
      uStack00000000000000a4 = in_stack_000000f0;
      uStack00000000000000ac = in_stack_000000f8;
      uVar9 = FUN_05e7d3b4(*(long *)(unaff_x20 + 0x148),&stack0x00000070,0);
      if (lVar13 == 0) goto LAB_05e6b428;
      *(undefined8 *)(lVar13 + 0x110) = uVar9;
    }
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    uVar7 = FUN_05e66d68(*(undefined8 *)(*(long *)(unaff_x19 + 0x88) + 0x110));
    if ((uVar7 & 1) == 0) {
      return 1;
    }
    plVar10 = (long *)FUN_05ded3a4();
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06320a88) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_05e6b30c;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_06320a88,2);
LAB_05e6b30c:
      iVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      auVar15._8_8_ = uStack00000000000000d4;
      auVar15._0_8_ = uVar4;
      if (iVar6 == 1) {
        fStack0000000000000028 = (float)uStack00000000000000d4;
        fStack000000000000002c = SUB84(uStack00000000000000d4,4);
        fStack0000000000000020 = (float)uVar4;
        fStack0000000000000024 = (float)((ulong)uVar4 >> 0x20);
        fVar14 = (float)FUN_05ded3b8();
        fVar18 = fVar18 * fVar14;
        fStack00000000000000dc = fStack00000000000000dc * param_4;
        fVar16 = (float)uStack00000000000000d4;
        fStack00000000000000b4 = fStack00000000000000b4 * fVar16;
        fVar17 = fVar17 * param_5;
        fStack0000000000000010 = (float)uVar2;
        fStack0000000000000014 = (float)((ulong)uVar2 >> 0x20);
        fStack0000000000000018 = (float)uVar3;
        fStack000000000000001c = (float)((ulong)uVar3 >> 0x20);
        _fStack0000000000000018 =
             CONCAT44(fStack000000000000001c * fVar16,fStack0000000000000018 * fVar14);
        _fStack0000000000000010 =
             CONCAT44(fStack0000000000000014 * param_5,fStack0000000000000010 * param_4);
        auVar15._4_4_ = fStack0000000000000024 * param_5;
        auVar15._0_4_ = fStack0000000000000020 * param_4;
        auVar15._8_4_ = fStack0000000000000028 * fVar14;
        auVar15._12_4_ = fStack000000000000002c * fVar16;
      }
      if (((unaff_x20 != 0) && (*(long *)(unaff_x19 + 0x88) != 0)) &&
         (*(long *)(unaff_x20 + 0x148) != 0)) {
        in_stack_00000048 = auVar15._0_8_;
        auVar15 = NEON_ext(auVar15,auVar15,8,1);
        in_stack_00000040 = _fStack0000000000000018;
        in_stack_00000038 = _fStack0000000000000010;
        in_stack_00000050 = uVar5;
        uStack0000000000000054 = auVar15._0_8_;
        uStack0000000000000064 = in_stack_000000f0;
        uStack000000000000006c = in_stack_000000f8;
        in_stack_00000030 = fVar18;
        fStack0000000000000034 = fStack00000000000000b4;
        fStack000000000000005c = fStack00000000000000dc;
        in_stack_00000060 = fVar17;
        FUN_05e7d054(*(long *)(unaff_x20 + 0x148),
                     *(undefined8 *)(*(long *)(unaff_x19 + 0x88) + 0x110),&stack0x00000030,0);
        return 1;
      }
    }
  }
LAB_05e6b428:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


