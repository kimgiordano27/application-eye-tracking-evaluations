/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 04f63c80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  lVar1 = thunk_FUN_02b79644();
  FUN_04f5b8f4();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    thunk_FUN_02bb0e9c();
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x170);
      uVar2 = FUN_05c89340(*(long *)(unaff_x19 + 0xd0),0);
      if (lVar3 != 0) {
        FUN_04f6096c(lVar3,uVar2,1,0,lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


