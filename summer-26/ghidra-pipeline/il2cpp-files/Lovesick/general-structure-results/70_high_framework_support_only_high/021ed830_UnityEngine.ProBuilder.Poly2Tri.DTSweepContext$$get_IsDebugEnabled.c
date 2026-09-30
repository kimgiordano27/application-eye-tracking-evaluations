/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext$$get_IsDebugEnabled
ENTRY_POINT: 021ed830
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * UnityEngine_ProBuilder_Poly2Tri_DTSweepContext__get_IsDebugEnabled(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x19;
  undefined **unaff_x20;
  undefined8 *puVar14;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  
  do {
    puVar11 = Method_Obi_ObiRopeExtrudedRenderer_UpdateRenderer__;
    puVar10 = 
    Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector_PseudoStateData>_set_Item__
    ;
    puVar9 = PTR_DAT_033f0aa0;
    puVar14 = (undefined8 *)unaff_x20[0x161];
    uVar15 = *puVar14;
    lVar16 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
    if (lVar16 == 0) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_00d32864(param_1);
        param_1 = *unaff_x19;
      }
      uVar18 = **(undefined8 **)(param_1 + 0xb8);
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_InputSystem_StepCounter_TypeInfo);
      if (lVar16 == 0) {
LAB_021edc34:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d239c(lVar16,uVar18,
                   *(undefined8 *)
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugParams_<RegisterDebug>b__10_4__
                   ,0);
      *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = lVar16;
    }
    uVar18 = FUN_010dcdb8(unaff_x22,lVar16,
                          *(undefined8 *)Method_Unity_Mathematics_math_select_shuffle_component__);
    uVar18 = FUN_010df6b8(uVar18,*(undefined8 *)puVar9);
    uVar15 = FUN_01600f98(uVar15,uVar18,0);
    *(undefined8 *)(unaff_x21 + 0x70) = uVar15;
    in_stack_000000c0 = in_stack_00000040;
    in_stack_000000b8 = in_stack_00000048;
    uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_12668,&stack0x000000b8);
    lVar16 = *unaff_x19;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar16);
      lVar16 = *unaff_x19;
    }
    uVar18 = *puVar14;
    lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
    if (lVar17 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar16);
        lVar16 = *unaff_x19;
      }
      uVar19 = **(undefined8 **)(lVar16 + 0xb8);
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__
                                 );
      if (lVar17 == 0) goto LAB_021edc34;
      FUN_012d239c(lVar17,uVar19,
                   *(undefined8 *)
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass6_0_<DOPixelRect>b__0__,0
                  );
      *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x20) = lVar17;
    }
    uVar15 = FUN_010dcdb8(uVar15,lVar17,*(undefined8 *)PTR_DAT_033f42a0);
    uVar15 = FUN_010df6b8(uVar15,*(undefined8 *)puVar9);
    uVar15 = FUN_01600f98(uVar18,uVar15,0);
    *(undefined8 *)(unaff_x21 + 0x78) = uVar15;
    in_stack_000000c0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000058;
    uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar11,&stack0x000000b8);
    lVar16 = *unaff_x19;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar16);
      lVar16 = *unaff_x19;
    }
    lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
    if (lVar17 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar16);
        lVar16 = *unaff_x19;
      }
      uVar18 = **(undefined8 **)(lVar16 + 0xb8);
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)Obi_ObiConstraints<ObiPinConstraintsBatch>_TypeInfo
                                 );
      if (lVar17 == 0) goto LAB_021edc34;
      FUN_012d239c(lVar17,uVar18,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Type>_Add__,0);
      *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x28) = lVar17;
    }
    uVar15 = FUN_010dcdb8(uVar15,lVar17,*(undefined8 *)puVar10);
    uVar15 = FUN_010df6b8(uVar15,*(undefined8 *)puVar9);
    *(undefined8 *)(unaff_x21 + 0x60) = uVar15;
    in_stack_000000c0 = in_stack_00000060;
    in_stack_000000b8 = in_stack_00000068;
    uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar11,&stack0x000000b8);
    lVar16 = *unaff_x19;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar16);
      lVar16 = *unaff_x19;
    }
    lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x30);
    if (lVar17 == 0) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar16);
        lVar16 = *unaff_x19;
      }
      uVar18 = **(undefined8 **)(lVar16 + 0xb8);
      lVar17 = thunk_FUN_00d62348(*(undefined8 *)Obi_ObiConstraints<ObiPinConstraintsBatch>_TypeInfo
                                 );
      if (lVar17 == 0) goto LAB_021edc34;
      FUN_012d239c(lVar17,uVar18,*(undefined8 *)PTR_DAT_033f3f48,0);
      *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x30) = lVar17;
    }
    uVar15 = FUN_010dcdb8(uVar15,lVar17,*(undefined8 *)puVar10);
    uVar15 = FUN_010df6b8(uVar15,*(undefined8 *)puVar9);
    *(undefined8 *)(unaff_x21 + 0x68) = uVar15;
    uStack0000000000000070 = uStack0000000000000070 & 0xff;
    *(undefined4 *)(unaff_x21 + 0x58) = uStack0000000000000074;
    *(byte *)(unaff_x21 + 0x92) = (byte)(uStack0000000000000070 >> 2) & 1;
    *(byte *)(unaff_x21 + 0x90) = (byte)(uStack0000000000000070 >> 1) & 1;
    *(byte *)(unaff_x21 + 0x91) = (byte)(uStack0000000000000070 >> 4) & 1;
    in_stack_000000d0 = in_stack_00000078;
    in_stack_000000c8 = in_stack_00000080;
    uVar15 = FUN_02205534(&stack0x000000c8,0);
    *(undefined8 *)(unaff_x21 + 0x98) = uVar15;
    in_stack_000000d0 = in_stack_00000088;
    in_stack_000000c8 = in_stack_00000090;
    uVar15 = FUN_02205534(&stack0x000000c8,0);
    *(undefined8 *)(unaff_x21 + 0xa0) = uVar15;
    in_stack_000000d0 = in_stack_00000098;
    in_stack_000000c8 = in_stack_000000a0;
    uVar15 = FUN_02205534(&stack0x000000c8,0);
    *(undefined8 *)(unaff_x21 + 0xa8) = uVar15;
    if (in_stack_00000018 == (long *)0x0) goto LAB_021edc34;
    lVar16 = thunk_FUN_00d6225c(unaff_x21,*(undefined8 *)(*in_stack_00000018 + 0x40));
    if (lVar16 == 0) {
      uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar15,0);
    }
    if (*(uint *)(in_stack_00000018 + 3) <= in_stack_000000a8) {
LAB_021edc38:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(long *)(in_stack_00000008 + in_stack_000000a8 * 8) = unaff_x21;
    in_stack_000000b0 = in_stack_000000b0 + 0xd0;
    in_stack_000000a8 = in_stack_000000a8 + 1;
    if (in_stack_00000010 == in_stack_000000b0) {
      return in_stack_00000018;
    }
    if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_000000a8) goto LAB_021edc38;
    lVar16 = in_stack_00000020 + in_stack_000000b0;
    uVar15 = *(undefined8 *)(lVar16 + 0x58);
    uVar4 = *(undefined8 *)(lVar16 + 0x60);
    uVar18 = *(undefined8 *)(lVar16 + 0x20);
    uVar5 = *(undefined8 *)(lVar16 + 0x28);
    uVar19 = *(undefined8 *)(lVar16 + 0x30);
    uVar6 = *(undefined8 *)(lVar16 + 0x38);
    uVar3 = *(undefined8 *)(lVar16 + 0x40);
    uVar7 = *(undefined8 *)(lVar16 + 0x48);
    in_stack_00000058 = *(undefined8 *)(lVar16 + 0x68);
    in_stack_00000050 = *(undefined8 *)(lVar16 + 0x70);
    in_stack_00000068 = *(undefined8 *)(lVar16 + 0x78);
    in_stack_00000060 = *(undefined8 *)(lVar16 + 0x80);
    uVar12 = *(undefined8 *)(lVar16 + 0x88);
    uVar13 = *(undefined8 *)(lVar16 + 0x90);
    in_stack_00000048 = *(undefined8 *)(lVar16 + 0x98);
    in_stack_00000040 = *(undefined8 *)(lVar16 + 0xa0);
    uVar8 = *(undefined8 *)(lVar16 + 0xa8);
    uStack0000000000000070 = *(uint *)(lVar16 + 0xb8);
    uVar1 = *(undefined4 *)(lVar16 + 0xb0);
    uVar2 = *(undefined4 *)(lVar16 + 0xb4);
    uStack0000000000000074 = *(undefined4 *)(lVar16 + 0xbc);
    in_stack_00000080 = *(undefined8 *)(lVar16 + 0xc0);
    in_stack_00000078 = *(undefined8 *)(lVar16 + 200);
    in_stack_00000090 = *(undefined8 *)(lVar16 + 0xd0);
    in_stack_00000088 = *(undefined8 *)(lVar16 + 0xd8);
    in_stack_000000a0 = *(undefined8 *)(lVar16 + 0xe0);
    in_stack_00000098 = *(undefined8 *)(lVar16 + 0xe8);
    unaff_x21 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_61__);
    if (unaff_x21 == 0) goto LAB_021edc34;
    FUN_017b46ec(unaff_x21,0);
    *(undefined8 *)(unaff_x21 + 0x40) = 0xffffffffffffffff;
    uVar18 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(uVar18,uVar5,0);
    *(undefined8 *)(unaff_x21 + 0x10) = uVar18;
    uVar18 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(uVar19,uVar6,0);
    *(undefined8 *)(unaff_x21 + 0x18) = uVar18;
    uVar18 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(uVar3,uVar7,0);
    *(undefined8 *)(unaff_x21 + 0x20) = uVar18;
    *(undefined8 *)(unaff_x21 + 0x80) = uVar15;
    *(undefined8 *)(unaff_x21 + 0x88) = uVar4;
    *(undefined8 *)(unaff_x21 + 0x40) = uVar8;
    *(undefined4 *)(unaff_x21 + 0x48) = uVar1;
    in_stack_000000d8 = uVar2;
    uVar15 = FUN_021fe36c(&stack0x000000d8,0);
    *(undefined8 *)(unaff_x21 + 0x50) = uVar15;
    in_stack_000000b8 = uVar12;
    in_stack_000000c0 = uVar13;
    unaff_x22 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f1918,&stack0x000000b8);
    unaff_x19 = (long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Create__
    ;
    param_1 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Create__
    ;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864(param_1);
      param_1 = *unaff_x19;
    }
    unaff_x20 = &Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Load<ImageStyle>__;
  } while( true );
}


