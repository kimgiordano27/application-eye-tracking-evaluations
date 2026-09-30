/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 06ad8970
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w25;
  long lVar6;
  int unaff_w27;
  undefined8 in_stack_00000018;
  
  FUN_06ad8e5c();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x20 + 0x20) = unaff_w19 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      piVar1 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
      if (lVar6 == 0) goto LAB_06ad8ac0;
      if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)unaff_w19 * 0x18;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        *(int *)(lVar6 + 0x24) = *piVar1 + -1;
        *(undefined4 *)(lVar6 + 0x30) = unaff_w25;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
        *piVar1 = unaff_w19 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


