/*
FUNCTION_NAME: FUN_01c65c44
ENTRY_POINT: 01c65c44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


void FUN_01c65c44(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c65c38 with catch @ 01c65c44
                        */
                    /* try { // try from 01c65c48 to 01d65d37 has its CatchHandler @ 01c65c48
                       catch(type#1 @ 00000000) { ... } // from try @ 01c65c48 with catch @ 01c65c48
                       catch(type#1 @ 00000000) { ... } // from try @ 01c65d88 with catch @ 01c65c48
                       catch(type#1 @ 00000000) { ... } // from try @ 01c65dec with catch @ 01c65c48
                        */
  if ((DAT_03fed6d2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6d2 = 1;
  }
  if (param_2 != 0) {
    uVar2 = FUN_0391c27c(param_2,0);
    uVar3 = FUN_01c65d70(uVar2,uVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_0391c2b8(param_2,0);
      if (lVar4 != 0) {
        uVar3 = FUN_0391fc2c(lVar4,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = FUN_0391c2b8(*(long *)(param_1 + 0x20),0);
          if ((uVar3 & 1) == 0) {
            lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            uVar5 = DAT_00b55290;
          }
          else {
            lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            uVar5 = *(undefined4 *)(param_1 + 0x34);
          }
          iVar1 = *(int *)(lVar4 + 0xe0);
          goto joined_r0x01c65d48;
        }
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar2 = FUN_0391c27c(param_2,0);
      if (lVar4 != 0) {
        FUN_039294c8(lVar4,uVar2,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = FUN_0391c2b8(*(long *)(param_1 + 0x20),0);
          uVar5 = *(undefined4 *)(param_1 + 0x34);
          lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          iVar1 = *(int *)(lVar4 + 0xe0);
joined_r0x01c65d48:
          if (iVar1 == 0) {
            thunk_FUN_01ac7298(lVar4);
          }
          FUN_03923a44(uVar5,uVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


