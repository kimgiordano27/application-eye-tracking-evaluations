/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 031fffa8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x21;
  int unaff_w24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_031fffd8:
                    /* try { // try from 031fffd8 to 032fffdb has its CatchHandler @ 0320003c */
      (*(code *)*puVar1)();
      if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031fffd8 with catch @ 0320003c
                        */
        FUN_01eed990();
      }
      if (unaff_w24 != 5) {
        if (unaff_w24 != 0) {
          return;
        }
                    /* try { // try from 031ffff4 to 03300003 has its CatchHandler @ 03200040 */
        FUN_032008f8();
      }
                    /* try { // try from 03200010 to 03300027 has its CatchHandler @ 03200044 */
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 03200028 to 0330005b has its CatchHandler @ 031fffa0 */
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01ecb238();
      goto LAB_031fffd8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


