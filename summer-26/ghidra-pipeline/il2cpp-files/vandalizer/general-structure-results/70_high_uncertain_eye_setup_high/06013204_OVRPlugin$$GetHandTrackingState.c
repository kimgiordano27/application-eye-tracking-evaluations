/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 06013204
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  
                    /* try { // try from 06013204 to 06113237 has its CatchHandler @ 06012e94 */
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x2a8));
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06013200 with catch @ 0601320c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060131f0 with catch @ 06013210
                        */
  *(undefined1 *)(unaff_x21 + 0x9be) = 1;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06013064 with catch @ 06013214
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06013008 with catch @ 06013218
                        */
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060131f4 with catch @ 0601321c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060130c4 with catch @ 06013220
                        */
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8(uVar3,0,0);
                    /* try { // try from 06013238 to 0611323b has its CatchHandler @ 06013248 */
  if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 06013238 with catch @ 06013248 */
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar2 = thunk_FUN_06e03254(*(long *)(unaff_x19 + 0x48),0), lVar2 != 0)) {
                    /* try { // try from 06013258 to 061132bf has its CatchHandler @ 060132d4 */
      FUN_06e0c91c(lVar2,*(undefined8 *)(unaff_x19 + 0x58),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return;
}


