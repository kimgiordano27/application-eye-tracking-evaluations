/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 05f18998
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_04481fb8();
  uVar1 = thunk_FUN_0448520c();
  lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04481fb8(lVar2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar3 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar3 != 0) {
    lVar4 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
                    /* try { // try from 05f189e4 to 060189f3 has its CatchHandler @ 05f189f4 */
      if (*(long *)(lVar4 + -8) == lVar2) goto LAB_05f18a10;
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 != 0);
  }
                    /* catch() { ... } // from try @ 05f18968 with catch @ 05f189f4
                       catch() { ... } // from try @ 05f189e4 with catch @ 05f189f4 */
                    /* try { // try from 05f189f8 to 060189fb has its CatchHandler @ 05f18a04 */
                    /* try { // try from 05f189fc to 06018a07 has its CatchHandler @ 05f188a4 */
  FUN_044822ac();
LAB_05f18a10:
  FUN_0710fb84(uVar1);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04481fb8();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_05f19318();
  return;
}


