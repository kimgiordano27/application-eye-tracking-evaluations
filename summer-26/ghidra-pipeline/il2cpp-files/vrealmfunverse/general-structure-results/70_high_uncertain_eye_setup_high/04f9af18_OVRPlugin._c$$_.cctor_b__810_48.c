/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_48
ENTRY_POINT: 04f9af18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_48(int param_1)

{
  int iVar1;
  long unaff_x20;
  long unaff_x21;
  long *plVar2;
  
                    /* try { // try from 04f9af18 to 0509af1f has its CatchHandler @ 04f9af60 */
                    /* try { // try from 04f9af20 to 0509af47 has its CatchHandler @ 04f9ad38 */
  plVar2 = *(long **)(unaff_x21 + 0xf00);
  if ((*(byte *)(unaff_x20 + 0xe38) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631ef00);
    *(undefined1 *)(unaff_x20 + 0xe38) = 1;
  }
  iVar1 = *(int *)(*plVar2 + 0xe4);
  if (param_1 != 0) {
                    /* try { // try from 04f9af48 to 0509af4b has its CatchHandler @ 04f9af74 */
    if (iVar1 == 0) {
                    /* try { // try from 04f9af4c to 0509af4f has its CatchHandler @ 04f9af70 */
      thunk_FUN_02b9ad44();
    }
                    /* try { // try from 04f9af50 to 0509af53 has its CatchHandler @ 04f9af68 */
                    /* try { // try from 04f9af54 to 0509af57 has its CatchHandler @ 04f9af5c */
                    /* try { // try from 04f9af58 to 0509af97 has its CatchHandler @ 04f9ad38 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9af54 with catch @ 04f9af5c
                        */
    FUN_04f9aaa8(param_1);
    return;
  }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9af18 with catch @ 04f9af60
                        */
  if (iVar1 == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9aef8 with catch @ 04f9af64
                        */
    thunk_FUN_02b9ad44();
  }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9af50 with catch @ 04f9af68
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9aee0 with catch @ 04f9af6c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9af4c with catch @ 04f9af70
                        */
  FUN_04f9a74c();
  return;
}


