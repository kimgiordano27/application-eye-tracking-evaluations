/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 050c4798
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint in_w10;
  undefined4 in_register_00004054;
  uint in_w11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w10 < in_w11) {
    *(uint *)(unaff_x21 + 0x18) = in_w10 + 1;
    *(undefined8 *)(param_1 + CONCAT44(in_register_00004054,in_w10) * 8 + 0x20) = param_3;
    thunk_FUN_044bb4b4();
  }
  else {
    FUN_05bade44();
  }
  if (unaff_x19 != 0) {
    uVar1 = FUN_09525150();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*unaff_x20 != 0) {
      FUN_0945fbe0(*unaff_x20,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


