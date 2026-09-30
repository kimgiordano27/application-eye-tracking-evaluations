/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 07a65340
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(float *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_092f0d18;
  if ((DAT_09895564 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0d20);
    FUN_04077588(PTR_DAT_092f0d18);
    DAT_09895564 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_092f0d20;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  }
  lVar3 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)puVar1);
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  fVar6 = *param_1;
  uVar7 = *(undefined8 *)(param_1 + 1);
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar5 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8) <
      *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc)) {
    if (lVar3 == 0) goto LAB_07a65590;
    uVar7 = 0;
    goto LAB_07a6544c;
  }
  fVar6 = *param_1;
  uVar7 = *(undefined8 *)(param_1 + 1);
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar5 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar6 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5);
  if (fVar6 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar6 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  }
  else {
    uVar7 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) / fVar6,
                     (float)*(undefined8 *)param_1 / fVar6);
    fVar6 = param_1[2] / fVar6;
  }
  fVar5 = (float)((ulong)uVar7 >> 0x20);
  *(undefined8 *)param_1 = uVar7;
  param_1[2] = fVar6;
  if (ABS((float)uVar7) <= ABS(fVar5)) {
    if (fVar5 <= 0.0) {
      if (lVar3 == 0) goto LAB_07a65590;
      uVar7 = 4;
    }
    else {
      if (lVar3 == 0) goto LAB_07a65590;
      uVar7 = 5;
    }
  }
  else if ((float)uVar7 <= 0.0) {
    if (lVar3 == 0) goto LAB_07a65590;
    uVar7 = 3;
  }
  else {
    if (lVar3 == 0) {
LAB_07a65590:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = 2;
  }
LAB_07a6544c:
                    /* WARNING: Could not recover jumptable at 0x07a65468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar7,*(undefined8 *)(lVar3 + 0x28));
  return;
}


