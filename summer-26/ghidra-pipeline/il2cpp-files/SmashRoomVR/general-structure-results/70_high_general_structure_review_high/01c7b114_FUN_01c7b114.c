/*
FUNCTION_NAME: FUN_01c7b114
ENTRY_POINT: 01c7b114
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


void FUN_01c7b114(long param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_03fed785 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed785 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_01c7b288;
      FUN_0391fb70(*(long *)(param_1 + 0x50),0,0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_01c7b288;
    FUN_038fcc78(*(long *)(param_1 + 0x98),0,0);
    lVar6 = *(long *)(param_1 + 0x98);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar6 == 0) goto LAB_01c7b288;
    puVar4 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_038fcfa4(*puVar4,puVar4[1],puVar4[2],lVar6,0,0);
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_01c7b288;
    FUN_038fcfa4(0,0,*(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x78),
                 *(long *)(param_1 + 0x98),1,0);
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_01c7b288;
    FUN_0391fb70(*(long *)(param_1 + 0x50),0,0);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_038fe3fc(*(long *)(param_1 + 0x98),cVar1 == '\0',0);
    return;
  }
LAB_01c7b288:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


