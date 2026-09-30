/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_125
ENTRY_POINT: 033ff788
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__786_125(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  do {
    if (param_1 == 0) {
LAB_033ff7d8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = FUN_033fe580(param_1,&stack0x00000008,0);
    puVar1 = StringLiteral_9532;
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)StringLiteral_9532;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        FUN_02679c40(**(long **)(lVar3 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)StringLiteral_9554);
        return;
      }
      goto LAB_033ff7d8;
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_033ff7d8;
    FUN_033fd93c(*(long *)(unaff_x19 + 0x10),in_stack_00000008,1,0);
    param_1 = *(long *)(unaff_x19 + 0x18);
    in_stack_00000008 = 0;
  } while( true );
}


