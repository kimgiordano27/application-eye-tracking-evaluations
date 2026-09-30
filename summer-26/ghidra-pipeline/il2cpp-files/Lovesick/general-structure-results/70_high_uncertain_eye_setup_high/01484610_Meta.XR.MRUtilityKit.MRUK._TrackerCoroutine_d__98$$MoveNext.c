/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__98$$MoveNext
ENTRY_POINT: 01484610
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__98__MoveNext(long param_1)

{
  ulong uVar1;
  int in_w8;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int in_w9;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar10;
  uint unaff_w23;
  ulong unaff_x24;
  long *unaff_x25;
  float unaff_w27;
  uint unaff_w28;
  ulong unaff_x29;
  float fVar11;
  float fVar12;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar8 = in_w9 - unaff_w28;
                    /* try { // try from 01484614 to 01584637 has its CatchHandler @ 01484108 */
    if (-1 < in_w8) {
      uVar8 = -unaff_w28;
    }
    unaff_w28 = ((in_w8 - (uVar8 & 0xfffffffe)) + ((int)uVar8 >> 1)) - 1;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
                    /* try { // try from 01484638 to 01584647 has its CatchHandler @ 01484648 */
      param_1 = *unaff_x25;
    }
    plVar2 = *(long **)(param_1 + 0xb8);
    plVar5 = plVar2 + 1;
    while( true ) {
      lVar3 = *plVar2;
                    /* catch() { ... } // from try @ 014845fc with catch @ 01484648
                       catch() { ... } // from try @ 01484638 with catch @ 01484648 */
      if (lVar3 == 0) goto LAB_01484934;
                    /* try { // try from 0148464c to 0158464f has its CatchHandler @ 01484658 */
                    /* try { // try from 01484650 to 0158465b has its CatchHandler @ 01484108 */
      if (*(uint *)(lVar3 + 0x18) <= unaff_w28) goto thunk_FUN_00da5194;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0148464c with catch @ 01484658
                        */
      lVar7 = *(long *)(unaff_x21 + 0xc0);
      if (lVar7 == 0) goto LAB_01484934;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w23) goto thunk_FUN_00da5194;
      lVar7 = *(long *)(lVar7 + unaff_x20 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_01484934;
      uVar8 = unaff_w22 + (int)unaff_x24;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto thunk_FUN_00da5194;
      lVar6 = *plVar5;
      if (lVar6 == 0) goto LAB_01484934;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w28) goto thunk_FUN_00da5194;
      lVar9 = *(long *)(unaff_x21 + 0xd0);
      iVar10 = *(int *)(lVar7 + (long)(int)uVar8 * 4 + 0x20);
      fVar11 = *(float *)(lVar3 + (long)(int)unaff_w28 * 4 + 0x20);
      fVar12 = *(float *)(lVar6 + (long)(int)unaff_w28 * 4 + 0x20);
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        param_1 = *unaff_x25;
      }
      lVar3 = *(long *)(unaff_x21 + 200);
      if (lVar3 == 0) goto LAB_01484934;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w23) goto thunk_FUN_00da5194;
      lVar3 = *(long *)(lVar3 + unaff_x20 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_01484934;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x29) goto thunk_FUN_00da5194;
      lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_01484934;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto thunk_FUN_00da5194;
      lVar7 = *(long *)(*(long *)(param_1 + 0xb8) + 0x20);
      if (lVar7 == 0) goto LAB_01484934;
      uVar8 = *(uint *)(lVar3 + unaff_x24 * 4 + 0x20);
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto thunk_FUN_00da5194;
      if (lVar9 == 0) goto LAB_01484934;
      if (*(uint *)(lVar9 + 0x18) <= unaff_x24) goto thunk_FUN_00da5194;
      fVar11 = fVar11 * ((float)(iVar10 << (ulong)(0x10 - unaff_w28 & 0x1f)) * unaff_w27 + fVar12) *
               *(float *)(lVar7 + (long)(int)uVar8 * 4 + 0x20);
      iVar10 = unaff_w22;
      while( true ) {
        lVar3 = unaff_x24 * 4;
        unaff_x24 = unaff_x24 + 1;
        *(float *)(lVar9 + lVar3 + 0x20) = fVar11;
        unaff_w22 = iVar10;
        if (unaff_x24 == 0x20) {
          FUN_01480d68();
          if (*(uint *)(in_stack_00000020 + 0x18) <= unaff_w23) goto thunk_FUN_00da5194;
          unaff_w22 = iVar10 + 0x20;
          FUN_01795470(*(undefined8 *)(unaff_x21 + 0xd0),0,*in_stack_00000018,iVar10,0x20,0);
          in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
          if (in_stack_00000028._4_4_ == 0xc) {
            unaff_x29 = unaff_x29 + 1;
            unaff_w22 = iVar10 + 0x20;
            if ((long)*(int *)(unaff_x21 + 0xa8) <= (long)unaff_x29) {
              uVar1 = (ulong)(iVar10 + 0x20);
              while( true ) {
                unaff_w23 = unaff_w23 + 1;
                if (in_stack_00000010._4_4_ < (int)unaff_w23) {
                  if (*(int *)(unaff_x21 + 0xa0) != 2) {
                    return;
                  }
                  if (*(int *)(unaff_x21 + 0x28) != 3) {
                    return;
                  }
                  if ((int)uVar1 < 1) {
                    return;
                  }
                  if (in_stack_00000000 == 0) goto LAB_01484934;
                  uVar8 = *(uint *)(in_stack_00000000 + 0x18);
                  uVar4 = 0;
                  goto LAB_0148484c;
                }
                if (0 < *(int *)(unaff_x21 + 0xa8)) break;
                uVar1 = 0;
              }
              unaff_x29 = 0;
              unaff_w22 = 0;
              unaff_x20 = (long)(int)unaff_w23;
              in_stack_00000018 =
                   (undefined8 *)(in_stack_00000020 + (long)(int)unaff_w23 * 8 + 0x20);
            }
            in_stack_00000028._4_4_ = 0;
          }
          unaff_x24 = 0;
        }
        lVar3 = *(long *)(unaff_x21 + 0xd8);
        if (lVar3 == 0) goto LAB_01484934;
        if (*(uint *)(lVar3 + 0x18) <= unaff_w23) goto thunk_FUN_00da5194;
        lVar3 = *(long *)(lVar3 + unaff_x20 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_01484934;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto thunk_FUN_00da5194;
        unaff_w28 = *(uint *)(lVar3 + unaff_x24 * 4 + 0x20);
        if (unaff_w28 != 0) break;
        lVar9 = *(long *)(unaff_x21 + 0xd0);
        if (lVar9 == 0) goto LAB_01484934;
        fVar11 = 0.0;
        iVar10 = unaff_w22;
        if (*(uint *)(lVar9 + 0x18) <= unaff_x24) goto thunk_FUN_00da5194;
      }
      if ((int)unaff_w28 < 0) break;
      param_1 = *unaff_x25;
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        param_1 = *unaff_x25;
      }
      plVar2 = (long *)(*(long *)(param_1 + 0xb8) + 0x10);
      plVar5 = (long *)(*(long *)(param_1 + 0xb8) + 0x18);
    }
    param_1 = *unaff_x25;
    in_w8 = -unaff_w28;
    in_w9 = 1;
  } while( true );
LAB_0148484c:
  if (uVar8 <= uVar4) {
thunk_FUN_00da5194:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  if (in_stack_00000008 == 0) {
LAB_01484934:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(in_stack_00000008 + 0x18) <= uVar4) goto thunk_FUN_00da5194;
  *(float *)(in_stack_00000000 + 0x20 + uVar4 * 4) =
       (*(float *)(in_stack_00000000 + 0x20 + uVar4 * 4) +
       *(float *)(in_stack_00000008 + 0x20 + uVar4 * 4)) * 0.5;
  uVar4 = uVar4 + 1;
  if (uVar1 == uVar4) {
    return;
  }
  goto LAB_0148484c;
}


