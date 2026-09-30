/*
FUNCTION_NAME: FUN_07bf982c
ENTRY_POINT: 07bf982c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_07bf982c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_09f4e840;
                    /* try { // try from 07bf9838 to 07cf983f has its CatchHandler @ 07bf9a1c */
                    /* try { // try from 07bf984c to 07cf986b has its CatchHandler @ 07bf9a30 */
  if ((DAT_0a52627c & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1ea48);
    FUN_04447ba8(PTR_DAT_09f205c8);
    FUN_04447ba8(PTR_DAT_09f4e848);
    FUN_04447ba8(PTR_DAT_09f4e7d0);
                    /* try { // try from 07bf9884 to 07cf988b has its CatchHandler @ 07bf99fc */
    FUN_04447ba8(PTR_DAT_09f4e850);
    FUN_04447ba8(PTR_DAT_09f4e858);
                    /* try { // try from 07bf9898 to 07cf98b7 has its CatchHandler @ 07bf9a20 */
    FUN_04447ba8(PTR_DAT_09f4e840);
    DAT_0a52627c = 1;
  }
  *(undefined8 *)(param_1 + 0x158) = DAT_01c739f0;
  *(undefined8 *)(param_1 + 0x160) = 0xa3d4ccccd;
  lVar3 = *(long *)puVar1;
                    /* try { // try from 07bf98cc to 07cf98d3 has its CatchHandler @ 07bf99e8 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 07bf98e0 to 07cf98ff has its CatchHandler @ 07bf9a00 */
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
                    /* try { // try from 07bf9918 to 07cf991f has its CatchHandler @ 07bf99e4 */
    FUN_0799ce68(lVar6,uVar7,*(undefined8 *)PTR_DAT_09f4e850,0);
                    /* try { // try from 07bf992c to 07cf994b has its CatchHandler @ 07bf99f0 */
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_044bb4b4(plVar4,lVar6);
  }
  *(long *)(param_1 + 0x170) = lVar6;
  thunk_FUN_044bb4b4(param_1 + 0x170,lVar6);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 07bf9964 to 07cf996b has its CatchHandler @ 07bf99e0 */
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 07bf9978 to 07cf9997 has its CatchHandler @ 07bf99ec */
      thunk_FUN_044a54b4();
      lVar3 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f205c8);
                    /* try { // try from 07bf99b0 to 07cf99b3 has its CatchHandler @ 07bf9a64 */
    FUN_0554c1d8(lVar6,uVar7,*(undefined8 *)PTR_DAT_09f4e858,0);
                    /* try { // try from 07bf99b4 to 07cf99b7 has its CatchHandler @ 07bf9a60 */
                    /* try { // try from 07bf99b8 to 07cf99bb has its CatchHandler @ 07bf9a74 */
                    /* try { // try from 07bf99bc to 07cf99bf has its CatchHandler @ 07bf9a54 */
                    /* try { // try from 07bf99c0 to 07cf99c3 has its CatchHandler @ 07bf9a40 */
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar6;
                    /* try { // try from 07bf99c4 to 07cf99c7 has its CatchHandler @ 07bf9a70 */
    thunk_FUN_044bb4b4(plVar4,lVar6);
  }
                    /* try { // try from 07bf99c8 to 07cf99cb has its CatchHandler @ 07bf9a2c */
  puVar2 = PTR_DAT_09f4e848;
  puVar1 = PTR_DAT_09f4e7d0;
                    /* try { // try from 07bf99cc to 07cf99cf has its CatchHandler @ 07bf9a6c */
                    /* try { // try from 07bf99d0 to 07cf99d3 has its CatchHandler @ 07bf9a14 */
                    /* try { // try from 07bf99d4 to 07cf99d7 has its CatchHandler @ 07bf9a48 */
                    /* try { // try from 07bf99d8 to 07cf99db has its CatchHandler @ 07bf9a44 */
                    /* catch() { ... } // from try @ 07bf9664 with catch @ 07bf99dc
                       try { // try from 07bf99dc to 07cf9a8f has its CatchHandler @ 07bf9490 */
                    /* catch() { ... } // from try @ 07bf9964 with catch @ 07bf99e0 */
  *(long *)(param_1 + 0x178) = lVar6;
                    /* catch() { ... } // from try @ 07bf9918 with catch @ 07bf99e4 */
  thunk_FUN_044bb4b4(param_1 + 0x178,lVar6);
                    /* catch() { ... } // from try @ 07bf98cc with catch @ 07bf99e8 */
                    /* catch() { ... } // from try @ 07bf9978 with catch @ 07bf99ec */
                    /* catch() { ... } // from try @ 07bf992c with catch @ 07bf99f0 */
  if (DAT_0a51bf43 == '\0') {
                    /* catch() { ... } // from try @ 07bf9764 with catch @ 07bf99f4 */
                    /* catch() { ... } // from try @ 07bf9608 with catch @ 07bf99f8 */
                    /* catch() { ... } // from try @ 07bf9884 with catch @ 07bf99fc */
    FUN_04447ba8(PTR_DAT_09f1e740);
                    /* catch() { ... } // from try @ 07bf98e0 with catch @ 07bf9a00 */
                    /* catch() { ... } // from try @ 07bf9698 with catch @ 07bf9a04 */
    DAT_0a51bf43 = '\x01';
  }
                    /* catch() { ... } // from try @ 07bf96e8 with catch @ 07bf9a08 */
                    /* catch() { ... } // from try @ 07bf9688 with catch @ 07bf9a0c */
                    /* catch() { ... } // from try @ 07bf96d8 with catch @ 07bf9a10 */
  lVar3 = *(long *)PTR_DAT_09f1e740;
                    /* catch() { ... } // from try @ 07bf99d0 with catch @ 07bf9a14 */
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
                    /* catch() { ... } // from try @ 07bf9634 with catch @ 07bf9a18 */
                    /* catch() { ... } // from try @ 07bf9838 with catch @ 07bf9a1c */
  uVar8 = *(undefined4 *)(puVar5 + 1);
                    /* catch() { ... } // from try @ 07bf9898 with catch @ 07bf9a20 */
  *(undefined8 *)(param_1 + 0x180) = *puVar5;
                    /* catch() { ... } // from try @ 07bf95cc with catch @ 07bf9a24 */
  *(undefined4 *)(param_1 + 0x188) = uVar8;
                    /* catch() { ... } // from try @ 07bf95bc with catch @ 07bf9a28 */
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
                    /* catch() { ... } // from try @ 07bf99c8 with catch @ 07bf9a2c */
                    /* catch() { ... } // from try @ 07bf984c with catch @ 07bf9a30 */
  uVar8 = *(undefined4 *)(puVar5 + 1);
                    /* catch() { ... } // from try @ 07bf9790 with catch @ 07bf9a34 */
                    /* catch() { ... } // from try @ 07bf9780 with catch @ 07bf9a38 */
  *(undefined8 *)(param_1 + 0x18c) = *puVar5;
                    /* catch() { ... } // from try @ 07bf9738 with catch @ 07bf9a3c */
  *(undefined4 *)(param_1 + 0x194) = uVar8;
                    /* catch() { ... } // from try @ 07bf99c0 with catch @ 07bf9a40 */
                    /* catch() { ... } // from try @ 07bf9668 with catch @ 07bf9a44
                       catch() { ... } // from try @ 07bf99d8 with catch @ 07bf9a44 */
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 07bf96d0 with catch @ 07bf9a48
                       catch() { ... } // from try @ 07bf99d4 with catch @ 07bf9a48 */
                    /* catch() { ... } // from try @ 07bf9624 with catch @ 07bf9a4c */
                    /* catch() { ... } // from try @ 07bf960c with catch @ 07bf9a50 */
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar7,0);
                    /* catch() { ... } // from try @ 07bf99bc with catch @ 07bf9a54 */
                    /* catch() { ... } // from try @ 07bf97e0 with catch @ 07bf9a58 */
                    /* catch() { ... } // from try @ 07bf97d0 with catch @ 07bf9a5c */
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
                    /* catch() { ... } // from try @ 07bf99b4 with catch @ 07bf9a60 */
  thunk_FUN_044bb4b4(param_1 + 0x1b0,uVar7);
                    /* catch() { ... } // from try @ 07bf99b0 with catch @ 07bf9a64 */
                    /* catch() { ... } // from try @ 07bf9710 with catch @ 07bf9a68 */
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 07bf95ac with catch @ 07bf9a6c
                       catch() { ... } // from try @ 07bf99cc with catch @ 07bf9a6c */
                    /* catch() { ... } // from try @ 07bf9768 with catch @ 07bf9a70
                       catch() { ... } // from try @ 07bf99c4 with catch @ 07bf9a70 */
                    /* catch() { ... } // from try @ 07bf97c8 with catch @ 07bf9a74
                       catch() { ... } // from try @ 07bf99b8 with catch @ 07bf9a74 */
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar7,0);
                    /* catch() { ... } // from try @ 07bf95dc with catch @ 07bf9a78
                       catch() { ... } // from try @ 07bf96a8 with catch @ 07bf9a78
                       catch() { ... } // from try @ 07bf96f8 with catch @ 07bf9a78
                       catch() { ... } // from try @ 07bf97a0 with catch @ 07bf9a78
                       catch() { ... } // from try @ 07bf97f0 with catch @ 07bf9a78 */
  *(undefined8 *)(param_1 + 0x1b8) = uVar7;
  thunk_FUN_044bb4b4(param_1 + 0x1b8,uVar7);
  uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    /* try { // try from 07bf9a90 to 07cf9aa7 has its CatchHandler @ 07bf9b08 */
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar7,0);
  *(undefined8 *)(param_1 + 0x1c0) = uVar7;
                    /* try { // try from 07bf9aa8 to 07cf9af7 has its CatchHandler @ 07bf9490 */
  thunk_FUN_044bb4b4(param_1 + 0x1c0,uVar7);
  FUN_062ec150(param_1,*(undefined8 *)puVar2);
  return;
}


