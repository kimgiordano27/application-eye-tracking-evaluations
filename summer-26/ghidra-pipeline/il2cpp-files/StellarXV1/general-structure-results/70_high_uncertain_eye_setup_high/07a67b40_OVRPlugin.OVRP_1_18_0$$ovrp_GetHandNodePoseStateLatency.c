/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 07a67b40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  int unaff_w21;
  undefined8 *unaff_x22;
  float fVar4;
  float fVar5;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xda8));
  *(undefined1 *)(unaff_x20 + 0x5cf) = 1;
  uVar3 = *unaff_x22;
  if (unaff_w21 == 5) {
    fVar4 = *(float *)(unaff_x19 + 0x54) + -1.0;
    fVar5 = 1.0;
    if (1.0 <= fVar4) {
      fVar5 = fVar4;
    }
  }
  else {
    if (unaff_w21 != 4) {
      if (unaff_w21 != 0) {
        return;
      }
      FUN_07a672f4();
      return;
    }
    fVar4 = *(float *)(unaff_x19 + 0x54) + 1.0;
    fVar5 = 15.0;
    if (fVar4 <= 15.0) {
      fVar5 = fVar4;
    }
  }
  *(float *)(unaff_x19 + 0x54) = fVar5;
  uVar1 = FUN_0768c8ac((float *)(unaff_x19 + 0x54),0);
  uVar3 = FUN_074d875c(uVar3,uVar1,0);
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    FUN_07a64d34();
    FUN_07a64d4c(uVar3);
    lVar2 = FUN_07a648f0();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined4 *)(lVar2 + 0x3c) = 0x3fc00000;
    *(undefined1 *)(lVar2 + 0x38) = 1;
  }
  return;
}


