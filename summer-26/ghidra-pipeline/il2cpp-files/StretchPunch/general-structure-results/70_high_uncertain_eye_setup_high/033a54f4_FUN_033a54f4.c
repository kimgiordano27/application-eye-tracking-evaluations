/*
FUNCTION_NAME: FUN_033a54f4
ENTRY_POINT: 033a54f4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_033a54f4(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
            undefined4 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  
  puVar1 = StringLiteral_4737;
  if ((DAT_044a686d & 1) == 0) {
    FUN_01d7d918(StringLiteral_4737);
                    /* try { // try from 033a5540 to 034a554f has its CatchHandler @ 033a5550 */
    DAT_044a686d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 033a54c4 with catch @ 033a5550
                       catch() { ... } // from try @ 033a5540 with catch @ 033a5550 */
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 033a5554 to 034a5557 has its CatchHandler @ 033a5560 */
                    /* try { // try from 033a5558 to 034a5563 has its CatchHandler @ 033a5168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033a5554 with catch @ 033a5560
                        */
  uVar2 = FUN_033a062c(param_1,param_2,param_3,param_4,param_5,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  auVar8 = FUN_03395610(param_1,param_2,0);
  uVar5 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = *(ulong *)(param_4 + 0x70);
  if (DAT_044a53b6 == '\0') {
    FUN_01d7d918(StringLiteral_3003);
    DAT_044a53b6 = '\x01';
    if (uVar2 == 0) goto LAB_033a55d4;
LAB_033a55a4:
    uVar4 = FUN_03277aec(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  else {
    if (uVar2 != 0) goto LAB_033a55a4;
LAB_033a55d4:
    uVar4 = 0;
  }
  if (DAT_044a65e9 == '\0') {
    FUN_01d7d918(StringLiteral_4490);
    FUN_01d7d918(StringLiteral_4437);
    DAT_044a65e9 = '\x01';
  }
  iVar7 = auVar8._8_4_;
  if ((iVar7 == (int)uVar2) &&
     ((iVar7 == 0 ||
      (uVar2 = FUN_032808ac(uVar3,uVar5,uVar4,uVar2,*(undefined8 *)StringLiteral_4490),
      (uVar2 & 1) != 0)))) {
    uVar6 = 0x7f800000;
    goto LAB_033a5780;
  }
  uVar2 = *(ulong *)(param_4 + 0x78);
  if (DAT_044a53b6 == '\0') {
    FUN_01d7d918(StringLiteral_3003);
    DAT_044a53b6 = '\x01';
    if (uVar2 == 0) goto OVRManager__remove_HMDMounted;
LAB_033a564c:
    uVar4 = FUN_03277aec(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  else {
    if (uVar2 != 0) goto LAB_033a564c;
OVRManager__remove_HMDMounted:
    uVar4 = 0;
  }
  if (DAT_044a65e9 == '\0') {
    FUN_01d7d918(StringLiteral_4490);
    FUN_01d7d918(StringLiteral_4437);
    DAT_044a65e9 = '\x01';
  }
  if ((iVar7 == (int)uVar2) &&
     ((iVar7 == 0 ||
      (uVar2 = FUN_032808ac(uVar3,uVar5,uVar4,uVar2,*(undefined8 *)StringLiteral_4490),
      (uVar2 & 1) != 0)))) {
    uVar6 = 0xff800000;
    goto LAB_033a5780;
  }
  uVar2 = *(ulong *)(param_4 + 0x68);
  if (DAT_044a53b6 == '\0') {
    FUN_01d7d918(StringLiteral_3003);
    DAT_044a53b6 = '\x01';
    if (uVar2 == 0) goto LAB_033a5720;
LAB_033a56f0:
    uVar4 = FUN_03277aec(uVar2,0);
    uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
  }
  else {
    if (uVar2 != 0) goto LAB_033a56f0;
LAB_033a5720:
    uVar4 = 0;
  }
  if (DAT_044a65e9 == '\0') {
    FUN_01d7d918(StringLiteral_4490);
    FUN_01d7d918(StringLiteral_4437);
    DAT_044a65e9 = '\x01';
  }
  if ((iVar7 != (int)uVar2) ||
     ((iVar7 != 0 &&
      (uVar2 = FUN_032808ac(uVar3,uVar5,uVar4,uVar2,*(undefined8 *)StringLiteral_4490),
      (uVar2 & 1) == 0)))) {
    return 0;
  }
  uVar6 = 0x7fc00000;
LAB_033a5780:
  *param_5 = uVar6;
  return 1;
}


