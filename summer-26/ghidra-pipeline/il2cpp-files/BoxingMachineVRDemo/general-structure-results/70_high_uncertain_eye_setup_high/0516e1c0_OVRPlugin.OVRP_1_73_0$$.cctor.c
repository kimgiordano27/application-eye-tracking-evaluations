/*
FUNCTION_NAME: OVRPlugin.OVRP_1_73_0$$.cctor
ENTRY_POINT: 0516e1c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_73_0___cctor(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  if (param_1 != 0) {
                    /* try { // try from 0516e1c8 to 0526e1cb has its CatchHandler @ 0516e370 */
                    /* try { // try from 0516e1d4 to 0526e1d7 has its CatchHandler @ 0516e36c */
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (*(undefined1 *)(param_1 + 0x20) = 0xe0, *(int *)(param_1 + 0x18) != 1)) {
                    /* try { // try from 0516e1e0 to 0526e1e3 has its CatchHandler @ 0516e364 */
      *(undefined1 *)(param_1 + 0x21) = 0xef;
                    /* try { // try from 0516e1e8 to 0526e1ef has its CatchHandler @ 0516e358 */
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = param_1;
      thunk_FUN_02dd37b4();
      lVar1 = FUN_02d60934(*unaff_x19,2);
                    /* try { // try from 0516e204 to 0526e207 has its CatchHandler @ 0516e368 */
      if (lVar1 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid;
                    /* try { // try from 0516e220 to 0526e227 has its CatchHandler @ 0516e360 */
      if ((*(int *)(lVar1 + 0x18) != 0) &&
         (*(undefined1 *)(lVar1 + 0x20) = 0xf0, *(int *)(lVar1 + 0x18) != 1)) {
        *(undefined1 *)(lVar1 + 0x21) = 0xf4;
        *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar1;
                    /* try { // try from 0516e240 to 0526e243 has its CatchHandler @ 0516e368 */
        thunk_FUN_02dd37b4();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


