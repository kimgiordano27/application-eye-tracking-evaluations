/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$InsertAfter<object>
ENTRY_POINT: 03079048
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__InsertAfter<object>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_02b76274();
  uVar1 = FUN_04d941cc();
  if (uVar1 <= unaff_w19) {
    thunk_FUN_02ba3594(&DAT_06444988);
    uVar6 = thunk_FUN_02b79644();
    uVar5 = thunk_FUN_02ba3594(&DAT_064b6e68);
    FUN_04cf60a0(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6);
  }
  plVar2 = (long *)thunk_FUN_02b79548();
  if (plVar2 != (long *)0x0) {
    lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (**(undefined8 **)(unaff_x20 + 0x38));
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar6,0);
    }
    if (unaff_w19 < *(uint *)(plVar2 + 3)) {
      plVar2[(long)(int)unaff_w19 + 4] = lVar3;
      thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  FUN_02b3c8c0();
  return;
}


