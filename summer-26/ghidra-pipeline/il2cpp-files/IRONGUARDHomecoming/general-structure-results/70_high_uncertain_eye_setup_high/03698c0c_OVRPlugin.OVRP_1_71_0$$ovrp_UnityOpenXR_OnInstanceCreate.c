/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 03698c0c
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


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong uVar1;
  long unaff_x25;
  ulong unaff_x26;
  float fVar2;
  float unaff_s9;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  while (uVar1 = unaff_x24, !(bool)in_CY) {
    param_1 = param_1 + unaff_x22;
    fVar3 = *(float *)(param_1 + -0x38);
    fVar2 = *(float *)(param_1 + -0x34);
    fVar5 = *(float *)(param_1 + -0x3c);
    fVar7 = *(float *)(param_1 + -0x1c);
    fVar6 = *(float *)(param_1 + -0x18);
    fVar4 = *(float *)(param_1 + -0x14);
    if (*(char *)(unaff_x25 + 0x3e) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x3e) = unaff_w21;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_1 = *unaff_x20;
    if (param_1 == 0) {
LAB_03698ce4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((*(uint *)(param_1 + 0x18) <= unaff_x26) || (*(uint *)(param_1 + 0x18) <= uVar1)) break;
    fVar5 = fVar5 - fVar7;
    fVar3 = fVar3 - fVar6;
    fVar2 = fVar2 - fVar4;
    *(float *)(param_1 + unaff_x22) =
         SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) / unaff_s9 +
         ((float *)(param_1 + unaff_x22))[-8];
    unaff_x24 = uVar1 + 1;
    unaff_x22 = unaff_x22 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x24) {
      return;
    }
    if (param_1 == 0) goto LAB_03698ce4;
    if (*(uint *)(param_1 + 0x18) <= uVar1) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x24;
    unaff_x26 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


