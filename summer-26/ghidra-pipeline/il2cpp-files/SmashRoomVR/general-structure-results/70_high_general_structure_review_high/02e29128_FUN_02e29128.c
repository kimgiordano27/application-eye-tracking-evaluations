/*
FUNCTION_NAME: FUN_02e29128
ENTRY_POINT: 02e29128
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_02e29128(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff01b0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01b0 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x2c) == 1) {
      uVar4 = *(undefined8 *)(param_2 + 0x1e8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar4,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)(param_2 + 0x1e8);
        if (plVar3 == (long *)0x0) goto LAB_02e29268;
        uVar2 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
        if ((uVar2 & 1) != 0) {
          System_Security_Cryptography_Utils__DWORDToBigEndian
                    (*(undefined8 *)(param_2 + 0x1e8),param_2,1,1);
          return;
        }
      }
    }
    uVar4 = *(undefined8 *)(param_2 + 0x1e8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_2 + 0x1e8);
      if (plVar3 == (long *)0x0) goto LAB_02e29268;
      uVar2 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x1bc) = 1;
      }
    }
    uVar2 = (**(code **)(*param_1 + 0x338))(param_1,param_2,*(undefined8 *)(*param_1 + 0x340));
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02e29254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))(param_1,param_2,*(undefined8 *)(*param_1 + 0x360));
      return;
    }
    return;
  }
LAB_02e29268:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


