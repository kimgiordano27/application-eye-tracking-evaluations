/*
FUNCTION_NAME: UnityEngine.InputSystem.PlayerInput$$OnUserChange
ENTRY_POINT: 020ab784
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_InputSystem_PlayerInput__OnUserChange(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xc50));
  thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<Button>__);
                    /* try { // try from 020ab798 to 021ab8af has its CatchHandler @ 020ab798
                       catch() { ... } // from try @ 020ab798 with catch @ 020ab798
                       catch() { ... } // from try @ 020ab90c with catch @ 020ab798
                       catch() { ... } // from try @ 020abce0 with catch @ 020ab798
                       catch() { ... } // from try @ 020abd04 with catch @ 020ab798
                       catch() { ... } // from try @ 020abd94 with catch @ 020ab798
                       catch() { ... } // from try @ 020abdc4 with catch @ 020ab798
                       catch() { ... } // from try @ 020abdfc with catch @ 020ab798
                       catch() { ... } // from try @ 020abe2c with catch @ 020ab798
                       catch() { ... } // from try @ 020abe64 with catch @ 020ab798
                       catch() { ... } // from try @ 020abe94 with catch @ 020ab798
                       catch() { ... } // from try @ 020abed0 with catch @ 020ab798
                       catch() { ... } // from try @ 020abf50 with catch @ 020ab798 */
  thunk_FUN_00d48444(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_Get__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f59d8);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f0700);
  thunk_FUN_00d48444(StringLiteral_10203);
  thunk_FUN_00d48444(Method_System_Nullable<Bounds>_get_Value__);
  *(undefined1 *)(unaff_x23 + 0xde9) = 1;
  puVar4 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  puVar3 = Method_System_Nullable<Bounds>_get_Value__;
  puVar1 = PTR_DAT_033f59d8;
  FUN_0132ce28();
  uVar6 = FUN_011204c8();
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = *(long *)puVar2;
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    puVar2 = StringLiteral_991;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    plVar9 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    uVar5 = FUN_0132ce38(&stack0x00000010,*(undefined8 *)puVar2);
    if (plVar9 == (long *)0x0) goto LAB_020abac4;
    uVar11 = (**(code **)(*plVar9 + 0x178))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x180));
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_020abac4;
    FUN_013ba4d0();
    FUN_0132ce38(&stack0x00000010,*(undefined8 *)puVar2);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *(long *)puVar3;
    }
    if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar8 == 0) goto LAB_020abac4;
      FUN_016f4a88(lVar8,uVar10,*(undefined8 *)StringLiteral_10203,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = lVar8;
    }
    in_stack_00000020 = in_stack_00000010;
    in_stack_00000028 = in_stack_00000018;
    FUN_0114c02c(lVar7,&stack0x00000020,uVar11,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                );
  }
  else {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_7550;
    if (lVar7 == 0) goto LAB_020abac4;
    FUN_013ba4d0();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar3;
    }
    if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
      uVar11 = **(undefined8 **)(lVar8 + 0xb8);
                    /* try { // try from 020ab8b0 to 021ab8b3 has its CatchHandler @ 020abe98 */
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    /* try { // try from 020ab8b4 to 021ab8bf has its CatchHandler @ 020abea0 */
      if (lVar8 == 0) goto LAB_020abac4;
      FUN_016f4a88(lVar8,uVar11,*(undefined8 *)PTR_DAT_033f0700,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = lVar8;
    }
  }
  if (unaff_x20 != 0) {
    FUN_020a9544();
    return *(undefined8 *)(lVar7 + 0x10);
  }
LAB_020abac4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


