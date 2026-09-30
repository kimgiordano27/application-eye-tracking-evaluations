/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<JsonObject.DebugView.DebugViewProperty>$$MoveNext
ENTRY_POINT: 087bb6ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<JsonObject_DebugView_DebugViewProperty>__MoveNext(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_w8;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint uVar6;
  uint unaff_w23;
  long unaff_x25;
  int unaff_w26;
  int *unaff_x29;
  undefined4 unaff_s8;
  undefined8 in_stack_00000028;
  
  if (in_w8 < 1) {
    uVar6 = *(uint *)(unaff_x19 + 0x20);
    if (uVar6 == unaff_w23) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = unaff_w23 + 1;
      if (lVar4 == 0) goto LAB_087bb840;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w26 / (int)uVar1;
      }
      uVar3 = unaff_w26 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_087bb83c;
      lVar5 = *(long *)(unaff_x19 + 0x18);
      unaff_x29 = (int *)(lVar4 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar6 + 1;
    }
    if (lVar5 == 0) {
LAB_087bb840:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_087bb83c;
    lVar5 = lVar5 + (long)(int)uVar6 * 0x10;
  }
  else {
    uVar6 = *(uint *)(unaff_x19 + 0x24);
    *(int *)(unaff_x19 + 0x28) = in_w8 + -1;
    if (unaff_w23 <= uVar6) {
LAB_087bb83c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar5 = unaff_x25 + (long)(int)uVar6 * 0x10;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
  }
  *(int *)(lVar5 + 0x20) = unaff_w26;
  iVar2 = *unaff_x29;
  *(undefined4 *)(lVar5 + 0x2c) = unaff_s8;
  *(int *)(lVar5 + 0x24) = iVar2 + -1;
  *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
  *unaff_x29 = uVar6 + 1;
  return 1;
}


