/*
FUNCTION_NAME: FUN_03154440
ENTRY_POINT: 03154440
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_03154440(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_03d80358;
  puVar4 = (undefined8 *)Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__
  ;
  if ((DAT_03ff1fff & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80330);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d80360);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_7__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d80358);
    DAT_03ff1fff = 1;
  }
  puVar2 = PTR_DAT_03d80330;
  if (*(char *)(param_1 + 0x69) != '\0') {
    puVar4 = (undefined8 *)puVar3;
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar10 = *puVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d80330) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03154528;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)PTR_DAT_03d80330,0);
LAB_03154528:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                       0x130);
      if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
        uVar6 = FUN_039230bc(plVar5,0);
        uVar10 = FUN_02ee6c30(uVar10,uVar6,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_7__,0);
      }
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031545e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)puVar2,0);
LAB_031545e0:
    lVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if ((lVar7 != 0) &&
       (plVar5 = (long *)thunk_FUN_01acfdbc(lVar7,0), puVar3 = PTR_DAT_03d80360,
       plVar5 != (long *)0x0)) {
      uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      uVar6 = FUN_02ede300(*(undefined8 *)puVar3,uVar6,0);
      FUN_02edd6e8(uVar10,uVar6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


