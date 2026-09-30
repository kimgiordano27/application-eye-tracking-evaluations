/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefabs
ENTRY_POINT: 072a63fc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefabs(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  double dVar6;
  double dVar7;
  double unaff_d8;
  double unaff_d9;
  
  do {
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x22) goto LAB_072a67cc;
    dVar6 = sin(((double)(int)unaff_x22 + unaff_d9) * unaff_d8);
    lVar2 = unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 1;
    *(float *)(unaff_x23 + lVar2 + 0x20) = (float)dVar6;
    if (unaff_x22 == 0x12) {
      lVar2 = **(long **)(unaff_x19 + 0xb8);
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_072a67cc;
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 != 0) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          lVar3 = 0;
          if (uVar1 < 0x13) {
            uVar1 = 0x12;
          }
          goto LAB_072a6474;
        }
      }
      break;
    }
    lVar2 = **(long **)(unaff_x19 + 0xb8);
    if (lVar2 == 0) break;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_072a67cc;
    unaff_x23 = *(long *)(lVar2 + 0x28);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      unaff_x19 = *unaff_x21;
    }
  } while (unaff_x23 != 0);
  goto LAB_072a67d0;
  while( true ) {
    *(undefined4 *)(lVar2 + 0x68 + lVar3) = 0x3f800000;
    dVar6 = DAT_01aee4c8;
    lVar3 = lVar3 + 4;
    if (lVar3 == 0x18) break;
LAB_072a6474:
    if ((ulong)uVar1 * 4 + -0x48 == lVar3) goto LAB_072a67cc;
  }
  lVar2 = 0x20;
  do {
    lVar3 = **(long **)(unaff_x19 + 0xb8);
    if (lVar3 == 0) goto LAB_072a67d0;
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_072a67cc;
    lVar3 = *(long *)(lVar3 + 0x28);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      unaff_x19 = *unaff_x21;
    }
    if (lVar3 == 0) goto LAB_072a67d0;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar2 - 8U) goto LAB_072a67cc;
    dVar7 = sin(((double)((int)lVar2 + -8) + 0.5 + -18.0) * dVar6);
    *(float *)(lVar3 + lVar2 * 4) = (float)dVar7;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x26);
  lVar2 = **(long **)(unaff_x19 + 0xb8);
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(lVar2 + 0x18);
    if ((uVar4 & 0xfffffffe) == 0) {
LAB_072a67cc:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar3 = *(long *)(lVar2 + 0x28);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      lVar5 = 0;
      if (uVar1 < 0x1f) {
        uVar1 = 0x1e;
      }
      do {
        if ((ulong)uVar1 * 4 + -0x78 == lVar5) goto LAB_072a67cc;
        *(undefined4 *)(lVar3 + 0x98 + lVar5) = 0;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x18);
      if ((uVar4 & 0xfffffffc) == 0) goto LAB_072a67cc;
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar3 = 0;
        do {
          if ((ulong)uVar1 * 4 - lVar3 == 0) goto LAB_072a67cc;
          *(undefined4 *)(lVar2 + 0x20 + lVar3) = 0;
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x18);
        lVar2 = 0xe;
        do {
          lVar3 = **(long **)(unaff_x19 + 0xb8);
          if (lVar3 == 0) goto LAB_072a67d0;
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
          lVar3 = *(long *)(lVar3 + 0x38);
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            unaff_x19 = *unaff_x21;
          }
          if (lVar3 == 0) goto LAB_072a67d0;
          if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar2 - 8U) goto LAB_072a67cc;
          dVar7 = sin(((double)((int)lVar2 + -8) + 0.5 + -6.0) * dVar6);
          *(float *)(lVar3 + lVar2 * 4) = (float)dVar7;
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0x14);
        lVar2 = **(long **)(unaff_x19 + 0xb8);
        if (lVar2 != 0) {
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
          lVar2 = *(long *)(lVar2 + 0x38);
          if (lVar2 != 0) {
            uVar1 = *(uint *)(lVar2 + 0x18);
            lVar3 = 0;
            if (uVar1 < 0xd) {
              uVar1 = 0xc;
            }
            do {
              if ((ulong)uVar1 * 4 + -0x30 == lVar3) goto LAB_072a67cc;
              *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0x3f800000;
              lVar3 = lVar3 + 4;
            } while (lVar3 != 0x18);
            lVar2 = 0x1a;
            do {
              lVar3 = **(long **)(unaff_x19 + 0xb8);
              if (lVar3 == 0) goto LAB_072a67d0;
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
              lVar3 = *(long *)(lVar3 + 0x38);
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                unaff_x19 = *unaff_x21;
              }
              if (lVar3 == 0) goto LAB_072a67d0;
              if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar2 - 8U) goto LAB_072a67cc;
              dVar7 = sin(((double)((int)lVar2 + -8) + 0.5) * unaff_d8);
              *(float *)(lVar3 + lVar2 * 4) = (float)dVar7;
              lVar2 = lVar2 + 1;
            } while (lVar2 != 0x2c);
            uVar4 = 0;
            do {
              lVar2 = **(long **)(unaff_x19 + 0xb8);
              if (lVar2 == 0) goto LAB_072a67d0;
              if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_072a67cc;
              lVar2 = *(long *)(lVar2 + 0x30);
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                unaff_x19 = *unaff_x21;
              }
              if (lVar2 == 0) goto LAB_072a67d0;
              if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_072a67cc;
              dVar7 = sin(((double)(int)uVar4 + 0.5) * dVar6);
              lVar3 = uVar4 * 4;
              uVar4 = uVar4 + 1;
              *(float *)(lVar2 + lVar3 + 0x20) = (float)dVar7;
            } while (uVar4 != 0xc);
            lVar2 = **(long **)(unaff_x19 + 0xb8);
            if (lVar2 != 0) {
              if (2 < *(uint *)(lVar2 + 0x18)) {
                lVar2 = *(long *)(lVar2 + 0x30);
                if (lVar2 == 0) goto LAB_072a67d0;
                uVar1 = *(uint *)(lVar2 + 0x18);
                lVar3 = 0;
                if (uVar1 < 0xd) {
                  uVar1 = 0xc;
                }
                while ((ulong)uVar1 * 4 + -0x30 != lVar3) {
                  *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
                  lVar3 = lVar3 + 4;
                  if (lVar3 == 0x60) {
                    return;
                  }
                }
              }
              goto LAB_072a67cc;
            }
          }
        }
      }
    }
  }
LAB_072a67d0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


