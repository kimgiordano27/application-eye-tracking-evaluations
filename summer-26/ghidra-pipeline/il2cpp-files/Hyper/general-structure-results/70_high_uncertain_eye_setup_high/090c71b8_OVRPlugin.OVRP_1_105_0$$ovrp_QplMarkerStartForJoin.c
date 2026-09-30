/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$ovrp_QplMarkerStartForJoin
ENTRY_POINT: 090c71b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_105_0__ovrp_QplMarkerStartForJoin(long param_1,float param_2,float param_3)

{
  char cVar1;
  float fVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s11;
  float fVar6;
  float fVar7;
  
  *(float *)(unaff_x19 + 0x68) = unaff_s11 + param_3 * param_2;
  if (param_1 != 0) {
    fVar5 = *(float *)(unaff_x19 + 0x44);
    fVar6 = *(float *)(unaff_x19 + 0x78);
    fVar7 = *(float *)(unaff_x19 + 0x6c);
    fVar4 = (float)(**(code **)(param_1 + 0x18))
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    fVar5 = fVar5 * fVar4;
    lVar3 = *(long *)(unaff_x19 + 0x88);
    if (fVar5 <= unaff_s8) {
      unaff_s8 = fVar5;
    }
    if (0.0 <= fVar5) {
      unaff_s9 = unaff_s8;
    }
    *(float *)(unaff_x19 + 0x6c) = fVar7 + (fVar6 - fVar7) * unaff_s9;
    if (lVar3 != 0) {
      fVar5 = *(float *)(unaff_x19 + 0x44);
      cVar1 = *(char *)(unaff_x19 + 100);
      fVar6 = *(float *)(unaff_x19 + 0x70);
      fVar4 = (float)(**(code **)(lVar3 + 0x18))
                               (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      fVar5 = fVar5 * fVar4;
      fVar4 = 0.0;
      if (cVar1 != '\0') {
        fVar4 = 1.0;
      }
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      fVar2 = 0.0;
      if (0.0 <= fVar5) {
        fVar2 = fVar7;
      }
      *(float *)(unaff_x19 + 0x70) = fVar6 + (fVar4 - fVar6) * fVar2;
      FUN_090c747c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


