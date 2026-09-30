/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 03698c88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceDestroy
               (long param_1,float param_2,float param_3,float param_4)

{
  ulong uVar1;
  float *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  float unaff_s9;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  while( true ) {
    *in_x9 = SQRT(param_2 + param_4) / unaff_s9 + param_3;
    uVar1 = unaff_x24 + 1;
    unaff_x22 = unaff_x22 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar1) {
      return;
    }
    if (param_1 == 0) break;
    if ((*(uint *)(param_1 + 0x18) <= unaff_x24) || (*(uint *)(param_1 + 0x18) <= uVar1)) {
LAB_03698ce0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_1 = param_1 + unaff_x22;
    fVar2 = *(float *)(param_1 + -0x38);
    param_4 = *(float *)(param_1 + -0x34);
    fVar4 = *(float *)(param_1 + -0x3c);
    fVar6 = *(float *)(param_1 + -0x1c);
    fVar5 = *(float *)(param_1 + -0x18);
    fVar3 = *(float *)(param_1 + -0x14);
    if (*(char *)(unaff_x25 + 0x3e) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x3e) = unaff_w21;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    if ((*(uint *)(param_1 + 0x18) <= unaff_x24) || (*(uint *)(param_1 + 0x18) <= uVar1))
    goto LAB_03698ce0;
    fVar4 = fVar4 - fVar6;
    fVar2 = fVar2 - fVar5;
    param_4 = param_4 - fVar3;
    in_x9 = (float *)(param_1 + unaff_x22);
    param_4 = param_4 * param_4;
    param_2 = fVar4 * fVar4 + fVar2 * fVar2;
    param_3 = in_x9[-8];
    unaff_x24 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


