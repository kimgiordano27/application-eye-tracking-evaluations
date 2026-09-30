/*
FUNCTION_NAME: cj$$ToString
ENTRY_POINT: 01be5e28
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


/* WARNING: Removing unreachable block (ram,0x01be6540) */
/* WARNING: Removing unreachable block (ram,0x01be6708) */

void cj__ToString(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  long lVar9;
  uint unaff_w26;
  long unaff_x27;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s10;
  float fVar20;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar19 = *(float *)(param_1 + 0x370);
  uVar4 = 0;
  uVar1 = unaff_w26;
  do {
    fVar16 = unaff_s15;
    fVar20 = unaff_s14;
    if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar9 = *(long *)(unaff_x21 + (long)(int)uVar4 * 8 + 0x20);
    if (lVar9 == 0) goto cp__a;
    lVar5 = FUN_0391c2b8(lVar9,0);
    *unaff_x22 = lVar5;
    thunk_FUN_01b4f09c();
    fVar10 = (float)FUN_0395b4d8(fStack000000000000004c,lVar9,0);
    fVar13 = fVar20;
    fVar15 = fVar16;
    lVar9 = FUN_038f1768(0);
    if ((lVar9 == 0) || (lVar9 = FUN_0391c27c(lVar9,0), lVar9 == 0)) goto cp__a;
    fVar11 = (float)FUN_03928d34(lVar9,0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(puVar2);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar11 = fVar11 - fVar10;
    fVar13 = fVar13 - fVar20;
    fVar15 = fVar15 - fVar16;
    fVar18 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
    if (fVar18 <= fVar19) {
      if (*(char *)(unaff_x27 + 599) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x27 + 599) = 1;
      }
      pfVar7 = *(float **)(*unaff_x20 + 0xb8);
      fVar11 = *pfVar7;
      fVar13 = pfVar7[1];
      fVar15 = pfVar7[2];
    }
    else {
      fVar11 = fVar11 / fVar18;
      fVar13 = fVar13 / fVar18;
      fVar15 = fVar15 / fVar18;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    uVar4 = uVar4 + 1;
    unaff_s14 = fStack0000000000000048;
    unaff_s15 = unaff_s10;
  } while ((int)uVar4 < (int)uVar1);
  fVar13 = fVar13 * in_stack_00000028._4_4_;
  fVar16 = fVar16 + fVar15 * in_stack_00000028._4_4_;
  fVar20 = fVar20 + fVar13;
  fVar10 = fVar10 + fVar11 * in_stack_00000028._4_4_;
  uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
  bVar3 = (int)unaff_w26 < 1;
  fVar19 = fVar16;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar8,0);
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03923030(uVar8,0);
    if ((uVar6 & 1) != 0) {
      lVar9 = *unaff_x22;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_03923030(lVar9,0);
      if ((uVar6 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar8,0);
        uVar4 = uVar4 & 1;
      }
      else {
        uVar4 = 1;
      }
      if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
         (lVar9 = FUN_0391c2b8(*(long *)(unaff_x19 + 0xa8),0), lVar9 == 0)) goto cp__a;
      FUN_0391fb70(lVar9,uVar4,0);
      lVar9 = FUN_038f1768(0);
      if ((lVar9 == 0) || (lVar9 = FUN_0391c27c(lVar9,0), lVar9 == 0)) goto cp__a;
      fVar18 = (float)FUN_03928d34(lVar9,0);
      lVar9 = *unaff_x22;
      fVar15 = fVar13;
      fVar11 = fVar19;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_03923030(lVar9,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03923030(uVar8,0);
        if ((uVar6 & 1) == 0) {
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar18 = fVar10 - fVar18;
          fVar13 = fVar20 - fVar13;
          fVar19 = fVar16 - fVar19;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar15 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar13 * fVar13);
          if (fVar15 <= DAT_00b55370) {
            if (*(char *)(unaff_x27 + 599) == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              *(undefined1 *)(unaff_x27 + 599) = 1;
            }
            pfVar7 = *(float **)(*unaff_x20 + 0xb8);
            fVar11 = *pfVar7;
            fVar14 = pfVar7[1];
            fVar17 = pfVar7[2];
          }
          else {
            fVar11 = fVar18 / fVar15;
            fVar14 = fVar13 / fVar15;
            fVar17 = fVar19 / fVar15;
          }
          lVar9 = *(long *)(unaff_x19 + 0xa8);
          if (lVar9 == 0) goto cp__a;
          fVar14 = fVar14 * in_stack_00000028._4_4_;
          fVar17 = fVar17 * in_stack_00000028._4_4_;
          fVar10 = fVar10 - fVar11 * in_stack_00000028._4_4_;
          fVar20 = fVar20 - fVar14;
          fVar16 = fVar16 - fVar17;
          fVar12 = (float)FUN_03928d34(lVar9,0);
          fVar11 = *(float *)(unaff_x19 + 0x38);
          if (*(float *)(unaff_x19 + 0x38) < 0.0) {
            fVar11 = 0.0;
          }
          FUN_03928dd4(fVar10 + (fVar12 - fVar10) * fVar11,fVar20 + (fVar14 - fVar20) * fVar11,
                       fVar16 + (fVar17 - fVar16) * fVar11,lVar9,0);
          lVar9 = *(long *)(unaff_x19 + 0xa8);
          FUN_039148b4(fVar18,fVar13,fVar19,0);
          if (lVar9 == 0) goto cp__a;
          FUN_03928f54(lVar9,0);
          lVar9 = *(long *)(unaff_x19 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar8 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
          fVar19 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar9 == 0) goto cp__a;
          fVar19 = fVar15 * fVar19;
          fVar20 = (float)uVar8 * fVar15;
          fVar15 = (float)((ulong)uVar8 >> 0x20) * fVar15;
          fVar15 = fVar15 + fVar15;
          FUN_039293f4(CONCAT44(fVar15,fVar20 + fVar20),fVar15,fVar19 + fVar19,lVar9,0);
          puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*unaff_x22 == 0) goto cp__a;
          uVar8 = FUN_01ed712c(*unaff_x22,
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
          uVar6 = FUN_03923030(uVar8,0);
          if ((uVar6 & 1) != 0) {
            if (*unaff_x22 == 0) goto cp__a;
            FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar2);
            FUN_01be77ec();
          }
          goto LAB_01be6028;
        }
      }
      uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_03923030(uVar8,0);
      if ((uVar6 & 1) != 0) {
        lVar9 = FUN_038f1768(0);
        if ((lVar9 == 0) || (lVar9 = FUN_0391c27c(lVar9,0), lVar9 == 0)) goto cp__a;
        fVar19 = (float)FUN_03928d34(lVar9,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar19 = fVar19 - fStack000000000000004c;
        fVar15 = fVar15 - fStack0000000000000048;
        fVar11 = fVar11 - unaff_s10;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar20 = SQRT(fVar11 * fVar11 + fVar19 * fVar19 + fVar15 * fVar15);
        if (fVar20 <= DAT_00b55370) {
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x27 + 599) = 1;
          }
          pfVar7 = *(float **)(*unaff_x20 + 0xb8);
          fVar19 = *pfVar7;
          fVar15 = pfVar7[1];
          fVar11 = pfVar7[2];
        }
        else {
          fVar19 = fVar19 / fVar20;
          fVar15 = fVar15 / fVar20;
          fVar11 = fVar11 / fVar20;
        }
        lVar9 = *(long *)(unaff_x19 + 0xa8);
        if (lVar9 == 0) goto cp__a;
        fVar15 = fVar15 * DAT_00b55290;
        fVar11 = fVar11 * DAT_00b55290;
        fVar19 = fVar19 * DAT_00b55290;
        fVar10 = unaff_s10 + fVar11;
        fVar20 = fStack000000000000004c;
        fVar16 = (float)FUN_03928d34(fVar19,fStack000000000000004c,fVar11,lVar9,0);
        fVar13 = *(float *)(unaff_x19 + 0x38);
        if (fVar13 < 0.0) {
          fVar13 = 0.0;
        }
        fVar20 = fVar20 + ((fStack0000000000000048 + fVar15) - fVar20) * fVar13;
        fVar11 = fVar11 + (fVar10 - fVar11) * fVar13;
        FUN_03928dd4(fVar16 + ((fStack000000000000004c + fVar19) - fVar16) * fVar13,fVar20,fVar11,
                     lVar9,0);
        lVar9 = *(long *)(unaff_x19 + 0xa8);
        if (lVar9 == 0) goto cp__a;
        fVar13 = (float)FUN_03928d34(lVar9,0);
        fVar19 = fVar20;
        fVar16 = fVar11;
        lVar5 = FUN_038f1768(0);
        if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
        fVar15 = (float)FUN_03928d34(lVar5,0);
        FUN_039148b4(fVar13 - fVar15,fVar20 - fVar19,fVar11 - fVar16,0);
        FUN_03928f54(lVar9,0);
        lVar9 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar9 == 0) goto cp__a;
        lVar5 = *(long *)(*unaff_x20 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                     *(undefined4 *)(lVar5 + 0x14),lVar9,0);
        puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
        uVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar6 = FUN_03923030(uVar8,0);
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar2), lVar9 == 0))
          goto cp__a;
          bVar3 = *(char *)(lVar9 + 0x34) != '\0';
        }
      }
    }
  }
LAB_01be6028:
  uVar8 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar8,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar9 = *(long *)(*unaff_x20 + 0xb8);
    fVar19 = fStack0000000000000034;
    fVar20 = fStack0000000000000038;
    fVar16 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 *(float *)(lVar9 + 0x48) * in_stack_00000028._4_4_,
                                 *(float *)(lVar9 + 0x4c) * in_stack_00000028._4_4_,
                                 *(float *)(lVar9 + 0x50) * in_stack_00000028._4_4_,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar9 = *(long *)(*unaff_x20 + 0xb8);
    fVar13 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 in_stack_00000040 * *(float *)(lVar9 + 0x48),
                                 in_stack_00000040 * *(float *)(lVar9 + 0x4c),
                                 in_stack_00000040 * *(float *)(lVar9 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar13;
    *(float *)(unaff_x19 + 0x94) = fStack0000000000000048 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = unaff_s10 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar16,fStack0000000000000048 + fVar19,
                   unaff_s10 + fVar20,*(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),bVar3,0);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_03923030(uVar8,0);
          puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar6 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar8 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
            uVar6 = FUN_03923030(uVar8,0);
            if ((uVar6 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar2),
                 lVar9 == 0)) goto cp__a;
              lVar9 = *(long *)(lVar9 + 0x58);
              if (lVar9 != 0) {
                (**(code **)(lVar9 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar9 + 0x40),
                           *(undefined8 *)(lVar9 + 0x28));
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


