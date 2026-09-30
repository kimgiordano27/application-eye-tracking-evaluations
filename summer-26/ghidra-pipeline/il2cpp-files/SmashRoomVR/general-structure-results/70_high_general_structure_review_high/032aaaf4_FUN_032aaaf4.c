/*
FUNCTION_NAME: FUN_032aaaf4
ENTRY_POINT: 032aaaf4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_032aaaf4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_03ff5850 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d869a8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5850 = 1;
  }
  *(undefined2 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  if (*(char *)(param_1 + 0x58) != '\0') {
    plVar10 = *(long **)(param_1 + 0x20);
    bVar9 = false;
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d869a8) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_032aab9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d869a8,0);
LAB_032aab9c:
      uVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      bVar2 = (uVar7 & 0xff) != 0;
      bVar3 = (uVar7 & 0xff00) != 0;
      bVar9 = bVar2 && bVar3;
      *(bool *)(param_1 + 0x59) = bVar2;
      *(bool *)(param_1 + 0x5a) = bVar3;
      *(bool *)(param_1 + 0x5b) = (uVar7 & 0xff0000) != 0;
    }
    if (*(int *)(param_1 + 0x38) == 1) {
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0391f968(uVar12,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_032aad98;
        bVar4 = FUN_038fe3c0(*(long *)(param_1 + 0x50),0);
        if (bVar9 != (bool)(bVar4 & 1)) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_032aad98;
          FUN_038fe3fc(*(long *)(param_1 + 0x50),bVar9,0);
        }
      }
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(param_1 + 0x3c) != 1) {
      return;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x5b) != '\0') {
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0391f968(uVar12,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_032aad98;
        uVar12 = FUN_038fe880(*(long *)(param_1 + 0x50),0);
        uVar11 = *(undefined8 *)(param_1 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar7 = FUN_0391f968(uVar12,uVar11,0);
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x50);
          if (lVar6 == 0) goto LAB_032aad98;
          uVar12 = *(undefined8 *)(param_1 + 0x40);
          goto LAB_032aad74;
        }
      }
      if (*(char *)(param_1 + 0x5b) != '\0') {
        return;
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar12,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar12 = FUN_038fe880(*(long *)(param_1 + 0x50),0);
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar7 = FUN_0391f968(uVar12,uVar11,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x50);
        if (lVar6 != 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x48);
LAB_032aad74:
          FUN_038fe8bc(lVar6,uVar12,0);
          return;
        }
      }
LAB_032aad98:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


