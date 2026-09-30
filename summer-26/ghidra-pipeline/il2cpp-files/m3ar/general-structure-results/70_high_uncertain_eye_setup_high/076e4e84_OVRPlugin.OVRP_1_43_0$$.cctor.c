/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 076e4e84
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


void OVRPlugin_OVRP_1_43_0___cctor(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
                    /* try { // try from 076e4e90 to 077e5047 has its CatchHandler @ 076e4e90
                       catch() { ... } // from try @ 076e4e90 with catch @ 076e4e90
                       catch() { ... } // from try @ 076e50a8 with catch @ 076e4e90
                       catch() { ... } // from try @ 076e5230 with catch @ 076e4e90
                       catch() { ... } // from try @ 076e52b4 with catch @ 076e4e90
                       catch() { ... } // from try @ 076e5308 with catch @ 076e4e90
                       catch() { ... } // from try @ 076e5544 with catch @ 076e4e90
                       catch() { ... } // from try @ 076e558c with catch @ 076e4e90 */
  if (DAT_09539e19 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e19 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar7 = *(float *)(unaff_x19 + 0x1c);
  fVar6 = *(float *)(unaff_x21 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  fVar5 = SQRT((unaff_s12 - param_3) * (unaff_s12 - param_3) +
               (unaff_s11 - unaff_s8) * (unaff_s11 - unaff_s8) +
               (unaff_s13 - unaff_s9) * (unaff_s13 - unaff_s9));
  if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = -fVar5;
  uVar2 = FUN_08589e5c(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (fVar6 <= ABS(fVar5 + fVar7)) {
      if (*(float *)(unaff_x19 + 0x1c) <= fVar4) {
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_x21 + 0x548))();
      if (iVar1 < 1) {
        return;
      }
    }
  }
  *(float *)(unaff_x19 + 0x1c) = fVar4;
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  return;
}


