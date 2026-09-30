/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceRoomLayout
ENTRY_POINT: 076e86ac
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceRoomLayout(float param_1,float param_2)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 uVar7;
  float unaff_s14;
  float unaff_s15;
  
  if (in_w8 == 0) {
    FUN_0403162c(PTR_DAT_08f67c68);
    *(undefined1 *)(unaff_x21 + 0x2f4) = 1;
  }
  fVar4 = unaff_s9 * unaff_s9 + param_1 * param_1 + param_2 * param_2;
  fVar3 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8);
  if (fVar3 <= fVar4) {
    fVar3 = (unaff_s13 - unaff_s15) * unaff_s9 +
            (unaff_s10 - unaff_s11) * param_1 + (unaff_s12 - unaff_s14) * param_2;
    uVar7 = CONCAT44((param_2 * fVar3) / fVar4,(param_1 * fVar3) / fVar4);
    fVar5 = (unaff_s9 * fVar3) / fVar4;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar5 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    fVar4 = fVar3;
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = (float)((ulong)uVar7 >> 0x20);
  fVar5 = fVar5 * fVar5;
  fVar6 = SQRT((float)uVar7 * (float)uVar7 + fVar3 * fVar3 + fVar5);
  fVar2 = (float)FUN_08596b20();
  fVar3 = -fVar6;
  if (0.0 <= (unaff_s13 - unaff_s15) * fVar4 +
             (unaff_s10 - unaff_s11) * fVar2 + (unaff_s12 - unaff_s14) * fVar5) {
    fVar3 = fVar6;
  }
  *(float *)(unaff_x19 + 0x160) = fVar3;
  fVar4 = -1.0;
  if (0.0 <= fVar3) {
    fVar4 = 1.0;
  }
  if (unaff_s8 != fVar4) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076e883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (unaff_s8,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  return;
}


