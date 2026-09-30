/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$UpdateVisibility
ENTRY_POINT: 0242a98c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer__UpdateVisibility(undefined **param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  uint in_stack_00000028;
  
  do {
    unaff_x23[6] = *(long *)param_1[0x74];
    lVar3 = FUN_0268b6ac(unaff_x22,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
LAB_0242aa8c:
      uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,0);
    }
    uVar1 = *(uint *)(unaff_x23 + 3);
    if (uVar1 < 4) {
LAB_0242aa88:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x23[7] = lVar3;
    if (*(long *)StringLiteral_8913 != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_8913,*(undefined8 *)(*unaff_x23 + 0x40));
      if (lVar3 == 0) goto LAB_0242aa8c;
      uVar1 = *(uint *)(unaff_x23 + 3);
    }
    if (uVar1 < 5) goto LAB_0242aa88;
    unaff_x23[8] = *(long *)StringLiteral_8913;
    uVar5 = FUN_01600844(unaff_x23,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_0266185c(uVar5,unaff_x22,0);
    while( true ) {
      do {
        while( true ) {
          unaff_x27 = unaff_x27 + 1;
          unaff_x26 = unaff_x26 + 0x74;
          if (unaff_x29 == unaff_x27) {
            return unaff_w21;
          }
          if (unaff_x25 != unaff_x27) break;
          unaff_w28 = unaff_w28 + -1;
        }
        memmove(&stack0x00000030,(void *)(*(long *)(in_stack_00000010 + 0x10) + unaff_x26),0x74);
        unaff_x22 = FUN_026b11e0(&stack0x00000030,0);
        if (unaff_x22 == 0) goto LAB_0242aa84;
        uVar5 = FUN_026676cc(unaff_x22,0);
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x19);
        }
        uVar2 = FUN_0268b4e0(uVar5,0,0);
      } while ((uVar2 & 1) != 0);
      memmove(&stack0x00000030,(void *)(*(long *)(in_stack_00000010 + 0x10) + unaff_x26),0x74);
      uVar1 = FUN_026b126c(&stack0x00000030,0);
      if ((uVar1 | 2) != 2) break;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_0242aa88;
      lVar3 = (long)(int)unaff_w21;
      unaff_w21 = unaff_w21 + 1;
      lVar3 = unaff_x20 + lVar3 * 0x10;
      *(ulong *)(lVar3 + 0x20) =
           (ulong)((uint)unaff_x27 & 0xffff | ((uint)unaff_x27 + unaff_w28) * 0x10000);
      *(long *)(lVar3 + 0x28) = unaff_x22;
    }
    unaff_x23 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    if (unaff_x23 == (long *)0x0) {
LAB_0242aa84:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__ != 0)
       && (lVar3 = thunk_FUN_00d6225c(*(long *)
                                       Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__
                                      ,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0))
    goto LAB_0242aa8c;
    if ((int)unaff_x23[3] == 0) goto LAB_0242aa88;
    unaff_x23[4] = *(long *)
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__;
    in_stack_00000018 =
         *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__;
    in_stack_00000020 = 0xffffffffffffffff;
    in_stack_00000028 = uVar1;
    lVar3 = FUN_017a7f78(&stack0x00000018,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0))
    goto LAB_0242aa8c;
    uVar1 = *(uint *)(unaff_x23 + 3);
    if (uVar1 < 2) goto LAB_0242aa88;
    unaff_x23[5] = lVar3;
    if (*(long *)PTR_DAT_033f33a0 != 0) {
      lVar3 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f33a0,*(undefined8 *)(*unaff_x23 + 0x40));
      if (lVar3 == 0) goto LAB_0242aa8c;
      uVar1 = *(uint *)(unaff_x23 + 3);
    }
    if (uVar1 < 3) goto LAB_0242aa88;
    param_1 = &PTR_DAT_033f3000;
  } while( true );
}


