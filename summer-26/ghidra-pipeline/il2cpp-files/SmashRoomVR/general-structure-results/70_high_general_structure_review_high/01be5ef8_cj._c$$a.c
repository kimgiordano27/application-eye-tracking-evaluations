/*
FUNCTION_NAME: cj.<>c$$a
ENTRY_POINT: 01be5ef8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_15
*/


/* WARNING: Removing unreachable block (ram,0x01be6708) */
/* WARNING: Removing unreachable block (ram,0x01be6540) */

void cj_<>c__a(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined1 unaff_w29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s9;
  float fVar16;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float fVar17;
  ulong unaff_d12;
  float unaff_s13;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  while( true ) {
    fVar14 = SQRT(param_3 * param_3 + param_4 + param_2 * param_2);
    if (fVar14 <= unaff_s9) {
      if (*(char *)(unaff_x27 + 599) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x27 + 599) = unaff_w29;
      }
      pfVar6 = *(float **)(*unaff_x20 + 0xb8);
      param_1 = *pfVar6;
      param_2 = pfVar6[1];
      param_3 = pfVar6[2];
    }
    else {
      param_1 = param_1 / fVar14;
      param_2 = param_2 / fVar14;
      param_3 = param_3 / fVar14;
    }
    uVar4 = _fStack0000000000000048 & 0xffffffff;
    unaff_w25 = unaff_w25 + 1;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w25) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar8 = *(long *)(unaff_x21 + (long)(int)unaff_w25 * 8 + 0x20);
    if (lVar8 == 0) goto cp__a;
    lVar5 = FUN_0391c2b8(lVar8,0);
    *unaff_x22 = lVar5;
    thunk_FUN_01b4f09c();
    unaff_d11 = unaff_d10;
    unaff_s13 = (float)FUN_0395b4d8(fStack000000000000004c,lVar8,0);
    param_2 = (float)uVar4;
    param_3 = (float)unaff_d11;
    lVar8 = FUN_038f1768(0);
    if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
    param_1 = (float)FUN_03928d34(lVar8,0);
    if (*(char *)(unaff_x28 + 0x25d) == '\0') {
      thunk_FUN_01ad9084();
      *(undefined1 *)(unaff_x28 + 0x25d) = unaff_w29;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    param_1 = param_1 - unaff_s13;
    param_2 = param_2 - (float)uVar4;
    param_3 = param_3 - (float)unaff_d11;
    param_4 = param_1 * param_1;
    unaff_d12 = uVar4;
  }
  param_2 = param_2 * in_stack_00000028._4_4_;
  fVar12 = (float)unaff_d11 + param_3 * in_stack_00000028._4_4_;
  fVar17 = (float)unaff_d12 + param_2;
  fVar18 = unaff_s13 + param_1 * in_stack_00000028._4_4_;
  uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
  bVar2 = unaff_w26 < 1;
  fVar14 = fVar12;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar7,0);
  fVar19 = (float)unaff_d10;
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(unaff_x19 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar7,0);
    if ((uVar4 & 1) != 0) {
      lVar8 = *unaff_x22;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(lVar8,0);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03923030(uVar7,0);
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 1;
      }
      if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
         (lVar8 = FUN_0391c2b8(*(long *)(unaff_x19 + 0xa8),0), lVar8 == 0)) goto cp__a;
      FUN_0391fb70(lVar8,uVar3,0);
      lVar8 = FUN_038f1768(0);
      if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
      fVar9 = (float)FUN_03928d34(lVar8,0);
      lVar8 = *unaff_x22;
      fVar16 = param_2;
      fVar15 = fVar14;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(lVar8,0);
      if ((uVar4 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar7,0);
        if ((uVar4 & 1) == 0) {
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar9 = fVar18 - fVar9;
          param_2 = fVar17 - param_2;
          fVar14 = fVar12 - fVar14;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar16 = SQRT(fVar14 * fVar14 + fVar9 * fVar9 + param_2 * param_2);
          if (fVar16 <= DAT_00b55370) {
            if (*(char *)(unaff_x27 + 599) == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              *(undefined1 *)(unaff_x27 + 599) = 1;
            }
            pfVar6 = *(float **)(*unaff_x20 + 0xb8);
            fVar15 = *pfVar6;
            fVar11 = pfVar6[1];
            fVar13 = pfVar6[2];
          }
          else {
            fVar15 = fVar9 / fVar16;
            fVar11 = param_2 / fVar16;
            fVar13 = fVar14 / fVar16;
          }
          lVar8 = *(long *)(unaff_x19 + 0xa8);
          if (lVar8 == 0) goto cp__a;
          fVar11 = fVar11 * in_stack_00000028._4_4_;
          fVar13 = fVar13 * in_stack_00000028._4_4_;
          fVar18 = fVar18 - fVar15 * in_stack_00000028._4_4_;
          fVar17 = fVar17 - fVar11;
          fVar12 = fVar12 - fVar13;
          fVar10 = (float)FUN_03928d34(lVar8,0);
          fVar15 = *(float *)(unaff_x19 + 0x38);
          if (*(float *)(unaff_x19 + 0x38) < 0.0) {
            fVar15 = 0.0;
          }
          FUN_03928dd4(fVar18 + (fVar10 - fVar18) * fVar15,fVar17 + (fVar11 - fVar17) * fVar15,
                       fVar12 + (fVar13 - fVar12) * fVar15,lVar8,0);
          lVar8 = *(long *)(unaff_x19 + 0xa8);
          FUN_039148b4(fVar9,param_2,fVar14,0);
          if (lVar8 == 0) goto cp__a;
          FUN_03928f54(lVar8,0);
          lVar8 = *(long *)(unaff_x19 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
          fVar14 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar8 == 0) goto cp__a;
          fVar14 = fVar16 * fVar14;
          fVar12 = (float)uVar7 * fVar16;
          fVar16 = (float)((ulong)uVar7 >> 0x20) * fVar16;
          fVar16 = fVar16 + fVar16;
          FUN_039293f4(CONCAT44(fVar16,fVar12 + fVar12),fVar16,fVar14 + fVar14,lVar8,0);
          puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*unaff_x22 == 0) goto cp__a;
          uVar7 = FUN_01ed712c(*unaff_x22,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__
                              );
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar4 = FUN_03923030(uVar7,0);
          if ((uVar4 & 1) == 0) goto LAB_01be6028;
          if (*unaff_x22 == 0) goto cp__a;
          FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
          FUN_01be77ec();
          goto LAB_01be6028;
        }
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar7,0);
      if ((uVar4 & 1) != 0) {
        lVar8 = FUN_038f1768(0);
        if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
        fVar14 = (float)FUN_03928d34(lVar8,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar14 = fVar14 - fStack000000000000004c;
        fVar16 = fVar16 - fStack0000000000000048;
        fVar15 = fVar15 - fVar19;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar12 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16);
        if (fVar12 <= DAT_00b55370) {
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x27 + 599) = 1;
          }
          pfVar6 = *(float **)(*unaff_x20 + 0xb8);
          fVar14 = *pfVar6;
          fVar16 = pfVar6[1];
          fVar15 = pfVar6[2];
        }
        else {
          fVar14 = fVar14 / fVar12;
          fVar16 = fVar16 / fVar12;
          fVar15 = fVar15 / fVar12;
        }
        lVar8 = *(long *)(unaff_x19 + 0xa8);
        if (lVar8 == 0) goto cp__a;
        fVar16 = fVar16 * DAT_00b55290;
        fVar15 = fVar15 * DAT_00b55290;
        fVar14 = fVar14 * DAT_00b55290;
        fVar9 = fVar19 + fVar15;
        fVar12 = fStack000000000000004c;
        fVar18 = (float)FUN_03928d34(fVar14,fStack000000000000004c,fVar15,lVar8,0);
        fVar17 = *(float *)(unaff_x19 + 0x38);
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        fVar12 = fVar12 + ((fStack0000000000000048 + fVar16) - fVar12) * fVar17;
        fVar15 = fVar15 + (fVar9 - fVar15) * fVar17;
        FUN_03928dd4(fVar18 + ((fStack000000000000004c + fVar14) - fVar18) * fVar17,fVar12,fVar15,
                     lVar8,0);
        lVar8 = *(long *)(unaff_x19 + 0xa8);
        if (lVar8 == 0) goto cp__a;
        fVar17 = (float)FUN_03928d34(lVar8,0);
        fVar14 = fVar12;
        fVar18 = fVar15;
        lVar5 = FUN_038f1768(0);
        if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
        fVar16 = (float)FUN_03928d34(lVar5,0);
        FUN_039148b4(fVar17 - fVar16,fVar12 - fVar14,fVar15 - fVar18,0);
        FUN_03928f54(lVar8,0);
        lVar8 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar8 == 0) goto cp__a;
        lVar5 = *(long *)(*unaff_x20 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                     *(undefined4 *)(lVar5 + 0x14),lVar8,0);
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
        uVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar4 = FUN_03923030(uVar7,0);
        if ((uVar4 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1), lVar8 == 0))
          goto cp__a;
          bVar2 = *(char *)(lVar8 + 0x34) != '\0';
        }
      }
    }
  }
LAB_01be6028:
  uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar7,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar8 = *(long *)(*unaff_x20 + 0xb8);
    fVar14 = fStack0000000000000034;
    fVar12 = fStack0000000000000038;
    fVar18 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 *(float *)(lVar8 + 0x48) * in_stack_00000028._4_4_,
                                 *(float *)(lVar8 + 0x4c) * in_stack_00000028._4_4_,
                                 *(float *)(lVar8 + 0x50) * in_stack_00000028._4_4_,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar8 = *(long *)(*unaff_x20 + 0xb8);
    fVar17 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 in_stack_00000040 * *(float *)(lVar8 + 0x48),
                                 in_stack_00000040 * *(float *)(lVar8 + 0x4c),
                                 in_stack_00000040 * *(float *)(lVar8 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar17;
    *(float *)(unaff_x19 + 0x94) = fStack0000000000000048 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = fVar19 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar18,fStack0000000000000048 + fVar14,fVar19 + fVar12,
                   *(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),bVar2,0);
          uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(uVar7,0);
          puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar4 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                                 *(undefined8 *)
                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__
                                );
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar4 = FUN_03923030(uVar7,0);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                 lVar8 == 0)) goto cp__a;
              lVar8 = *(long *)(lVar8 + 0x58);
              if (lVar8 != 0) {
                (**(code **)(lVar8 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar8 + 0x40),
                           *(undefined8 *)(lVar8 + 0x28));
              }
            }
          }
          return;
        }
      }
    }
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


