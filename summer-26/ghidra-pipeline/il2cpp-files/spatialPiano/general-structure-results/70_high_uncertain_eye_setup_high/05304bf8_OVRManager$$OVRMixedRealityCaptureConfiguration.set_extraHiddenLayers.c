/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers
ENTRY_POINT: 05304bf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
               (long param_1,float param_2,float param_3,float param_4)

{
  float *in_x9;
  long in_x10;
  long unaff_x19;
  undefined1 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s15;
  
  while( true ) {
    *in_x9 = SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4) / unaff_s15 + in_x9[-8]
    ;
    if (in_x10 <= (long)unaff_x24) {
      return;
    }
    if (param_1 == 0) break;
    if (((ulong)*(uint *)(param_1 + 0x18) <= unaff_x24 - 1) ||
       (*(uint *)(param_1 + 0x18) <= unaff_x24)) {
LAB_05304c58:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    param_1 = param_1 + unaff_x22;
    param_3 = *(float *)(param_1 + -0x38);
    param_4 = *(float *)(param_1 + -0x34);
    param_2 = *(float *)(param_1 + -0x3c);
    fVar1 = *(float *)(param_1 + -0x1c);
    fVar2 = *(float *)(param_1 + -0x18);
    fVar3 = *(float *)(param_1 + -0x14);
    if (*(char *)(unaff_x23 + 0x2c7) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x23 + 0x2c7) = unaff_w20;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_1 = *(long *)(unaff_x19 + 0x68);
    if (param_1 == 0) break;
    if (((ulong)*(uint *)(param_1 + 0x18) <= unaff_x24 - 1) ||
       (*(uint *)(param_1 + 0x18) <= unaff_x24)) goto LAB_05304c58;
    param_2 = param_2 - fVar1;
    param_3 = param_3 - fVar2;
    in_x9 = (float *)(param_1 + unaff_x22);
    param_4 = param_4 - fVar3;
    in_x10 = (long)*(int *)(unaff_x19 + 0x50);
    unaff_x24 = unaff_x24 + 1;
    unaff_x22 = unaff_x22 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


