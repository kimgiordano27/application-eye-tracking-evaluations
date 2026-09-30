/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 090a5778
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  puVar1 = PTR_DAT_0ac76fb8;
                    /* try { // try from 090a5788 to 091a5793 has its CatchHandler @ 090a5b80 */
  if ((DAT_0b3302b3 & 1) == 0) {
                    /* try { // try from 090a57a4 to 091a57ab has its CatchHandler @ 090a5ba8 */
    FUN_04947ee4(PTR_DAT_0ac76fb8);
    FUN_04947ee4(PTR_DAT_0ac0ee48);
    FUN_04947ee4(PTR_DAT_0ac79000);
                    /* try { // try from 090a57c0 to 091a57c3 has its CatchHandler @ 090a5ba0 */
    FUN_04947ee4(PTR_DAT_0ac79008);
    FUN_04947ee4(PTR_DAT_0ac79010);
                    /* try { // try from 090a57e0 to 091a57e7 has its CatchHandler @ 090a5b98 */
    FUN_04947ee4(PTR_DAT_0ac79018);
    DAT_0b3302b3 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 090a57f8 to 091a583b has its CatchHandler @ 090a5bbc */
    thunk_FUN_049a583c();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_0ac79010;
  puVar3 = PTR_DAT_0ac79008;
  puVar2 = PTR_DAT_0ac79000;
  if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_090a595c:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac0ee48,
                       *(undefined4 *)(**(long **)(lVar6 + 0xb8) + 0x18));
  plVar10 = (long *)(param_1 + 0x10);
  *plVar10 = lVar6;
  thunk_FUN_049ee3d8(plVar10,lVar6);
  FUN_08dbf2f0(param_1,0);
                    /* try { // try from 090a5858 to 091a586b has its CatchHandler @ 090a5bb8 */
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_049ee3d8((long *)(param_1 + 0x18),param_2);
  lVar6 = 8;
  while( true ) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
                    /* try { // try from 090a587c to 091a587f has its CatchHandler @ 090a5bb4 */
      lVar7 = *(long *)puVar1;
    }
                    /* try { // try from 090a5884 to 091a588f has its CatchHandler @ 090a5b90 */
    if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_090a595c;
    uVar12 = lVar6 - 8;
                    /* try { // try from 090a5894 to 091a589f has its CatchHandler @ 090a5b8c */
    if ((long)*(int *)(**(long **)(lVar7 + 0xb8) + 0x18) <= (long)uVar12) {
      return;
    }
                    /* try { // try from 090a58a4 to 091a58af has its CatchHandler @ 090a5bac */
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79018);
                    /* try { // try from 090a58b0 to 091a590f has its CatchHandler @ 090a55d4 */
    FUN_08dbf2f0(lVar7,0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = **(long **)(lVar8 + 0xb8);
    if (lVar8 == 0) goto LAB_090a595c;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) break;
    if (lVar7 == 0) goto LAB_090a595c;
    uVar9 = *(undefined8 *)puVar3;
    lVar11 = *plVar10;
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar8 + lVar6 * 4);
    uVar9 = thunk_FUN_04983f60(uVar9);
    FUN_0718cabc(uVar9,lVar7,*(undefined8 *)puVar4,0);
                    /* try { // try from 090a5910 to 091a591b has its CatchHandler @ 090a5b60 */
    if ((param_2 == 0) || (uVar5 = FUN_06b8072c(param_2,uVar9,*(undefined8 *)puVar2), lVar11 == 0))
    goto LAB_090a595c;
                    /* try { // try from 090a5930 to 091a594f has its CatchHandler @ 090a5b7c */
    if (*(uint *)(lVar11 + 0x18) <= uVar12) break;
    *(undefined4 *)(lVar11 + lVar6 * 4) = uVar5;
    lVar6 = lVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


