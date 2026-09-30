/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 076e87b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  fVar4 = SQRT(param_1._0_4_ + param_1._4_4_ + param_2);
  fVar2 = (float)FUN_08596b20(param_4,0);
  fVar3 = -fVar4;
  if (0.0 <= unaff_s10 * param_3 + unaff_s11 * fVar2 + unaff_s12 * param_2) {
    fVar3 = fVar4;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  fVar2 = -1.0;
  if (0.0 <= fVar3) {
    fVar2 = 1.0;
  }
  if (unaff_s8 != fVar2) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076e883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  return;
}


