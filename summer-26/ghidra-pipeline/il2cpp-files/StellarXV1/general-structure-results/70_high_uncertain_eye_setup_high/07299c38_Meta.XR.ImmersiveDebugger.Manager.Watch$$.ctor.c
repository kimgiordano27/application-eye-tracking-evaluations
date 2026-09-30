/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch$$.ctor
ENTRY_POINT: 07299c38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch___ctor(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *in_stack_00000008;
  
  while( true ) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    unaff_x20 = unaff_x20 + 1;
    if ((int)uVar1 <= (int)unaff_x20 + 1) break;
    if (uVar1 <= (int)unaff_x20 + 1U) goto LAB_07299c7c;
    lVar2 = unaff_x19 + unaff_x20 * 8;
    lVar3 = *(long *)(lVar2 + 0x28);
    if (lVar3 == 0) {
LAB_07299c78:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_w21 <= *(int *)(lVar3 + 0x14)) goto LAB_07299c50;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto LAB_07299c78;
    *(long *)(lVar2 + 0x20) = lVar3;
    thunk_FUN_040ec700();
  }
  if (uVar1 != 0) {
LAB_07299c50:
    return *in_stack_00000008;
  }
LAB_07299c7c:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


