/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 0322cc24
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceComponentStatus(long param_1)

{
  byte bVar1;
  int in_w8;
  long lVar2;
  long *unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  if (in_w8 == 0) {
    thunk_FUN_016466fc();
    param_1 = *unaff_x19;
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined4 *)(lVar2 + 0x30) = unaff_s8;
  *(undefined4 *)(lVar2 + 0x34) = unaff_s9;
  if (pcRam0000000007237f48 == (code *)0x0) {
    pcRam0000000007237f48 =
         (code *)FUN_0160ed64("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
  }
  bVar1 = (*pcRam0000000007237f48)(0);
                    /* try { // try from 0322cc6c to 0332cc7b has its CatchHandler @ 0322cc7c */
  *(byte *)(*(long *)(*unaff_x19 + 0xb8) + 0x38) = bVar1 & 1;
  if (pcRam0000000007237f40 == (code *)0x0) {
                    /* catch() { ... } // from try @ 0322cbf0 with catch @ 0322cc7c
                       catch() { ... } // from try @ 0322cc6c with catch @ 0322cc7c */
                    /* try { // try from 0322cc80 to 0332cc83 has its CatchHandler @ 0322cc8c */
                    /* try { // try from 0322cc84 to 0332cc8f has its CatchHandler @ 0322cb20 */
    pcRam0000000007237f40 = (code *)FUN_0160ed64("UnityEngine.Input::GetMouseButton(System.Int32)");
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322cc80 with catch @ 0322cc8c
                        */
  }
                    /* try { // try from 0322cc90 to 0332cf9f has its CatchHandler @ 0322cc90
                       catch() { ... } // from try @ 0322cc90 with catch @ 0322cc90
                       catch() { ... } // from try @ 0322d068 with catch @ 0322cc90
                       catch() { ... } // from try @ 0322d12c with catch @ 0322cc90
                       catch() { ... } // from try @ 0322d1c8 with catch @ 0322cc90 */
  bVar1 = (*pcRam0000000007237f40)(0);
  *(byte *)(*(long *)(*unaff_x19 + 0xb8) + 0x39) = bVar1 & 1;
  return;
}


