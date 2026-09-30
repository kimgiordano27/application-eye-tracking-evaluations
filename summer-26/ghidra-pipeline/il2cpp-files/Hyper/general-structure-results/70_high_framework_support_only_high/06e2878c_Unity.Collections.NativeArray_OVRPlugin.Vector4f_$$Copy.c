/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 06e2878c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  while (param_1 != 0) {
                    /* try { // try from 06e28798 to 06f2879b has its CatchHandler @ 06e28810 */
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e28798 with catch @ 06e28810
                        */
      FUN_04948194();
    }
    if (unaff_x20 == 0) break;
    puVar1 = (undefined8 *)(param_1 + unaff_x23);
    in_stack_00000048 = puVar1[1];
    in_stack_00000040 = *puVar1;
    in_stack_00000058 = puVar1[3];
    in_stack_00000050 = puVar1[2];
    in_stack_00000068 = puVar1[5];
    in_stack_00000060 = puVar1[4];
    in_stack_00000078 = puVar1[7];
    in_stack_00000070 = puVar1[6];
                    /* try { // try from 06e287bc to 06f287cb has its CatchHandler @ 06e28814 */
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,*(undefined8 *)(unaff_x20 + 0x28))
    ;
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x40;
                    /* try { // try from 06e287e0 to 06f287f7 has its CatchHandler @ 06e28818 */
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_06e287e8:
      if (unaff_w21 != iVar2) {
        FUN_08d9d550(0);
      }
                    /* try { // try from 06e287f8 to 06f2882f has its CatchHandler @ 06e2875c */
      return;
    }
    iVar2 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar2) goto LAB_06e287e8;
    param_1 = *(long *)(unaff_x19 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


