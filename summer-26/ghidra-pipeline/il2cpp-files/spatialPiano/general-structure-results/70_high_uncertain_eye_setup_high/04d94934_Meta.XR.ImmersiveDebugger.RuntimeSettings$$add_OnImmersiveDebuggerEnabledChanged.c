/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$add_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 04d94934
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__add_OnImmersiveDebuggerEnabledChanged(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((param_1 != 0) &&
     (lVar1 = thunk_FUN_02f45174(param_1,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
LAB_04d949f8:
    uVar3 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,0);
  }
  uVar5 = (ulong)*(uint *)(unaff_x21 + 3);
  if (uVar5 != 0) {
    unaff_x21[4] = param_1;
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if (lVar1 != 0) {
      lVar2 = thunk_FUN_02f45174(lVar1,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar2 == 0) goto LAB_04d949f8;
      uVar5 = unaff_x21[3];
    }
    uVar4 = (uint)uVar5;
    if ((uVar5 & 0xfffffffe) != 0) {
      unaff_x21[5] = lVar1;
      lVar1 = *(long *)(unaff_x22 + 0x28);
      if (lVar1 != 0) {
        lVar2 = thunk_FUN_02f45174(lVar1,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar2 == 0) goto LAB_04d949f8;
        uVar4 = (uint)unaff_x21[3];
      }
      if (2 < uVar4) {
        unaff_x21[6] = lVar1;
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
                    /* WARNING: Could not recover jumptable at 0x04d949f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


