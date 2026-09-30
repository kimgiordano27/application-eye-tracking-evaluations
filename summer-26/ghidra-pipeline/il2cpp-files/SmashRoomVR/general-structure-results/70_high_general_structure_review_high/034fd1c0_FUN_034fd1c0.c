/*
FUNCTION_NAME: FUN_034fd1c0
ENTRY_POINT: 034fd1c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_034fd1c0(long *param_1,float *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_03ff6d61 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d88390);
    thunk_FUN_01ad9084(PTR_DAT_03d883a0);
    thunk_FUN_01ad9084(PTR_DAT_03d88398);
    thunk_FUN_01ad9084(StringLiteral_4343);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(PTR_DAT_03d95960);
                    /* try { // try from 034fd238 to 035fd23f has its CatchHandler @ 034fd378 */
    thunk_FUN_01ad9084(StringLiteral_2535);
                    /* try { // try from 034fd240 to 035fd243 has its CatchHandler @ 034fd2c8 */
                    /* try { // try from 034fd244 to 035fd24b has its CatchHandler @ 034fd37c */
    thunk_FUN_01ad9084(StringLiteral_2534);
                    /* try { // try from 034fd24c to 035fd24f has its CatchHandler @ 034fd2c4 */
                    /* try { // try from 034fd250 to 035fd253 has its CatchHandler @ 034fd2b4 */
                    /* try { // try from 034fd254 to 035fd257 has its CatchHandler @ 034fd2a8 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 034fd258 to 035fd25b has its CatchHandler @ 034fd2b4 */
                    /* try { // try from 034fd25c to 035fd25f has its CatchHandler @ 034fcbe4 */
    DAT_03ff6d61 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 034fd260 to 035fd263 has its CatchHandler @ 034fd290 */
                    /* try { // try from 034fd264 to 035fd26b has its CatchHandler @ 034fcbe4 */
  if (param_1[7] == 0) goto LAB_034fd804;
                    /* try { // try from 034fd26c to 035fd26f has its CatchHandler @ 034fd284 */
                    /* try { // try from 034fd270 to 035fd273 has its CatchHandler @ 034fd280 */
  uVar10 = *(undefined8 *)(param_1[7] + 0x40);
                    /* try { // try from 034fd274 to 035fd2e7 has its CatchHandler @ 034fcbe4 */
                    /* catch() { ... } // from try @ 034fcf74 with catch @ 034fd27c */
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
                    /* catch() { ... } // from try @ 034fd270 with catch @ 034fd280 */
    thunk_FUN_01ac7298();
  }
                    /* catch() { ... } // from try @ 034fd26c with catch @ 034fd284 */
                    /* catch() { ... } // from try @ 034fcf8c with catch @ 034fd288 */
                    /* catch() { ... } // from try @ 034fcfac with catch @ 034fd28c */
                    /* catch() { ... } // from try @ 034fd260 with catch @ 034fd290 */
  uVar4 = FUN_0391f968(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 034fcf44 with catch @ 034fd29c */
                    /* catch() { ... } // from try @ 034fcf18 with catch @ 034fd2a0 */
                    /* catch() { ... } // from try @ 034fcef0 with catch @ 034fd2a4 */
                    /* catch() { ... } // from try @ 034fd254 with catch @ 034fd2a8 */
    plVar5 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    puVar3 = StringLiteral_362;
                    /* catch() { ... } // from try @ 034fcf1c with catch @ 034fd2ac */
                    /* catch() { ... } // from try @ 034fd0a8 with catch @ 034fd2b0 */
    if (param_1[7] == 0) goto LAB_034fd804;
                    /* catch() { ... } // from try @ 034fd250 with catch @ 034fd2b4
                       catch() { ... } // from try @ 034fd258 with catch @ 034fd2b4 */
                    /* catch() { ... } // from try @ 034fd17c with catch @ 034fd2b8 */
                    /* catch() { ... } // from try @ 034fce88 with catch @ 034fd2bc */
                    /* catch() { ... } // from try @ 034fcef4 with catch @ 034fd2c0 */
    uVar10 = *(undefined8 *)(param_1[7] + 0x40);
                    /* catch() { ... } // from try @ 034fd24c with catch @ 034fd2c4 */
                    /* catch() { ... } // from try @ 034fd240 with catch @ 034fd2c8 */
                    /* catch() { ... } // from try @ 034fcea4 with catch @ 034fd2cc */
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 034fd104 with catch @ 034fd2d0 */
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff00bd == '\0') {
                    /* try { // try from 034fd2e8 to 035fd2eb has its CatchHandler @ 034fd2f8 */
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff00bd = '\x01';
    }
    lVar6 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 034fd2e8 with catch @ 034fd2f8 */
    if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* try { // try from 034fd300 to 035fd373 has its CatchHandler @ 034fd438 */
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar3;
    }
    FUN_01ecfb94(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                 *(undefined8 *)StringLiteral_4343);
    if (plVar5 == (long *)0x0) goto LAB_034fd804;
    uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
  }
  if (param_1[7] == 0) goto LAB_034fd804;
  if (*(char *)(param_1[7] + 0x38) == '\0') {
    return;
  }
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x72) = 0;
    return;
  }
  fVar16 = *param_2;
  fVar15 = param_2[1];
  if (DAT_03fed263 == '\0') {
                    /* catch() { ... } // from try @ 034fcdb4 with catch @ 034fd374
                       try { // try from 034fd374 to 035fd397 has its CatchHandler @ 034fcbe4 */
                    /* catch() { ... } // from try @ 034fd238 with catch @ 034fd378 */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
                    /* catch() { ... } // from try @ 034fd244 with catch @ 034fd37c */
                    /* catch() { ... } // from try @ 034fce10 with catch @ 034fd380 */
    DAT_03fed263 = '\x01';
  }
  fVar13 = ABS(fVar16);
                    /* try { // try from 034fd398 to 035fd39b has its CatchHandler @ 034fd3ac */
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
                    /* catch() { ... } // from try @ 034fd398 with catch @ 034fd3ac */
  fVar14 = **(float **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) *
           8.0;
                    /* try { // try from 034fd3bc to 035fd423 has its CatchHandler @ 034fd438 */
  fVar12 = fVar13 * DAT_00b55490;
  if (fVar13 * DAT_00b55490 <= fVar14) {
    fVar12 = fVar14;
  }
  if (fVar12 <= ABS(0.0 - fVar16)) {
LAB_034fd3ec:
    plVar5 = (long *)**(undefined8 **)(*(long *)StringLiteral_2534 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_034fd804;
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 034fd424 to 035fd42f has its CatchHandler @ 034fcbe4 */
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2535) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x15) * 0x10 + 0x138);
          goto LAB_034fd45c;
        }
                    /* try { // try from 034fd430 to 035fd437 has its CatchHandler @ 034fd438 */
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 034fd300 with catch @ 034fd438
                       catch() { ... } // from try @ 034fd3bc with catch @ 034fd438
                       catch() { ... } // from try @ 034fd430 with catch @ 034fd438 */
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)StringLiteral_2535,0x15);
LAB_034fd45c:
    fVar15 = (float)(*(code *)*puVar7)(plVar5,puVar7[1]);
    fVar16 = *param_2;
    fVar13 = param_2[1];
    if (fVar16 * fVar16 + fVar13 * fVar13 <= 0.0) {
      iVar11 = 4;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if (ABS(fVar16) <= ABS(fVar13)) {
        if (fVar13 <= 0.0) {
          iVar11 = 3;
        }
        else {
          iVar11 = 1;
        }
      }
      else if (fVar16 <= 0.0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 2;
      }
    }
    if (iVar11 != *(int *)((long)param_1 + 0x394)) {
      *(undefined4 *)(param_1 + 0x72) = 0;
    }
    if (bVar1) goto LAB_034fd4c4;
    if ((int)param_1[0x72] != 0) {
      if ((int)param_1[0x72] < 2) {
        fVar12 = *(float *)(param_1 + 0xb);
      }
      else {
        fVar12 = *(float *)((long)param_1 + 0x5c);
      }
      if (fVar15 <= *(float *)(param_1 + 0x73) + fVar12) goto LAB_034fd4c8;
    }
    plVar5 = (long *)param_1[0x74];
    if (plVar5 == (long *)0x0) {
      lVar6 = param_1[7];
      plVar5 = (long *)thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d95960);
      FUN_03b25914(plVar5,lVar6,0);
      param_1[0x74] = (long)plVar5;
      thunk_FUN_01b4f09c(param_1 + 0x74,plVar5);
      if (plVar5 == (long *)0x0) goto LAB_034fd804;
    }
    (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    *(float *)(plVar5 + 4) = fVar16;
    *(float *)((long)plVar5 + 0x24) = fVar13;
    *(int *)(plVar5 + 5) = iVar11;
    uVar4 = FUN_034fd808(param_1,plVar5);
    puVar3 = StringLiteral_362;
    if ((uVar4 & 1) != 0) {
      if (param_1[7] == 0) goto LAB_034fd804;
      uVar10 = *(undefined8 *)(param_1[7] + 0x40);
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff5b36 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff5b36 = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar3;
      }
      FUN_01ecfb94(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x78),
                   *(undefined8 *)PTR_DAT_03d883a0);
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      *(float *)(param_1 + 0x73) = fVar15;
      *(int *)((long)param_1 + 0x394) = iVar11;
      *(int *)(param_1 + 0x72) = (int)param_1[0x72] + 1;
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  else {
    fVar16 = ABS(fVar15);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar13 = fVar16 * DAT_00b55490;
    if (fVar16 * DAT_00b55490 <= fVar14) {
      fVar13 = fVar14;
    }
    if (fVar13 <= ABS(0.0 - fVar15)) goto LAB_034fd3ec;
LAB_034fd4c4:
    *(undefined4 *)(param_1 + 0x72) = 0;
  }
LAB_034fd4c8:
  if (param_1[7] != 0) {
    uVar10 = *(undefined8 *)(param_1[7] + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (param_1[0x11] == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_03452478(param_1[0x11],0);
    }
    if (param_1[0x12] == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_03452478(param_1[0x12],0);
    }
    plVar5 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    if ((lVar8 != 0) &&
       (uVar4 = FUN_0344193c(lVar8,0), puVar2 = StringLiteral_362, (uVar4 & 1) != 0)) {
      if (param_1[7] == 0) goto LAB_034fd804;
      uVar10 = *(undefined8 *)(param_1[7] + 0x40);
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff5b35 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff5b35 = '\x01';
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x88),
                   *(undefined8 *)PTR_DAT_03d88390);
    }
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (lVar6 == 0) {
        return;
      }
      if ((uVar4 & 1) != 0) {
        return;
      }
      uVar4 = FUN_0344193c(lVar6,0);
      puVar2 = StringLiteral_362;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (param_1[7] != 0) {
        uVar10 = *(undefined8 *)(param_1[7] + 0x40);
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff5b34 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03ff5b34 = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar2;
        }
        FUN_01ecfb94(uVar10,plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80),
                     *(undefined8 *)PTR_DAT_03d88398);
        return;
      }
    }
  }
LAB_034fd804:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


