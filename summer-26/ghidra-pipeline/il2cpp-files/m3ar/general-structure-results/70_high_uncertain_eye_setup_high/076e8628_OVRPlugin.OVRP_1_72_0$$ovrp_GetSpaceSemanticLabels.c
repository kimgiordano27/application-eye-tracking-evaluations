/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceSemanticLabels
ENTRY_POINT: 076e8628
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


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceSemanticLabels
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               float *param_5,float *param_6)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_08f70528;
  if ((DAT_095482ec & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f70528);
    DAT_095482ec = 1;
  }
  fVar4 = -1.0;
  fVar7 = -1.0;
  fVar9 = *param_5;
  fVar11 = param_5[1];
  fVar12 = param_5[2];
  fVar10 = *param_6;
  fVar14 = param_6[1];
  fVar15 = param_6[2];
  if (0.0 <= *(float *)(param_4 + 0x160)) {
    fVar4 = 1.0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    fVar7 = -1.0;
    thunk_FUN_0408f364();
  }
  fVar3 = (float)FUN_08596b20(param_6,0);
  if (DAT_0953c2f4 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_0953c2f4 = '\x01';
  }
  fVar6 = param_3 * param_3 + fVar3 * fVar3 + fVar7 * fVar7;
  fVar5 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8);
  if (fVar5 <= fVar6) {
    fVar5 = (fVar12 - fVar15) * param_3 + (fVar9 - fVar10) * fVar3 + (fVar11 - fVar14) * fVar7;
    uVar13 = CONCAT44((fVar7 * fVar5) / fVar6,(fVar3 * fVar5) / fVar6);
    fVar7 = (param_3 * fVar5) / fVar6;
  }
  else {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar7 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
    fVar6 = fVar5;
  }
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = (float)((ulong)uVar13 >> 0x20);
  fVar7 = fVar7 * fVar7;
  fVar8 = SQRT((float)uVar13 * (float)uVar13 + fVar3 * fVar3 + fVar7);
  fVar5 = (float)FUN_08596b20(param_6,0);
  fVar3 = -fVar8;
  if (0.0 <= (fVar12 - fVar15) * fVar6 + (fVar9 - fVar10) * fVar5 + (fVar11 - fVar14) * fVar7) {
    fVar3 = fVar8;
  }
  *(float *)(param_4 + 0x160) = fVar3;
  fVar7 = -1.0;
  if (0.0 <= fVar3) {
    fVar7 = 1.0;
  }
  if (fVar4 != fVar7) {
    lVar2 = *(long *)(param_4 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076e883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(fVar4,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  return;
}


