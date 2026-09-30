/*
FUNCTION_NAME: FUN_02e471dc
ENTRY_POINT: 02e471dc
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


void FUN_02e471dc(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_03ff02b5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff02b5 = 1;
  }
  if (param_1[0x1b] == 0) goto LAB_02e475a8;
  FUN_0395e710(*(undefined4 *)((long)param_1 + 0xbc),0,0,param_1[0x1b],0);
  if ((char)param_1[0x1e] != '\0') {
    return;
  }
  if (param_1[0x1a] == 0) goto LAB_02e475a8;
  if (*(float *)(param_1 + 7) <= ABS(*(float *)(param_1[0x1a] + 0x7c))) {
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
    *(undefined1 *)((long)param_1 + 0xc1) = 0;
  }
  else {
    fVar9 = *(float *)((long)param_1 + 0xf4);
    fVar7 = (float)FUN_03925cf4(0);
    *(float *)((long)param_1 + 0xf4) = fVar9 + fVar7;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar6 = param_1[0x10];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar6,0);
  if ((uVar2 & 1) == 0) {
LAB_02e472b0:
    lVar6 = param_1[0x13];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar6,0);
    if ((uVar2 & 1) != 0) {
      if (param_1[0x13] == 0) goto LAB_02e475a8;
      uVar2 = FUN_02ddfc74(param_1[0x13],0);
      if ((uVar2 & 1) != 0) goto LAB_02e472e8;
    }
  }
  else {
    if (param_1[0x10] == 0) goto LAB_02e475a8;
    uVar2 = FUN_02ddfc74(param_1[0x10],0);
    if ((uVar2 & 1) == 0) goto LAB_02e472b0;
LAB_02e472e8:
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
  }
  if (*(float *)((long)param_1 + 0xf4) <= *(float *)(param_1 + 8)) {
    cVar4 = *(char *)((long)param_1 + 0xc1);
  }
  else {
    cVar4 = '\x01';
    *(undefined1 *)((long)param_1 + 0xc1) = 1;
  }
  if (*(char *)((long)param_1 + 0xc5) == '\0') {
    if (cVar4 != '\0') {
      pcVar5 = *(code **)(*param_1 + 0x1e8);
      uVar3 = *(undefined8 *)(*param_1 + 0x1f0);
      goto LAB_02e47330;
    }
  }
  else if (cVar4 == '\0') {
    pcVar5 = *(code **)(*param_1 + 0x1f8);
    uVar3 = *(undefined8 *)(*param_1 + 0x200);
LAB_02e47330:
    (*pcVar5)(param_1,uVar3);
  }
  fVar9 = *(float *)((long)param_1 + 0x44);
  fVar7 = fVar9 * 0.5;
  if (*(float *)(param_1 + 9) <= fVar9) {
    fVar7 = *(float *)(param_1 + 9);
  }
  if (*(char *)((long)param_1 + 0xc2) == '\0') {
    if (param_1[0x1a] == 0) goto LAB_02e475a8;
    if ((ABS(*(float *)(param_1[0x1a] + 0x7c)) <= fVar9) ||
       (fVar9 = (float)FUN_03925ca4(0),
       fVar9 - *(float *)((long)param_1 + 0xfc) <= *(float *)(param_1 + 0xc))) goto LAB_02e473a8;
    uVar8 = FUN_03925ca4(0);
    *(undefined4 *)((long)param_1 + 0xfc) = uVar8;
    *(undefined1 *)((long)param_1 + 0xc2) = 1;
    pcVar5 = *(code **)(*param_1 + 0x1b8);
    uVar3 = *(undefined8 *)(*param_1 + 0x1c0);
LAB_02e47404:
    (*pcVar5)(param_1,uVar3);
  }
  else {
LAB_02e473a8:
    if (*(char *)((long)param_1 + 0xc3) == '\0') {
      if (param_1[0x1a] == 0) goto LAB_02e475a8;
      if ((ABS(*(float *)(param_1[0x1a] + 0x7c)) < *(float *)((long)param_1 + 0x44)) &&
         (fVar9 = (float)FUN_03925ca4(0),
         *(float *)(param_1 + 0xc) < fVar9 - *(float *)(param_1 + 0x1f))) {
        uVar8 = FUN_03925ca4(0);
        *(undefined4 *)(param_1 + 0x1f) = uVar8;
        *(undefined1 *)((long)param_1 + 0xc3) = 1;
        pcVar5 = *(code **)(*param_1 + 0x1a8);
        uVar3 = *(undefined8 *)(*param_1 + 0x1b0);
        goto LAB_02e47404;
      }
    }
    if (*(char *)((long)param_1 + 0xc2) != '\0') {
      if (param_1[0x1a] == 0) goto LAB_02e475a8;
      if (ABS(*(float *)(param_1[0x1a] + 0x7c)) < *(float *)((long)param_1 + 0x44) - fVar7) {
        *(undefined1 *)((long)param_1 + 0xc2) = 0;
        goto LAB_02e4746c;
      }
    }
    if (*(char *)((long)param_1 + 0xc3) != '\0') {
      if (param_1[0x1a] == 0) goto LAB_02e475a8;
      if (fVar7 + *(float *)((long)param_1 + 0x44) < ABS(*(float *)(param_1[0x1a] + 0x7c))) {
        *(undefined1 *)((long)param_1 + 0xc3) = 0;
      }
    }
  }
LAB_02e4746c:
  if ((char)param_1[0xe] == '\0') goto LAB_02e47590;
  if (param_1[0xf] == 0) goto LAB_02e475a8;
  if (*(float *)((long)param_1 + 0x74) <= ABS(*(float *)(param_1[0xf] + 0x7c))) {
LAB_02e47554:
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar6 = param_1[0x12];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar6,0);
    if ((uVar2 & 1) != 0) {
      if (param_1[0x12] == 0) goto LAB_02e475a8;
      if (*(float *)((long)param_1 + 0x74) <= ABS(*(float *)(param_1[0x12] + 0x7c)))
      goto LAB_02e47554;
    }
    if (param_1[0xf] == 0) goto LAB_02e475a8;
    if (ABS(*(float *)(param_1[0xf] + 0x7c)) < *(float *)((long)param_1 + 0x74)) {
      lVar6 = param_1[0x12];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar6,0);
      if ((uVar2 & 1) != 0) {
        if (param_1[0x12] == 0) goto LAB_02e475a8;
        if (*(float *)((long)param_1 + 0x74) <= ABS(*(float *)(param_1[0x12] + 0x7c)))
        goto LAB_02e47558;
      }
      if (param_1[0x1a] == 0) {
LAB_02e475a8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (ABS(*(float *)(param_1[0x1a] + 0x7c)) < *(float *)(param_1 + 7)) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
  }
LAB_02e47558:
  if (*(char *)((long)param_1 + 199) == '\0') {
    if (*(char *)((long)param_1 + 0xc4) == '\0') {
      if ((char)param_1[0x18] == '\0') goto LAB_02e47590;
      pcVar5 = *(code **)(*param_1 + 0x1d8);
      uVar3 = *(undefined8 *)(*param_1 + 0x1e0);
    }
    else {
      if ((char)param_1[0x18] != '\0') goto LAB_02e47590;
      pcVar5 = *(code **)(*param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(*param_1 + 0x1d0);
    }
    (*pcVar5)(param_1,uVar3);
  }
LAB_02e47590:
  *(short *)((long)param_1 + 0xc4) = (short)param_1[0x18];
  return;
}


