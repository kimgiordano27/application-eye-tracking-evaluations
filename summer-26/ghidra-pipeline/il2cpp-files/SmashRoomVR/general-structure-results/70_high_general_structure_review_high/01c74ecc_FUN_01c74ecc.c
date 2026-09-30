/*
FUNCTION_NAME: FUN_01c74ecc
ENTRY_POINT: 01c74ecc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_01c74ecc(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_03fed758 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed758 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x30);
  if (lVar4 == 0) goto LAB_01c75244;
  if (*(char *)(lVar4 + 0x20) == '\0') {
    if (*(char *)(param_4 + 0x40) == '\0') {
      lVar4 = FUN_0391c27c(param_4,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      if (lVar4 != 0) {
        puVar5 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_039282dc(*puVar5,puVar5[1],puVar5[2],lVar4,0);
        lVar4 = FUN_0391c27c(param_4,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar4 != 0) {
          puVar5 = *(undefined4 **)
                    (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                    + 0xb8);
          FUN_03929060(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar4,0);
          lVar4 = FUN_0391c27c(param_4,0);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          if (lVar4 != 0) {
            lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
            FUN_039293f4(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                         *(undefined4 *)(lVar6 + 0x14),lVar4,0);
            lVar4 = *(long *)(param_4 + 0x38);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            if (lVar4 != 0) {
              puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
              FUN_03959ef0(*puVar5,puVar5[1],puVar5[2],lVar4,0);
              lVar4 = *(long *)(param_4 + 0x38);
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              if (lVar4 != 0) {
                puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                FUN_0395a028(*puVar5,puVar5[1],puVar5[2],lVar4,0);
                uVar7 = *(undefined8 *)(param_4 + 0x20);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar3 = FUN_03923030(uVar7,0);
                if ((uVar3 & 1) != 0) {
                  if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c75244;
                  FUN_0395a028(*(float *)(param_4 + 0x50) * 20.0,*(float *)(param_4 + 0x54) * 20.0,
                               *(float *)(param_4 + 0x58) * 20.0,*(long *)(param_4 + 0x20),0);
                }
                if (*(long *)(param_4 + 0x48) != 0) {
                  FUN_0395b38c(*(long *)(param_4 + 0x48),1,0);
                  uVar7 = FUN_01c75248(param_4);
                  FUN_03920cb0(param_4,uVar7,0);
                  *(undefined1 *)(param_4 + 0x40) = 1;
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_01c75244;
    }
  }
  else {
    *(undefined1 *)(param_4 + 0x40) = 0;
    if (0.0 < *(float *)(lVar4 + 0x70)) {
      lVar4 = FUN_0391c27c(param_4,0);
      if (lVar4 == 0) goto LAB_01c75244;
      fVar8 = (float)FUN_03928d34(lVar4,0);
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_01c75244;
      fVar10 = param_2;
      fVar11 = param_3;
      fVar9 = (float)FUN_03928d34(*(long *)(param_4 + 0x28),0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      plVar2 = *(long **)(param_4 + 0x30);
      if (plVar2 == (long *)0x0) goto LAB_01c75244;
      param_2 = (param_2 - fVar10) * (param_2 - fVar10);
      param_3 = (param_3 - fVar11) * (param_3 - fVar11);
      if (*(float *)(plVar2 + 0xe) < SQRT(param_3 + (fVar8 - fVar9) * (fVar8 - fVar9) + param_2)) {
        (**(code **)(*plVar2 + 0x328))(plVar2,0,0,*(undefined8 *)(*plVar2 + 0x330));
      }
    }
    if (*(long *)(param_4 + 0x38) == 0) {
LAB_01c75244:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    fVar8 = (float)FUN_03959f88(*(long *)(param_4 + 0x38),0);
    *(float *)(param_4 + 0x50) = -fVar8;
    *(float *)(param_4 + 0x54) = -param_2;
    *(float *)(param_4 + 0x58) = -param_3;
  }
  return;
}


