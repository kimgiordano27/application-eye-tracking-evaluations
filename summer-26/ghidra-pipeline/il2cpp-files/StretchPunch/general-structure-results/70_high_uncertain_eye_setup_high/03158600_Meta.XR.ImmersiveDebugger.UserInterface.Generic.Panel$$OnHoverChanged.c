/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnHoverChanged
ENTRY_POINT: 03158600
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnHoverChanged
               (long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
                    /* try { // try from 03158618 to 0325863f has its CatchHandler @ 0315869c */
  if (param_2 < 0) {
                    /* try { // try from 03158680 to 0325868f has its CatchHandler @ 03158470 */
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
                    /* try { // try from 03158690 to 03258693 has its CatchHandler @ 03158694 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03158690 with catch @ 03158694
                       try { // try from 03158694 to 032586b7 has its CatchHandler @ 03158470 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03158668 with catch @ 03158698
                        */
    FUN_033b3224(0x10,4,0);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03158618 with catch @ 0315869c
                        */
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  FUN_02039b34(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,
               *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb8));
  return;
}


