/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$.cctor
ENTRY_POINT: 07caae9c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_09f51170;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_07cab050:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      FUN_04cc9f40(*(long *)(lVar2 + 0x20),0,*(undefined8 *)PTR_DAT_09f51170);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_07cab050;
        if (*(long *)(lVar2 + 0x28) != 0) {
          FUN_04cc9f40(*(long *)(lVar2 + 0x28),1,*(undefined8 *)puVar1);
          FUN_07cab054();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


