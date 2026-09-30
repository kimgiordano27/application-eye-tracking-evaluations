/*
FUNCTION_NAME: FUN_053fc534
ENTRY_POINT: 053fc534
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_053fc534(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar3 = UnityEngine_UIElements_UIR_RenderTreeCompositor_DrawOperation_TypeInfo;
  if ((DAT_066d0b76 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_41_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_RenderTreeCompositor_DrawOperation_TypeInfo);
    FUN_02b3c81c(System_Collections_Queue_QueueEnumerator_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_BackgroundImageProperty_TypeInfo
                );
    DAT_066d0b76 = 1;
  }
  uVar4 = FUN_04cb7c3c(*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48),0,0);
  puVar2 = System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo;
  puVar1 = PTR_DAT_0631e1d8;
  if ((uVar4 & 1) == 0) {
LAB_053fc6f0:
    return *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
  }
  uVar10 = *(undefined8 *)System_Collections_Queue_QueueEnumerator_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar5 = FUN_04d8a7b0(uVar10,0);
  plVar6 = (long *)FUN_02b3c908(*(undefined8 *)puVar1,2);
  lVar7 = FUN_04d8a7b0(*(undefined8 *)puVar2,0);
  if (plVar6 == (long *)0x0) {
LAB_053fc70c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_053fc714:
    uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar10,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
    lVar7 = FUN_04d8a7b0(*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo,0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_053fc714;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar7;
      thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
      if (lVar5 != 0) {
        uVar10 = FUN_04d95ce4(lVar5,*(undefined8 *)
                                     UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_BackgroundImageProperty_TypeInfo
                              ,0x3c,0,plVar6,0,0);
        puVar9 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
        *puVar9 = uVar10;
        thunk_FUN_02bb0e9c(puVar9,uVar10);
        goto LAB_053fc6f0;
      }
      goto LAB_053fc70c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


