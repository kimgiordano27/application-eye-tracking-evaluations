/*
FUNCTION_NAME: FUN_01c04e18
ENTRY_POINT: 01c04e18
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


void FUN_01c04e18(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_03fed3cf & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__);
    DAT_03fed3cf = 1;
  }
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__;
  bVar1 = *(byte *)(param_4 + 0x2c);
  *(byte *)(param_4 + 0x2c) = bVar1 ^ 1;
  if (bVar1 == 0) {
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_01c0531c;
    lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x30),0);
    lVar8 = *(long *)(param_4 + 0x20);
    if (lVar8 == 0) goto LAB_01c0531c;
    fVar9 = (float)FUN_03928d34(lVar8,0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c0531c;
    fVar13 = param_3;
    fVar10 = (float)FUN_039291ac(*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c0531c;
    FUN_039291ac(*(long *)(param_4 + 0x20),0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar12 = SQRT(fVar10 * fVar10 + 0.0 + fVar13 * fVar13);
    if (fVar12 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      fVar13 = pfVar6[2];
    }
    else {
      fVar10 = fVar10 / fVar12;
      fVar11 = 0.0 / fVar12;
      fVar13 = fVar13 / fVar12;
    }
    fVar12 = *(float *)(param_4 + 0x28);
    fVar9 = fVar9 + fVar10 * fVar12;
    param_2 = param_2 + fVar11 * fVar12;
    param_3 = param_3 + fVar13 * fVar12;
    FUN_03928dd4(fVar9,param_2,param_3,lVar8,0);
    if (lVar4 == 0) goto LAB_01c0531c;
    FUN_03928dd4(fVar9,param_2,param_3,lVar4,0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_01c0531c;
    lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x38),0);
    if (((*(long *)(param_4 + 0x30) == 0) ||
        (lVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar8 == 0)) ||
       (FUN_03928d34(lVar8,0), lVar4 == 0)) goto LAB_01c0531c;
    FUN_03928dd4(lVar4,0);
    uVar7 = *(undefined8 *)(param_4 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_4 + 0x40) == 0) goto LAB_01c0531c;
      lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x40),0);
      if (((*(long *)(param_4 + 0x30) == 0) ||
          (lVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar8 == 0)) ||
         (FUN_03928d34(lVar8,0), lVar4 == 0)) goto LAB_01c0531c;
      FUN_03928dd4(lVar4,0);
    }
    if (*(char *)(param_4 + 200) != '\0') {
      iVar3 = FUN_0391993c(*(undefined8 *)puVar2,0);
      if (iVar3 == 1) {
        if (*(long *)(param_4 + 0x58) == 0) goto LAB_01c0531c;
        lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x58),0);
        if (((*(long *)(param_4 + 0x30) == 0) ||
            (lVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar8 == 0)) ||
           (FUN_03928d34(lVar8,0), lVar4 == 0)) goto LAB_01c0531c;
        FUN_03928dd4(lVar4,0);
        if (*(long *)(param_4 + 0x58) == 0) goto LAB_01c0531c;
        FUN_0391fb70(*(long *)(param_4 + 0x58),1,0);
        if (*(long *)(param_4 + 0x30) == 0) goto LAB_01c0531c;
        FUN_0391fb70(*(long *)(param_4 + 0x30),0,0);
      }
      else {
        if (*(long *)(param_4 + 0x48) == 0) goto LAB_01c0531c;
        lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x48),0);
        if (((*(long *)(param_4 + 0x30) == 0) ||
            (lVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar8 == 0)) ||
           (FUN_03928d34(lVar8,0), lVar4 == 0)) goto LAB_01c0531c;
        FUN_03928dd4(lVar4,0);
        if (*(long *)(param_4 + 0x50) == 0) goto LAB_01c0531c;
        lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x50),0);
        if (((*(long *)(param_4 + 0x30) == 0) ||
            (lVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar8 == 0)) ||
           (FUN_03928d34(lVar8,0), lVar4 == 0)) goto LAB_01c0531c;
        FUN_03928dd4(lVar4,0);
        if (*(long *)(param_4 + 0x58) == 0) goto LAB_01c0531c;
        FUN_0391fb70(*(long *)(param_4 + 0x58),0,0);
        if (*(long *)(param_4 + 0x60) == 0) goto LAB_01c0531c;
        lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x60),0);
        if (((*(long *)(param_4 + 0x30) == 0) ||
            (lVar8 = FUN_0391fab4(*(long *)(param_4 + 0x30),0), lVar8 == 0)) ||
           (FUN_03928d34(lVar8,0), lVar4 == 0)) goto LAB_01c0531c;
        FUN_03928dd4(lVar4,0);
      }
    }
  }
  iVar3 = FUN_0391993c(*(undefined8 *)puVar2,0);
  if (iVar3 != 1) {
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_01c0531c;
    FUN_0391fb70(*(long *)(param_4 + 0x30),*(undefined1 *)(param_4 + 0x2c),0);
  }
  if (*(char *)(param_4 + 0x2c) != '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    FUN_0391fb70(*(long *)(param_4 + 0x30),0,0);
    if (*(long *)(param_4 + 0x38) != 0) {
      FUN_0391fb70(*(long *)(param_4 + 0x38),*(undefined1 *)(param_4 + 0x2c),0);
      uVar7 = *(undefined8 *)(param_4 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_01c0531c;
        FUN_0391fb70(*(long *)(param_4 + 0x40),*(undefined1 *)(param_4 + 0x2c),0);
      }
      if (*(char *)(param_4 + 200) == '\0') {
        return;
      }
      if (*(long *)(param_4 + 0x48) != 0) {
        FUN_0391fb70(*(long *)(param_4 + 0x48),0,0);
        if (*(long *)(param_4 + 0x50) != 0) {
          FUN_0391fb70(*(long *)(param_4 + 0x50),0,0);
          if (*(long *)(param_4 + 0x58) != 0) {
            FUN_0391fb70(*(long *)(param_4 + 0x58),0,0);
            if (*(long *)(param_4 + 0x60) != 0) {
              FUN_0391fb70(*(long *)(param_4 + 0x60),0,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01c0531c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


