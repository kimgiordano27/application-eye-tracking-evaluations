/*
FUNCTION_NAME: OVRPlugin.OVRP_1_59_0$$.cctor
ENTRY_POINT: 076e6a98
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


void OVRPlugin_OVRP_1_59_0___cctor(long param_1,float param_2,float param_3,float param_4)

{
  float *in_x9;
  long in_x10;
  long unaff_x19;
  undefined1 unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  float unaff_s9;
  float fVar1;
  float fVar2;
  float fVar3;
  
  while( true ) {
    *in_x9 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4) / unaff_s9 + in_x9[-8];
    if (in_x10 <= (long)unaff_x23) {
      return;
    }
    if (param_1 == 0) break;
    if (((ulong)*(uint *)(param_1 + 0x18) <= unaff_x23 - 1) ||
       (*(uint *)(param_1 + 0x18) <= unaff_x23)) {
LAB_076e6af8:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    param_1 = param_1 + unaff_x21;
    param_3 = *(float *)(param_1 + -0x38);
    param_4 = *(float *)(param_1 + -0x34);
    param_2 = *(float *)(param_1 + -0x3c);
    fVar1 = *(float *)(param_1 + -0x1c);
    fVar2 = *(float *)(param_1 + -0x18);
    fVar3 = *(float *)(param_1 + -0x14);
    if (*(char *)(unaff_x24 + 0xe17) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x24 + 0xe17) = unaff_w20;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    param_1 = *(long *)(unaff_x19 + 0x68);
    if (param_1 == 0) break;
    if (((ulong)*(uint *)(param_1 + 0x18) <= unaff_x23 - 1) ||
       (*(uint *)(param_1 + 0x18) <= unaff_x23)) goto LAB_076e6af8;
    param_2 = param_2 - fVar1;
    param_3 = param_3 - fVar2;
    in_x9 = (float *)(param_1 + unaff_x21);
    param_4 = param_4 - fVar3;
    in_x10 = (long)*(int *)(unaff_x19 + 0x50);
    unaff_x23 = unaff_x23 + 1;
    unaff_x21 = unaff_x21 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


