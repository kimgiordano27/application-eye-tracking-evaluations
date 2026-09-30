/*
FUNCTION_NAME: FUN_01c35a18
ENTRY_POINT: 01c35a18
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


void FUN_01c35a18(long param_1,long param_2)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_03fed534 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_24CB9F17C8326D8BB8EC908716519DF7F265AE825F0DD13BB04E03A90B07D90E
                      );
    DAT_03fed534 = 1;
  }
  fVar11 = (float)FUN_03925ca4(0);
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  fVar13 = *(float *)(param_1 + 0x30);
  if (fVar11 - fVar13 < DAT_00b555e0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  fVar11 = DAT_00b555e0;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_01c35de0;
  uVar6 = FUN_0395b350(*(long *)(param_1 + 0x38),0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_01c35de0;
  fVar12 = (float)FUN_039544e8(param_2,0);
  fVar14 = fVar11;
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar7 = FUN_03954698(param_2,0);
  if (lVar7 == 0) goto LAB_01c35de0;
  lVar7 = FUN_01e8a9f8(lVar7,*(undefined8 *)
                              Field_<PrivateImplementationDetails>_2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64
                      );
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  uVar6 = FUN_03923030(lVar7,0);
  if ((uVar6 & 1) == 0) goto LAB_01c35bb0;
  if (lVar7 == 0) goto LAB_01c35de0;
  if (*(char *)(lVar7 + 0x50) == '\0') {
LAB_01c35bb0:
    bVar1 = true;
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(uVar8,uVar10,0);
    if ((uVar6 & 1) == 0) goto LAB_01c35bb0;
    bVar1 = false;
  }
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar13 = (float)FUN_039544e8(param_2,0);
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  fVar12 = SQRT(fVar12);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar2 = DAT_00b55290;
  fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11) / 10.0;
  fVar11 = *(float *)(param_1 + 0x4c);
  if (fVar13 <= *(float *)(param_1 + 0x4c)) {
    fVar11 = fVar13;
  }
  if (fVar13 < *(float *)(param_1 + 0x48)) {
    fVar11 = *(float *)(param_1 + 0x48);
  }
  if (fVar12 <= DAT_00b55290) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar8,0,0);
    if ((uVar6 & 1) == 0) {
      bVar9 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_01c35de0;
      bVar9 = *(byte *)(*(long *)(param_1 + 0x40) + 0x20);
      if (bVar9 != 0) {
        fVar11 = fVar2;
      }
    }
  }
  else {
    bVar9 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0391f968(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    bVar5 = FUN_0391f968(uVar8,0,0);
    bVar5 = bVar5 & 1;
  }
  if (!bVar1 || (bVar5 & bVar9) == 0) {
    return;
  }
  *(float *)(param_1 + 0x58) = fVar12;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar6 = FUN_038eab3c(*(long *)(param_1 + 0x28),0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01c35de0;
      FUN_038eaa84(*(long *)(param_1 + 0x28),0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_038ea808(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
      lVar7 = *(long *)(param_1 + 0x28);
      FUN_03925e44(0);
      if (lVar7 != 0) {
        FUN_038ea678(lVar7,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_038ea5f0(fVar11,*(long *)(param_1 + 0x28),0);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_038ea890(*(long *)(param_1 + 0x28),0);
            *(undefined1 *)(param_1 + 0x50) = 1;
            FUN_03920818(fVar2,param_1,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_24CB9F17C8326D8BB8EC908716519DF7F265AE825F0DD13BB04E03A90B07D90E
                         ,0);
            return;
          }
        }
      }
    }
  }
LAB_01c35de0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


