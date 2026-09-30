/*
FUNCTION_NAME: cm$$d
ENTRY_POINT: 01be5f50
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

void cm__d(float *param_1)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s9;
  float fVar19;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float fVar20;
  ulong unaff_d12;
  float unaff_s13;
  ulong unaff_d14;
  float fVar21;
  undefined8 unaff_d15;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
code_r0x01be5f50:
  fVar9 = *param_1;
  fVar12 = param_1[1];
  fVar14 = param_1[2];
  uVar7 = unaff_d11;
  uVar4 = unaff_d12;
  unaff_d12 = unaff_d14;
  unaff_d11 = unaff_d15;
  do {
    fVar17 = (float)unaff_d12;
    unaff_w25 = unaff_w25 + 1;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w25) {
      fVar12 = fVar12 * in_stack_00000028._4_4_;
      fVar15 = (float)uVar7 + fVar14 * in_stack_00000028._4_4_;
      fVar20 = (float)uVar4 + fVar12;
      fVar9 = unaff_s13 + fVar9 * in_stack_00000028._4_4_;
      uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
      bVar2 = unaff_w26 < 1;
      fVar14 = fVar15;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar7,0);
      fVar21 = (float)unaff_d11;
      if ((uVar4 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar7,0);
        if ((uVar4 & 1) != 0) {
          lVar8 = *unaff_x22;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(lVar8,0);
          if ((uVar4 & 1) == 0) {
            uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
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
          fVar10 = (float)FUN_03928d34(lVar8,0);
          lVar8 = *unaff_x22;
          fVar19 = fVar12;
          fVar18 = fVar14;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(lVar8,0);
          fVar17 = fStack0000000000000048;
          if ((uVar4 & 1) != 0) {
            uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
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
              fVar10 = fVar9 - fVar10;
              fVar12 = fVar20 - fVar12;
              fVar14 = fVar15 - fVar14;
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar19 = SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12);
              if (fVar19 <= DAT_00b55370) {
                if (*(char *)(unaff_x27 + 599) == '\0') {
                  thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                  *(undefined1 *)(unaff_x27 + 599) = 1;
                }
                pfVar6 = *(float **)(*unaff_x20 + 0xb8);
                fVar18 = *pfVar6;
                fVar13 = pfVar6[1];
                fVar16 = pfVar6[2];
              }
              else {
                fVar18 = fVar10 / fVar19;
                fVar13 = fVar12 / fVar19;
                fVar16 = fVar14 / fVar19;
              }
              lVar8 = *(long *)(unaff_x19 + 0xa8);
              if (lVar8 == 0) goto cp__a;
              fVar13 = fVar13 * in_stack_00000028._4_4_;
              fVar16 = fVar16 * in_stack_00000028._4_4_;
              fVar9 = fVar9 - fVar18 * in_stack_00000028._4_4_;
              fVar20 = fVar20 - fVar13;
              fVar15 = fVar15 - fVar16;
              fVar11 = (float)FUN_03928d34(lVar8,0);
              fVar18 = *(float *)(unaff_x19 + 0x38);
              if (*(float *)(unaff_x19 + 0x38) < 0.0) {
                fVar18 = 0.0;
              }
              FUN_03928dd4(fVar9 + (fVar11 - fVar9) * fVar18,fVar20 + (fVar13 - fVar20) * fVar18,
                           fVar15 + (fVar16 - fVar15) * fVar18,lVar8,0);
              lVar8 = *(long *)(unaff_x19 + 0xa8);
              FUN_039148b4(fVar10,fVar12,fVar14,0);
              if (lVar8 == 0) goto cp__a;
              FUN_03928f54(lVar8,0);
              lVar8 = *(long *)(unaff_x19 + 0xa8);
              if (DAT_03fed258 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed258 = '\x01';
              }
              uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
              fVar12 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
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
              fVar12 = fVar19 * fVar12;
              fVar14 = (float)uVar7 * fVar19;
              fVar19 = (float)((ulong)uVar7 >> 0x20) * fVar19;
              fVar19 = fVar19 + fVar19;
              FUN_039293f4(CONCAT44(fVar19,fVar14 + fVar14),fVar19,fVar12 + fVar12,lVar8,0);
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
              if ((uVar4 & 1) != 0) {
                if (*unaff_x22 == 0) goto cp__a;
                FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
                FUN_01be77ec();
              }
              goto LAB_01be6028;
            }
          }
          uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03923030(uVar7,0);
          if ((uVar4 & 1) != 0) {
            lVar8 = FUN_038f1768(0);
            if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
            fVar12 = (float)FUN_03928d34(lVar8,0);
            if (DAT_03fed25d == '\0') {
              thunk_FUN_01ad9084(
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                );
              DAT_03fed25d = '\x01';
            }
            fVar12 = fVar12 - fStack000000000000004c;
            fVar19 = fVar19 - fStack0000000000000048;
            fVar18 = fVar18 - fVar21;
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar14 = SQRT(fVar18 * fVar18 + fVar12 * fVar12 + fVar19 * fVar19);
            if (fVar14 <= DAT_00b55370) {
              if (*(char *)(unaff_x27 + 599) == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                *(undefined1 *)(unaff_x27 + 599) = 1;
              }
              pfVar6 = *(float **)(*unaff_x20 + 0xb8);
              fVar12 = *pfVar6;
              fVar19 = pfVar6[1];
              fVar18 = pfVar6[2];
            }
            else {
              fVar12 = fVar12 / fVar14;
              fVar19 = fVar19 / fVar14;
              fVar18 = fVar18 / fVar14;
            }
            lVar8 = *(long *)(unaff_x19 + 0xa8);
            if (lVar8 == 0) goto cp__a;
            fVar19 = fVar19 * DAT_00b55290;
            fVar18 = fVar18 * DAT_00b55290;
            fVar12 = fVar12 * DAT_00b55290;
            fVar20 = fVar21 + fVar18;
            fVar14 = fStack000000000000004c;
            fVar9 = (float)FUN_03928d34(fVar12,fStack000000000000004c,fVar18,lVar8,0);
            fVar15 = *(float *)(unaff_x19 + 0x38);
            if (fVar15 < 0.0) {
              fVar15 = 0.0;
            }
            fVar14 = fVar14 + ((fStack0000000000000048 + fVar19) - fVar14) * fVar15;
            fVar18 = fVar18 + (fVar20 - fVar18) * fVar15;
            FUN_03928dd4(fVar9 + ((fStack000000000000004c + fVar12) - fVar9) * fVar15,fVar14,fVar18,
                         lVar8,0);
            lVar8 = *(long *)(unaff_x19 + 0xa8);
            if (lVar8 == 0) goto cp__a;
            fVar15 = (float)FUN_03928d34(lVar8,0);
            fVar12 = fVar14;
            fVar9 = fVar18;
            lVar5 = FUN_038f1768(0);
            if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
            fVar20 = (float)FUN_03928d34(lVar5,0);
            FUN_039148b4(fVar15 - fVar20,fVar14 - fVar12,fVar18 - fVar9,0);
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
        fVar12 = fStack0000000000000034;
        fVar14 = fStack0000000000000038;
        fVar9 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                    fStack0000000000000038,uStack000000000000003c,
                                    *(float *)(lVar8 + 0x48) * in_stack_00000028._4_4_,
                                    *(float *)(lVar8 + 0x4c) * in_stack_00000028._4_4_,
                                    *(float *)(lVar8 + 0x50) * in_stack_00000028._4_4_,0);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed260 = '\x01';
        }
        lVar8 = *(long *)(*unaff_x20 + 0xb8);
        fVar15 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                     fStack0000000000000038,uStack000000000000003c,
                                     in_stack_00000040 * *(float *)(lVar8 + 0x48),
                                     in_stack_00000040 * *(float *)(lVar8 + 0x4c),
                                     in_stack_00000040 * *(float *)(lVar8 + 0x50),0);
        *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar15;
        *(float *)(unaff_x19 + 0x94) = fVar17 + fStack0000000000000034;
        *(float *)(unaff_x19 + 0x98) = fVar21 + fStack0000000000000038;
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fcfa4(fStack000000000000004c + fVar9,fVar17 + fVar12,fVar21 + fVar14,
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
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
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
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar8 = *(long *)(unaff_x21 + (long)(int)unaff_w25 * 8 + 0x20);
    if (lVar8 == 0) goto cp__a;
    lVar5 = FUN_0391c2b8(lVar8,0);
    *unaff_x22 = lVar5;
    thunk_FUN_01b4f09c();
    unaff_s13 = (float)FUN_0395b4d8(fStack000000000000004c,lVar8,0);
    fVar12 = (float)unaff_d12;
    fVar14 = (float)unaff_d11;
    lVar8 = FUN_038f1768(0);
    if ((lVar8 == 0) || (lVar8 = FUN_0391c27c(lVar8,0), lVar8 == 0)) goto cp__a;
    fVar9 = (float)FUN_03928d34(lVar8,0);
    if (*(char *)(unaff_x28 + 0x25d) == '\0') {
      thunk_FUN_01ad9084();
      *(undefined1 *)(unaff_x28 + 0x25d) = unaff_w29;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar9 = fVar9 - unaff_s13;
    fVar12 = fVar12 - (float)unaff_d12;
    fVar14 = fVar14 - (float)unaff_d11;
    fVar17 = SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar12 * fVar12);
    if (fVar17 <= unaff_s9) break;
    fVar9 = fVar9 / fVar17;
    fVar12 = fVar12 / fVar17;
    fVar14 = fVar14 / fVar17;
    uVar7 = unaff_d11;
    uVar4 = unaff_d12;
    unaff_d12 = _fStack0000000000000048 & 0xffffffff;
    unaff_d11 = unaff_d10;
  } while( true );
  unaff_d14 = _fStack0000000000000048 & 0xffffffff;
  if (*(char *)(unaff_x27 + 599) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x27 + 599) = unaff_w29;
  }
  param_1 = *(float **)(*unaff_x20 + 0xb8);
  unaff_d15 = unaff_d10;
  goto code_r0x01be5f50;
}


