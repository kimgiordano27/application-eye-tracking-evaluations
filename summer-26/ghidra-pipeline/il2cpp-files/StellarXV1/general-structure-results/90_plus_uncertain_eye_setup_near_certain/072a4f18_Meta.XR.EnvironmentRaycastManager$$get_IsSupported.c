/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 072a4f18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__get_IsSupported(long param_1)

{
  uint uVar1;
  long lVar2;
  long in_x9;
  int in_w10;
  long lVar3;
  long lVar4;
  int iVar5;
  uint unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  float fVar6;
  float fVar7;
  
  if ((unaff_w21 < *(uint *)(in_x9 + 0x18)) && (in_w10 != 1)) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
LAB_072a4ff0:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_w21 < *(uint *)(lVar3 + 0x18)) {
      if (unaff_w20 < 1) {
        return;
      }
      lVar4 = *(long *)(unaff_x22 + 0x188);
      if (lVar4 == 0) goto LAB_072a4ff0;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        lVar2 = *(long *)(lVar4 + 0x20);
        if (lVar2 == 0) goto LAB_072a4ff0;
        iVar5 = unaff_w20 + 1;
        fVar6 = *(float *)(in_x9 + (long)(int)unaff_w21 * 4 + 0x20);
        fVar7 = *(float *)(lVar3 + (long)(int)unaff_w21 * 4 + 0x20);
        lVar3 = *(long *)(lVar4 + 0x28);
        uVar1 = unaff_w19;
        if (unaff_w19 <= *(uint *)(lVar2 + 0x18)) {
          uVar1 = *(uint *)(lVar2 + 0x18);
        }
        while (uVar1 != unaff_w19) {
          if (lVar3 == 0) goto LAB_072a4ff0;
          lVar4 = (long)(int)unaff_w19;
          if (*(uint *)(lVar3 + 0x18) <= unaff_w19) break;
          iVar5 = iVar5 + -1;
          unaff_w19 = unaff_w19 + 1;
          *(float *)(lVar3 + lVar4 * 4 + 0x20) = fVar7 * *(float *)(lVar2 + lVar4 * 4 + 0x20);
          *(float *)(lVar2 + 0x20 + lVar4 * 4) = fVar6 * *(float *)(lVar2 + 0x20 + lVar4 * 4);
          if (iVar5 < 2) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


