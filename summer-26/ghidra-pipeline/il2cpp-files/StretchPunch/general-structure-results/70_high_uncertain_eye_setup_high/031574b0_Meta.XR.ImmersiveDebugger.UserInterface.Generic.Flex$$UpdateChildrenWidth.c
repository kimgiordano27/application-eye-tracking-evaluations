/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateChildrenWidth
ENTRY_POINT: 031574b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateChildrenWidth
               (long param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
                    /* try { // try from 031574dc to 032574eb has its CatchHandler @ 031574ec */
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
                    /* catch() { ... } // from try @ 03157494 with catch @ 031574ec
                       catch() { ... } // from try @ 031574dc with catch @ 031574ec */
    FUN_033b2d60(0x17,0);
  }
                    /* try { // try from 031574f0 to 032574f3 has its CatchHandler @ 031574fc */
                    /* try { // try from 031574f4 to 032574ff has its CatchHandler @ 0315724c */
  if (1 < param_3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031574f0 with catch @ 031574fc
                        */
    FUN_02050868(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x198));
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


