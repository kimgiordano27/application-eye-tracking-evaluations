/*
FUNCTION_NAME: FUN_0362d8d4
ENTRY_POINT: 0362d8d4
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


void FUN_0362d8d4(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_03ff728d & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a610);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a4d0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff728d = 1;
  }
  if (param_3 == 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar4 = thunk_FUN_01afaadc();
    uVar5 = thunk_FUN_01ad9084(StringLiteral_2607);
    FUN_02fd1220(uVar4,uVar5,0);
LAB_0362dbd0:
    uVar5 = thunk_FUN_01ad9084(PTR_DAT_03d9a618);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,uVar5);
  }
  if (3 < param_2) {
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar4 = thunk_FUN_01afaadc();
    uVar5 = thunk_FUN_01ad9084(StringLiteral_2615);
    FUN_02fd9200(uVar4,uVar5,0);
    goto LAB_0362dbd0;
  }
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  puVar2 = PTR_DAT_03d7f4e0;
  switch(param_2) {
  case 0:
    lVar6 = 0;
    uVar3 = 0;
    while( true ) {
      iVar7 = 0;
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18);
      }
      if ((long)iVar7 <= (long)uVar3) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x60);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_0362db68;
      uVar12 = *(undefined4 *)(lVar9 + lVar6 + 0x20);
      uVar13 = *(undefined4 *)(lVar9 + lVar6 + 0x24);
      lVar9 = *(long *)(param_3 + 0x10);
      lVar10 = *(long *)puVar2;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar9 == 0) break;
      uVar1 = *(uint *)(param_3 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
        *(uint *)(param_3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar9 + 0x20) = uVar12;
        *(undefined4 *)(lVar9 + 0x24) = uVar13;
        *(undefined8 *)(lVar9 + 0x28) = 0;
      }
      else {
        FUN_02bd97c4(uVar12,uVar13,0,0,param_3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      uVar3 = uVar3 + 1;
      lVar6 = lVar6 + 8;
    }
    goto LAB_0362db64;
  case 1:
    uVar5 = FUN_0362f0b0(param_1);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_0391f968(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar6 = FUN_0362f0b0(param_1);
    if (lVar6 != 0) {
      lVar6 = FUN_03902890(lVar6,0);
      if (lVar6 == 0) {
        return;
      }
      lVar6 = FUN_0362f0b0(param_1);
      if ((lVar6 != 0) && (lVar6 = FUN_03902890(lVar6,0), puVar2 = PTR_DAT_03d7f4e0, lVar6 != 0)) {
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          return;
        }
        uVar3 = 0;
        uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        puVar11 = (undefined4 *)(lVar6 + 0x24);
        while (uVar3 < uVar8) {
          uVar12 = puVar11[-1];
          uVar13 = *puVar11;
          lVar9 = *(long *)(param_3 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0362db64;
          uVar1 = *(uint *)(param_3 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
            *(uint *)(param_3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + 0x20) = uVar12;
            *(undefined4 *)(lVar9 + 0x24) = uVar13;
            *(undefined8 *)(lVar9 + 0x28) = 0;
          }
          else {
            FUN_02bd97c4(uVar12,uVar13,0,0,param_3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar3 = uVar3 + 1;
          puVar11 = puVar11 + 2;
          if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar3) {
            return;
          }
        }
LAB_0362db68:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
    }
LAB_0362db64:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  case 2:
    lVar6 = *(long *)(param_1 + 0x68);
    break;
  case 3:
    lVar6 = *(long *)(param_1 + 0x70);
    break;
  default:
    goto switchD_0362d968_default;
  }
  if (lVar6 != 0) {
    FUN_02bd99f0(param_3,lVar6,*(undefined8 *)PTR_DAT_03d9a610);
    return;
  }
switchD_0362d968_default:
  return;
}


