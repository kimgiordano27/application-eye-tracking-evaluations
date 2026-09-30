/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 0368dd7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin__GetNativeOpenXRSession(float param_1,undefined1 param_2 [16],float param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined8 unaff_d8;
  
  fVar3 = (float)unaff_d8 - param_2._0_4_;
  fVar4 = (float)((ulong)unaff_d8 >> 0x20) - param_2._4_4_;
  if (fVar4 * fVar4 + param_1 * param_1 + fVar3 * fVar3 < param_3) {
    uVar1 = 0;
  }
  else {
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar2 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0407e9e4(*unaff_x19,unaff_x19[1],unaff_x19[2],lVar2,0);
    uVar1 = FUN_04042a68(&stack0x00000008,0);
  }
  return uVar1 & 1;
}


