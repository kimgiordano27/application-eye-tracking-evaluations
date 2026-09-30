/*
FUNCTION_NAME: FUN_03b300c0
ENTRY_POINT: 03b300c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_14;telemetry_or_network_hits_6
*/


void FUN_03b300c0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((DAT_03ffdbdb & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4346);
    thunk_FUN_01ad9084(StringLiteral_4344);
    thunk_FUN_01ad9084(PTR_DAT_03d7f728);
    thunk_FUN_01ad9084(StringLiteral_368);
    thunk_FUN_01ad9084(StringLiteral_4345);
    thunk_FUN_01ad9084(StringLiteral_369);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_366);
    thunk_FUN_01ad9084(StringLiteral_367);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdbdb = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 0xf8) = 1;
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    uVar10 = **(undefined8 **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    *(undefined2 *)(param_2 + 0x144) = 1;
    *(undefined8 *)(param_2 + 0x10c) = uVar10;
    *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x104);
    memcpy((void *)(param_2 + 0xa0),(void *)(param_2 + 0x50),0x50);
    thunk_FUN_01b4f09c((void *)(param_2 + 0xa0),0);
    FUN_03b2d630(param_1,uVar6,param_2);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar10,uVar6,0);
    if ((uVar3 & 1) != 0) {
      FUN_03b2b6b0(param_1,param_2,uVar6);
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),uVar6);
    }
    puVar2 = StringLiteral_362;
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c5 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c5 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar2;
    }
    uVar10 = FUN_01ed03b4(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),
                          *(undefined8 *)StringLiteral_4344);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar3 = FUN_03922f24(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_367);
    }
    fVar9 = (float)FUN_03925d1c(0);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar10,uVar8,0);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 03b30374 to 03c30477 has its CatchHandler @ 03b30374
                       catch() { ... } // from try @ 03b30374 with catch @ 03b30374
                       catch() { ... } // from try @ 03b3057c with catch @ 03b30374
                       catch() { ... } // from try @ 03b30690 with catch @ 03b30374
                       catch() { ... } // from try @ 03b306d8 with catch @ 03b30374
                       catch() { ... } // from try @ 03b30718 with catch @ 03b30374 */
      *(undefined4 *)(param_2 + 0x138) = 1;
    }
    else {
      if (DAT_00b556ec <= fVar9 - *(float *)(param_2 + 0x134)) {
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(param_2 + 0x138) + 1;
      }
      *(int *)(param_2 + 0x138) = iVar5;
      *(float *)(param_2 + 0x134) = fVar9;
    }
    FUN_03b261cc(param_2,uVar10);
    *(undefined8 *)(param_2 + 0x38) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),uVar6);
    *(float *)(param_2 + 0x134) = fVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_366);
    puVar7 = (undefined8 *)(param_2 + 0x40);
    *puVar7 = uVar10;
    thunk_FUN_01b4f09c(puVar7,uVar10);
    uVar10 = *puVar7;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      uVar10 = *puVar7;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00be == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00be = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),
                   *(undefined8 *)StringLiteral_4345);
    }
                    /* try { // try from 03b30478 to 03c3047f has its CatchHandler @ 03b306bc */
    *(long *)(param_1 + 0x78) = param_2;
    thunk_FUN_01b4f09c((long *)(param_1 + 0x78),param_2);
  }
  puVar1 = StringLiteral_362;
  if ((param_4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 03b3049c to 03c304af has its CatchHandler @ 03b306b4 */
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),
                 *(undefined8 *)StringLiteral_370);
    uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_367);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar8 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 03b30524 to 03c3052f has its CatchHandler @ 03b306b0 */
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar8,uVar10,0);
    if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0xf8) == '\0')) {
      uVar10 = *(undefined8 *)(param_2 + 0x40);
                    /* try { // try from 03b305e0 to 03c305eb has its CatchHandler @ 03b306a4 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 03b305f0 to 03c30607 has its CatchHandler @ 03b3069c */
      uVar3 = FUN_0391f968(uVar10,0,0);
      if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
                    /* try { // try from 03b3060c to 03c30643 has its CatchHandler @ 03b30698 */
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff00bf == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03ff00bf = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
                    /* try { // try from 03b30644 to 03c30647 has its CatchHandler @ 03b306b8 */
          lVar4 = *(long *)puVar1;
        }
                    /* try { // try from 03b30648 to 03c3068f has its CatchHandler @ 03b306ac */
        FUN_01ed03b4(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50),
                     *(undefined8 *)StringLiteral_4346);
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
                    /* try { // try from 03b30570 to 03c3057b has its CatchHandler @ 03b306a0 */
        thunk_FUN_01ad9084(StringLiteral_362);
                    /* try { // try from 03b3057c to 03c305c7 has its CatchHandler @ 03b30374 */
        DAT_03fed7c7 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      FUN_01ecfb94(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),
                   *(undefined8 *)StringLiteral_369);
    }
    *(undefined1 *)(param_2 + 0xf8) = 0;
    FUN_03b261cc(param_2,0);
    *(undefined8 *)(param_2 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),0);
    puVar7 = (undefined8 *)(param_2 + 0x40);
    uVar6 = *puVar7;
                    /* try { // try from 03b30690 to 03c306d3 has its CatchHandler @ 03b30374 */
                    /* catch() { ... } // from try @ 03b3060c with catch @ 03b30698 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03b305f0 with catch @ 03b3069c */
      thunk_FUN_01ac7298();
    }
                    /* catch() { ... } // from try @ 03b30570 with catch @ 03b306a0 */
                    /* catch() { ... } // from try @ 03b305e0 with catch @ 03b306a4 */
                    /* catch() { ... } // from try @ 03b305c8 with catch @ 03b306a8 */
                    /* catch() { ... } // from try @ 03b30648 with catch @ 03b306ac */
    uVar3 = FUN_0391f968(uVar6,0,0);
                    /* catch() { ... } // from try @ 03b30524 with catch @ 03b306b0 */
                    /* catch() { ... } // from try @ 03b3049c with catch @ 03b306b4 */
                    /* catch() { ... } // from try @ 03b30644 with catch @ 03b306b8 */
    if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
                    /* catch() { ... } // from try @ 03b30478 with catch @ 03b306bc */
      uVar6 = *puVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 03b306d4 to 03c306d7 has its CatchHandler @ 03b30700 */
                    /* try { // try from 03b306d8 to 03c3070f has its CatchHandler @ 03b30374 */
      if (DAT_03fed7c9 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c9 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
                    /* catch() { ... } // from try @ 03b306d4 with catch @ 03b30700 */
        lVar4 = *(long *)puVar1;
      }
                    /* try { // try from 03b30710 to 03c30717 has its CatchHandler @ 03b3072c */
                    /* try { // try from 03b30718 to 03c30723 has its CatchHandler @ 03b30374 */
      FUN_01ecfb94(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48),
                   *(undefined8 *)StringLiteral_368);
    }
                    /* try { // try from 03b30724 to 03c3072b has its CatchHandler @ 03b3072c */
                    /* catch() { ... } // from try @ 03b30710 with catch @ 03b3072c
                       catch() { ... } // from try @ 03b30724 with catch @ 03b3072c */
    *(undefined1 *)(param_2 + 0x145) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    thunk_FUN_01b4f09c(puVar7,0);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff1eb4 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff1eb4 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    FUN_01ed03b4(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_03d7f728);
    *(undefined8 *)(param_2 + 0x20) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),0);
    *(long *)(param_1 + 0x78) = param_2;
    thunk_FUN_01b4f09c((long *)(param_1 + 0x78),param_2);
    return;
  }
                    /* try { // try from 03b305c8 to 03c305d3 has its CatchHandler @ 03b306a8 */
  return;
}


