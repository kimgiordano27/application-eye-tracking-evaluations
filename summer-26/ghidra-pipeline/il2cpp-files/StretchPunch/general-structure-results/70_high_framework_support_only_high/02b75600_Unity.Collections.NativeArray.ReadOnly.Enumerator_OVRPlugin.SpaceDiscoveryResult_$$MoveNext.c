/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 02b75600
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  
  do {
                    /* catch() { ... } // from try @ 02b755a0 with catch @ 02b75600 */
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02b7562c:
                    /* try { // try from 02b75630 to 02c75647 has its CatchHandler @ 02b756c0 */
      (*(code *)*puVar1)();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01e7f0d0();
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02b75648 to 02c756af has its CatchHandler @ 02b75428 */
      FUN_01d7db68();
    }
                    /* catch() { ... } // from try @ 02b755b8 with catch @ 02b75604 */
    in_x9 = in_x9 + -1;
                    /* catch() { ... } // from try @ 02b75574 with catch @ 02b7560c
                       catch() { ... } // from try @ 02b755e8 with catch @ 02b7560c */
    if (in_x9 == 0) {
                    /* try { // try from 02b75614 to 02c75617 has its CatchHandler @ 02b756d0 */
                    /* try { // try from 02b75618 to 02c7562f has its CatchHandler @ 02b75428 */
      puVar1 = (undefined8 *)FUN_01dde8fc();
      goto LAB_02b7562c;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


