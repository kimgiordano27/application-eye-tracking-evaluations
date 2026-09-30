/*
FUNCTION_NAME: UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil$$SmartIncircle
ENTRY_POINT: 021ed594
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * UnityEngine_ProBuilder_Poly2Tri_TriangulationUtil__SmartIncircle(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  long unaff_x19;
  long unaff_x20;
  ulong uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector_PseudoStateData>_set_Item__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f42a0);
  thunk_FUN_00d48444(Method_Unity_Mathematics_math_select_shuffle_component__);
  thunk_FUN_00d48444(PTR_DAT_033f0aa0);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__);
  thunk_FUN_00d48444(UnityEngine_InputSystem_StepCounter_TypeInfo);
  thunk_FUN_00d48444(Obi_ObiConstraints<ObiPinConstraintsBatch>_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12668);
  thunk_FUN_00d48444(Method_Obi_ObiRopeExtrudedRenderer_UpdateRenderer__);
  thunk_FUN_00d48444(PTR_DAT_033f1918);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugParams_<RegisterDebug>b__10_4__
                    );
  thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass6_0_<DOPixelRect>b__0__)
  ;
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_Type>_Add__);
  thunk_FUN_00d48444(PTR_DAT_033f3f48);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Create__
                    );
  thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
  *(undefined1 *)(unaff_x19 + 0x7d8) = 1;
  in_stack_000000d8 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  if (unaff_x20 == 0) {
    plVar19 = (long *)0x0;
  }
  else {
    uVar37 = *(ulong *)(unaff_x20 + 0x18);
    plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)Method_OVRObjectPool_ListScope<string>__ctor__,
                                   uVar37 & 0xffffffff);
    if (0 < (int)uVar37) {
      lVar35 = 0;
      uVar36 = 0;
      do {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar36) {
LAB_021edc38:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar20 = unaff_x20 + lVar35;
        uVar22 = *(undefined8 *)(lVar20 + 0x58);
        uVar6 = *(undefined8 *)(lVar20 + 0x60);
        uVar21 = *(undefined8 *)(lVar20 + 0x20);
        uVar7 = *(undefined8 *)(lVar20 + 0x28);
        uVar39 = *(undefined8 *)(lVar20 + 0x30);
        uVar8 = *(undefined8 *)(lVar20 + 0x38);
        uVar3 = *(undefined8 *)(lVar20 + 0x40);
        uVar9 = *(undefined8 *)(lVar20 + 0x48);
        uVar24 = *(undefined8 *)(lVar20 + 0x68);
        uVar25 = *(undefined8 *)(lVar20 + 0x70);
        uVar26 = *(undefined8 *)(lVar20 + 0x78);
        uVar27 = *(undefined8 *)(lVar20 + 0x80);
        uVar28 = *(undefined8 *)(lVar20 + 0x88);
        uVar29 = *(undefined8 *)(lVar20 + 0x90);
        uVar30 = *(undefined8 *)(lVar20 + 0x98);
        uVar4 = *(undefined8 *)(lVar20 + 0xa0);
        uVar10 = *(undefined8 *)(lVar20 + 0xa8);
        uVar12 = *(uint *)(lVar20 + 0xb8);
        uVar1 = *(undefined4 *)(lVar20 + 0xb0);
        uVar2 = *(undefined4 *)(lVar20 + 0xb4);
        uVar13 = *(undefined4 *)(lVar20 + 0xbc);
        uVar31 = *(undefined8 *)(lVar20 + 0xc0);
        uVar32 = *(undefined8 *)(lVar20 + 200);
        uVar33 = *(undefined8 *)(lVar20 + 0xd0);
        uVar34 = *(undefined8 *)(lVar20 + 0xd8);
        uVar5 = *(undefined8 *)(lVar20 + 0xe0);
        uVar11 = *(undefined8 *)(lVar20 + 0xe8);
        lVar20 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_61__);
        if (lVar20 == 0) {
LAB_021edc34:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_017b46ec(lVar20,0);
        *(undefined8 *)(lVar20 + 0x40) = 0xffffffffffffffff;
        uVar21 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(uVar21,uVar7,0);
        *(undefined8 *)(lVar20 + 0x10) = uVar21;
        uVar21 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(uVar39,uVar8,0);
        *(undefined8 *)(lVar20 + 0x18) = uVar21;
        uVar21 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(uVar3,uVar9,0);
        *(undefined8 *)(lVar20 + 0x20) = uVar21;
        *(undefined8 *)(lVar20 + 0x80) = uVar22;
        *(undefined8 *)(lVar20 + 0x88) = uVar6;
        *(undefined8 *)(lVar20 + 0x40) = uVar10;
        *(undefined4 *)(lVar20 + 0x48) = uVar1;
        in_stack_000000d8 = uVar2;
        uVar22 = FUN_021fe36c(&stack0x000000d8,0);
        *(undefined8 *)(lVar20 + 0x50) = uVar22;
        in_stack_000000b8 = uVar28;
        in_stack_000000c0 = uVar29;
        uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f1918,&stack0x000000b8);
        puVar15 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Create__
        ;
        lVar23 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Create__
        ;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar23);
          lVar23 = *(long *)puVar15;
        }
        puVar18 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
        puVar17 = Method_Obi_ObiRopeExtrudedRenderer_UpdateRenderer__;
        puVar16 = 
        Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector_PseudoStateData>_set_Item__
        ;
        puVar14 = PTR_DAT_033f0aa0;
        uVar21 = *(undefined8 *)
                  Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
        lVar38 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x18);
        if (lVar38 == 0) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar23);
            lVar23 = *(long *)puVar15;
          }
          uVar39 = **(undefined8 **)(lVar23 + 0xb8);
          lVar38 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_InputSystem_StepCounter_TypeInfo);
          if (lVar38 == 0) goto LAB_021edc34;
          FUN_012d239c(lVar38,uVar39,
                       *(undefined8 *)
                        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugParams_<RegisterDebug>b__10_4__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18) = lVar38;
        }
        uVar22 = FUN_010dcdb8(uVar22,lVar38,
                              *(undefined8 *)
                               Method_Unity_Mathematics_math_select_shuffle_component__);
        uVar22 = FUN_010df6b8(uVar22,*(undefined8 *)puVar14);
        uVar22 = FUN_01600f98(uVar21,uVar22,0);
        *(undefined8 *)(lVar20 + 0x70) = uVar22;
        in_stack_000000b8 = uVar30;
        in_stack_000000c0 = uVar4;
        uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_12668,&stack0x000000b8);
        lVar23 = *(long *)puVar15;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar23);
          lVar23 = *(long *)puVar15;
        }
        uVar21 = *(undefined8 *)puVar18;
        lVar38 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x20);
        if (lVar38 == 0) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar23);
            lVar23 = *(long *)puVar15;
          }
          uVar39 = **(undefined8 **)(lVar23 + 0xb8);
          lVar38 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_LowLevel_InputEventPtr_get_stateOffset__
                                     );
          if (lVar38 == 0) goto LAB_021edc34;
          FUN_012d239c(lVar38,uVar39,
                       *(undefined8 *)
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass6_0_<DOPixelRect>b__0__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x20) = lVar38;
        }
        uVar22 = FUN_010dcdb8(uVar22,lVar38,*(undefined8 *)PTR_DAT_033f42a0);
        uVar22 = FUN_010df6b8(uVar22,*(undefined8 *)puVar14);
        uVar22 = FUN_01600f98(uVar21,uVar22,0);
        *(undefined8 *)(lVar20 + 0x78) = uVar22;
        in_stack_000000b8 = uVar24;
        in_stack_000000c0 = uVar25;
        uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)puVar17,&stack0x000000b8);
        lVar23 = *(long *)puVar15;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar23);
          lVar23 = *(long *)puVar15;
        }
        lVar38 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x28);
        if (lVar38 == 0) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar23);
            lVar23 = *(long *)puVar15;
          }
          uVar21 = **(undefined8 **)(lVar23 + 0xb8);
          lVar38 = thunk_FUN_00d62348(*(undefined8 *)
                                       Obi_ObiConstraints<ObiPinConstraintsBatch>_TypeInfo);
          if (lVar38 == 0) goto LAB_021edc34;
          FUN_012d239c(lVar38,uVar21,
                       *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Type>_Add__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x28) = lVar38;
        }
        uVar22 = FUN_010dcdb8(uVar22,lVar38,*(undefined8 *)puVar16);
        uVar22 = FUN_010df6b8(uVar22,*(undefined8 *)puVar14);
        *(undefined8 *)(lVar20 + 0x60) = uVar22;
        in_stack_000000b8 = uVar26;
        in_stack_000000c0 = uVar27;
        uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)puVar17,&stack0x000000b8);
        lVar23 = *(long *)puVar15;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar23);
          lVar23 = *(long *)puVar15;
        }
        lVar38 = *(long *)(*(long *)(lVar23 + 0xb8) + 0x30);
        if (lVar38 == 0) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar23);
            lVar23 = *(long *)puVar15;
          }
          uVar21 = **(undefined8 **)(lVar23 + 0xb8);
          lVar38 = thunk_FUN_00d62348(*(undefined8 *)
                                       Obi_ObiConstraints<ObiPinConstraintsBatch>_TypeInfo);
          if (lVar38 == 0) goto LAB_021edc34;
          FUN_012d239c(lVar38,uVar21,*(undefined8 *)PTR_DAT_033f3f48,0);
          *(long *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x30) = lVar38;
        }
        uVar22 = FUN_010dcdb8(uVar22,lVar38,*(undefined8 *)puVar16);
        uVar22 = FUN_010df6b8(uVar22,*(undefined8 *)puVar14);
        *(undefined8 *)(lVar20 + 0x68) = uVar22;
        uVar12 = uVar12 & 0xff;
        *(undefined4 *)(lVar20 + 0x58) = uVar13;
        *(byte *)(lVar20 + 0x92) = (byte)(uVar12 >> 2) & 1;
        *(byte *)(lVar20 + 0x90) = (byte)(uVar12 >> 1) & 1;
        *(byte *)(lVar20 + 0x91) = (byte)(uVar12 >> 4) & 1;
        in_stack_000000c8 = uVar31;
        in_stack_000000d0 = uVar32;
        uVar22 = FUN_02205534(&stack0x000000c8,0);
        *(undefined8 *)(lVar20 + 0x98) = uVar22;
        in_stack_000000c8 = uVar33;
        in_stack_000000d0 = uVar34;
        uVar22 = FUN_02205534(&stack0x000000c8,0);
        *(undefined8 *)(lVar20 + 0xa0) = uVar22;
        in_stack_000000c8 = uVar5;
        in_stack_000000d0 = uVar11;
        uVar22 = FUN_02205534(&stack0x000000c8,0);
        *(undefined8 *)(lVar20 + 0xa8) = uVar22;
        if (plVar19 == (long *)0x0) goto LAB_021edc34;
        lVar23 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar19 + 0x40));
        if (lVar23 == 0) {
          uVar22 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar22,0);
        }
        if (*(uint *)(plVar19 + 3) <= uVar36) goto LAB_021edc38;
        plVar19[uVar36 + 4] = lVar20;
        lVar35 = lVar35 + 0xd0;
        uVar36 = uVar36 + 1;
      } while ((uVar37 & 0xffffffff) * 0xd0 != lVar35);
    }
  }
  return plVar19;
}


