/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 076e9b24
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w20;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float unaff_s11;
  float fVar5;
  float unaff_s12;
  
  fVar2 = (float)(*(code *)*param_1)();
  fVar4 = 1.0;
  if (fVar2 <= 1.0) {
    fVar4 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar4;
  }
  fVar4 = unaff_s9 * fVar3 + 0.0;
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_076e9cfc;
  FUN_08584234(*(long *)(unaff_x19 + 0x68),0.0 <= unaff_s8,0);
  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_076e9cfc;
  fVar2 = unaff_s12 * unaff_s11 + unaff_s10;
  FUN_08584234(*(long *)(unaff_x19 + 0x60),unaff_s8 < 0.0,0);
  fVar3 = *(float *)(unaff_x19 + 0x9c);
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_076e9cfc;
  fVar5 = fVar4 + fVar2;
  if (0.0 <= unaff_s8) {
    fVar3 = fVar5;
  }
  FUN_085849e0(*(long *)(unaff_x19 + 0x58),0);
  uVar1 = FUN_076e9f90(fVar3);
  if ((unaff_w20 & 1) == 0) {
    FUN_076ea14c(0,uVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar3 = fVar5;
    if (0.0 <= unaff_s8) goto LAB_076e9c48;
LAB_076e9c0c:
    if (0.0 <= unaff_s8) goto LAB_076e9cfc;
    FUN_076ea1d4(*(undefined4 *)(unaff_x19 + 0x9c));
    fVar3 = -fVar2 - fVar4;
  }
  else {
    if (unaff_s8 < 0.0) {
      FUN_076ea14c(0,uVar1,*(undefined8 *)(unaff_x19 + 0x78));
      goto LAB_076e9c0c;
    }
    FUN_076ea14c(fVar2 - *(float *)(unaff_x19 + 0x9c),uVar1,*(undefined8 *)(unaff_x19 + 0x78));
    fVar3 = fVar4 + *(float *)(unaff_x19 + 0x9c);
LAB_076e9c48:
    FUN_076ea1d4(fVar3);
    fVar3 = -*(float *)(unaff_x19 + 0x9c);
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_085849e0(*(long *)(unaff_x19 + 0x50),0);
    uVar1 = FUN_076e9f90(fVar3);
    fVar3 = 0.0;
    if (unaff_s8 < 0.0 && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
      fVar3 = *(float *)(unaff_x19 + 0x9c) - fVar2;
    }
    FUN_076ea14c(fVar3,uVar1,*(undefined8 *)(unaff_x19 + 0x70));
    if (0.0 <= unaff_s8) {
      fVar5 = *(float *)(unaff_x19 + 0x9c);
    }
    else if ((unaff_w20 & 1) != 0) {
      fVar5 = fVar4 + *(float *)(unaff_x19 + 0x9c);
    }
    FUN_076ea1d4(fVar5);
    FUN_076ea228(fVar2,fVar4);
    return;
  }
LAB_076e9cfc:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


