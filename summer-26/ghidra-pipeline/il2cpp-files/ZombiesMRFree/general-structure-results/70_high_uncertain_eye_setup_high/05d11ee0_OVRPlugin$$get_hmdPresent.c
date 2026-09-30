/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 05d11ee0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hmdPresent(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  if (param_1 != 0) {
    lVar3 = 8;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    do {
      lVar1 = FUN_05d196a8();
      lVar2 = FUN_05d196a8();
      if (lVar2 == 0) break;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar3 - 8U) {
LAB_05d11f68:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (lVar1 == 0) break;
      if ((ulong)*(uint *)(lVar1 + 0x18) <= lVar3 - 8U) goto LAB_05d11f68;
      *(undefined4 *)(lVar1 + lVar3 * 4) = *(undefined4 *)(lVar2 + lVar3 * 4);
      if (lVar3 == 0xc) {
        return;
      }
      lVar3 = lVar3 + 1;
    } while (*unaff_x19 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


