/*
FUNCTION_NAME: FUN_030f3f90
ENTRY_POINT: 030f3f90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


void FUN_030f3f90(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_03ff1bee & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13410);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1bee = 1;
  }
  puVar1 = StringLiteral_13410;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 == (long *)0x0) goto LAB_030f42a0;
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13410) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_030f403c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_13410,1);
LAB_030f403c:
  uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if (((uVar7 & 1) != 0) && (*(char *)(param_1 + 0x38) == '\0')) {
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 == (long *)0x0) goto LAB_030f42a0;
    lVar5 = *plVar9;
    lVar4 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_030f40ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar9,lVar4,3);
LAB_030f40ac:
    uVar7 = (*(code *)*puVar2)(plVar9,&local_50,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar4 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0), lVar4 != 0)) {
        FUN_0391fb70(lVar4,1,0);
        lVar4 = FUN_0391c27c(param_1,0);
        if (lVar4 != 0) {
          FUN_03928dd4((undefined4)local_50,local_50._4_4_,(undefined4)uStack_48,lVar4,0);
          lVar4 = FUN_0391c27c(param_1,0);
          if (lVar4 != 0) {
            FUN_03928f54(uStack_48._4_4_,(undefined4)local_40,local_40._4_4_,local_38,lVar4,0);
            lVar4 = FUN_0391c27c(param_1,0);
            if (lVar4 != 0) {
              uVar3 = FUN_03928c2c(lVar4,0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar7 = FUN_0391f968(uVar3,0,0);
              fVar10 = 1.0;
              if ((uVar7 & 1) != 0) {
                lVar4 = FUN_0391c27c(param_1,0);
                if ((lVar4 == 0) || (lVar4 = FUN_03928c2c(lVar4,0), lVar4 == 0)) goto LAB_030f42a0;
                fVar10 = (float)FUN_0392a7f0(lVar4,0);
              }
              lVar4 = FUN_0391c27c(param_1,0);
              plVar9 = *(long **)(param_1 + 0x28);
              if (plVar9 != (long *)0x0) {
                lVar6 = *plVar9;
                lVar5 = *(long *)puVar1;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == lVar5) {
                      puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                      goto LAB_030f4234;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar2 = (undefined8 *)FUN_01ae9f78(plVar9,lVar5,5);
LAB_030f4234:
                fVar11 = (float)(*(code *)*puVar2)(plVar9,puVar2[1]);
                if (DAT_03fed258 == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  DAT_03fed258 = '\x01';
                }
                if (lVar4 != 0) {
                  fVar11 = fVar11 / fVar10;
                  lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8
                                   );
                  FUN_039293f4(fVar11 * *(float *)(lVar5 + 0xc),fVar11 * *(float *)(lVar5 + 0x10),
                               fVar11 * *(float *)(lVar5 + 0x14),lVar4,0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_030f42a0;
    }
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar4 = FUN_0391c2b8(*(long *)(param_1 + 0x30),0), lVar4 != 0)) {
    FUN_0391fb70(lVar4,0,0);
    return;
  }
LAB_030f42a0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


