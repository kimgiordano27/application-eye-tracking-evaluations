/*
FUNCTION_NAME: FUN_01c7ab3c
ENTRY_POINT: 01c7ab3c
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


void FUN_01c7ab3c(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_03fed784 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_331);
    thunk_FUN_01ad9084(StringLiteral_332);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    DAT_03fed784 = 1;
  }
  if (param_4[0x10] == 0) goto LAB_01c7b110;
  plVar8 = param_4 + 0x12;
  *plVar8 = *(long *)(param_4[0x10] + 0xa8);
  thunk_FUN_01b4f09c(plVar8);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*plVar8 == 0) {
LAB_01c7abf4:
                    /* WARNING: Could not recover jumptable at 0x01c7ac1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
    return;
  }
  uVar9 = *(undefined8 *)(*plVar8 + 0x50);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(uVar9,0,0);
  if ((uVar3 & 1) != 0) goto LAB_01c7abf4;
  lVar10 = param_4[10];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(lVar10,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*plVar8 == 0) || (lVar10 = *(long *)(*plVar8 + 0x58), lVar10 == 0)) goto LAB_01c7b110;
    uVar9 = thunk_FUN_01acfdbc(lVar10,0);
                    /* try { // try from 01c7ac74 to 01d7ac77 has its CatchHandler @ 01c7ac7c */
    uVar11 = *(undefined8 *)StringLiteral_332;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                        );
    }
    uVar11 = FUN_0304eec0(uVar11,0);
    uVar3 = FUN_03057a60(uVar9,uVar11,0);
    if ((*plVar8 == 0) || (lVar10 = *(long *)(*plVar8 + 0x50), lVar10 == 0)) goto LAB_01c7b110;
    lVar10 = FUN_01ed712c(lVar10,*(undefined8 *)StringLiteral_331);
    plVar12 = param_4 + 0x11;
    *plVar12 = lVar10;
    thunk_FUN_01b4f09c(plVar12,lVar10);
    lVar10 = *plVar12;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar10,0,0);
    if ((uVar4 & 1) == 0) {
      if ((uVar3 & 1) == 0) goto LAB_01c7abf4;
    }
    else {
      if ((*plVar8 == 0) || (*plVar12 == 0)) goto LAB_01c7b110;
      param_2 = *(float *)(*plVar12 + 0x20);
      if (param_2 < *(float *)(*plVar8 + 0x60)) goto LAB_01c7abf4;
    }
    lVar10 = FUN_0391c27c(param_4,0);
    if (lVar10 == 0) goto LAB_01c7b110;
    fVar13 = (float)FUN_03928d34(lVar10,0);
    lVar10 = *plVar8;
    if (lVar10 == 0) goto LAB_01c7b110;
    fVar15 = *(float *)(lVar10 + 0x7c);
    fVar16 = *(float *)(lVar10 + 0x80);
    fVar18 = *(float *)(lVar10 + 0x84);
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if ((param_4[10] == 0) || (lVar10 = FUN_0391fab4(param_4[10],0), lVar10 == 0))
    goto LAB_01c7b110;
    fVar13 = fVar13 - fVar15;
    param_2 = param_2 - fVar16;
    param_3 = param_3 - fVar18;
    FUN_039282dc(0,0,SQRT(param_3 * param_3 + fVar13 * fVar13 + param_2 * param_2) + DAT_00b5556c,
                 lVar10,0);
    if (param_4[10] == 0) goto LAB_01c7b110;
    lVar10 = FUN_0391fab4(param_4[10],0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *plVar8;
    if (lVar5 == 0) goto LAB_01c7b110;
    lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar13 = *(float *)(lVar7 + 0x4c);
    fVar15 = *(float *)(lVar7 + 0x50);
    FUN_0391419c(*(undefined4 *)(lVar7 + 0x48),fVar13,fVar15,*(undefined4 *)(lVar5 + 0x88),
                 *(undefined4 *)(lVar5 + 0x8c),*(undefined4 *)(lVar5 + 0x90),0);
    if (lVar10 == 0) goto LAB_01c7b110;
    FUN_03928f54(lVar10,0);
    lVar10 = FUN_038f1768(0);
    if ((lVar10 == 0) || (lVar10 = FUN_0391c27c(lVar10,0), lVar10 == 0)) goto LAB_01c7b110;
    fVar16 = (float)FUN_03928d34(lVar10,0);
    if ((param_4[10] == 0) ||
       (fVar18 = fVar13, fVar17 = fVar15, lVar10 = FUN_0391fab4(param_4[10],0), lVar10 == 0))
    goto LAB_01c7b110;
    fVar14 = (float)FUN_03928d34(lVar10,0);
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (param_4[10] == 0) goto LAB_01c7b110;
    fVar15 = SQRT((fVar15 - fVar17) * (fVar15 - fVar17) +
                  (fVar16 - fVar14) * (fVar16 - fVar14) + (fVar13 - fVar18) * (fVar13 - fVar18));
    lVar10 = FUN_0391fab4(param_4[10],0);
    fVar13 = *(float *)(param_4 + 0xd);
    if (fVar15 <= *(float *)(param_4 + 0xd)) {
      fVar13 = fVar15;
    }
    if (fVar15 < *(float *)((long)param_4 + 100)) {
      fVar13 = *(float *)((long)param_4 + 100);
    }
    if (lVar10 == 0) goto LAB_01c7b110;
    FUN_039293f4(fVar13 * *(float *)((long)param_4 + 0x6c),fVar13 * *(float *)(param_4 + 0xe),
                 fVar13 * *(float *)((long)param_4 + 0x74),lVar10,0);
    if ((param_4[0x12] == 0) || (param_4[10] == 0)) goto LAB_01c7b110;
    FUN_0391fb70(param_4[10],0.0 < *(float *)(param_4[0x12] + 0x60),0);
  }
  lVar10 = param_4[0x13];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar10,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_4[0x13] != 0) {
    FUN_038fcc78(param_4[0x13],0,0);
    lVar10 = param_4[0x13];
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar10 != 0) {
      puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar13 = (float)puVar6[1];
      fVar15 = (float)puVar6[2];
      FUN_038fcfa4(*puVar6,fVar13,fVar15,lVar10,0,0);
      lVar5 = param_4[0x13];
      lVar10 = FUN_0391c27c(param_4,0);
      if (lVar10 != 0) {
        fVar16 = (float)FUN_03928d34(lVar10,0);
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          fVar18 = *(float *)(lVar10 + 0x7c);
          fVar17 = *(float *)(lVar10 + 0x80);
          fVar14 = *(float *)(lVar10 + 0x84);
          if (DAT_03fed25e == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25e = '\x01';
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar5 != 0) {
            fVar16 = fVar16 - fVar18;
            fVar13 = fVar13 - fVar17;
            fVar15 = fVar15 - fVar14;
            FUN_038fcfa4(0,0,SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13) *
                             *(float *)(param_4 + 0xf),lVar5,1,0);
            if ((param_4[0x12] != 0) && (param_4[0x13] != 0)) {
              FUN_038fe3fc(param_4[0x13],0.0 < *(float *)(param_4[0x12] + 0x60),0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01c7b110:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


