/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 02c1bc24
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeVelocity(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = FUN_02c1d088();
  if (lVar1 != 0) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      uVar2 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,
                           *(int *)(lVar1 + 0x18) + (int)*(long *)(unaff_x22 + 0x18));
      FUN_02bf259c();
      FUN_02bf1608(lVar1,0,uVar2,*(undefined4 *)(unaff_x22 + 0x18),*(undefined4 *)(lVar1 + 0x18),0);
    }
  }
  FUN_01b34c10();
  return;
}


