/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 0768fdb8
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fac888);
    FUN_0403162c(PTR_DAT_08fab600);
    FUN_0403162c(PTR_DAT_08f65598);
    *(undefined1 *)(unaff_x21 + 0xf09) = 1;
  }
  puVar1 = PTR_DAT_08f65598;
                    /* try { // try from 0768fdec to 0778fec7 has its CatchHandler @ 0768fdec
                       catch() { ... } // from try @ 0768fdec with catch @ 0768fdec
                       catch() { ... } // from try @ 0768ff70 with catch @ 0768fdec
                       catch() { ... } // from try @ 07690048 with catch @ 0768fdec
                       catch() { ... } // from try @ 076900a0 with catch @ 0768fdec
                       catch() { ... } // from try @ 0769012c with catch @ 0768fdec */
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_053e4150();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_08589e5c(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(long *)(unaff_x20 + 0x48) = unaff_x19;
    FUN_0768f300();
    if (unaff_x19 != 0) {
      FUN_054b4c68();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


