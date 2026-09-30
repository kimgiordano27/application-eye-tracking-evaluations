/*
FUNCTION_NAME: FUN_01c7d82c
ENTRY_POINT: 01c7d82c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void FUN_01c7d82c(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_03fed7a4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7a4 = 1;
  }
  FUN_01c7c718(param_1);
  if (param_2 == 1) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0xb0) == 0) ||
       (lVar3 = FUN_0391c27c(*(long *)(param_1 + 0xb0),0), lVar3 == 0)) goto LAB_01c7d9d8;
    uVar5 = *(undefined8 *)(param_1 + 0x68);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0xb0) == 0) ||
       (lVar3 = FUN_0391c27c(*(long *)(param_1 + 0xb0),0), lVar3 == 0)) goto LAB_01c7d9d8;
    uVar5 = *(undefined8 *)(param_1 + 0x60);
  }
  FUN_039294c8(lVar3,uVar5,0);
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar3 = FUN_0391c27c(*(long *)(param_1 + 0xb0),0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    if (lVar3 != 0) {
      puVar4 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_039282dc(*puVar4,puVar4[1],puVar4[2],lVar3,0);
      if (*(long *)(param_1 + 0xb0) != 0) {
        lVar3 = FUN_0391c27c(*(long *)(param_1 + 0xb0),0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar3 != 0) {
          puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
          FUN_03929030(*puVar4,puVar4[1],puVar4[2],lVar3,0);
          return;
        }
      }
    }
  }
LAB_01c7d9d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


