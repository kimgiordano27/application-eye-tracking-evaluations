/*
FUNCTION_NAME: FUN_01c6ba00
ENTRY_POINT: 01c6ba00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


void FUN_01c6ba00(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_03fed705 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed705 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (((*(char *)(param_4 + 0x20) != '\0') && (*(char *)(param_4 + 0x34) == '\0')) &&
     (*(char *)(param_4 + 0x3c) != '\0')) {
                    /* try { // try from 01c6ba90 to 01d6baa7 has its CatchHandler @ 01c6bb24 */
    plVar5 = (long *)(param_4 + 0x28);
    lVar6 = *plVar5;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if ((*plVar5 != 0) && (lVar6 = FUN_0391c27c(*plVar5,0), lVar6 != 0)) {
        fVar9 = (float)FUN_03928d34(lVar6,0);
        fVar15 = param_2;
        fVar13 = param_3;
        lVar6 = FUN_0391c27c(param_4,0);
        if (lVar6 != 0) {
          fVar10 = (float)FUN_03928d34(lVar6,0);
          lVar7 = *(long *)(param_4 + 0x60);
          fVar12 = fVar15;
          fVar14 = fVar13;
          lVar6 = FUN_0391c27c(param_4,0);
          if (lVar6 != 0) {
            fVar11 = (float)FUN_03928d34(lVar6,0);
            if (DAT_03fed25d == '\0') {
              thunk_FUN_01ad9084(
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                );
              DAT_03fed25d = '\x01';
            }
            puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
            fVar9 = fVar9 - fVar10;
            param_2 = param_2 - fVar15;
            param_3 = param_3 - fVar13;
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar15 = SQRT(param_3 * param_3 + fVar9 * fVar9 + param_2 * param_2);
            if (fVar15 <= DAT_00b55370) {
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
              ;
              fVar9 = *pfVar4;
              param_2 = pfVar4[1];
              param_3 = pfVar4[2];
            }
            else {
              fVar9 = fVar9 / fVar15;
              param_2 = param_2 / fVar15;
              param_3 = param_3 / fVar15;
            }
            if (lVar7 != 0) {
              fVar15 = *(float *)(param_4 + 0x30);
              fVar14 = fVar14 + param_3 * fVar15 * param_1;
              fVar12 = fVar12 + param_2 * fVar15 * param_1;
              FUN_0395ac74(fVar11 + fVar9 * fVar15 * param_1,lVar7,0);
              lVar6 = FUN_0391c27c(param_4,0);
              if (lVar6 != 0) {
                FUN_03928d34(lVar6,0);
                if ((*plVar5 != 0) && (lVar6 = FUN_0391c27c(*plVar5,0), lVar6 != 0)) {
                  FUN_03928d34(lVar6,0);
                  if (DAT_03fed25e == '\0') {
                    thunk_FUN_01ad9084(
                                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                      );
                    DAT_03fed25e = '\x01';
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  lVar6 = FUN_0391c27c(param_4,0);
                  if (lVar6 != 0) {
                    fVar15 = (float)FUN_03928d34(lVar6,0);
                    if ((*plVar5 != 0) &&
                       (fVar13 = fVar12, fVar9 = fVar14, lVar6 = FUN_0391c27c(*plVar5,0), lVar6 != 0
                       )) {
                      fVar10 = (float)FUN_03928d34(lVar6,0);
                      if (DAT_03fed25e == '\0') {
                        thunk_FUN_01ad9084(
                                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                          );
                        DAT_03fed25e = '\x01';
                      }
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      if (DAT_00b55424 <=
                          SQRT((fVar14 - fVar9) * (fVar14 - fVar9) +
                               (fVar15 - fVar10) * (fVar15 - fVar10) +
                               (fVar12 - fVar13) * (fVar12 - fVar13))) {
                        return;
                      }
                      *(undefined1 *)(param_4 + 0x34) = 1;
                      *(undefined1 *)(param_4 + 0x3c) = 0;
                      *(undefined4 *)(param_4 + 0x40) = 0;
                      if (*(long *)(param_4 + 0x28) != 0) {
                        uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x20);
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        uVar3 = FUN_0391f968(uVar8,0,0);
                        if ((uVar3 & 1) == 0) {
                          return;
                        }
                        if (*plVar5 != 0) {
                          *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(*plVar5 + 0x20);
                          thunk_FUN_01b4f09c(plVar5);
                          *(undefined1 *)(param_4 + 0x34) = 0;
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
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
                    /* try { // try from 01c6ba5c to 01d6ba8f has its CatchHandler @ 01c6ba5c
                       catch() { ... } // from try @ 01c6ba5c with catch @ 01c6ba5c
                       catch() { ... } // from try @ 01c6baa8 with catch @ 01c6ba5c */
  return;
}


