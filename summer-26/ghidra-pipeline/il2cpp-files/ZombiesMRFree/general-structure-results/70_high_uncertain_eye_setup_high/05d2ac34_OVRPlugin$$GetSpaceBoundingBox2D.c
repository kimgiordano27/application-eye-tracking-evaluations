/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox2D
ENTRY_POINT: 05d2ac34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetSpaceBoundingBox2D(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  float fVar3;
  float fVar4;
  
  FUN_05506d0c(&stack0x00000020,*param_1);
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fc8594();
  }
  lVar2 = *(long *)(unaff_x19 + 0x50);
  if (lVar2 != 0) {
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    bVar1 = *(byte *)(unaff_x19 + 0x61);
    if (unaff_w22 == bVar1) {
      fVar4 = *(float *)(unaff_x19 + 100);
    }
    else {
      *(float *)(unaff_x19 + 100) = fVar3;
      fVar4 = fVar3;
    }
    if (*(float *)(unaff_x19 + 0x48) <= fVar3 - fVar4) {
      *(byte *)(unaff_x19 + 0x60) = bVar1;
    }
    else {
      bVar1 = *(byte *)(unaff_x19 + 0x60);
    }
    return bVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


