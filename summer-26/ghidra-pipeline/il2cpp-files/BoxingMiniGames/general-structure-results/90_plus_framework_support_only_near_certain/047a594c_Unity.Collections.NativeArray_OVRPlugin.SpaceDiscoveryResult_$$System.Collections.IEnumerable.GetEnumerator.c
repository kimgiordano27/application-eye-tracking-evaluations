/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 047a594c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_stack_00000018;
  
  if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
    uVar1 = *unaff_x28;
    uVar3 = unaff_x27[1];
    uVar2 = *unaff_x27;
    unaff_x27[1] = unaff_x28[1];
    *unaff_x27 = uVar1;
    thunk_FUN_036b7ad0(unaff_x20 + 0x20 + in_stack_00000018 * 0x10,0);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      unaff_x28[1] = uVar3;
      *unaff_x28 = uVar2;
      thunk_FUN_036b7ad0(unaff_x20 + 0x20 + unaff_x29 * 0x10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


