/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimming
ENTRY_POINT: 076e9ba0
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimming(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar3;
  
  fVar2 = *(float *)(unaff_x19 + 0x9c);
  if (unaff_s10 <= fVar2) {
    unaff_s10 = fVar2;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_076e9cfc;
  fVar3 = unaff_s9 + unaff_s10;
  if (0.0 <= unaff_s8) {
    fVar2 = fVar3;
  }
  FUN_085849e0(*(long *)(unaff_x19 + 0x58),0);
  uVar1 = FUN_076e9f90(fVar2);
  if ((unaff_w20 & 1) == 0) {
    FUN_076ea14c(0,uVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar2 = fVar3;
    if (0.0 <= unaff_s8) goto LAB_076e9c48;
LAB_076e9c0c:
    if (0.0 <= unaff_s8) goto LAB_076e9cfc;
    FUN_076ea1d4(*(undefined4 *)(unaff_x19 + 0x9c));
    fVar2 = -unaff_s10 - unaff_s9;
  }
  else {
    if (unaff_s8 < 0.0) {
      FUN_076ea14c(0,uVar1,*(undefined8 *)(unaff_x19 + 0x78));
      goto LAB_076e9c0c;
    }
    FUN_076ea14c(unaff_s10 - *(float *)(unaff_x19 + 0x9c),uVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar2 = unaff_s9 + *(float *)(unaff_x19 + 0x9c);
LAB_076e9c48:
    FUN_076ea1d4(fVar2);
    fVar2 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_085849e0(*(long *)(unaff_x19 + 0x50),0);
    uVar1 = FUN_076e9f90(fVar2);
    fVar2 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar2 = *(float *)(unaff_x19 + 0x9c) - unaff_s10;
    }
    FUN_076ea14c(fVar2,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar3 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar3 = unaff_s9 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_076ea1d4(fVar3);
    FUN_076ea228(unaff_s10);
    return;
  }
LAB_076e9cfc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


