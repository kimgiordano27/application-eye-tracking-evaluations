/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 044ed860
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(void)

{
  int iVar1;
  int iVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
                    /* try { // try from 044ed860 to 045ed863 has its CatchHandler @ 044ed870 */
  if (0 < in_w8) {
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    lVar4 = 0;
                    /* catch() { ... } // from try @ 044ed860 with catch @ 044ed870 */
    uVar5 = 0;
    do {
                    /* try { // try from 044ed874 to 045ed87b has its CatchHandler @ 044ed884 */
      iVar2 = *(int *)(unaff_x19 + 0x1c);
                    /* try { // try from 044ed87c to 045ed887 has its CatchHandler @ 044ed354 */
      if (iVar1 != iVar2) goto LAB_044ed8c8;
      lVar3 = *(long *)(unaff_x19 + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044ed874 with catch @ 044ed884
                        */
      if (lVar3 == 0) {
LAB_044ed8f4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (unaff_x20 == 0) goto LAB_044ed8f4;
      (**(code **)(unaff_x20 + 0x18))
                (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + lVar4 + 0x20),
                 *(undefined8 *)(lVar3 + lVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x18));
    iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_044ed8c8:
    if (iVar1 != iVar2) {
      FUN_05950a44(0);
      return;
    }
  }
  return;
}


