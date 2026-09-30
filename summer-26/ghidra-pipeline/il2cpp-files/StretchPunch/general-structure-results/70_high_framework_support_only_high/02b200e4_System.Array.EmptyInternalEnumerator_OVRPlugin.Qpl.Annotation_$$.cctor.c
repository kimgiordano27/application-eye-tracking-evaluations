/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 02b200e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>___cctor
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
                    /* try { // try from 02b200f4 to 02c20107 has its CatchHandler @ 02b1ff1c */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(5);
  }
                    /* try { // try from 02b20108 to 02c20117 has its CatchHandler @ 02b2012c */
                    /* catch() { ... } // from try @ 02b200b0 with catch @ 02b2011c */
  FUN_0216ed58(param_3,0xf,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1e0));
                    /* catch() { ... } // from try @ 02b200c0 with catch @ 02b20120 */
                    /* catch() { ... } // from try @ 02b200d8 with catch @ 02b20124 */
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
                    /* catch() { ... } // from try @ 02b20094 with catch @ 02b2012c
                       catch() { ... } // from try @ 02b20108 with catch @ 02b2012c */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 02b20134 to 02c20137 has its CatchHandler @ 02b201f4 */
                    /* try { // try from 02b20138 to 02c2014f has its CatchHandler @ 02b1ff1c */
    lVar3 = FUN_01dde7f8(lVar3);
  }
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_01de26bc(param_2,lVar3);
                    /* try { // try from 02b20150 to 02c20167 has its CatchHandler @ 02b201e4 */
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(param_2,lVar3);
    }
  }
                    /* try { // try from 02b20168 to 02c201d3 has its CatchHandler @ 02b1ff1c */
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01dde7f8(lVar3);
  }
  if (param_3 != (long *)0x0) {
    if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined4 *)thunk_FUN_01de290c(param_3);
      FUN_02b1e6f4(param_1,lVar1,*puVar2,2,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                  0x80) + 0x20) + 0xc0) + 0xf0));
      return;
    }
                    /* try { // try from 02b201ec to 02c201f7 has its CatchHandler @ 02b1ff1c */
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c(param_3);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02b201e8 to 02c201eb has its CatchHandler @ 02b201f4 */
  FUN_01d7db70();
}


