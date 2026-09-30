/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 05ba5844
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


undefined8 OVRManager__get_xrSession(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  float in_stack_00000008;
  
  uVar1 = FUN_05ba7648();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
    uVar4 = FUN_069e6fbc(lVar2,0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar5 = (float)FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        fVar7 = *(float *)(unaff_x20 + 0x28);
        fVar6 = (float)FUN_06a577c0(*(long *)(unaff_x20 + 0x20),0);
        uVar3 = FUN_05ba7648(uVar4,unaff_s10,unaff_s11,fVar5 + fVar7,
                             fVar6 * 0.5 + *(float *)(unaff_x20 + 0x28) + in_stack_00000008);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


