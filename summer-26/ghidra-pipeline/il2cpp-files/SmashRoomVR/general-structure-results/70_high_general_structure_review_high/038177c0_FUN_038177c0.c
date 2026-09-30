/*
FUNCTION_NAME: FUN_038177c0
ENTRY_POINT: 038177c0
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


void FUN_038177c0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ff83dd & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da58f8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff83dd = 1;
  }
  if (*(char *)(param_1 + 0xc5) != '\0') {
    FUN_03816f00(param_1);
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_038178cc;
  uVar2 = FUN_038fcc3c(*(long *)(param_1 + 0xd0),0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1b0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b0) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_0391f968(lVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if ((lVar4 == 0) || (lVar4 = FUN_0391fab4(0x3f800000,lVar4,0), lVar4 == 0))
          goto LAB_038178cc;
          FUN_03929354(lVar4,0);
        }
        if (*(long *)(param_1 + 0x1c0) != 0) {
          FUN_0243b4e8(*(long *)(param_1 + 0x1c0),*(undefined8 *)PTR_DAT_03da58f8);
          return;
        }
      }
LAB_038178cc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


