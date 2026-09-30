/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_124
ENTRY_POINT: 033ff718
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__786_124(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9554);
    FUN_01d7d918(StringLiteral_9532);
    *(undefined1 *)(unaff_x20 + 0xc29) = 1;
  }
  in_stack_00000008 = 0;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_033ff790:
    puVar1 = StringLiteral_9532;
    lVar2 = *(long *)StringLiteral_9532;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_02679c40(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_2 + 0x18),
                   *(undefined8 *)StringLiteral_9554);
      return;
    }
  }
  else {
    do {
      in_stack_00000008 = 0;
      uVar3 = FUN_033fe580(lVar2,&stack0x00000008,0);
      if ((uVar3 & 1) == 0) goto LAB_033ff790;
      if (*(long *)(param_2 + 0x10) == 0) break;
      FUN_033fd93c(*(long *)(param_2 + 0x10),in_stack_00000008,1,0);
      lVar2 = *(long *)(param_2 + 0x18);
      in_stack_00000008 = 0;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


