/*
FUNCTION_NAME: FUN_03709534
ENTRY_POINT: 03709534
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


undefined8 FUN_03709534(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_03ff7707 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_669);
    thunk_FUN_01ad9084(StringLiteral_672);
    thunk_FUN_01ad9084(PTR_DAT_03d9df80);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff7707 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
      uVar3 = FUN_03922ce0(param_2,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar4 = FUN_028f7f34(*(long *)(param_1 + 0x28),uVar3,*(undefined8 *)StringLiteral_672);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_028f8a44(*(long *)(param_1 + 0x28),uVar3,*(undefined8 *)StringLiteral_669);
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)PTR_DAT_03d9df80;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                *plVar7 = (long)param_2;
                thunk_FUN_01b4f09c(plVar7,param_2);
              }
              else {
                FUN_02b599e4(lVar5,param_2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


