/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Equals
ENTRY_POINT: 03c6b7a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals
              (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000058;
  
  if (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* catch() { ... } // from try @ 03c6b7f8 with catch @ 03c6b87c
                       catch() { ... } // from try @ 03c6b86c with catch @ 03c6b87c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03c6b880 to 03d6b883 has its CatchHandler @ 03c6b88c */
    FUN_02d60e88();
  }
  puVar2 = (undefined8 *)thunk_FUN_02d9d688();
  uVar3 = puVar2[2];
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6b724 with catch @ 03c6b7e0
                       try { // try from 03c6b7e0 to 03d6b7f7 has its CatchHandler @ 03c6b6e0 */
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
                    /* try { // try from 03c6b7f8 to 03d6b80f has its CatchHandler @ 03c6b87c */
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                    /* try { // try from 03c6b810 to 03d6b86b has its CatchHandler @ 03c6b6e0 */
      lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar4 + 0x30) = uVar3;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
    }
    else {
      FUN_03c6b678();
    }
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000058) {
                    /* try { // try from 03c6b86c to 03d6b87b has its CatchHandler @ 03c6b87c */
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03c6b884 to 03d6b88f has its CatchHandler @ 03c6b6e0 */
  FUN_02d60ae8();
}


