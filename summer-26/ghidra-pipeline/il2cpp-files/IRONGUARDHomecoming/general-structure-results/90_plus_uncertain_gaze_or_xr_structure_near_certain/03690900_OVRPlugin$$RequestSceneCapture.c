/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 03690900
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__RequestSceneCapture(float param_1,float param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar2;
  float fVar3;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar4;
  float unaff_s13;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  fVar3 = unaff_s10 * unaff_s13;
  fVar4 = (-(fVar3 + param_1 + param_2) - unaff_s12) / unaff_s11;
  if ((fVar4 <= 0.0) || ((0.0 < in_stack_00000008._4_4_ && (in_stack_00000008._4_4_ < fVar4)))) {
    uVar1 = 0;
  }
  else {
    uStack0000000000000018 = unaff_x20[1];
    uStack0000000000000010 = *unaff_x20;
    uStack0000000000000020 = unaff_x20[2];
    uVar2 = FUN_04043b74(fVar4,&stack0x00000010,0);
    uVar1 = 1;
    *unaff_x19 = uVar2;
    unaff_x19[1] = fVar3;
    unaff_x19[2] = param_3;
    unaff_x19[3] = unaff_s8;
    unaff_x19[4] = unaff_s9;
    unaff_x19[5] = unaff_s10;
    unaff_x19[6] = fVar4;
  }
  return uVar1;
}


