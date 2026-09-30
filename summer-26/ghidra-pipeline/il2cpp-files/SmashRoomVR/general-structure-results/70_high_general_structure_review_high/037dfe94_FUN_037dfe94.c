/*
FUNCTION_NAME: FUN_037dfe94
ENTRY_POINT: 037dfe94
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


void FUN_037dfe94(undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_03ff81db & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9e070);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff81db = 1;
  }
  puVar2 = PTR_DAT_03d9e070;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
      uVar9 = *(undefined8 *)PTR_DAT_03d9e070;
      lVar3 = thunk_FUN_01afa9e0(param_3,uVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(param_3,uVar9);
      }
      lVar3 = *(long *)puVar2;
      plVar4 = (long *)thunk_FUN_01afa9e0(param_3,lVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(param_3,lVar3);
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_037dff94;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,lVar3,1);
LAB_037dff94:
                    /* WARNING: Could not recover jumptable at 0x037dffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      return;
    }
  }
  return;
}


