/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 06e2563c
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int in_w10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  while( true ) {
    lVar3 = *(long *)(unaff_x22 + 0x10);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e25534 with catch @ 06e2564c
                       try { // try from 06e2564c to 06f2566f has its CatchHandler @ 06e25500 */
    *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e25554 with catch @ 06e25658
                        */
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * (long)unaff_w25;
                    /* try { // try from 06e25670 to 06f25687 has its CatchHandler @ 06e2575c */
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar3 + 0x20),&stack0x00000050,0x48);
                    /* try { // try from 06e25688 to 06f256ab has its CatchHandler @ 06e25500 */
      thunk_FUN_049ee3d8(lVar3 + 0x20,0);
    }
    else {
      memcpy(&stack0x00000098,&stack0x00000050,0x48);
      FUN_06e24c64();
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x48;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_06e256ec;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_06e256f0;
      if (unaff_x20 == 0) goto LAB_06e256ec;
      memcpy(&stack0x00000008,(void *)(lVar3 + unaff_x24),0x48);
      memcpy(&stack0x00000098,&stack0x00000008,0x48);
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_06e256f0:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x22 == 0) break;
    memcpy(&stack0x00000050,(void *)(lVar3 + unaff_x24),0x48);
    in_w10 = *(int *)(unaff_x22 + 0x1c);
  }
LAB_06e256ec:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


