/*
FUNCTION_NAME: OVRPlugin$$get_localDimmingSupported
ENTRY_POINT: 07a3d3dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__get_localDimmingSupported(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x21;
  float extraout_s0;
  undefined4 uVar6;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000010;
  
  plVar3 = *(long **)(unaff_x20 + 0xbb0);
  if ((*(byte *)(unaff_x21 + 0x29a) & 1) == 0) {
    FUN_04077588(PTR_DAT_09285bb0);
    *(undefined1 *)(unaff_x21 + 0x29a) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_089c7534(param_1,0);
    if (lVar2 == 0) goto LAB_07a3d47c;
    FUN_089dc350(lVar2,0);
    in_stack_00000010._4_4_ = extraout_s0;
    uVar6 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_07a3d47c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_089908b4(&stack0x00000008,*(long *)(param_1 + 0x20),0);
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + in_stack_00000010._4_4_;
    uVar6 = 0;
    uVar4 = 0;
  }
  auVar5._4_4_ = uVar6;
  auVar5._0_4_ = in_stack_00000010._4_4_;
  auVar5._8_8_ = uVar4;
  return auVar5;
}


