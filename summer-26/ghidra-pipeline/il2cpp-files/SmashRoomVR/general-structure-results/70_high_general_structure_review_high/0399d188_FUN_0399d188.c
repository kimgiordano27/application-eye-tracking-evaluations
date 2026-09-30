/*
FUNCTION_NAME: FUN_0399d188
ENTRY_POINT: 0399d188
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_0399d188(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_03dad608;
  if ((DAT_03ffc673 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9ac20);
    thunk_FUN_01ad9084(PTR_DAT_03d9ac28);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_5344);
    thunk_FUN_01ad9084(PTR_DAT_03dad608);
    thunk_FUN_01ad9084(PTR_DAT_03dad610);
    thunk_FUN_01ad9084(PTR_DAT_03dad618);
    DAT_03ffc673 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) != 0) {
    return;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x18);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      uVar5 = FUN_01f2f4f0(*(undefined8 *)PTR_DAT_03dad618,*(undefined8 *)StringLiteral_5344);
      if (lVar3 == 0) goto LAB_0399d4d0;
      puVar6 = (undefined8 *)(lVar3 + 0x18);
      *puVar6 = uVar5;
      thunk_FUN_01b4f09c(puVar6,uVar5);
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar5 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(uVar5,0,0);
      if ((uVar4 & 1) == 0) {
        uVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ac28);
        FUN_0290bca0(uVar5,*(undefined8 *)PTR_DAT_03d9ac20);
      }
      else {
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar3 = *(long *)puVar2;
        }
        if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0399d4d0;
        uVar5 = FUN_0399f8a4(*(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x18));
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar3 = *(long *)puVar2;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      *puVar6 = uVar5;
      thunk_FUN_01b4f09c(puVar6,uVar5);
      if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
        uVar5 = *(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03922f24(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar3 = *(long *)puVar2;
          }
          lVar3 = **(long **)(lVar3 + 0xb8);
          uVar5 = FUN_01f2f4f0(*(undefined8 *)PTR_DAT_03dad610,*(undefined8 *)StringLiteral_5344);
          if (lVar3 == 0) goto LAB_0399d4d0;
          puVar6 = (undefined8 *)(lVar3 + 0x20);
          *puVar6 = uVar5;
          thunk_FUN_01b4f09c(puVar6,uVar5);
        }
        lVar3 = *(long *)puVar2;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar3 = *(long *)puVar2;
        }
        if (**(long **)(lVar3 + 0xb8) != 0) {
          uVar5 = *(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_0391f968(uVar5,0,0);
          if ((uVar4 & 1) == 0) {
            uVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9ac28);
            FUN_0290bca0(uVar5,*(undefined8 *)PTR_DAT_03d9ac20);
          }
          else {
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar3 = *(long *)puVar2;
            }
            if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0399d4d0;
            uVar5 = FUN_0399f8a4(*(undefined8 *)(**(long **)(lVar3 + 0xb8) + 0x20));
          }
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar3 = *(long *)puVar2;
          }
          puVar6 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
          *puVar6 = uVar5;
          thunk_FUN_01b4f09c(puVar6,uVar5);
          return;
        }
      }
    }
  }
LAB_0399d4d0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


