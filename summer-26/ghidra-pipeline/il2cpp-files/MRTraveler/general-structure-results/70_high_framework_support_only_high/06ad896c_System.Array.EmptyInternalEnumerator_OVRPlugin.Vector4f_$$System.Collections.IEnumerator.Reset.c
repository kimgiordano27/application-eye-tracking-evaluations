/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06ad896c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool in_ZR;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w25;
  long lVar5;
  int unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000018;
  
  if (in_ZR) {
    FUN_06ad8e5c();
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(uint *)(unaff_x20 + 0x20) = unaff_w19 + 1;
    if (lVar4 == 0) goto LAB_06ad8ac0;
    uVar1 = *(uint *)(lVar4 + 0x18);
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = unaff_w27 / (int)uVar1;
    }
    uVar2 = unaff_w27 - iVar3 * uVar1;
    if (uVar1 <= uVar2) goto LAB_06ad8abc;
    lVar5 = *(long *)(unaff_x20 + 0x18);
    unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    *(uint *)(unaff_x20 + 0x20) = unaff_w19 + 1;
  }
  if (lVar5 != 0) {
    if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)unaff_w19 * 0x18;
      *(int *)(lVar5 + 0x20) = unaff_w27;
      *(int *)(lVar5 + 0x24) = *unaff_x28 + -1;
      *(undefined4 *)(lVar5 + 0x30) = unaff_w25;
      *(undefined8 *)(lVar5 + 0x28) = in_stack_00000018;
      *unaff_x28 = unaff_w19 + 1;
      return 1;
    }
LAB_06ad8abc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


