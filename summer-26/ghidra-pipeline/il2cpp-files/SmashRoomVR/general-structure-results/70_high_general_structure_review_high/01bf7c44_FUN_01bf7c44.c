/*
FUNCTION_NAME: FUN_01bf7c44
ENTRY_POINT: 01bf7c44
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


void FUN_01bf7c44(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  if ((DAT_03fed31f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed31f = 1;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  if (*(long *)(param_4 + 0x58) != 0) {
    fVar9 = (float)FUN_03928d34(*(long *)(param_4 + 0x58),0);
    fVar15 = param_2;
    fVar13 = param_3;
    lVar4 = FUN_0391c27c(param_4,0);
    if (lVar4 != 0) {
      fVar10 = (float)FUN_03928d34(lVar4,0);
      fVar12 = fVar15;
      fVar14 = fVar13;
      lVar4 = FUN_0391c27c(param_4,0);
      if (lVar4 != 0) {
        uVar11 = FUN_03928d34(lVar4,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
        fVar9 = fVar9 - fVar10;
        param_2 = param_2 - fVar15;
        param_3 = param_3 - fVar13;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar15 = SQRT(param_3 * param_3 + fVar9 * fVar9 + param_2 * param_2);
        if (fVar15 <= DAT_00b55370) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar8 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar9 = *pfVar8;
          param_2 = pfVar8[1];
          param_3 = pfVar8[2];
        }
        else {
          fVar9 = fVar9 / fVar15;
          param_2 = param_2 / fVar15;
          param_3 = param_3 / fVar15;
        }
        if (DAT_03fed25c == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25c = '\x01';
        }
        puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        local_b8 = uVar11;
        fStack_b4 = fVar12;
        local_b0 = fVar14;
        fStack_ac = fVar9;
        local_a8 = param_2;
        fStack_a4 = param_3;
        uVar3 = FUN_039561ac(fVar15,&local_b8,&local_a0,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = FUN_03959ba8(&local_a0,0);
          if (lVar4 == 0) goto LAB_01bf7ebc;
          uVar5 = FUN_0391c2b8(lVar4,0);
          uVar6 = FUN_0391c2b8(param_4,0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar7 = FUN_0391f968(uVar5,uVar6,0);
          if ((uVar7 & 1) == 0) {
            return;
          }
        }
        FUN_01bf7f3c(param_4,~uVar3 & 1);
        return;
      }
    }
  }
LAB_01bf7ebc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


