/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02f79180
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = thunk_FUN_02d9d438(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar2,0);
  }
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    *(undefined8 *)(unaff_x22 + 0x20) = unaff_x21;
    thunk_FUN_02dd37b4();
    if (unaff_x20 != 0) {
      FUN_02f791d8();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


