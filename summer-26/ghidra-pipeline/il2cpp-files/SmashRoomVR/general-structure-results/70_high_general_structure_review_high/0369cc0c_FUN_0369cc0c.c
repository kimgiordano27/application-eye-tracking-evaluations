/*
FUNCTION_NAME: FUN_0369cc0c
ENTRY_POINT: 0369cc0c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


void FUN_0369cc0c(long param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_03ff746a & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f4e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b330);
    thunk_FUN_01ad9084(PTR_DAT_03d7f4f8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff746a = 1;
  }
  if (param_3 - 2U < 2) {
    if ((param_1 == 0) || (uVar3 = FUN_0362e4c0(param_1,0), param_2 == 0)) {
LAB_0369cf18:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (uVar3 != *(uint *)(param_2 + 0x18)) {
      thunk_FUN_01ad9084(StringLiteral_2609);
      uVar4 = thunk_FUN_01afaadc();
      uVar7 = thunk_FUN_01ad9084(StringLiteral_2607);
      FUN_0303c28c(uVar4,uVar7,0);
      uVar7 = thunk_FUN_01ad9084(PTR_DAT_03d9c718);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar4,uVar7);
    }
    lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f4f8);
    FUN_02bd8fa8(lVar6,(ulong)uVar3,*(undefined8 *)PTR_DAT_03d9b330);
    puVar2 = PTR_DAT_03d7f4e0;
    if (0 < (int)uVar3) {
      uVar5 = 0;
      puVar10 = (undefined4 *)(param_2 + 0x24);
      do {
        if (*(uint *)(param_2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (lVar6 == 0) goto LAB_0369cf18;
        uVar11 = puVar10[-1];
        uVar12 = *puVar10;
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_0369cf18;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + 0x20) = uVar11;
          *(undefined4 *)(lVar9 + 0x24) = uVar12;
          *(undefined8 *)(lVar9 + 0x28) = 0;
        }
        else {
          FUN_02bd97c4(uVar11,uVar12,0,0,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        uVar5 = uVar5 + 1;
        puVar10 = puVar10 + 2;
      } while (uVar3 != uVar5);
    }
    FUN_03634030(param_1,param_3,lVar6,0);
    if ((param_4 & 1) != 0) {
      uVar4 = FUN_0362f0b0(param_1,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_0391f968(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        lVar9 = FUN_0362f0b0(param_1,0);
        if (lVar9 != 0) {
          FUN_03903554(lVar9,param_3,lVar6,0);
          return;
        }
        goto LAB_0369cf18;
      }
    }
  }
  else if (param_3 == 1) {
    if ((param_4 & 1) != 0) {
      if (param_1 != 0) {
        uVar4 = FUN_0362f0b0(param_1,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar5 = FUN_0391f968(uVar4,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar6 = FUN_0362f0b0(param_1,0);
        if (lVar6 != 0) {
          FUN_039028dc(lVar6,param_2,0);
          return;
        }
      }
      goto LAB_0369cf18;
    }
  }
  else if (param_3 == 0) {
    if (param_1 == 0) goto LAB_0369cf18;
    *(long *)(param_1 + 0x60) = param_2;
    thunk_FUN_01b4f09c((long *)(param_1 + 0x60),param_2);
    if ((param_4 & 1) != 0) {
      uVar4 = FUN_0362f0b0(param_1,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_0391f968(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_0362f0b0(param_1,0);
        if (lVar6 != 0) {
          FUN_03902830(lVar6,param_2,0);
          return;
        }
        goto LAB_0369cf18;
      }
    }
  }
  return;
}


