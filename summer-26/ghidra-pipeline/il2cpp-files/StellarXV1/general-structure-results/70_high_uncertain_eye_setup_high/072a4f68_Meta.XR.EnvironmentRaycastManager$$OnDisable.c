/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDisable
ENTRY_POINT: 072a4f68
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDisable(long param_1)

{
  uint uVar1;
  long in_x9;
  long lVar2;
  long in_x10;
  long in_x11;
  int iVar3;
  long in_x12;
  long lVar4;
  uint unaff_w19;
  int unaff_w20;
  float fVar5;
  float fVar6;
  
  iVar3 = unaff_w20 + 1;
  fVar5 = *(float *)(in_x9 + in_x12 * 4 + 0x20);
  fVar6 = *(float *)(in_x10 + in_x12 * 4 + 0x20);
  lVar2 = *(long *)(in_x11 + 0x28);
  uVar1 = unaff_w19;
  if (unaff_w19 <= *(uint *)(param_1 + 0x18)) {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  while (uVar1 != unaff_w19) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = (long)(int)unaff_w19;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) break;
    iVar3 = iVar3 + -1;
    unaff_w19 = unaff_w19 + 1;
    *(float *)(lVar2 + lVar4 * 4 + 0x20) = fVar6 * *(float *)(param_1 + lVar4 * 4 + 0x20);
    *(float *)(param_1 + 0x20 + lVar4 * 4) = fVar5 * *(float *)(param_1 + 0x20 + lVar4 * 4);
    if (iVar3 < 2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


