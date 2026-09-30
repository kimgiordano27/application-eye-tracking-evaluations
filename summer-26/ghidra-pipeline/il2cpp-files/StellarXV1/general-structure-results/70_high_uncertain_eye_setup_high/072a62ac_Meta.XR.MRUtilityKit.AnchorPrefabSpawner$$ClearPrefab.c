/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefab
ENTRY_POINT: 072a62ac
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


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefab(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar3 = FUN_04077674();
  if ((*(uint *)(unaff_x20 + -8) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x28),uVar3);
    uVar3 = FUN_04077674(*unaff_x22,0x24);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
      thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x30),uVar3);
      uVar3 = FUN_04077674(*unaff_x22,0x24);
      puVar2 = PTR_DAT_09285ae0;
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
        thunk_FUN_040ec700();
        **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
        thunk_FUN_040ec700(*(undefined8 *)(*unaff_x21 + 0xb8));
        dVar11 = DAT_01aed4b0;
        lVar7 = *unaff_x21;
        uVar8 = 0;
        do {
          lVar4 = **(long **)(lVar7 + 0xb8);
          if (lVar4 == 0) goto LAB_072a67d0;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_072a67cc;
          lVar4 = *(long *)(lVar4 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar7 = *unaff_x21;
          }
          if (lVar4 == 0) goto LAB_072a67d0;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_072a67cc;
          dVar9 = sin(((double)(int)uVar8 + 0.5) * dVar11);
          lVar5 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(float *)(lVar4 + lVar5 + 0x20) = (float)dVar9;
        } while (uVar8 != 0x24);
        uVar8 = 0;
        do {
          lVar4 = **(long **)(lVar7 + 0xb8);
          if (lVar4 == 0) goto LAB_072a67d0;
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_072a67cc;
          lVar4 = *(long *)(lVar4 + 0x28);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar7 = *unaff_x21;
          }
          if (lVar4 == 0) goto LAB_072a67d0;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_072a67cc;
          dVar9 = sin(((double)(int)uVar8 + 0.5) * dVar11);
          lVar5 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(float *)(lVar4 + lVar5 + 0x20) = (float)dVar9;
        } while (uVar8 != 0x12);
        lVar4 = **(long **)(lVar7 + 0xb8);
        if (lVar4 != 0) {
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_072a67cc;
          lVar4 = *(long *)(lVar4 + 0x28);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            lVar5 = 0;
            if (uVar1 < 0x13) {
              uVar1 = 0x12;
            }
            do {
              if ((ulong)uVar1 * 4 + -0x48 == lVar5) goto LAB_072a67cc;
              *(undefined4 *)(lVar4 + 0x68 + lVar5) = 0x3f800000;
              dVar9 = DAT_01aee4c8;
              lVar5 = lVar5 + 4;
            } while (lVar5 != 0x18);
            lVar4 = 0x20;
            do {
              lVar5 = **(long **)(lVar7 + 0xb8);
              if (lVar5 == 0) goto LAB_072a67d0;
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a67cc;
              lVar5 = *(long *)(lVar5 + 0x28);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar7 = *unaff_x21;
              }
              if (lVar5 == 0) goto LAB_072a67d0;
              if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar4 - 8U) goto LAB_072a67cc;
              dVar10 = sin(((double)((int)lVar4 + -8) + 0.5 + -18.0) * dVar9);
              *(float *)(lVar5 + lVar4 * 4) = (float)dVar10;
              lVar4 = lVar4 + 1;
            } while (lVar4 != 0x26);
            lVar4 = **(long **)(lVar7 + 0xb8);
            if (lVar4 != 0) {
              uVar8 = *(ulong *)(lVar4 + 0x18);
              if ((uVar8 & 0xfffffffe) == 0) goto LAB_072a67cc;
              lVar5 = *(long *)(lVar4 + 0x28);
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                lVar6 = 0;
                if (uVar1 < 0x1f) {
                  uVar1 = 0x1e;
                }
                do {
                  if ((ulong)uVar1 * 4 + -0x78 == lVar6) goto LAB_072a67cc;
                  *(undefined4 *)(lVar5 + 0x98 + lVar6) = 0;
                  lVar6 = lVar6 + 4;
                } while (lVar6 != 0x18);
                if ((uVar8 & 0xfffffffc) == 0) goto LAB_072a67cc;
                lVar4 = *(long *)(lVar4 + 0x38);
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  lVar5 = 0;
                  do {
                    if ((ulong)uVar1 * 4 - lVar5 == 0) goto LAB_072a67cc;
                    *(undefined4 *)(lVar4 + 0x20 + lVar5) = 0;
                    lVar5 = lVar5 + 4;
                  } while (lVar5 != 0x18);
                  lVar4 = 0xe;
                  do {
                    lVar5 = **(long **)(lVar7 + 0xb8);
                    if (lVar5 == 0) goto LAB_072a67d0;
                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
                    lVar5 = *(long *)(lVar5 + 0x38);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar7 = *unaff_x21;
                    }
                    if (lVar5 == 0) goto LAB_072a67d0;
                    if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar4 - 8U) goto LAB_072a67cc;
                    dVar10 = sin(((double)((int)lVar4 + -8) + 0.5 + -6.0) * dVar9);
                    *(float *)(lVar5 + lVar4 * 4) = (float)dVar10;
                    lVar4 = lVar4 + 1;
                  } while (lVar4 != 0x14);
                  lVar4 = **(long **)(lVar7 + 0xb8);
                  if (lVar4 != 0) {
                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
                    lVar4 = *(long *)(lVar4 + 0x38);
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      lVar5 = 0;
                      if (uVar1 < 0xd) {
                        uVar1 = 0xc;
                      }
                      do {
                        if ((ulong)uVar1 * 4 + -0x30 == lVar5) goto LAB_072a67cc;
                        *(undefined4 *)(lVar4 + 0x50 + lVar5) = 0x3f800000;
                        lVar5 = lVar5 + 4;
                      } while (lVar5 != 0x18);
                      lVar4 = 0x1a;
                      do {
                        lVar5 = **(long **)(lVar7 + 0xb8);
                        if (lVar5 == 0) goto LAB_072a67d0;
                        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_072a67cc;
                        lVar5 = *(long *)(lVar5 + 0x38);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                          lVar7 = *unaff_x21;
                        }
                        if (lVar5 == 0) goto LAB_072a67d0;
                        if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar4 - 8U) goto LAB_072a67cc;
                        dVar10 = sin(((double)((int)lVar4 + -8) + 0.5) * dVar11);
                        *(float *)(lVar5 + lVar4 * 4) = (float)dVar10;
                        lVar4 = lVar4 + 1;
                      } while (lVar4 != 0x2c);
                      uVar8 = 0;
                      do {
                        lVar4 = **(long **)(lVar7 + 0xb8);
                        if (lVar4 == 0) goto LAB_072a67d0;
                        if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_072a67cc;
                        lVar4 = *(long *)(lVar4 + 0x30);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_040d65a8();
                          lVar7 = *unaff_x21;
                        }
                        if (lVar4 == 0) goto LAB_072a67d0;
                        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_072a67cc;
                        dVar11 = sin(((double)(int)uVar8 + 0.5) * dVar9);
                        lVar5 = uVar8 * 4;
                        uVar8 = uVar8 + 1;
                        *(float *)(lVar4 + lVar5 + 0x20) = (float)dVar11;
                      } while (uVar8 != 0xc);
                      lVar7 = **(long **)(lVar7 + 0xb8);
                      if (lVar7 != 0) {
                        if (2 < *(uint *)(lVar7 + 0x18)) {
                          lVar7 = *(long *)(lVar7 + 0x30);
                          if (lVar7 == 0) goto LAB_072a67d0;
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          lVar4 = 0;
                          if (uVar1 < 0xd) {
                            uVar1 = 0xc;
                          }
                          while ((ulong)uVar1 * 4 + -0x30 != lVar4) {
                            *(undefined4 *)(lVar7 + 0x50 + lVar4) = 0;
                            lVar4 = lVar4 + 4;
                            if (lVar4 == 0x60) {
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
          }
        }
LAB_072a67d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
  }
LAB_072a67cc:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


