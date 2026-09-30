/*
FUNCTION_NAME: Oculus.Interaction.ControllerPointerPose$$OnDisable
ENTRY_POINT: 018ac958
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void Oculus_Interaction_ControllerPointerPose__OnDisable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 018ac95c to 019ac967 has its CatchHandler @ 018ac688 */
  thunk_FUN_00d48444(Method_System_IO_FileStream_WriteByte__);
                    /* try { // try from 018ac968 to 019ac96f has its CatchHandler @ 018ac970 */
  thunk_FUN_00d48444(UnityEngine_BoxCollider_TypeInfo);
                    /* catch() { ... } // from try @ 018ac8ec with catch @ 018ac970
                       catch() { ... } // from try @ 018ac938 with catch @ 018ac970
                       catch() { ... } // from try @ 018ac968 with catch @ 018ac970 */
  thunk_FUN_00d48444(UnityEngine_Rendering_DebugShapes_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__);
  thunk_FUN_00d48444(System_Predicate<ScriptableRenderPass>_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f3b78);
  thunk_FUN_00d48444(StringLiteral_13537);
  thunk_FUN_00d48444(
                    UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo
                    );
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                    );
  *(undefined1 *)(unaff_x20 + 0x8b8) = 1;
  puVar4 = Method_UnityEngine_ProBuilder_ProBuilderMesh_SetFaceColor__;
  puVar3 = UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphDebugData_TypeInfo;
  puVar2 = UnityEngine_BoxCollider_TypeInfo;
  puVar1 = System_Predicate<ScriptableRenderPass>_TypeInfo;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar5 = *unaff_x19;
  if (iVar5 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
LAB_018aca58:
    FUN_0127e70c(&stack0x00000010,(long)&stack0x00000028 + 4,*(undefined8 *)puVar4);
    if (in_stack_00000028._4_1_ == '\0') {
      uVar12 = *(undefined8 *)(unaff_x19 + 8);
      uVar11 = thunk_FUN_00d48444(Method_Oculus_Platform_Message<Purchase>_get_Data__);
      uVar11 = FUN_018056b4(uVar12,uVar11,0);
      uVar12 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List<Tween_TweenCurve>_TrueForAll__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,uVar12);
    }
LAB_018acae0:
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = FUN_01804c14(*(long *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar13 = FUN_013bdbc8(lVar7,0,*(undefined8 *)puVar3);
    _in_stack_00000010 = auVar13;
    uVar8 = FUN_0127e6c0(&stack0x00000010,*(undefined8 *)puVar1);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        unaff_x19[0x16] = 0;
        unaff_x19[0x17] = 0;
        *unaff_x19 = -1;
        _in_stack_00000010 = ZEXT816(0);
        goto LAB_018acbd0;
      }
      FUN_01865608(*(undefined8 *)(unaff_x19 + 8),
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                   ,0);
      plVar6 = *(long **)(unaff_x19 + 8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (iVar5 == 0) {
        plVar6 = *(long **)(unaff_x19 + 8);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = (**(code **)(*plVar6 + 0x188))
                          (plVar6,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(*plVar6 + 400));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 018acde4 to 019acdeb has its CatchHandler @ 018acdec */
          FUN_00da518c();
        }
        _in_stack_00000010 = FUN_013bdbc8(lVar7,0,*(undefined8 *)puVar3);
        uVar8 = FUN_0127e6c0(&stack0x00000010,*(undefined8 *)puVar1);
        if ((uVar8 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        goto LAB_018aca58;
      }
      goto LAB_018acae0;
    }
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  FUN_0127e70c(&stack0x00000010,(long)&stack0x00000028 + 4,*(undefined8 *)puVar4);
  plVar6 = *(long **)(unaff_x19 + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
  if (iVar5 != 1) {
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    lVar7 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_01731954(0);
    plVar6 = *(long **)(unaff_x19 + 8);
    if (plVar6 != (long *)0x0) {
      in_stack_00000028._4_4_ =
           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      uVar9 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__)
      ;
      uVar9 = thunk_FUN_00d61fa0(uVar9,(long)&stack0x00000028 + 4);
      uVar10 = thunk_FUN_00d48444(UnityEngine_UI_InputField_<CaretBlink>d__172_TypeInfo);
      uVar12 = FUN_018651d4(uVar10,uVar12,uVar9,0);
      uVar11 = FUN_018056b4(uVar11,uVar12,0);
      uVar12 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List<Tween_TweenCurve>_TrueForAll__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,uVar12);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13537);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_018a5e3c(lVar7);
  puVar1 = PTR_DAT_033f3b78;
  *(long *)(unaff_x19 + 0xe) = lVar7;
  uVar12 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar11 = thunk_FUN_00d6225c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)puVar1);
  FUN_018a1a50(lVar7,uVar11,uVar12);
  if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = FUN_018a238c(*(long *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 8),
                       *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 10));
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  auVar13 = FUN_017e7d94(lVar7,0,0);
  uVar8 = FUN_016a1974();
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar13;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098fc0(unaff_x19 + 2);
    return;
  }
LAB_018acbd0:
  FUN_016a1990();
  uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  puVar1 = Method_System_IO_FileStream_WriteByte__;
  unaff_x19[0xf] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(unaff_x19 + 2,uVar11,*(undefined8 *)puVar1);
  return;
}


