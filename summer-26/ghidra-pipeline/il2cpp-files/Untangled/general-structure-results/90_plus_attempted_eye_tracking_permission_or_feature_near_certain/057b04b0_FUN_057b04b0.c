/*
FUNCTION_NAME: FUN_057b04b0
ENTRY_POINT: 057b04b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 93
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void FUN_057b04b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar3 = PTR_DAT_06d5b6f0;
  puVar2 = PTR_DAT_06d5a000;
                    /* try { // try from 057b04d8 to 058b04db has its CatchHandler @ 057b0508 */
                    /* try { // try from 057b04dc to 058b04df has its CatchHandler @ 057b04f8 */
                    /* try { // try from 057b04e0 to 058b04e3 has its CatchHandler @ 057b0504 */
                    /* catch() { ... } // from try @ 057b0434 with catch @ 057b04e4
                       try { // try from 057b04e4 to 058b051f has its CatchHandler @ 057b034c */
                    /* catch() { ... } // from try @ 057b0448 with catch @ 057b04e8 */
  if ((DAT_071c5baa & 1) == 0) {
                    /* catch() { ... } // from try @ 057b0414 with catch @ 057b04ec */
                    /* catch() { ... } // from try @ 057b0404 with catch @ 057b04f0 */
                    /* catch() { ... } // from try @ 057b03e0 with catch @ 057b04f4 */
    FUN_02f07e70(PTR_DAT_06d5a000);
                    /* catch() { ... } // from try @ 057b04dc with catch @ 057b04f8 */
                    /* catch() { ... } // from try @ 057b0480 with catch @ 057b04fc */
                    /* catch() { ... } // from try @ 057b03c0 with catch @ 057b0500 */
    FUN_02f07e70(PTR_DAT_06d5b6f0);
                    /* catch() { ... } // from try @ 057b03f4 with catch @ 057b0504
                       catch() { ... } // from try @ 057b04e0 with catch @ 057b0504 */
                    /* catch() { ... } // from try @ 057b0498 with catch @ 057b0508
                       catch() { ... } // from try @ 057b04d8 with catch @ 057b0508 */
    FUN_02f07e70(PTR_DAT_06d5b568);
    FUN_02f07e70(PTR_DAT_06d5b6f8);
                    /* try { // try from 057b0520 to 058b0537 has its CatchHandler @ 057b0598 */
    FUN_02f07e70(PTR_DAT_06d5b700);
    FUN_02f07e70(PTR_DAT_06d5b708);
                    /* try { // try from 057b0538 to 058b0587 has its CatchHandler @ 057b034c */
    DAT_071c5baa = 1;
  }
  puVar5 = PTR_DAT_06d5b708;
  puVar4 = PTR_DAT_06d5b700;
  FUN_04abb060(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(param_2,0);
  uVar6 = FUN_0565dbf4(uVar7,0);
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_03fd04d8(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
  thunk_FUN_02f411dc(plVar13,lVar8);
  puVar4 = PTR_DAT_06d5b6f8;
  puVar3 = PTR_DAT_06d5b568;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
      uVar7 = FUN_0565dbf8(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
      uVar7 = FUN_05784d38(param_2,uVar7,0);
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_057add18(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_057b06d4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_057b06d4;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_02f411dc(puVar10,uVar9);
      }
      else {
        FUN_03fd0c9c(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_05784dbc(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


