/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 02fc5a60
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_PassthroughLayerResumed(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(unaff_x21 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar3 = 0;
    lVar4 = lVar2 + 0x2c;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (-1 < *(int *)(lVar4 + -0xc)) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar1 != uVar3);
  }
  return;
}


