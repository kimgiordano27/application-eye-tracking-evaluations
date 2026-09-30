/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 028cb1e0
PROGRAM: sharks-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  
  lVar2 = FUN_0185daa4(param_1);
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar3 = thunk_FUN_01861bbc();
  lVar2 = *unaff_x19;
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0185daa4(lVar2);
    lVar2 = *unaff_x19;
                    /* try { // try from 028cb228 to 029cb267 has its CatchHandler @ 028cb228
                       catch() { ... } // from try @ 028cb228 with catch @ 028cb228
                       catch() { ... } // from try @ 028cb27c with catch @ 028cb228
                       catch() { ... } // from try @ 028cb2b8 with catch @ 028cb228
                       catch() { ... } // from try @ 028cb2f8 with catch @ 028cb228 */
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0185daa4(lVar2);
  }
  FUN_020ecd70(uVar3);
  lVar2 = *unaff_x19;
                    /* try { // try from 028cb268 to 029cb27b has its CatchHandler @ 028cb288 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* try { // try from 028cb27c to 029cb29f has its CatchHandler @ 028cb228 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028cb268 with catch @ 028cb288
                        */
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x70) = uVar3;
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
                    /* try { // try from 028cb2a0 to 029cb2b7 has its CatchHandler @ 028cb2f0 */
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
                    /* try { // try from 028cb2b8 to 029cb2df has its CatchHandler @ 028cb228 */
  thunk_FUN_0188fd20(*(long *)(lVar2 + 0xb8) + 0x70,uVar3);
  lVar2 = *unaff_x19;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
                    /* try { // try from 028cb2e0 to 029cb2ef has its CatchHandler @ 028cb2f0 */
  FUN_01b7eb84(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa0));
  return;
}


