/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 02b576a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint unaff_w19;
  uint uVar6;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  do {
    uVar6 = (uint)param_1;
                    /* catch() { ... } // from try @ 02b575f0 with catch @ 02b576a8 */
                    /* catch() { ... } // from try @ 02b575e0 with catch @ 02b576ac */
                    /* catch() { ... } // from try @ 02b57280 with catch @ 02b576b0
                       catch() { ... } // from try @ 02b575e8 with catch @ 02b576b0 */
                    /* catch() { ... } // from try @ 02b57290 with catch @ 02b576b4 */
                    /* catch() { ... } // from try @ 02b573b8 with catch @ 02b576b8
                       catch() { ... } // from try @ 02b57610 with catch @ 02b576b8 */
    if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x25 + 0x20) == unaff_w27) {
                    /* catch() { ... } // from try @ 02b575d8 with catch @ 02b576bc */
      if (unaff_x24 == (long *)0x0) goto LAB_02b578bc;
                    /* catch() { ... } // from try @ 02b5737c with catch @ 02b576c0 */
                    /* catch() { ... } // from try @ 02b5730c with catch @ 02b576c4 */
                    /* try { // try from 02b576dc to 02c576df has its CatchHandler @ 02b57764 */
      uVar4 = (**(code **)(*unaff_x24 + 0x1b8))();
                    /* try { // try from 02b576e0 to 02c57783 has its CatchHandler @ 02b571bc */
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_0358baf0();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          uVar8 = unaff_x29[1];
          uVar7 = *unaff_x29;
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = unaff_x26 + (long)(int)unaff_w19 * 0x28;
            *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar8;
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            return 1;
          }
          goto LAB_02b578b8;
        }
        return 0;
      }
      uVar6 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar6 <= unaff_w19) goto LAB_02b578b8;
    unaff_w19 = *(uint *)(unaff_x26 + (int)unaff_w19 * unaff_x25 + 0x24);
    if ((int)uVar6 <= unaff_w23) {
      FUN_0358bbf4(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w19 < (uint)param_1);
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar6 = *(uint *)(unaff_x21 + 0x20);
    if (uVar6 == (uint)param_1) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
      if (lVar5 == 0) goto LAB_02b578bc;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_02b578b8;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_02b578b8;
    lVar5 = (long)(int)uVar6;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar6 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) {
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = (long)(int)uVar6;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x28;
  *(int *)(lVar5 + 0x20) = unaff_w27;
  iVar2 = *unaff_x28;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar2 + -1;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
  uVar8 = unaff_x29[1];
  uVar7 = *unaff_x29;
  *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
  *(undefined8 *)(lVar5 + 0x38) = uVar8;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *unaff_x28 = uVar6 + 1;
  return 1;
}


