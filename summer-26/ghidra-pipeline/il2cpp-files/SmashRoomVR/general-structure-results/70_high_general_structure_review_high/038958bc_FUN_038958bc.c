/*
FUNCTION_NAME: FUN_038958bc
ENTRY_POINT: 038958bc
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


void FUN_038958bc(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_03ff88ac & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da89d8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2916);
    thunk_FUN_01ad9084(PTR_DAT_03da89e0);
    thunk_FUN_01ad9084(PTR_DAT_03da89e8);
    thunk_FUN_01ad9084(PTR_DAT_03da89f0);
    thunk_FUN_01ad9084(PTR_DAT_03da89f8);
    DAT_03ff88ac = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    return;
  }
  plVar6 = param_1 + 4;
  lVar7 = *plVar6;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    lVar7 = FUN_01e8b0b4(param_1,*(undefined8 *)PTR_DAT_03da89d8);
    param_1[4] = lVar7;
    thunk_FUN_01b4f09c(plVar6,lVar7);
  }
  lVar7 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar7,0,0);
  puVar5 = (undefined8 *)PTR_DAT_03da89e8;
  if ((uVar2 & 1) != 0) {
LAB_03895a84:
    uVar4 = FUN_02ede300(*puVar5,param_1,0);
    if (*(int *)(*(long *)StringLiteral_2916 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)StringLiteral_2916);
    }
    FUN_037fe000(uVar4,param_1,0);
    FUN_0391b78c(param_1,0,0);
    return;
  }
  if ((*plVar6 != 0) && (lVar7 = FUN_038fe900(*plVar6,0), lVar7 != 0)) {
    puVar5 = (undefined8 *)PTR_DAT_03da89e0;
    if (*(long *)(lVar7 + 0x18) == 0) goto LAB_03895a84;
    if (param_1[4] != 0) {
      lVar7 = param_1[5];
      lVar3 = FUN_038fe900(param_1[4],0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) < (int)lVar7) {
          uVar4 = FUN_02ede300(*(undefined8 *)PTR_DAT_03da89f8,param_1,0);
          uVar4 = FUN_02edd6e8(uVar4,*(undefined8 *)PTR_DAT_03da89f0,0);
          if (*(int *)(*(long *)StringLiteral_2916 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)StringLiteral_2916);
          }
          FUN_037fdf54(uVar4,param_1,0);
          *(undefined4 *)(param_1 + 5) = 0;
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x03895af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


