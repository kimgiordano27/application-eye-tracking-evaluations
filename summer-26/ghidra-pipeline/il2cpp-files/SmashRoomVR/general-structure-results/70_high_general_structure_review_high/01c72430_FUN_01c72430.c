/*
FUNCTION_NAME: FUN_01c72430
ENTRY_POINT: 01c72430
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


void FUN_01c72430(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  float fVar12;
  
  if ((DAT_03fed73b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed73b = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
                    /* try { // try from 01c724a4 to 01d7251b has its CatchHandler @ 01c724a4
                       catch() { ... } // from try @ 01c724a4 with catch @ 01c724a4
                       catch() { ... } // from try @ 01c72650 with catch @ 01c724a4 */
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01c72708;
    bVar4 = FUN_01c4ba84(*(long *)(param_1 + 0x28),0);
    bVar4 = bVar4 & 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
LAB_01c72540:
    bVar9 = false;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) goto LAB_01c72708;
    if (*(float *)(lVar8 + 0x70) <= DAT_00b55294) goto LAB_01c72540;
    if (DAT_00b92cf8 <= (double)*(float *)(lVar8 + 0x78)) {
      bVar9 = 1.0 < *(float *)(lVar8 + 0x78);
    }
    else {
      bVar9 = true;
    }
  }
  *(bool *)(param_1 + 0x40) = bVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(lVar8,0,0);
  uVar11 = 0;
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01c72708;
    uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x78);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar11 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) goto LAB_01c72708;
    uVar11 = *(undefined4 *)(lVar8 + 0x70);
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(lVar8,0,0);
  puVar2 = 
  Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
  ;
  if ((uVar5 & 1) == 0) {
LAB_01c72614:
    bVar10 = false;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) goto LAB_01c72708;
    if (*(float *)(lVar8 + 0x78) <= DAT_00b55294) goto LAB_01c72614;
    bVar10 = DAT_00b55294 < *(float *)(lVar8 + 0x70);
  }
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar6) {
        return;
      }
      lVar8 = FUN_02b59714(lVar8,iVar6,*(undefined8 *)puVar2);
      if ((bVar4 & (*(byte *)(param_1 + 0x34) ^ 1)) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          fVar12 = (float)FUN_03925ca4(0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          if (fVar12 - *(float *)(*(long *)(param_1 + 0x28) + 0x8c) < 0.5) goto LAB_01c7265c;
        }
        if ((((bVar4 & *(byte *)(param_1 + 0x34)) == 0) &&
            ((bVar10 & *(byte *)(param_1 + 0x31)) == 0)) &&
           ((*(byte *)(param_1 + 0x32) & bVar9) == 0)) {
          bVar3 = *(char *)(param_1 + 0x33) != '\0';
        }
        else {
          bVar3 = true;
        }
        if (lVar8 == 0) break;
      }
      else {
LAB_01c7265c:
        if (lVar8 == 0) break;
        bVar3 = false;
      }
      FUN_0395b38c(lVar8,bVar3,0);
      lVar8 = *(long *)(param_1 + 0x48);
      iVar6 = iVar6 + 1;
    } while (lVar8 != 0);
  }
LAB_01c72708:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


