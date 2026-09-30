/*
FUNCTION_NAME: FUN_0164ae44
ENTRY_POINT: 0164ae44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0164ae44(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_033eae58;
  if ((DAT_037782b0 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_106_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugActionState_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eae58);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<Stream>__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__
                      );
    DAT_037782b0 = 1;
  }
  lVar2 = thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    return;
  }
                    /* try { // try from 0164aec4 to 0174aecb has its CatchHandler @ 0164b120 */
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Runtime_Remoting_Messaging_ServerObjectReplySink_AsyncProcessMessage__
                            );
  puVar1 = UnityEngine_Rendering_DebugActionState_TypeInfo;
  if (lVar2 != 0) {
                    /* try { // try from 0164aed4 to 0174aedf has its CatchHandler @ 0164b118 */
    FUN_01320e50(lVar2,*(undefined8 *)Method_System_Threading_Tasks_Task_Run<Stream>__);
                    /* try { // try from 0164aee8 to 0174aeef has its CatchHandler @ 0164b11c */
    *(long *)(param_1 + 0x18) = lVar2;
                    /* try { // try from 0164aef0 to 0174b10f has its CatchHandler @ 0164ad1c */
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_01260fc8(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
      *(long *)(param_1 + 0x20) = lVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


