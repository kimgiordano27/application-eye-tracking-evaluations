/*
FUNCTION_NAME: RootMotion.FinalIK.LookAtIK$$OpenUserManual
ENTRY_POINT: 0298a218
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298a2d0) */
/* WARNING: Removing unreachable block (ram,0x0298a2ec) */

undefined4 RootMotion_FinalIK_LookAtIK__OpenUserManual(long param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  undefined8 uVar2;
  uint unaff_w23;
  long unaff_x24;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(param_1 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = *(undefined8 *)(param_1 + (ulong)unaff_w23 * 8 + 0x20);
  cStack0000000000000008 = '\0';
  FUN_027e0bd8(uVar2,&stack0x00000008,0);
  lVar1 = *(long *)(unaff_x24 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar1 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(long *)(lVar1 + (ulong)unaff_w23 * 8 + 0x20) != 0) {
    FUN_02093610();
    if (cStack0000000000000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


