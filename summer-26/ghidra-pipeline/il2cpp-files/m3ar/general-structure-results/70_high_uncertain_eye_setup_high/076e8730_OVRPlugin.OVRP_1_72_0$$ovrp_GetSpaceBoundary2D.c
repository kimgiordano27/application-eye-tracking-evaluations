/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundary2D
ENTRY_POINT: 076e8730
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundary2D
               (long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 uVar6;
  
  uVar6 = **(undefined8 **)(*param_1 + 0xb8);
  fVar4 = *(float *)(*(undefined8 **)(*param_1 + 0xb8) + 1);
  if (DAT_09539e17 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e17 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = (float)uVar6;
  fVar2 = (float)((ulong)uVar6 >> 0x20);
  fVar4 = fVar4 * fVar4;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4);
  fVar2 = (float)FUN_08596b20();
  fVar3 = -fVar5;
  if (0.0 <= unaff_s10 * param_4 + unaff_s11 * fVar2 + unaff_s12 * fVar4) {
    fVar3 = fVar5;
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
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  return;
}


