/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 07c75238
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetControllerState6(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x757) = in_w8;
  lVar1 = thunk_FUN_0448520c(*unaff_x21);
  OVROverlayCanvas__CalcImposterColor();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x138);
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x170);
      uVar2 = FUN_095258d0(*(long *)(unaff_x19 + 0xd0),0);
      if (lVar3 != 0) {
        FUN_07c71e60(lVar3,uVar2,1,0,lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


