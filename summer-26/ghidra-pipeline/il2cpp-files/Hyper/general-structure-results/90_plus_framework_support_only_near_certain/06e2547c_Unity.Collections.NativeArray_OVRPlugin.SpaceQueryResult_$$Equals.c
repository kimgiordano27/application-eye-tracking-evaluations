/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 06e2547c
PROGRAM: Hyper-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(void)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong uVar4;
  
  if (in_NG == in_OV) {
    uVar4 = 0;
    lVar3 = 0x20;
    do {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) goto LAB_06e25538;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_06e2553c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (unaff_x21 == 0) {
LAB_06e25538:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar3),0x48);
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000048,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 06e2564c with catch @ 06e25500
                       catch() { ... } // from try @ 06e25688 with catch @ 06e25500
                       catch() { ... } // from try @ 06e256c4 with catch @ 06e25500
                       catch() { ... } // from try @ 06e256f0 with catch @ 06e25500
                       catch() { ... } // from try @ 06e25764 with catch @ 06e25500 */
        lVar2 = *(long *)(unaff_x20 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar4 < *(uint *)(lVar2 + 0x18)) {
            memcpy(unaff_x19,(void *)(lVar2 + lVar3),0x48);
            return;
          }
          goto LAB_06e2553c;
        }
        goto LAB_06e25538;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while ((long)uVar4 < (long)*(int *)(unaff_x20 + 0x18));
  }
  unaff_x19[8] = 0;
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  unaff_x19[5] = 0;
  unaff_x19[4] = 0;
  unaff_x19[7] = 0;
  unaff_x19[6] = 0;
                    /* try { // try from 06e25534 to 06f25537 has its CatchHandler @ 06e2564c */
  return;
}


