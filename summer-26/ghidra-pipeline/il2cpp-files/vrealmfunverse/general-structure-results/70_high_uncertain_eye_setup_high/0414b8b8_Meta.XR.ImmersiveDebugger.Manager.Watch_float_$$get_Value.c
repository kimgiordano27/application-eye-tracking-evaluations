/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$get_Value
ENTRY_POINT: 0414b8b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__get_Value(long param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int *piVar6;
  ulong uVar7;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
    FUN_04d9c940();
  }
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar1 = *(uint *)(lVar5 + 0x20);
  if (0 < (int)uVar1) {
    piVar6 = *(int **)(lVar5 + 0x18);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar7 = 0;
    piVar2 = piVar6;
    do {
      if ((uint)piVar6[6] <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (-1 < piVar2[8]) {
        in_stack_00000008._4_4_ = piVar2[0xe];
        lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                           (long)&stack0x00000008 + 4);
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar4,0);
        }
        if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        unaff_x22[(long)(int)unaff_w19 + 4] = lVar5;
        thunk_FUN_02bb0e9c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar5);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar7 = uVar7 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar1 != uVar7);
  }
  return;
}


