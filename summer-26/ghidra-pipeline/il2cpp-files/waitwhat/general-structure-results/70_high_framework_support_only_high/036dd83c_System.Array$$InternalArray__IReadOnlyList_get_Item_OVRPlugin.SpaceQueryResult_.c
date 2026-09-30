/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 036dd83c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long lVar2;
  uint in_w9;
  long unaff_x20;
  long *unaff_x23;
  long unaff_x25;
  long unaff_x29;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
    param_1 = *unaff_x23;
    in_w9 = (uint)*(byte *)(param_1 + 0x130);
  }
  if ((in_w9 < *(byte *)(lVar1 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1)) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
  }
  else {
    FUN_03188aa0();
    lVar2 = *(long *)(unaff_x20 + 0x38);
    lVar1 = *(long *)(lVar2 + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
      lVar2 = *(long *)(unaff_x20 + 0x38);
    }
    FUN_031896ac(lVar1,*(undefined8 *)(lVar2 + 0x20));
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


