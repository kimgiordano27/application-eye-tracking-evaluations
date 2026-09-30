/*
FUNCTION_NAME: OVRPlugin$$get_version
ENTRY_POINT: 0367cbf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_version(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long *unaff_x19;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  *unaff_x19 = **(long **)(lVar2 + 0xb8);
  thunk_FUN_01f51358();
  lVar2 = *unaff_x19;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20) == 0) goto LAB_0367cc64;
        FUN_0367cc6c();
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    return;
  }
LAB_0367cc64:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


