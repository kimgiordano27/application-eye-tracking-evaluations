/*
FUNCTION_NAME: FUN_032b9460
ENTRY_POINT: 032b9460
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_032b9460(float param_1,long param_2,uint param_3,ulong param_4,int param_5,int param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ff58ac & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff58ac = 1;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar4 = *(long *)(param_2 + 0x28);
    FUN_03928d34(*(long *)(param_2 + 0x18),0);
    if (lVar4 != 0) {
      FUN_038fcfa4(lVar4,0,0);
      if (*(long *)(param_2 + 0x20) != 0) {
        lVar4 = *(long *)(param_2 + 0x28);
        FUN_03928d34(*(long *)(param_2 + 0x20),0);
        if (lVar4 != 0) {
          FUN_038fcfa4(lVar4,1,0);
          if (*(long *)(param_2 + 0x28) != 0) {
            param_1 = param_1 * DAT_00b55688;
            FUN_038fcb14(param_1,*(long *)(param_2 + 0x28),0);
            if (*(long *)(param_2 + 0x28) != 0) {
              FUN_038fcb60(param_1,*(long *)(param_2 + 0x28),0);
              if (param_5 == 1) {
                if (*(long *)(param_2 + 0x28) == 0) goto LAB_032b9634;
                FUN_038fe3fc(*(long *)(param_2 + 0x28),param_3 & 1,0);
              }
              if (param_6 != 1) {
                return;
              }
              lVar4 = *(long *)(param_2 + 0x28);
              if ((param_4 & 1) == 0) {
                if (lVar4 != 0) {
                  uVar1 = FUN_038fe880(lVar4,0);
                  uVar3 = *(undefined8 *)(param_2 + 0x30);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                      );
                  }
                  uVar2 = FUN_0391f968(uVar1,uVar3,0);
                  if ((uVar2 & 1) == 0) {
                    return;
                  }
                  lVar4 = *(long *)(param_2 + 0x28);
                  if (lVar4 != 0) {
                    uVar1 = *(undefined8 *)(param_2 + 0x30);
                    goto System_Security_Cryptography_DerSequenceReader__ReadT61String;
                  }
                }
              }
              else if (lVar4 != 0) {
                uVar1 = FUN_038fe880(lVar4,0);
                uVar3 = *(undefined8 *)(param_2 + 0x38);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                    );
                }
                uVar2 = FUN_0391f968(uVar1,uVar3,0);
                if ((uVar2 & 1) == 0) {
                  return;
                }
                lVar4 = *(long *)(param_2 + 0x28);
                if (lVar4 != 0) {
                  uVar1 = *(undefined8 *)(param_2 + 0x38);
System_Security_Cryptography_DerSequenceReader__ReadT61String:
                  FUN_038fe8bc(lVar4,uVar1,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032b9634:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


