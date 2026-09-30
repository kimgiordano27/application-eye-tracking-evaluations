/*
FUNCTION_NAME: OVRPlugin.ControllerState6$$.ctor
ENTRY_POINT: 069651f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState6___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 069651f8 to 06a651fb has its CatchHandler @ 06965240 */
  if ((uint)in_x10 < in_w11) {
                    /* try { // try from 069651fc to 06a65243 has its CatchHandler @ 06964fc8 */
    *(uint *)(unaff_x20 + 0x18) = (uint)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_03afed3c();
  }
  else {
    FUN_04de85b0();
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 069651f8 with catch @ 06965240 */
  if (lVar3 != 0) {
                    /* try { // try from 06965244 to 06a6524b has its CatchHandler @ 06965254 */
    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 0696524c to 06a65257 has its CatchHandler @ 06964fc8 */
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    /* catch() { ... } // from try @ 069651d8 with catch @ 06965254
                       catch() { ... } // from try @ 06965244 with catch @ 06965254 */
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0();
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        thunk_FUN_03afed3c();
      }
      else {
        FUN_04de85b0();
      }
      lVar3 = *(long *)(unaff_x20 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0();
        }
        *(long *)(unaff_x19 + 0x28) = unaff_x20;
        thunk_FUN_03afed3c((long *)(unaff_x19 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


