/*
FUNCTION_NAME: OVRPlugin.OVRP_1_51_0$$.cctor
ENTRY_POINT: 07caafac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_51_0___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_09f51168;
  if (param_1 != 0) {
    FUN_04cc9f40(param_1,2,*(undefined8 *)PTR_DAT_09f51168);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (*(long *)(lVar2 + 0x28) != 0) {
        FUN_04cc9f40(*(long *)(lVar2 + 0x28),4,*(undefined8 *)puVar1);
        FUN_07cab054();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


