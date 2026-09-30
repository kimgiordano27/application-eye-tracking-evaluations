/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 0909f030
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_x9;
  long unaff_x19;
  
                    /* try { // try from 0909f030 to 0919f033 has its CatchHandler @ 0909f250 */
                    /* try { // try from 0909f034 to 0919f037 has its CatchHandler @ 0909f244 */
                    /* try { // try from 0909f038 to 0919f03b has its CatchHandler @ 0909f234 */
  bVar1 = *(byte *)(in_x9 + 0x130);
                    /* try { // try from 0909f03c to 0919f03f has its CatchHandler @ 0909f22c */
                    /* try { // try from 0909f040 to 0919f043 has its CatchHandler @ 0909f228 */
  if (*(byte *)(*param_1 + 0x130) < bVar1) {
                    /* try { // try from 0909f044 to 0919f047 has its CatchHandler @ 0909f224 */
    plVar3 = (long *)0x0;
                    /* try { // try from 0909f048 to 0919f04b has its CatchHandler @ 0909f1e4 */
  }
  else {
                    /* try { // try from 0909f05c to 0919f05f has its CatchHandler @ 0909f210 */
                    /* try { // try from 0909f060 to 0919f063 has its CatchHandler @ 0909f208 */
                    /* try { // try from 0909f064 to 0919f067 has its CatchHandler @ 0909f1c4 */
                    /* try { // try from 0909f068 to 0919f06b has its CatchHandler @ 0909f20c */
    plVar3 = param_1;
                    /* try { // try from 0909f06c to 0919f06f has its CatchHandler @ 0909f204 */
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != in_x9) {
      plVar3 = (long *)0x0;
    }
  }
                    /* try { // try from 0909f070 to 0919f073 has its CatchHandler @ 0909f200 */
  *(long **)(unaff_x19 + 0x118) = plVar3;
                    /* try { // try from 0909f074 to 0919f077 has its CatchHandler @ 0909f1f8 */
                    /* try { // try from 0909f078 to 0919f07b has its CatchHandler @ 0909f1f4 */
                    /* try { // try from 0909f07c to 0919f093 has its CatchHandler @ 0909f24c */
  if (*(byte *)(*param_1 + 0x130) < bVar1) {
    param_1 = (long *)0x0;
  }
  else {
                    /* try { // try from 0909f094 to 0919f09b has its CatchHandler @ 0909f170 */
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != in_x9) {
      param_1 = (long *)0x0;
    }
  }
                    /* try { // try from 0909f0a8 to 0919f0ab has its CatchHandler @ 0909f16c */
  thunk_FUN_049ee3d8(unaff_x19 + 0x118,param_1);
                    /* try { // try from 0909f0ac to 0919f0af has its CatchHandler @ 0909f1b8 */
                    /* try { // try from 0909f0b0 to 0919f0b3 has its CatchHandler @ 0909f1b0 */
                    /* try { // try from 0909f0b4 to 0919f0b7 has its CatchHandler @ 0909f1a8 */
  uVar2 = FUN_05b00274();
                    /* try { // try from 0909f0b8 to 0919f0bb has its CatchHandler @ 0909f180 */
                    /* try { // try from 0909f0bc to 0919f0bf has its CatchHandler @ 0909f1a4 */
                    /* try { // try from 0909f0c0 to 0919f0c3 has its CatchHandler @ 0909f198 */
  *(undefined8 *)(unaff_x19 + 0x130) = uVar2;
                    /* try { // try from 0909f0c4 to 0919f0c7 has its CatchHandler @ 0909f17c */
                    /* try { // try from 0909f0c8 to 0919f0cb has its CatchHandler @ 0909f190 */
                    /* try { // try from 0909f0cc to 0919f0cf has its CatchHandler @ 0909f194 */
  thunk_FUN_049ee3d8(unaff_x19 + 0x130);
  return;
}


