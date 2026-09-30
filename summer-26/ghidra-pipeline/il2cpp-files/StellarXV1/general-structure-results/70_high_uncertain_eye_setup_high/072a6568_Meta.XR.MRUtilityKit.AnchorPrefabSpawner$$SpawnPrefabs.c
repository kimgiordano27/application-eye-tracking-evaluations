/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$SpawnPrefabs
ENTRY_POINT: 072a6568
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__SpawnPrefabs(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong in_x9;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar4;
  double dVar5;
  double unaff_d8;
  double unaff_d9;
  
  if ((in_x9 & 0xfffffffc) == 0) goto LAB_072a67cc;
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    lVar2 = 0;
    do {
      if ((ulong)uVar1 * 4 - lVar2 == 0) goto LAB_072a67cc;
      *(undefined4 *)(lVar3 + 0x20 + lVar2) = 0;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x18);
    lVar3 = 0xe;
    do {
      lVar2 = **(long **)(unaff_x19 + 0xb8);
      if (lVar2 == 0) goto LAB_072a67d0;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
      lVar2 = *(long *)(lVar2 + 0x38);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        unaff_x19 = *unaff_x21;
      }
      if (lVar2 == 0) goto LAB_072a67d0;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar3 - 8U) goto LAB_072a67cc;
      dVar5 = sin(((double)((int)lVar3 + -8) + 0.5 + -6.0) * unaff_d9);
      *(float *)(lVar2 + lVar3 * 4) = (float)dVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x14);
    lVar3 = **(long **)(unaff_x19 + 0xb8);
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
      lVar3 = *(long *)(lVar3 + 0x38);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar2 = 0;
        if (uVar1 < 0xd) {
          uVar1 = 0xc;
        }
        do {
          if ((ulong)uVar1 * 4 + -0x30 == lVar2) goto LAB_072a67cc;
          *(undefined4 *)(lVar3 + 0x50 + lVar2) = 0x3f800000;
          lVar2 = lVar2 + 4;
        } while (lVar2 != 0x18);
        lVar3 = 0x1a;
        do {
          lVar2 = **(long **)(unaff_x19 + 0xb8);
          if (lVar2 == 0) goto LAB_072a67d0;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
          lVar2 = *(long *)(lVar2 + 0x38);
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            unaff_x19 = *unaff_x21;
          }
          if (lVar2 == 0) goto LAB_072a67d0;
          if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar3 - 8U) goto LAB_072a67cc;
          dVar5 = sin(((double)((int)lVar3 + -8) + 0.5) * unaff_d8);
          *(float *)(lVar2 + lVar3 * 4) = (float)dVar5;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x2c);
        uVar4 = 0;
        do {
          lVar3 = **(long **)(unaff_x19 + 0xb8);
          if (lVar3 == 0) goto LAB_072a67d0;
          if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_072a67cc;
          lVar3 = *(long *)(lVar3 + 0x30);
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            unaff_x19 = *unaff_x21;
          }
          if (lVar3 == 0) goto LAB_072a67d0;
          if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_072a67cc;
          dVar5 = sin(((double)(int)uVar4 + 0.5) * unaff_d9);
          lVar2 = uVar4 * 4;
          uVar4 = uVar4 + 1;
          *(float *)(lVar3 + lVar2 + 0x20) = (float)dVar5;
        } while (uVar4 != 0xc);
        lVar3 = **(long **)(unaff_x19 + 0xb8);
        if (lVar3 != 0) {
          if (2 < *(uint *)(lVar3 + 0x18)) {
            lVar3 = *(long *)(lVar3 + 0x30);
            if (lVar3 == 0) goto LAB_072a67d0;
            uVar1 = *(uint *)(lVar3 + 0x18);
            lVar2 = 0;
            if (uVar1 < 0xd) {
              uVar1 = 0xc;
            }
            while ((ulong)uVar1 * 4 + -0x30 != lVar2) {
              *(undefined4 *)(lVar3 + 0x50 + lVar2) = 0;
              lVar2 = lVar2 + 4;
              if (lVar2 == 0x60) {
                return;
              }
            }
          }
LAB_072a67cc:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
      }
    }
  }
LAB_072a67d0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


