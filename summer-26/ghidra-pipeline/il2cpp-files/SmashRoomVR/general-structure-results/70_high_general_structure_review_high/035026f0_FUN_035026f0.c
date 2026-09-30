/*
FUNCTION_NAME: FUN_035026f0
ENTRY_POINT: 035026f0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_035026f0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_50 [16];
  
  puVar3 = StringLiteral_2488;
  if ((DAT_03ff6d94 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d958d8);
    thunk_FUN_01ad9084(StringLiteral_2488);
    thunk_FUN_01ad9084(StringLiteral_251);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d91708);
    thunk_FUN_01ad9084(PTR_DAT_03d92490);
    DAT_03ff6d94 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  local_50 = FUN_0347c7a0(0);
  puVar4 = PTR_DAT_03d92490;
  puVar2 = StringLiteral_251;
  if (0 < local_50._12_4_) {
    iVar8 = 0;
    do {
      plVar5 = (long *)FUN_02d98200(local_50,iVar8,*(undefined8 *)puVar4);
      if (plVar5 == (long *)0x0) goto LAB_03502910;
      uVar6 = FUN_03489d6c(plVar5,0);
      if ((uVar6 & 1) != 0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          *(long *)(param_1 + 0xf8) = (long)plVar5;
          thunk_FUN_01b4f09c((long *)(param_1 + 0xf8),plVar5);
          break;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_50._12_4_);
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar9 = *(long *)(param_1 + 0xf8);
  if (lVar9 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) goto LAB_03502910;
    uVar11 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_0347d984(lVar9,0,0);
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0x170);
      if (lVar9 == 0) goto LAB_03502910;
      lVar10 = *(long *)(param_1 + 0xf8);
      puVar7 = (undefined4 *)FUN_029a4fd8(lVar9,*(undefined8 *)PTR_DAT_03d958d8);
      if (lVar10 == 0) goto LAB_03502910;
      FUN_0348e43c(*puVar7,puVar7[1],lVar10,0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
LAB_03502910:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar11 = 0;
  }
  FUN_0391b78c(lVar9,uVar11,0);
  return;
}


