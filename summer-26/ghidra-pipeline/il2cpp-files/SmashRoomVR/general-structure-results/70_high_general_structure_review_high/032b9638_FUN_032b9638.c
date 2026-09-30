/*
FUNCTION_NAME: FUN_032b9638
ENTRY_POINT: 032b9638
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


void FUN_032b9638(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
                 ulong param_7,int param_8,int param_9)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_03ff58ae & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d87130);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff58ae = 1;
  }
  if (param_8 == 1) {
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_032b9954;
    uVar2 = FUN_0391fbb4(*(long *)(param_5 + 0x10),0);
    if ((uVar2 & 1) != (param_6 & 1)) {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_032b9954;
      FUN_0391fb70(*(long *)(param_5 + 0x10),param_6 & 1,0);
    }
  }
  if (*(long *)(param_5 + 0x10) != 0) {
    lVar3 = FUN_0391fab4(*(long *)(param_5 + 0x10),0);
    if (((*(long *)(param_5 + 0x18) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_5 + 0x18) + 0x20), lVar4 != 0)) &&
       (lVar4 = FUN_0391c27c(lVar4,0), puVar1 = PTR_DAT_03d87130, lVar4 != 0)) {
      fVar10 = (float)FUN_039274a0(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      if (lVar3 != 0) {
        pfVar8 = *(float **)(lVar4 + 0xb8);
        fVar14 = pfVar8[2];
        fVar11 = pfVar8[3];
        fVar12 = *pfVar8;
        fVar13 = pfVar8[1];
        FUN_03928f54((param_2 * fVar14 + param_4 * fVar12 + fVar10 * fVar11) - param_3 * fVar13,
                     (param_3 * fVar12 + param_4 * fVar13 + param_2 * fVar11) - fVar10 * fVar14,
                     (fVar10 * fVar13 + param_4 * fVar14 + param_3 * fVar11) - param_2 * fVar12,
                     ((param_4 * fVar11 - fVar10 * fVar12) - param_2 * fVar13) - param_3 * fVar14,
                     lVar3,0);
        if (*(long *)(param_5 + 0x10) != 0) {
          lVar3 = FUN_0391fab4(*(long *)(param_5 + 0x10),0);
          if ((*(long *)(param_5 + 0x18) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_5 + 0x18) + 0x20), lVar4 != 0)) {
            lVar4 = FUN_0391c27c(lVar4,0);
            if (((*(long *)(param_5 + 0x18) != 0) &&
                ((lVar5 = *(long *)(*(long *)(param_5 + 0x18) + 0x20), lVar5 != 0 &&
                 (FUN_0395be84(lVar5,0), lVar4 != 0)))) && (FUN_03927438(lVar4,0), lVar3 != 0)) {
              FUN_03928dd4(lVar3,0);
              if ((*(long *)(param_5 + 0x10) != 0) &&
                 (lVar3 = FUN_0391fab4(*(long *)(param_5 + 0x10),0), lVar3 != 0)) {
                FUN_039293f4(*(float *)(param_5 + 0x20) * param_1,
                             *(float *)(param_5 + 0x24) * param_1,
                             *(float *)(param_5 + 0x28) * param_1,lVar3,0);
                if (param_9 != 1) {
                  return;
                }
                lVar3 = *(long *)(param_5 + 0x30);
                if ((param_7 & 1) == 0) {
                  if (lVar3 != 0) {
                    uVar6 = FUN_038fe880(lVar3,0);
                    uVar9 = *(undefined8 *)(param_5 + 0x38);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                        );
                    }
                    uVar7 = FUN_0391f968(uVar6,uVar9,0);
                    if ((uVar7 & 1) == 0) {
                      return;
                    }
                    lVar3 = *(long *)(param_5 + 0x30);
                    if (lVar3 != 0) {
                      uVar6 = *(undefined8 *)(param_5 + 0x38);
                      goto LAB_032b9910;
                    }
                  }
                }
                else if (lVar3 != 0) {
                  uVar6 = FUN_038fe880(lVar3,0);
                  uVar9 = *(undefined8 *)(param_5 + 0x40);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                      );
                  }
                  uVar7 = FUN_0391f968(uVar6,uVar9,0);
                  if ((uVar7 & 1) == 0) {
                    return;
                  }
                  lVar3 = *(long *)(param_5 + 0x30);
                  if (lVar3 != 0) {
                    uVar6 = *(undefined8 *)(param_5 + 0x40);
LAB_032b9910:
                    FUN_038fe8bc(lVar3,uVar6,0);
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
LAB_032b9954:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


