/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04caa548
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long in_stack_00000018;
  
                    /* try { // try from 04caa548 to 04daa55f has its CatchHandler @ 04caa344 */
  if ((unaff_x21 != 0) && (lVar2 = thunk_FUN_02ef170c(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  uVar1 = FUN_04ca89d0();
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar3 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78)
                              );
  }
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


