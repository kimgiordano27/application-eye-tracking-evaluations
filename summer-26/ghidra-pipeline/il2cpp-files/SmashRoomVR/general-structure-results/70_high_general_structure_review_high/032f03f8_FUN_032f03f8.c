/*
FUNCTION_NAME: FUN_032f03f8
ENTRY_POINT: 032f03f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_032f03f8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_03ff5af9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_364);
    thunk_FUN_01ad9084(StringLiteral_359);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5af9 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032f0718 to 033f071b has its CatchHandler @ 032f0994 */
    FUN_01b48178();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x104);
  uVar10 = *(undefined4 *)(param_2 + 0x108);
                    /* try { // try from 032f0474 to 033f047f has its CatchHandler @ 032f07e0 */
  uVar3 = FUN_032eec18(param_2);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar5,0,0);
                    /* try { // try from 032f04b8 to 033f04c3 has its CatchHandler @ 032f0950 */
    if ((((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x145) == '\0')) &&
       (uVar3 = FUN_032effac(param_1,param_2), (uVar3 & 1) != 0)) {
      uVar3 = FUN_032ee7a8(param_2);
      if ((uVar3 & 1) != 0) {
        uVar8 = uVar10;
                    /* try { // try from 032f04d0 to 033f04db has its CatchHandler @ 032f0930 */
                    /* try { // try from 032f04e0 to 033f04e7 has its CatchHandler @ 032f095c */
        uVar7 = FUN_032f0370(uVar9,param_1,param_2);
        *(undefined4 *)(param_2 + 0x104) = uVar7;
        *(undefined4 *)(param_2 + 0x108) = uVar8;
      }
                    /* try { // try from 032f04ec to 033f04f7 has its CatchHandler @ 032f0948 */
      puVar2 = StringLiteral_362;
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 032f0508 to 033f0517 has its CatchHandler @ 032f0944 */
      if (DAT_03fed7c6 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c6 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 032f0534 to 033f0543 has its CatchHandler @ 032f0940 */
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar5,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),
                   *(undefined8 *)StringLiteral_364);
      *(undefined1 *)(param_2 + 0x145) = 1;
    }
                    /* try { // try from 032f0564 to 033f0577 has its CatchHandler @ 032f0934 */
    if (*(char *)(param_2 + 0x145) != '\0') {
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_032ee7a8(param_2);
        if ((uVar3 & 1) != 0) {
          uVar9 = FUN_032f0370(uVar9,param_1,param_2);
          *(undefined4 *)(param_2 + 0x104) = uVar9;
          *(undefined4 *)(param_2 + 0x108) = uVar10;
        }
                    /* try { // try from 032f05c0 to 033f0603 has its CatchHandler @ 032f0960 */
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = *(undefined8 *)(param_2 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar5,uVar6,0);
        puVar1 = StringLiteral_362;
        if ((uVar3 & 1) != 0) {
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
                    /* try { // try from 032f0604 to 033f0707 has its CatchHandler @ 032ef674 */
          if (DAT_03fed7c8 == '\0') {
            thunk_FUN_01ad9084(StringLiteral_362);
            DAT_03fed7c8 = '\x01';
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar4 = *(long *)puVar1;
          }
          FUN_01ecfb94(uVar5,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),
                       *(undefined8 *)StringLiteral_370);
          *(undefined1 *)(param_2 + 0xf8) = 0;
          FUN_03b261cc(param_2,0,0);
          *(undefined8 *)(param_2 + 0x38) = 0;
          thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),0);
        }
        puVar1 = StringLiteral_362;
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c3 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c3 = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar1;
        }
        FUN_01ecfb94(uVar5,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x40),
                     *(undefined8 *)StringLiteral_359);
        return;
      }
    }
  }
                    /* try { // try from 032f0708 to 033f070b has its CatchHandler @ 032f0984 */
                    /* try { // try from 032f070c to 033f070f has its CatchHandler @ 032f0994 */
                    /* try { // try from 032f0710 to 033f0713 has its CatchHandler @ 032f0980 */
                    /* try { // try from 032f0714 to 033f0717 has its CatchHandler @ 032f0990 */
  return;
}


