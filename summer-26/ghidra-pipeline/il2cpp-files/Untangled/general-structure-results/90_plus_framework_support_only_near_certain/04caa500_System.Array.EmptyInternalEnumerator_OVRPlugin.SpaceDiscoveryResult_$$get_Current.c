/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 04caa500
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x23;
  long lStack0000000000000018;
  
  lStack0000000000000018 = *(long *)(unaff_x23 + 0x28);
                    /* try { // try from 04caa504 to 04daa517 has its CatchHandler @ 04caa344 */
                    /* try { // try from 04caa518 to 04daa527 has its CatchHandler @ 04caa53c */
  uVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
                    (param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1f0));
  if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 04caa4c0 with catch @ 04caa52c */
                    /* catch() { ... } // from try @ 04caa4d0 with catch @ 04caa530 */
                    /* catch() { ... } // from try @ 04caa4e8 with catch @ 04caa534 */
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70);
                    /* catch() { ... } // from try @ 04caa4a4 with catch @ 04caa53c
                       catch() { ... } // from try @ 04caa518 with catch @ 04caa53c */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 04caa544 to 04daa547 has its CatchHandler @ 04caa600 */
      lVar5 = FUN_02eea768(lVar5);
    }
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_02ef170c(param_2,lVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(param_2,lVar5);
      }
    }
    uVar1 = FUN_04ca89d0(param_1,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108));
    if (-1 < (int)uVar1) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(*(long *)(param_1 + 0x18) + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      uVar4 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78)
                                );
      goto LAB_04caa5d4;
    }
  }
  uVar4 = 0;
LAB_04caa5d4:
  if (*(long *)(unaff_x23 + 0x28) == lStack0000000000000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


