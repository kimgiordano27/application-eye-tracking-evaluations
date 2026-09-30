/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03b5d7b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(0x21);
  }
                    /* try { // try from 03b5d7d0 to 03c5d7e3 has its CatchHandler @ 03b5d7f0 */
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    lVar4 = 0;
                    /* try { // try from 03b5d7e4 to 03c5d807 has its CatchHandler @ 03b5d790 */
    uVar5 = 0;
    iVar2 = iVar1;
    do {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 03b5d7d0 with catch @ 03b5d7f0
                        */
      if (iVar1 != iVar2) break;
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
LAB_03b5d86c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
                    /* try { // try from 03b5d808 to 03c5d81f has its CatchHandler @ 03b5d858 */
      if (param_2 == 0) goto LAB_03b5d86c;
      lVar3 = lVar3 + lVar4;
                    /* try { // try from 03b5d820 to 03c5d847 has its CatchHandler @ 03b5d790 */
      (**(code **)(param_2 + 0x18))
                (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                 *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c),
                 *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
      iVar2 = *(int *)(param_1 + 0x1c);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
    if (iVar1 != iVar2) {
      FUN_04f520c0(0);
      return;
    }
  }
  return;
}


