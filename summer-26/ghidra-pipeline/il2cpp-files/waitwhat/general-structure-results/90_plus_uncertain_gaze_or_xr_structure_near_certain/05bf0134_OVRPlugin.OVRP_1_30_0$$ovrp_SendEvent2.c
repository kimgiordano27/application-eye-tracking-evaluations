/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 05bf0134
PROGRAM: waitwhat-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(float param_1,float param_2)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar3;
  
  fVar3 = SQRT(param_2 + param_1) - ABS(unaff_s11);
  FUN_06a576ec(unaff_s12);
  FUN_06a57874(unaff_s12 + unaff_s12 + fVar3);
  FUN_06a579fc();
  if (DAT_07546bc0 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07546bc0 = '\x01';
  }
  fVar2 = 0.0;
  if (0.0 <= unaff_s11) {
    fVar2 = unaff_s11;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar2 = fVar2 + fVar3 * 0.5;
  FUN_06a57564(fVar2 * *(float *)(lVar1 + 0x48),fVar2 * *(float *)(lVar1 + 0x4c),
               fVar2 * *(float *)(lVar1 + 0x50));
  lVar1 = FUN_069d3a80();
  if (lVar1 != 0) {
    FUN_069e7a48();
    FUN_069e7c88(unaff_s10,lVar1,0);
    lVar1 = FUN_069d3b50();
    if (lVar1 != 0) {
      FUN_069d6f84(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


