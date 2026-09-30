/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 072a4cac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__EnsureDepthManagerIsPresent(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint unaff_w19;
  int unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  float fVar6;
  float fVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c2198);
    *(undefined1 *)(unaff_x24 + 0x873) = 1;
  }
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x23;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_072a4e30:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_072a4e30;
      lVar2 = *(long *)(lVar2 + (long)(int)unaff_w22 * 8 + 0x20);
      if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x18) == 0) || (*(int *)(lVar2 + 0x18) == 1)) goto LAB_072a4e30;
        fVar6 = *(float *)(lVar2 + 0x20);
        fVar7 = *(float *)(lVar2 + 0x24);
        if (*(int *)(unaff_x21 + 0x28) == 3) {
          if (unaff_w20 < 1) {
            return;
          }
          lVar2 = *(long *)(unaff_x21 + 0x188);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) != 0) {
              lVar2 = *(long *)(lVar2 + 0x20);
              if (lVar2 == 0) goto LAB_072a4e34;
              iVar4 = unaff_w20 + 1;
              uVar1 = unaff_w19;
              if (unaff_w19 <= *(uint *)(lVar2 + 0x18)) {
                uVar1 = *(uint *)(lVar2 + 0x18);
              }
              while (uVar1 != unaff_w19) {
                iVar4 = iVar4 + -1;
                *(float *)(lVar2 + 0x20 + (long)(int)unaff_w19 * 4) =
                     (1.0 / (fVar6 + fVar7)) * *(float *)(lVar2 + 0x20 + (long)(int)unaff_w19 * 4);
                unaff_w19 = unaff_w19 + 1;
                if (iVar4 < 2) {
                  return;
                }
              }
            }
            goto LAB_072a4e30;
          }
        }
        else {
          if (unaff_w20 < 1) {
            return;
          }
          lVar2 = *(long *)(unaff_x21 + 0x188);
          if (lVar2 != 0) {
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
              lVar3 = *(long *)(lVar2 + 0x20);
              if (lVar3 == 0) goto LAB_072a4e34;
              lVar2 = *(long *)(lVar2 + 0x28);
              iVar4 = unaff_w20 + 1;
              uVar1 = unaff_w19;
              if (unaff_w19 <= *(uint *)(lVar3 + 0x18)) {
                uVar1 = *(uint *)(lVar3 + 0x18);
              }
              while (uVar1 != unaff_w19) {
                if (lVar2 == 0) goto LAB_072a4e34;
                lVar5 = (long)(int)unaff_w19;
                if (*(uint *)(lVar2 + 0x18) <= unaff_w19) break;
                iVar4 = iVar4 + -1;
                unaff_w19 = unaff_w19 + 1;
                *(float *)(lVar2 + lVar5 * 4 + 0x20) = fVar7 * *(float *)(lVar3 + lVar5 * 4 + 0x20);
                *(float *)(lVar3 + 0x20 + lVar5 * 4) = fVar6 * *(float *)(lVar3 + 0x20 + lVar5 * 4);
                if (iVar4 < 2) {
                  return;
                }
              }
            }
            goto LAB_072a4e30;
          }
        }
      }
    }
  }
LAB_072a4e34:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


