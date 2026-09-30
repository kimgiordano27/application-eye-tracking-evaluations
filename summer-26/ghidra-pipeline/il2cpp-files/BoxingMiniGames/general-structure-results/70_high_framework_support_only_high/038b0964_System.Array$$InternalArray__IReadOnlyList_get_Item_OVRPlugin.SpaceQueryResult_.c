/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 038b0964
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
          (undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 in_x10;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
  pcVar1 = *(code **)(param_2 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x25;
  *(undefined8 *)(unaff_x29 + -0x38) = in_x10;
  (*pcVar1)(param_1,param_2,0);
  if (*(long *)(unaff_x29 + -200) == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    *(undefined8 *)(*(long *)(unaff_x29 + -200) + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
    thunk_FUN_036b7ad0();
    if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
      return *(undefined8 *)(unaff_x29 + -0xd0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


