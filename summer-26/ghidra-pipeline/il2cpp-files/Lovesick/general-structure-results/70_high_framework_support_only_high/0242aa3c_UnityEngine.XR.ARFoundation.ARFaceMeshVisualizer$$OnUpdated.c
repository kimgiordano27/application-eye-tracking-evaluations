/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARFaceMeshVisualizer$$OnUpdated
ENTRY_POINT: 0242aa3c
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


uint UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer__OnUpdated(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
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
    FUN_0266185c(param_1,unaff_x22,0);
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
        uVar2 = FUN_026676cc(unaff_x22,0);
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x19);
        }
        uVar3 = FUN_0268b4e0(uVar2,0,0);
      } while ((uVar3 & 1) != 0);
      memmove(&stack0x00000030,(void *)(*(long *)(in_stack_00000010 + 0x10) + unaff_x26),0x74);
      uVar1 = FUN_026b126c(&stack0x00000030,0);
      if ((uVar1 | 2) != 2) break;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_0242aa88;
      lVar6 = (long)(int)unaff_w21;
      unaff_w21 = unaff_w21 + 1;
      lVar6 = unaff_x20 + lVar6 * 0x10;
      *(ulong *)(lVar6 + 0x20) =
           (ulong)((uint)unaff_x27 & 0xffff | ((uint)unaff_x27 + unaff_w28) * 0x10000);
      *(long *)(lVar6 + 0x28) = unaff_x22;
    }
    plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    if (plVar4 == (long *)0x0) {
LAB_0242aa84:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__ != 0)
       && (lVar6 = thunk_FUN_00d6225c(*(long *)
                                       Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__
                                      ,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0242aa8c:
      uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_0242aa88:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar4[4] = *(long *)Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__;
    in_stack_00000018 =
         *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__;
    in_stack_00000020 = 0xffffffffffffffff;
    in_stack_00000028 = uVar1;
    lVar6 = FUN_017a7f78(&stack0x00000018,0);
    if ((lVar6 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0242aa8c;
    uVar1 = *(uint *)(plVar4 + 3);
    if (uVar1 < 2) goto LAB_0242aa88;
    plVar4[5] = lVar6;
    if (*(long *)PTR_DAT_033f33a0 != 0) {
      lVar6 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f33a0,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 == 0) goto LAB_0242aa8c;
      uVar1 = *(uint *)(plVar4 + 3);
    }
    if (uVar1 < 3) goto LAB_0242aa88;
    plVar4[6] = *(long *)PTR_DAT_033f33a0;
    lVar6 = FUN_0268b6ac(unaff_x22,0);
    if ((lVar6 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0242aa8c;
    uVar1 = *(uint *)(plVar4 + 3);
    if (uVar1 < 4) goto LAB_0242aa88;
    plVar4[7] = lVar6;
    if (*(long *)StringLiteral_8913 != 0) {
      lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_8913,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 == 0) goto LAB_0242aa8c;
      uVar1 = *(uint *)(plVar4 + 3);
    }
    if (uVar1 < 5) goto LAB_0242aa88;
    plVar4[8] = *(long *)StringLiteral_8913;
    param_1 = FUN_01600844(plVar4,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
  } while( true );
}


