/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$.cctor
ENTRY_POINT: 07a65420
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_2_0___cctor(float param_1,undefined1 param_2 [16])

{
  undefined8 uVar1;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (SQRT(param_1 + param_2._0_4_ + param_2._4_4_) < *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc)
     ) {
    if (unaff_x20 == 0) goto LAB_07a65590;
    uVar1 = 0;
    goto LAB_07a6544c;
  }
  fVar3 = *unaff_x19;
  uVar1 = *(undefined8 *)(unaff_x19 + 1);
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar2 = (float)uVar1;
  fVar4 = (float)((ulong)uVar1 >> 0x20);
  fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar3 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    uVar1 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  }
  else {
    uVar1 = CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) / fVar3,
                     (float)*(undefined8 *)unaff_x19 / fVar3);
    fVar3 = unaff_x19[2] / fVar3;
  }
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  *(undefined8 *)unaff_x19 = uVar1;
  unaff_x19[2] = fVar3;
  if (ABS((float)uVar1) <= ABS(fVar2)) {
    if (fVar2 <= 0.0) {
      if (unaff_x20 == 0) goto LAB_07a65590;
      uVar1 = 4;
    }
    else {
      if (unaff_x20 == 0) goto LAB_07a65590;
      uVar1 = 5;
    }
  }
  else if ((float)uVar1 <= 0.0) {
    if (unaff_x20 == 0) goto LAB_07a65590;
    uVar1 = 3;
  }
  else {
    if (unaff_x20 == 0) {
LAB_07a65590:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = 2;
  }
LAB_07a6544c:
                    /* WARNING: Could not recover jumptable at 0x07a65468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x40),uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


