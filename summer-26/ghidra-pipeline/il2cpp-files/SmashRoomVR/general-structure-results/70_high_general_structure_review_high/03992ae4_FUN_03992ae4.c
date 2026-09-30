/*
FUNCTION_NAME: FUN_03992ae4
ENTRY_POINT: 03992ae4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_03992ae4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_24 [4];
  
  if ((DAT_03ffc624 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03dacc80);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc624 = 1;
  }
  local_24[0] = 0;
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    if (param_2 == 0) goto LAB_03992c8c;
    lVar3 = *(long *)(param_2 + 0x40);
  }
  else if (param_2 == 0) goto LAB_03992c8c;
  lVar5 = *(long *)(param_2 + 0x68);
  lVar1 = FUN_03977394(0x2026,lVar3,0,*(undefined4 *)(param_1 + 0x124),
                       *(undefined4 *)(param_1 + 0x134),local_24,0);
  if (lVar1 == 0) {
    if (lVar3 == 0) {
LAB_03992c8c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar1 = *(long *)(lVar3 + 0x178);
    if (((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < 1)) ||
       (lVar1 = FUN_039778f4(0x2026,lVar3,lVar1,1,*(undefined4 *)(param_1 + 0x124),
                             *(undefined4 *)(param_1 + 0x134),local_24,0), lVar1 == 0)) {
      if (lVar5 == 0) goto LAB_03992c8c;
      lVar1 = *(long *)(lVar5 + 0x30);
      if (((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < 1)) ||
         (lVar1 = FUN_039778f4(0x2026,lVar3,lVar1,1,*(undefined4 *)(param_1 + 0x124),
                               *(undefined4 *)(param_1 + 0x134),local_24,0), lVar1 == 0)) {
        uVar4 = *(undefined8 *)(lVar5 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                             ,0);
        }
        uVar2 = FUN_0391f968(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar1 = FUN_03977394(0x2026,*(undefined8 *)(lVar5 + 0x20),1,*(undefined4 *)(param_1 + 0x124)
                             ,*(undefined4 *)(param_1 + 0x134),local_24,0);
        if (lVar1 == 0) {
          return;
        }
      }
    }
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_03996224(&local_50,lVar1,0,0);
  *(undefined8 *)(param_1 + 0x1a18) = uStack_38;
  *(undefined8 *)(param_1 + 0x1a10) = uStack_40;
  *(undefined8 *)(param_1 + 0x1a08) = uStack_48;
  *(undefined8 *)(param_1 + 0x1a00) = local_50;
  thunk_FUN_01b4f09c(param_1 + 0x1a00,0);
  return;
}


