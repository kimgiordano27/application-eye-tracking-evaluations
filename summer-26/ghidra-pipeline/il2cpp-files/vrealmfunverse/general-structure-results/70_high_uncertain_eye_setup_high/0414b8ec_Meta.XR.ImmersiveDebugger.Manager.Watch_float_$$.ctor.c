/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$.ctor
ENTRY_POINT: 0414b8ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>___ctor(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  int *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  
  do {
    if (param_1 <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (-1 < *unaff_x26) {
      in_stack_00000008._4_4_ = unaff_x26[6];
      lVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                         (long)&stack0x00000008 + 4);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02b79548(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar1;
      thunk_FUN_02bb0e9c(unaff_x27 + (long)(int)unaff_w19 * 8,lVar1);
      unaff_w19 = unaff_w19 + 1;
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 8;
    if (unaff_x23 == unaff_x25) {
      return;
    }
    param_1 = (ulong)*(uint *)(unaff_x24 + 0x18);
  } while( true );
}


