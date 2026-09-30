/*
FUNCTION_NAME: FUN_02e31ef8
ENTRY_POINT: 02e31ef8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_02e31ef8(long param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  
  if ((DAT_03ff01ed & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01ed = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0xa8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar6,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0xa8) != 0) {
      bVar2 = FUN_0395a324(*(long *)(param_2 + 0xa8),0);
      *(byte *)(param_1 + 0x199) = bVar2 & 1;
      if (*(long *)(param_2 + 0xa8) != 0) {
        uVar3 = FUN_0395aadc(*(long *)(param_2 + 0xa8),0);
        *(undefined4 *)(param_1 + 0x188) = uVar3;
        if (*(int *)(param_1 + 0xcc) == 1) {
          *(undefined1 *)(param_1 + 0x1a0) = 1;
          if (*(long *)(param_2 + 0xa8) != 0) {
            uVar3 = FUN_0395a1d0(*(long *)(param_2 + 0xa8),0);
            *(undefined4 *)(param_1 + 0x194) = uVar3;
            if (*(long *)(param_2 + 0xa8) != 0) {
              bVar2 = FUN_0395a258(*(long *)(param_2 + 0xa8),0);
              *(byte *)(param_1 + 0x198) = bVar2 & 1;
              if (*(long *)(param_2 + 0xa8) != 0) {
                uVar3 = FUN_0395a0c0(*(long *)(param_2 + 0xa8),0);
                *(undefined4 *)(param_1 + 0x18c) = uVar3;
                if (*(long *)(param_2 + 0xa8) != 0) {
                  uVar3 = FUN_0395a148(*(long *)(param_2 + 0xa8),0);
                  *(undefined4 *)(param_1 + 400) = uVar3;
                  uVar6 = *(undefined8 *)(param_1 + 0x78);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar4 = FUN_03923030(uVar6,0);
                  if ((uVar4 & 1) == 0) {
LAB_02e32148:
                    uVar6 = *(undefined8 *)(param_2 + 0xa8);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_03923a90(uVar6,0);
                    if (*(long *)(param_1 + 0x1a8) != 0) {
                      FUN_03920f1c(param_1,*(long *)(param_1 + 0x1a8),0);
                    }
                    uVar6 = FUN_02e321bc(param_1,param_2);
                    uVar6 = FUN_03920cb0(param_1,uVar6,0);
                    *(undefined8 *)(param_1 + 0x1a8) = uVar6;
                    thunk_FUN_01b4f09c(param_1 + 0x1a8,uVar6);
                    return;
                  }
                  if (*(long *)(param_1 + 0x78) != 0) {
                    uVar3 = FUN_0395a1d0(*(long *)(param_1 + 0x78),0);
                    lVar7 = *(long *)(param_1 + 0x78);
                    *(undefined4 *)(param_1 + 0x19c) = uVar3;
                    if (lVar7 != 0) {
                      fVar8 = (float)FUN_0395a1d0(lVar7,0);
                      FUN_0395a20c(fVar8 + *(float *)(param_1 + 0x194),lVar7,0);
                      goto LAB_02e32148;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0xcc) != 0) {
            return;
          }
          lVar7 = *(long *)(param_2 + 0xa8);
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if (lVar7 != 0) {
            puVar5 = *(undefined4 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_03959ef0(*puVar5,puVar5[1],puVar5[2],lVar7,0);
            lVar7 = *(long *)(param_2 + 0xa8);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            if (lVar7 != 0) {
              puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
              FUN_0395a028(*puVar5,puVar5[1],puVar5[2],lVar7,0);
              if (*(long *)(param_2 + 0xa8) != 0) {
                FUN_0395a4a4(*(long *)(param_2 + 0xa8),3,0);
                if (*(long *)(param_2 + 0xa8) != 0) {
                  FUN_0395a360(*(long *)(param_2 + 0xa8),1,0);
                  if (*(long *)(param_2 + 0xa8) != 0) {
                    FUN_0395ab18(*(long *)(param_2 + 0xa8),0,0);
                    if (*(char *)(param_1 + 0x150) == '\0') {
                      return;
                    }
                    FUN_02de247c(param_2,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


