/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 041a2d70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x23;
  long in_stack_00000000;
  
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_041a2dbc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_041a2dbc:
                    /* try { // try from 041a2dc4 to 042a2dd3 has its CatchHandler @ 041a2dd4 */
  (*(code *)*puVar1)();
  if (in_stack_00000000 == 0) {
                    /* catch() { ... } // from try @ 041a2d48 with catch @ 041a2dd4
                       catch() { ... } // from try @ 041a2dc4 with catch @ 041a2dd4 */
                    /* try { // try from 041a2dd8 to 042a2ddb has its CatchHandler @ 041a2de4 */
                    /* try { // try from 041a2ddc to 042a2de7 has its CatchHandler @ 041a2c7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041a2dd8 with catch @ 041a2de4
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 041a2de8 to 042a310b has its CatchHandler @ 041a2de8
                       catch() { ... } // from try @ 041a2de8 with catch @ 041a2de8
                       catch() { ... } // from try @ 041a31d4 with catch @ 041a2de8
                       catch() { ... } // from try @ 041a32a4 with catch @ 041a2de8
                       catch() { ... } // from try @ 041a32f8 with catch @ 041a2de8 */
  FUN_02d96858();
}


