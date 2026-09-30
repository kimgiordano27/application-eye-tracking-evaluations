/*
FUNCTION_NAME: FUN_02e27b60
ENTRY_POINT: 02e27b60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_02e27b60(undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
                 long param_6)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((DAT_03ff01bd & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4703);
    DAT_03ff01bd = 1;
  }
  if (DAT_03fed25f == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed25f = '\x01';
  }
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar23 = *(float *)(lVar7 + 0x3c);
  fVar21 = *(float *)(lVar7 + 0x40);
  fVar22 = *(float *)(lVar7 + 0x44);
  if (DAT_03fed25b == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed25b = '\x01';
    lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  if ((char)param_5[0x4e] == '\0') {
    uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
    fVar15 = *(float *)(lVar7 + 0x1c);
    fVar17 = *(float *)(lVar7 + 0x20);
  }
  else {
    if ((param_6 == 0) || (*(long *)(param_6 + 0xa8) == 0)) goto LAB_02e28400;
    lVar7 = FUN_0391c27c(*(long *)(param_6 + 0xa8),0);
    if ((param_5[0x50] == 0) || (FUN_02e14708(param_5[0x50],0), lVar7 == 0)) goto LAB_02e28400;
    fVar23 = (float)FUN_0392a298(lVar7,0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar22 = SQRT(param_3 * param_3 + fVar23 * fVar23 + param_2 * param_2);
    if (fVar22 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar23 = *pfVar8;
      fVar21 = pfVar8[1];
      fVar22 = pfVar8[2];
    }
    else {
      fVar23 = fVar23 / fVar22;
      fVar21 = param_2 / fVar22;
      fVar22 = param_3 / fVar22;
    }
    fVar17 = fVar22;
    fVar15 = fVar21;
    uVar14 = FUN_02dee794(fVar23,0);
    param_2 = fVar15;
    param_3 = fVar17;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar7 = param_5[0x66];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar1 = param_5 + 0x66;
  uVar4 = FUN_03923030(lVar7,0);
  if ((uVar4 & 1) != 0) {
    lVar7 = *plVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(lVar7,0);
  }
  if (param_6 == 0) goto LAB_02e28400;
  lVar7 = FUN_0391c27c(param_6,0);
  uVar9 = *(undefined8 *)(param_6 + 0xa8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar4 = FUN_03923030(uVar9,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_0391c2b8(param_5,0);
  }
  else {
    if (*(long *)(param_6 + 0xa8) == 0) goto LAB_02e28400;
    lVar5 = FUN_0391c2b8(*(long *)(param_6 + 0xa8),0);
    if (*(long *)(param_6 + 0xa8) == 0) goto LAB_02e28400;
    lVar7 = FUN_0391c27c(*(long *)(param_6 + 0xa8),0);
  }
  if ((lVar7 != 0) && (fVar11 = (float)FUN_03928fd8(lVar7,0), lVar5 != 0)) {
    fVar19 = param_4;
    lVar5 = FUN_01ed7044(lVar5,*(undefined8 *)
                                Field_<PrivateImplementationDetails>_74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
                        );
    *plVar1 = lVar5;
    thunk_FUN_01b4f09c(plVar1,lVar5);
    if (*plVar1 != 0) {
      FUN_0395caf8(*plVar1,0,0);
      if (*plVar1 != 0) {
        FUN_0395ed78(*plVar1,0,0);
        lVar5 = *plVar1;
        if ((uVar4 & 1) == 0) {
          if (lVar5 == 0) goto LAB_02e28400;
          FUN_0395c8ec((int)param_5[0x5a],*(undefined4 *)((long)param_5 + 0x2d4),(int)param_5[0x5b],
                       lVar5,0);
          lVar6 = param_5[0x66];
          lVar5 = FUN_0391c27c(param_5,0);
          if ((lVar5 == 0) ||
             (FUN_03927438((int)param_5[0x5a],*(undefined4 *)((long)param_5 + 0x2d4),
                           (int)param_5[0x5b],lVar5,0), lVar6 == 0)) goto LAB_02e28400;
          FUN_0395ca24(lVar6,0);
          lVar5 = *plVar1;
          if (lVar5 == 0) goto LAB_02e28400;
          lVar6 = 0;
        }
        else {
          if (lVar5 == 0) goto LAB_02e28400;
          FUN_0395c8ec(*(undefined4 *)((long)param_5 + 0x2c4),(int)param_5[0x59],
                       *(undefined4 *)((long)param_5 + 0x2cc),lVar5,0);
          if (param_5[0x66] == 0) goto LAB_02e28400;
          FUN_0395ca24((int)param_5[0x5a],*(undefined4 *)((long)param_5 + 0x2d4),(int)param_5[0x5b],
                       param_5[0x66],0);
          lVar5 = param_5[0x66];
          if (lVar5 == 0) goto LAB_02e28400;
          lVar6 = param_5[0xf];
        }
        FUN_0395c650(lVar5,lVar6,0);
        if (*plVar1 != 0) {
          FUN_0395c7b4(fVar23,fVar21,fVar22,*plVar1,0);
          if (*plVar1 != 0) {
            FUN_0395d244(uVar14,*plVar1,0);
            if (*plVar1 != 0) {
              FUN_0395edf8(*plVar1,0,0);
              lVar5 = param_5[0x66];
              if ((char)param_5[0x4e] == '\0') {
                fVar23 = (float)FUN_02e2c2a4(param_5);
                uVar14 = (ulong)(uint)((param_2 * fVar17 + param_4 * fVar23 + fVar11 * fVar19) -
                                      param_3 * fVar15);
              }
              else {
                fVar23 = (float)FUN_02e21aa0();
                if (lVar5 == 0) goto LAB_02e28400;
                fVar19 = *(float *)((long)param_5 + 0x354);
                fVar17 = fVar17 + fVar19;
                fVar15 = fVar15 + *(float *)(param_5 + 0x6a);
                FUN_0395c8ec(fVar23 + *(float *)((long)param_5 + 0x34c),lVar5,0);
                FUN_039274a0(lVar7,0);
                fVar11 = (float)FUN_03914250(0);
                fVar23 = fVar19;
                fVar22 = fVar15;
                fVar21 = fVar17;
                lVar5 = FUN_0391c27c(param_5,0);
                if (lVar5 == 0) goto LAB_02e28400;
                fVar12 = (float)FUN_039274a0(lVar5,0);
                fVar16 = (fVar17 * fVar12 + fVar19 * fVar22 + fVar15 * fVar23) - fVar11 * fVar21;
                fVar18 = (fVar11 * fVar22 + fVar19 * fVar21 + fVar17 * fVar23) - fVar15 * fVar12;
                fVar20 = ((fVar19 * fVar23 - fVar11 * fVar12) - fVar15 * fVar22) - fVar17 * fVar21;
                uVar13 = FUN_03914250((fVar15 * fVar21 + fVar19 * fVar12 + fVar11 * fVar23) -
                                      fVar17 * fVar22,0);
                lVar5 = param_5[0x66];
                *(undefined4 *)((long)param_5 + 0x35c) = uVar13;
                *(float *)(param_5 + 0x6c) = fVar16;
                *(float *)((long)param_5 + 0x364) = fVar18;
                *(float *)(param_5 + 0x6d) = fVar20;
                FUN_039274a0(lVar7,0);
                fVar17 = (float)FUN_03914250(0);
                fVar23 = fVar20;
                fVar22 = fVar16;
                fVar21 = fVar18;
                lVar7 = FUN_0391c27c(param_5,0);
                if (lVar7 == 0) goto LAB_02e28400;
                fVar15 = (float)FUN_039274a0(lVar7,0);
                uVar14 = FUN_03914250((fVar16 * fVar21 + fVar20 * fVar15 + fVar17 * fVar23) -
                                      fVar18 * fVar22,
                                      (fVar18 * fVar15 + fVar20 * fVar22 + fVar16 * fVar23) -
                                      fVar17 * fVar21,
                                      (fVar17 * fVar22 + fVar20 * fVar21 + fVar18 * fVar23) -
                                      fVar16 * fVar15,
                                      ((fVar20 * fVar23 - fVar17 * fVar15) - fVar16 * fVar22) -
                                      fVar18 * fVar21,0);
              }
              FUN_02de9f30(uVar14,lVar5,0);
              FUN_02de5b40(param_6,param_5[0x66],param_5,0);
              plVar10 = (long *)(param_6 + 0x78);
              lVar7 = *plVar10;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar14 = FUN_03923030(lVar7,0);
              if ((uVar14 & 1) == 0) {
                lVar7 = param_5[0x4e];
                lVar5 = FUN_02ddcecc(0);
                if (lVar5 == 0) goto LAB_02e28400;
                if ((char)lVar7 == '\0') {
                  uVar9 = *(undefined8 *)(lVar5 + 0xb8);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  uVar14 = FUN_03923030(uVar9,0);
                  if ((uVar14 & 1) == 0) {
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_038f2e04(*(undefined8 *)StringLiteral_4703,0);
                    return;
                  }
                  lVar7 = FUN_02ddcecc(0);
                  if (lVar7 == 0) goto LAB_02e28400;
                  plVar10 = (long *)(lVar7 + 0xb8);
                }
                else {
                  plVar10 = (long *)(lVar5 + 0xc0);
                }
              }
              if (*plVar10 != 0) {
                FUN_02dfd7e8(*plVar10,*plVar1,0);
                if (*(int *)(param_6 + 0x28) == 1) {
                  if (*plVar1 == 0) goto LAB_02e28400;
                  FUN_0395d318(*plVar1,0,0);
                  if (*plVar1 == 0) goto LAB_02e28400;
                  FUN_0395d398(*plVar1,0,0);
                  if (*plVar1 == 0) goto LAB_02e28400;
                  FUN_0395d418(*plVar1,0,0);
                  if (*plVar1 == 0) goto LAB_02e28400;
                  FUN_0395d498(*plVar1,0,0);
                  if (*plVar1 == 0) goto LAB_02e28400;
                  FUN_0395d518(*plVar1,0,0);
                  if (*plVar1 == 0) goto LAB_02e28400;
                  FUN_0395d598(*plVar1,0,0);
                }
                if ((char)param_5[0x4e] != '\0') {
                  if (param_5[0x25] == 0) goto LAB_02e28400;
                  bVar3 = FUN_02e3cb44(param_5[0x25],*(undefined4 *)((long)param_5 + 0xdc),0);
                  *(byte *)(param_5 + 0x6b) = bVar3 & 1;
                  if ((bVar3 & 1) != 0) {
                    if (param_5[0x50] == 0) goto LAB_02e28400;
                    if (*(char *)(param_5[0x50] + 0x9f) == '\0') goto LAB_02e28358;
                  }
                  FUN_02e2c3fc(param_5);
                }
LAB_02e28358:
                (**(code **)(*param_5 + 0x668))(param_5,*(undefined8 *)(*param_5 + 0x670));
                fVar23 = (float)FUN_03925ca4(0);
                *(float *)(param_5 + 0x83) = fVar23 + 2.0;
                *(undefined1 *)((long)param_5 + 0x3f9) = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02e28400:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


