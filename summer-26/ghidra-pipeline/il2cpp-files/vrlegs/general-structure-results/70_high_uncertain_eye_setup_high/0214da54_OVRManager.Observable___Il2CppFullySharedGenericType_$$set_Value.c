/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 0214da54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  size_t unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  undefined8 uVar4;
  long unaff_x25;
  long unaff_x29;
  
  lVar1 = FUN_01a46ff8(param_1);
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0xb8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8(lVar3);
  }
                    /* try { // try from 0214dacc to 0224dacf has its CatchHandler @ 0214dad0 */
                    /* catch() { ... } // from try @ 0214da08 with catch @ 0214dad0
                       catch() { ... } // from try @ 0214dacc with catch @ 0214dad0 */
  uVar2 = FUN_020b2864(uVar4,unaff_x29 + -0x10,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
                    /* catch() { ... } // from try @ 0214d994 with catch @ 0214dad4 */
  if ((uVar2 & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
                    /* try { // try from 0214dafc to 0224daff has its CatchHandler @ 0214dfb0 */
    if ((*(byte *)(**(long **)(lVar1 + 0xc0) + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    uVar4 = thunk_FUN_01a89e68();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8(lVar1);
    }
    FUN_0214d8ec(uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40));
    *(undefined8 *)(unaff_x29 + -0x10) = uVar4;
  }
  else {
                    /* catch() { ... } // from try @ 0214da2c with catch @ 0214dad8 */
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  }
                    /* try { // try from 0214db38 to 0224db5f has its CatchHandler @ 0214dfa0 */
  *unaff_x21 = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar1 = *(long *)(unaff_x29 + -0x10);
  memcpy(unaff_x23,unaff_x22,unaff_x20);
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
                    /* try { // try from 0214db7c to 0224dc0f has its CatchHandler @ 0214dfc0 */
    FUN_01ab69d4(lVar1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


