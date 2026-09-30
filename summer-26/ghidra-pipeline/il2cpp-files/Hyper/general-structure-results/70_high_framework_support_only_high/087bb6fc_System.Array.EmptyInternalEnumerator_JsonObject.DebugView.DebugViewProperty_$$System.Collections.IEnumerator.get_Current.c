/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<JsonObject.DebugView.DebugViewProperty>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 087bb6fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<JsonObject_DebugView_DebugViewProperty>__System_Collections_IEnumerator_get_Current
          (void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w21;
  int unaff_w23;
  int unaff_w26;
  undefined4 unaff_s8;
  undefined8 in_stack_00000028;
  
  System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext();
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x20) = unaff_w23 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w26 / (int)uVar2;
    }
    uVar3 = unaff_w26 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar6 = *(long *)(unaff_x19 + 0x18);
      piVar1 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
      if (lVar6 == 0) goto LAB_087bb840;
      if (unaff_w21 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)unaff_w21 * 0x10;
        *(int *)(lVar6 + 0x20) = unaff_w26;
        iVar4 = *piVar1;
        *(undefined4 *)(lVar6 + 0x2c) = unaff_s8;
        *(int *)(lVar6 + 0x24) = iVar4 + -1;
        *(undefined4 *)(lVar6 + 0x28) = in_stack_00000028._4_4_;
        *piVar1 = unaff_w21 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
LAB_087bb840:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


