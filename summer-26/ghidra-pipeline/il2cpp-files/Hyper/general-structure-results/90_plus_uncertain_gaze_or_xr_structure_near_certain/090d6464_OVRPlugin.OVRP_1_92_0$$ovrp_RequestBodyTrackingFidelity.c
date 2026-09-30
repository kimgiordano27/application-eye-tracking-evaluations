/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 090d6464
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint in_w8;
  long lVar3;
  long in_x9;
  uint in_w10;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)in_w8 < (int)in_w10) {
    if (in_w10 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar2 = 1;
    lVar3 = in_x9 + (long)(int)in_w8 * 0x1c;
    uVar1 = *(undefined4 *)(lVar3 + 0x38);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x24) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x1c) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x14) = uVar5;
  }
  else {
    *param_1 = 0;
    thunk_FUN_049ee3d8(param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}


