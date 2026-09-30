/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 06e25978
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (long param_1,undefined1 *param_2)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  
  do {
    memcpy(param_2,(void *)(param_1 + unaff_x23),0x48);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000048,*(undefined8 *)(unaff_x20 + 0x28))
    ;
                    /* try { // try from 06e259a8 to 06f259cf has its CatchHandler @ 06e25918 */
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x48;
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e25948 with catch @ 06e259b8
                        */
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      iVar1 = *(int *)(unaff_x19 + 0x1c);
LAB_06e259c0:
      if (unaff_w21 != iVar1) {
        FUN_08d9d550(0);
      }
                    /* try { // try from 06e259d0 to 06f259e7 has its CatchHandler @ 06e25ab8 */
      return;
    }
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar1) goto LAB_06e259c0;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06e259e8 to 06f25a07 has its CatchHandler @ 06e25918 */
      FUN_04948194();
    }
    param_2 = (undefined1 *)register0x00000008;
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


