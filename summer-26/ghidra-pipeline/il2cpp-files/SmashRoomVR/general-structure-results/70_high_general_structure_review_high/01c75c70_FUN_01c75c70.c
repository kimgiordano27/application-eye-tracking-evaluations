/*
FUNCTION_NAME: FUN_01c75c70
ENTRY_POINT: 01c75c70
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


void FUN_01c75c70(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_03fed762 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed762 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x80);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 01c75cc4 to 01d75ce3 has its CatchHandler @ 01c75d90 */
    uVar2 = FUN_0391f968(uVar6,0,0);
    lVar4 = *(long *)puVar1;
    uVar6 = *(undefined8 *)(param_1 + 0x68);
                    /* try { // try from 01c75ce4 to 01d75d4b has its CatchHandler @ 01c75b24 */
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar4);
    }
    uVar3 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN_039294c8(*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),0);
        lVar4 = *(long *)(param_1 + 0x68);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        if (lVar4 != 0) {
          puVar5 = *(undefined4 **)
                    (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_039282dc(*puVar5,puVar5[1],puVar5[2],lVar4,0);
          lVar4 = *(long *)(param_1 + 0x68);
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar4 != 0) {
            puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
            uVar8 = puVar5[1];
            uVar9 = puVar5[2];
            uVar7 = *puVar5;
LAB_01c75e14:
            FUN_03929030(uVar7,uVar8,uVar9,lVar4,0);
            return;
          }
        }
      }
    }
    else {
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(uVar6,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
          FUN_039294c8(*(long *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50),0
                      );
          if (*(long *)(param_1 + 0x68) != 0) {
            FUN_039282dc(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                         *(undefined4 *)(param_1 + 0xa8),*(long *)(param_1 + 0x68),0);
            lVar4 = *(long *)(param_1 + 0x68);
            if (lVar4 != 0) {
              uVar8 = *(undefined4 *)(param_1 + 0xb0);
              uVar9 = *(undefined4 *)(param_1 + 0xb4);
              uVar7 = *(undefined4 *)(param_1 + 0xac);
              goto LAB_01c75e14;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


