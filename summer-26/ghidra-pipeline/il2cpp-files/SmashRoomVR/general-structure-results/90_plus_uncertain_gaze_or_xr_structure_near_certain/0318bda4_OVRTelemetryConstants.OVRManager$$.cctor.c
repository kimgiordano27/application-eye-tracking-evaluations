/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 0318bda4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryConstants_OVRManager___cctor
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  
  while( true ) {
    if (param_1 <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar1 = unaff_x22 + unaff_x24;
    *(undefined4 *)(lVar1 + 0x20) = param_2;
    *(undefined4 *)(lVar1 + 0x24) = param_3;
    *(undefined4 *)(lVar1 + 0x28) = param_4;
    *(undefined4 *)(lVar1 + 0x2c) = param_5;
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x24 = unaff_x24 + 0x10;
      lVar1 = *unaff_x25;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar1 = *unaff_x25;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_0318bdd8;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_0318bc74();
      if (lVar1 == 0) goto LAB_0318bdd8;
      lVar1 = FUN_0318bb20(lVar1,unaff_x21 & 0xffffffff);
    } while (lVar1 == 0);
    if (*unaff_x19 == 0) break;
    unaff_x22 = FUN_0318642c();
    param_2 = FUN_0318b834(lVar1);
    if (unaff_x22 == 0) break;
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
  }
LAB_0318bdd8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


