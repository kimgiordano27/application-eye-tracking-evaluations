/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 0322cb04
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSpaceComponentStatus(undefined1 param_1 [16],undefined4 param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [12];
  
  puVar1 = PTR_DAT_06e2fe98;
  if ((bRam0000000007237fe0 & 1) == 0) {
                    /* try { // try from 0322cb20 to 0332cb73 has its CatchHandler @ 0322cb20
                       catch() { ... } // from try @ 0322cb20 with catch @ 0322cb20
                       catch() { ... } // from try @ 0322cbd8 with catch @ 0322cb20
                       catch() { ... } // from try @ 0322cc08 with catch @ 0322cb20
                       catch() { ... } // from try @ 0322cc84 with catch @ 0322cb20 */
    thunk_FUN_0159f088(PTR_DAT_06da56e0);
    thunk_FUN_0159f088(PTR_DAT_06e507c8);
    thunk_FUN_0159f088(PTR_DAT_06e2fe98);
    bRam0000000007237fe0 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
  if (*(long *)(lVar5 + 0x28) == 0) {
    if (pcRam0000000007237fb0 == (code *)0x0) {
      pcRam0000000007237fb0 = (code *)FUN_0160ed64("UnityEngine.Input::CheckDisabled()");
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322cb74 with catch @ 0322cbd8
                       try { // try from 0322cbd8 to 0332cbef has its CatchHandler @ 0322cb20 */
    }
    uVar4 = (*pcRam0000000007237fb0)();
    if ((uVar4 & 1) == 0) {
      uVar6 = FUN_0322c4f0();
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      *(undefined4 *)(lVar3 + 0x30) = uVar6;
      *(undefined4 *)(lVar3 + 0x34) = param_2;
      if (pcRam0000000007237f48 == (code *)0x0) {
        pcRam0000000007237f48 =
             (code *)FUN_0160ed64("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
      }
      bVar2 = (*pcRam0000000007237f48)(0);
      *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = bVar2 & 1;
      if (pcRam0000000007237f40 == (code *)0x0) {
        pcRam0000000007237f40 =
             (code *)FUN_0160ed64("UnityEngine.Input::GetMouseButton(System.Int32)");
      }
      bVar2 = (*pcRam0000000007237f40)(0);
      *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x39) = bVar2 & 1;
    }
    else {
      lVar3 = *(long *)puVar1;
                    /* try { // try from 0322cbf0 to 0332cc07 has its CatchHandler @ 0322cc7c */
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *(long *)puVar1;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30) = 0;
                    /* try { // try from 0322cc08 to 0332cc6b has its CatchHandler @ 0322cb20 */
      *(undefined2 *)(*(long *)(lVar3 + 0xb8) + 0x38) = 0;
    }
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
                    /* try { // try from 0322cb74 to 0332cbd7 has its CatchHandler @ 0322cbd8 */
      lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    lVar3 = *(long *)(lVar5 + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    auVar7 = (**(code **)(lVar3 + 0x18))
                       (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    lVar3 = *(long *)puVar1;
    lVar5 = *(long *)(lVar3 + 0xb8);
    *(int *)(lVar5 + 0x30) = auVar7._4_4_;
    *(int *)(lVar5 + 0x34) = auVar7._8_4_;
    lVar3 = *(long *)(lVar3 + 0xb8);
    *(bool *)(lVar3 + 0x38) = auVar7._0_4_ == 2;
    *(bool *)(lVar3 + 0x39) = auVar7._0_4_ != 0;
  }
  return;
}


