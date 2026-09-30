/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetSeatPoses
ENTRY_POINT: 0148ccec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetSeatPoses(long param_1)

{
  uint in_w9;
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar6;
  double dVar7;
  double dVar8;
  double unaff_d8;
  double unaff_d9;
  
  while (1 < in_w9) {
    lVar6 = *(long *)(param_1 + 0x28);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar6 == 0) goto LAB_0148d078;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x19) break;
    dVar7 = sin(((double)(int)unaff_x19 + unaff_d8) * unaff_d9);
    lVar3 = unaff_x19 * 4;
    unaff_x19 = unaff_x19 + 1;
    *(float *)(lVar6 + lVar3 + 0x20) = (float)dVar7;
    if (unaff_x19 == 0x12) {
      lVar6 = **(long **)(*unaff_x21 + 0xb8);
      if (lVar6 == 0) goto LAB_0148d078;
      uVar1 = *(uint *)(lVar6 + 0x18);
      lVar3 = 0x1a;
      goto LAB_0148cd5c;
    }
    param_1 = **(long **)(*unaff_x21 + 0xb8);
    if (param_1 == 0) goto LAB_0148d078;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
  goto LAB_0148d074;
  while( true ) {
    lVar5 = *(long *)(lVar6 + 0x28);
    if (lVar5 == 0) goto LAB_0148d078;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar3 - 8U) goto LAB_0148d074;
    *(undefined4 *)(lVar5 + lVar3 * 4) = 0x3f800000;
    dVar7 = DAT_0293faa8;
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x20) break;
LAB_0148cd5c:
    if (uVar1 < 2) goto LAB_0148d074;
  }
  lVar3 = 0x20;
  do {
    if (lVar6 == 0) goto LAB_0148d078;
    if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0148d074;
    lVar6 = *(long *)(lVar6 + 0x28);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar6 == 0) goto LAB_0148d078;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar3 - 8U) goto LAB_0148d074;
    dVar8 = sin(((double)((int)lVar3 + -8) + unaff_d8 + -18.0) * dVar7);
    *(float *)(lVar6 + lVar3 * 4) = (float)dVar8;
    lVar3 = lVar3 + 1;
    lVar6 = **(long **)(*unaff_x21 + 0xb8);
  } while (lVar3 != 0x26);
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(lVar6 + 0x18);
    lVar3 = 0x26;
    do {
      uVar1 = (uint)uVar2;
      if (uVar1 < 2) goto LAB_0148d074;
      lVar5 = *(long *)(lVar6 + 0x28);
      if (lVar5 == 0) goto LAB_0148d078;
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar3 - 8U) goto LAB_0148d074;
      *(undefined4 *)(lVar5 + lVar3 * 4) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x2c);
    uVar4 = 0;
    do {
      if (uVar1 < 4) goto LAB_0148d074;
      lVar3 = *(long *)(lVar6 + 0x38);
      if (lVar3 == 0) goto LAB_0148d078;
                    /* try { // try from 0148ce5c to 0158d0bb has its CatchHandler @ 0148ce5c
                       catch() { ... } // from try @ 0148ce5c with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d0fc with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d130 with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d198 with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d204 with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d378 with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d418 with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d47c with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d4e4 with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d5cc with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d68c with catch @ 0148ce5c
                       catch() { ... } // from try @ 0148d6f8 with catch @ 0148ce5c */
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0148d074;
      lVar5 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + lVar5 + 0x20) = 0;
    } while (uVar4 != 6);
    lVar3 = 0xe;
    do {
      if (lVar6 == 0) goto LAB_0148d078;
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_0148d074;
      lVar6 = *(long *)(lVar6 + 0x38);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar6 == 0) goto LAB_0148d078;
      if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar3 - 8U) goto LAB_0148d074;
      dVar8 = sin(((double)((int)lVar3 + -8) + unaff_d8 + -6.0) * dVar7);
      *(float *)(lVar6 + lVar3 * 4) = (float)dVar8;
      lVar3 = lVar3 + 1;
      lVar6 = **(long **)(*unaff_x21 + 0xb8);
    } while (lVar3 != 0x14);
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      lVar3 = 0x14;
      do {
        if (uVar1 < 4) goto LAB_0148d074;
        lVar5 = *(long *)(lVar6 + 0x38);
        if (lVar5 == 0) goto LAB_0148d078;
        if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar3 - 8U) goto LAB_0148d074;
        *(undefined4 *)(lVar5 + lVar3 * 4) = 0x3f800000;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x1a);
      lVar3 = 0x1a;
      do {
        if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_0148d074;
        lVar6 = *(long *)(lVar6 + 0x38);
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar6 == 0) break;
        if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar3 - 8U) goto LAB_0148d074;
        dVar8 = sin(((double)((int)lVar3 + -8) + unaff_d8) * unaff_d9);
        *(float *)(lVar6 + lVar3 * 4) = (float)dVar8;
        if (lVar3 == 0x2b) {
          uVar4 = 0;
          goto LAB_0148cfac;
        }
        lVar3 = lVar3 + 1;
        lVar6 = **(long **)(*unaff_x21 + 0xb8);
      } while (lVar6 != 0);
    }
  }
LAB_0148d078:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0148d074;
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar6 == 0) goto LAB_0148d078;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_0148d074;
    dVar8 = sin(((double)(int)uVar4 + unaff_d8) * dVar7);
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(float *)(lVar6 + lVar3 + 0x20) = (float)dVar8;
    if (uVar4 == 0xc) break;
LAB_0148cfac:
    lVar6 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar6 == 0) goto LAB_0148d078;
  }
  lVar6 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar6 == 0) goto LAB_0148d078;
  uVar1 = *(uint *)(lVar6 + 0x18);
  lVar3 = 0x14;
  while (2 < uVar1) {
    lVar5 = *(long *)(lVar6 + 0x30);
    if (lVar5 == 0) goto LAB_0148d078;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar3 - 8U) break;
    *(undefined4 *)(lVar5 + lVar3 * 4) = 0;
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x2c) {
      return;
    }
  }
LAB_0148d074:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


