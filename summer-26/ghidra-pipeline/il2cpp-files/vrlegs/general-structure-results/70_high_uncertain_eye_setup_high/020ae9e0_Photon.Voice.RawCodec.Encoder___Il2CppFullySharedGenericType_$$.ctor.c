/*
FUNCTION_NAME: Photon.Voice.RawCodec.Encoder<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 020ae9e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020aeaa4) */

void Photon_Voice_RawCodec_Encoder<__Il2CppFullySharedGenericType>___ctor(void)

{
  long lVar1;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x28;
  long unaff_x29;
  
  if (unaff_x28 != 0) {
    thunk_FUN_01a4b338();
    FUN_018820a8();
  }
  lVar1 = *(long *)(unaff_x24 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar1,*(undefined8 *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  if (*(uint *)(unaff_x22 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x22 + (long)(int)unaff_w21 * 8 + 0x20) = unaff_x23;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x28),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


