/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 06e256a4
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
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  do {
                    /* try { // try from 06e256ac to 06f256c3 has its CatchHandler @ 06e2575c */
    FUN_06e24c64();
LAB_06e256b8:
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x48;
                    /* try { // try from 06e256c4 to 06f256d7 has its CatchHandler @ 06e25500 */
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
                    /* try { // try from 06e256d8 to 06f256ef has its CatchHandler @ 06e2575c */
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
    if (lVar3 == 0) {
LAB_06e256ec:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_06e256f0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06e256f0 to 06f2574b has its CatchHandler @ 06e25500 */
      FUN_04948194();
    }
    if (unaff_x22 == 0) goto LAB_06e256ec;
    memcpy(&stack0x00000050,(void *)(lVar3 + unaff_x24),0x48);
    lVar3 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_06e256ec;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * (long)unaff_w25;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar3 + 0x20),&stack0x00000050,0x48);
      thunk_FUN_049ee3d8(lVar3 + 0x20,0);
      goto LAB_06e256b8;
    }
    memcpy(&stack0x00000098,&stack0x00000050,0x48);
  } while( true );
}


