/*
FUNCTION_NAME: FUN_01cbdb6c
ENTRY_POINT: 01cbdb6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_01cbdb6c(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  if ((DAT_03feda59 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda59 = 1;
  }
  uVar1 = FUN_02ee6cf0(*(undefined8 *)(param_4 + 0x20),0);
  if ((uVar1 & 1) == 0) {
    if ((param_5 != 0) && (lVar2 = FUN_03954698(param_5,0), lVar2 != 0)) {
      uVar1 = FUN_0391c7ec(lVar2,*(undefined8 *)(param_4 + 0x20),0);
      if ((uVar1 & 1) != 0) goto LAB_01cbdbdc;
      fVar7 = *(float *)(param_4 + 0x68);
      uVar3 = FUN_03954514(param_5,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar1 = FUN_0391f968(uVar3,0,0);
      fVar5 = 1.0;
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_03954514(param_5,0);
        if (lVar2 == 0) goto LAB_01cbdd48;
        fVar5 = (float)FUN_0395a1d0(lVar2,0);
      }
      uVar3 = *(undefined8 *)(param_4 + 0x5c);
      fVar8 = *(float *)(param_4 + 100);
      *(float *)(param_4 + 0x68) = fVar7 + fVar5;
      fVar7 = (float)FUN_039544e8(param_5,0);
      fVar8 = fVar8 + param_3;
      *(float *)(param_4 + 100) = fVar8;
      *(ulong *)(param_4 + 0x5c) =
           CONCAT44((float)((ulong)uVar3 >> 0x20) + param_2,(float)uVar3 + fVar7);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      uVar3 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar7 = *(float *)(*(undefined8 **)
                          (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
      lVar2 = FUN_03954900(param_5,0);
      if (lVar2 != 0) {
        uVar1 = 0;
        lVar4 = 0x20;
        do {
          fVar5 = (float)((ulong)uVar3 >> 0x20);
          if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar1) {
            uVar9 = *(undefined8 *)(param_4 + 0x50);
            fVar8 = *(float *)(param_4 + 0x58);
            lVar2 = FUN_03954900(param_5,0);
            if (lVar2 != 0) {
              fVar6 = (float)*(int *)(lVar2 + 0x18);
              *(float *)(param_4 + 0x58) = fVar8 + fVar7 / fVar6;
              *(ulong *)(param_4 + 0x50) =
                   CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar5 / fVar6,
                            (float)uVar9 + (float)uVar3 / fVar6);
              *(int *)(param_4 + 0x6c) = *(int *)(param_4 + 0x6c) + 1;
              return;
            }
            break;
          }
          lVar2 = FUN_03954900(param_5,0);
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          lVar2 = lVar2 + lVar4;
          uVar1 = uVar1 + 1;
          lVar4 = lVar4 + 0x30;
          fVar6 = (float)FUN_0395ee3c(lVar2,0);
          fVar7 = fVar7 + fVar8;
          uVar3 = CONCAT44(fVar5 + param_2,(float)uVar3 + fVar6);
          lVar2 = FUN_03954900(param_5,0);
        } while (lVar2 != 0);
      }
    }
LAB_01cbdd48:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_01cbdbdc:
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 1;
  FUN_0391b78c(param_4,1,0);
  return;
}


