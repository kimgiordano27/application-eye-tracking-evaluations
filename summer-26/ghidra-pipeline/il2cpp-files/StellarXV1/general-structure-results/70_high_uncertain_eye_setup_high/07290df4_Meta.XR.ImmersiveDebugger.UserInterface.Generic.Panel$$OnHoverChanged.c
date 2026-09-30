/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnHoverChanged
ENTRY_POINT: 07290df4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnHoverChanged(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  uVar1 = *(uint *)(unaff_x21 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    thunk_FUN_040ec700();
  }
  else {
    FUN_05c26d88();
  }
  *(long *)(unaff_x19 + 0x60) = unaff_x21;
  thunk_FUN_040ec700((long *)(unaff_x19 + 0x60));
  if ((*(long *)(unaff_x19 + 0x68) != 0) &&
     (lVar2 = FUN_07f96804(*(long *)(unaff_x19 + 0x68),0), lVar2 != 0)) {
    uVar3 = FUN_074e4550(lVar2,*(undefined8 *)PTR_DAT_092c2000,0);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = FUN_074e4550(lVar2,*(undefined8 *)PTR_DAT_092acd98,0), (uVar3 & 1) == 0)) {
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092c2008);
      uVar4 = FUN_074d875c(uVar4,lVar2,0);
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar5 = thunk_FUN_040b4efc();
      FUN_075d4b88(uVar5,uVar4,0);
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092c2018);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,uVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


