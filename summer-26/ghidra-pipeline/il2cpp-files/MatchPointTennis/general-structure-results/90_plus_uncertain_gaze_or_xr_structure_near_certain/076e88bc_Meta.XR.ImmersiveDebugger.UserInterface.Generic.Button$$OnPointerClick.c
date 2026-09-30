/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnPointerClick
ENTRY_POINT: 076e88bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnPointerClick(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 400) != 0) {
    FUN_09805588(*(long *)(param_1 + 400),0,0);
    if (*(long *)(param_1 + 400) != 0) {
      WebSocketSharp_Net_ChunkedRequestStream__onRead(0,*(long *)(param_1 + 400),0);
      lVar1 = *(long *)(param_1 + 0x118);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x1d0) != '\0') {
          FUN_0980cad4(lVar1,0);
        }
        if (*(long *)(param_1 + 0x198) != 0) {
          FUN_076ea840();
          lVar1 = *(long *)(param_1 + 0x310);
          *(undefined1 *)(param_1 + 0x1c0) = 0;
          if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076e892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


