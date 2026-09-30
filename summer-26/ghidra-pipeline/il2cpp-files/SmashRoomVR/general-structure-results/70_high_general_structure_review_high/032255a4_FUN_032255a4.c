/*
FUNCTION_NAME: FUN_032255a4
ENTRY_POINT: 032255a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_032255a4(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined4 extraout_s0;
  
  if ((DAT_03ff467d & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d83d30);
    param_1 = thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
    DAT_03ff467d = 1;
  }
  puVar3 = PTR_DAT_03d83d30;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  iVar6 = 0;
  while (*(long *)(param_2 + 0xd8) != 0) {
    lVar4 = FUN_038e71b0(*(long *)(param_2 + 0xd8),iVar6,0);
    lVar7 = *(long *)(param_2 + 0xe8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar5 = FUN_03923030(lVar4,0);
    if ((uVar5 & 1) == 0) {
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed256 = '\x01';
      }
      param_1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
    }
    else {
      param_1 = extraout_s0;
      if (lVar4 == 0) break;
      param_1 = FUN_039274a0(lVar4,0);
    }
    if (lVar7 == 0) break;
    param_1 = FUN_025871ec(lVar7,iVar6,*(undefined8 *)puVar3);
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x37) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(param_1);
}


