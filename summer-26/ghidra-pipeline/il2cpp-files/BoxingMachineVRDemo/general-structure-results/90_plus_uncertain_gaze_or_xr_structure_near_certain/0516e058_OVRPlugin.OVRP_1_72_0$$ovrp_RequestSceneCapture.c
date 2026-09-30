/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 0516e058
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(void)

{
  long lVar1;
  byte unaff_w19;
  long *unaff_x20;
  
  thunk_FUN_02dbd7b4();
  lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  if (lVar1 == 0) {
LAB_0516e0e4:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (*(byte *)(lVar1 + 0x20) <= unaff_w19) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
        if (lVar1 == 0) goto LAB_0516e0e4;
      }
      if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_0516e0e8;
                    /* try { // try from 0516e0b0 to 0526e193 has its CatchHandler @ 0516e0b0
                       catch() { ... } // from try @ 0516e0b0 with catch @ 0516e0b0
                       catch() { ... } // from try @ 0516e280 with catch @ 0516e0b0
                       catch() { ... } // from try @ 0516e358 with catch @ 0516e0b0
                       catch() { ... } // from try @ 0516e3bc with catch @ 0516e0b0 */
      if (unaff_w19 <= *(byte *)(lVar1 + 0x21)) {
        return 4;
      }
    }
    return 0;
  }
LAB_0516e0e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


