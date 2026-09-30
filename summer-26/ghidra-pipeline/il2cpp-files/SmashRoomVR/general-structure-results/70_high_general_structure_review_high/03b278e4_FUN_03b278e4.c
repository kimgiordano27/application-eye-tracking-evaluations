/*
FUNCTION_NAME: FUN_03b278e4
ENTRY_POINT: 03b278e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_11
*/


void FUN_03b278e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  
  if ((DAT_03ffdb7e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(StringLiteral_363);
    thunk_FUN_01ad9084(PTR_DAT_03db7048);
    thunk_FUN_01ad9084(PTR_DAT_03db7050);
    thunk_FUN_01ad9084(PTR_DAT_03db7058);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db7060);
    DAT_03ffdb7e = 1;
  }
  puVar2 = PTR_DAT_03db7060;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_03062488(*(undefined8 *)(param_3 + 0x10),0,iVar1,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ffdbf1 == '\0') {
      thunk_FUN_01ad9084(PTR_DAT_03db7060);
      DAT_03ffdbf1 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_03db7058;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          plVar5 = (long *)FUN_02b59714(lVar4,iVar7,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          uVar6 = FUN_03922f24(plVar5,0,0);
          if ((uVar6 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_03b27ad0;
            uVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
            if ((uVar6 & 1) != 0) {
              (**(code **)(*plVar5 + 0x248))
                        (plVar5,param_2,param_3,*(undefined8 *)(*plVar5 + 0x250));
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
      }
      puVar3 = PTR_DAT_03db7048;
      puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
      lVar4 = *(long *)
               Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      FUN_02b96124(param_3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)puVar3);
      return;
    }
  }
LAB_03b27ad0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


