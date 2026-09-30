/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 02b576a0
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
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint unaff_w19;
  uint uVar5;
  undefined8 unaff_x20;
  long unaff_x21;
  int iVar6;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 02b57600 with catch @ 02b576a0 */
  iVar6 = 0;
                    /* catch() { ... } // from try @ 02b575f8 with catch @ 02b576a4 */
  do {
    uVar5 = (uint)param_1;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * 0x28 + 0x20) == unaff_w27) {
      if (unaff_x24 == (long *)0x0) goto LAB_02b578bc;
      uVar3 = (**(code **)(*unaff_x24 + 0x1b8))();
      if ((uVar3 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_0358baf0();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          uVar8 = unaff_x29[1];
          uVar7 = *unaff_x29;
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            lVar4 = unaff_x26 + (long)(int)unaff_w19 * 0x28;
            *(undefined8 *)(lVar4 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar4 + 0x38) = uVar8;
            *(undefined8 *)(lVar4 + 0x30) = uVar7;
            return 1;
          }
          goto LAB_02b578b8;
        }
        return 0;
      }
      uVar5 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar5 <= unaff_w19) goto LAB_02b578b8;
    unaff_w19 = *(uint *)(unaff_x26 + (long)(int)unaff_w19 * 0x28 + 0x24);
    if ((int)uVar5 <= iVar6) {
      FUN_0358bbf4(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    iVar6 = iVar6 + 1;
  } while (unaff_w19 < (uint)param_1);
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar5 = *(uint *)(unaff_x21 + 0x20);
    if (uVar5 == (uint)param_1) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_02b578bc;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar6 = 0;
      if (uVar1 != 0) {
        iVar6 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar6 * uVar1;
      if (uVar1 <= uVar2) goto LAB_02b578b8;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
    }
    if (unaff_x26 == 0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) goto LAB_02b578b8;
    lVar4 = (long)(int)uVar5;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar5 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) {
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar4 = (long)(int)uVar5;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar4 * 0x28 + 0x24);
  }
  lVar4 = unaff_x26 + lVar4 * 0x28;
  *(int *)(lVar4 + 0x20) = unaff_w27;
  iVar6 = *unaff_x28;
  *(undefined8 *)(lVar4 + 0x28) = unaff_x20;
  *(int *)(lVar4 + 0x24) = iVar6 + -1;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28));
  uVar8 = unaff_x29[1];
  uVar7 = *unaff_x29;
  *(undefined8 *)(lVar4 + 0x40) = unaff_x29[2];
  *(undefined8 *)(lVar4 + 0x38) = uVar8;
  *(undefined8 *)(lVar4 + 0x30) = uVar7;
  *unaff_x28 = uVar5 + 1;
  return 1;
}


