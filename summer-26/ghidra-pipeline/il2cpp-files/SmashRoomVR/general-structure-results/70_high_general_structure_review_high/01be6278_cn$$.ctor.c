/*
FUNCTION_NAME: cn$$.ctor
ENTRY_POINT: 01be6278
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

void cn___ctor(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long unaff_x27;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  *unaff_x22 = 0;
  thunk_FUN_01b4f09c(param_1,0);
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  fVar14 = DAT_00b55428;
  fVar17 = unaff_s15;
  fVar15 = unaff_s14;
  lVar5 = FUN_03958084(fStack000000000000004c,0);
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar21 = DAT_00b55370;
  if (lVar5 == 0) goto cp__a;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    uVar1 = uVar4;
    do {
      fVar17 = unaff_s15;
      fVar19 = unaff_s14;
      if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar10 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar10 == 0) goto cp__a;
      lVar6 = FUN_0391c2b8(lVar10,0);
      *unaff_x22 = lVar6;
      thunk_FUN_01b4f09c();
      fVar12 = (float)FUN_0395b4d8(fStack000000000000004c,lVar10,0);
      fVar15 = fVar19;
      fVar16 = fVar17;
      lVar10 = FUN_038f1768(0);
      if ((lVar10 == 0) || (lVar10 = FUN_0391c27c(lVar10,0), lVar10 == 0)) goto cp__a;
      fVar13 = (float)FUN_03928d34(lVar10,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(puVar2);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar13 = fVar13 - fVar12;
      fVar15 = fVar15 - fVar19;
      fVar16 = fVar16 - fVar17;
      fVar18 = SQRT(fVar16 * fVar16 + fVar13 * fVar13 + fVar15 * fVar15);
      if (fVar18 <= fVar21) {
        if (*(char *)(unaff_x27 + 599) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x27 + 599) = 1;
        }
        pfVar8 = *(float **)(*unaff_x20 + 0xb8);
        fVar13 = *pfVar8;
        fVar15 = pfVar8[1];
        fVar16 = pfVar8[2];
      }
      else {
        fVar13 = fVar13 / fVar18;
        fVar15 = fVar15 / fVar18;
        fVar16 = fVar16 / fVar18;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar11 = uVar11 + 1;
      unaff_s14 = fStack0000000000000048;
      unaff_s15 = unaff_s10;
    } while ((int)uVar11 < (int)uVar1);
    fVar15 = fVar15 * fVar14;
    fVar17 = fVar17 + fVar16 * fVar14;
    unaff_s12 = fVar19 + fVar15;
    unaff_s13 = fVar12 + fVar13 * fVar14;
    fStack0000000000000044 = fVar17;
    unaff_s14 = fStack0000000000000048;
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 0xa8);
  bVar3 = (int)uVar4 < 1;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03923030(uVar9,0);
  if ((uVar7 & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03923030(uVar9,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *unaff_x22;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(lVar5,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar9,0);
        uVar4 = uVar4 & 1;
      }
      else {
        uVar4 = 1;
      }
      if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
         (lVar5 = FUN_0391c2b8(*(long *)(unaff_x19 + 0xa8),0), lVar5 == 0)) goto cp__a;
      FUN_0391fb70(lVar5,uVar4,0);
      lVar5 = FUN_038f1768(0);
      if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
      fVar16 = (float)FUN_03928d34(lVar5,0);
      lVar5 = *unaff_x22;
      fVar21 = fVar15;
      fVar19 = fVar17;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(lVar5,0);
      if ((uVar7 & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_03923030(uVar9,0);
        if ((uVar7 & 1) == 0) {
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar16 = unaff_s13 - fVar16;
          fVar15 = unaff_s12 - fVar15;
          fVar17 = fStack0000000000000044 - fVar17;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar21 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15);
          if (fVar21 <= DAT_00b55370) {
            if (*(char *)(unaff_x27 + 599) == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              *(undefined1 *)(unaff_x27 + 599) = 1;
            }
            pfVar8 = *(float **)(*unaff_x20 + 0xb8);
            fVar19 = *pfVar8;
            fVar12 = pfVar8[1];
            fVar13 = pfVar8[2];
          }
          else {
            fVar19 = fVar16 / fVar21;
            fVar12 = fVar15 / fVar21;
            fVar13 = fVar17 / fVar21;
          }
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          if (lVar5 == 0) goto cp__a;
          fVar12 = fVar12 * fVar14;
          fVar13 = fVar13 * fVar14;
          fVar20 = unaff_s13 - fVar19 * fVar14;
          fVar22 = unaff_s12 - fVar12;
          fStack0000000000000044 = fStack0000000000000044 - fVar13;
          fVar18 = (float)FUN_03928d34(lVar5,0);
          fVar19 = *(float *)(unaff_x19 + 0x38);
          if (*(float *)(unaff_x19 + 0x38) < 0.0) {
            fVar19 = 0.0;
          }
          FUN_03928dd4(fVar20 + (fVar18 - fVar20) * fVar19,fVar22 + (fVar12 - fVar22) * fVar19,
                       fStack0000000000000044 + (fVar13 - fStack0000000000000044) * fVar19,lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          FUN_039148b4(fVar16,fVar15,fVar17,0);
          if (lVar5 == 0) goto cp__a;
          FUN_03928f54(lVar5,0);
          lVar5 = *(long *)(unaff_x19 + 0xa8);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uVar9 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
          fVar15 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
          if (DAT_03fed25c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25c = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar5 == 0) goto cp__a;
          fVar15 = fVar21 * fVar15;
          fVar17 = (float)uVar9 * fVar21;
          fVar21 = (float)((ulong)uVar9 >> 0x20) * fVar21;
          fVar21 = fVar21 + fVar21;
          FUN_039293f4(CONCAT44(fVar21,fVar17 + fVar17),fVar21,fVar15 + fVar15,lVar5,0);
          puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*unaff_x22 == 0) goto cp__a;
          uVar9 = FUN_01ed712c(*unaff_x22,
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
          uVar7 = FUN_03923030(uVar9,0);
          unaff_s14 = fStack0000000000000048;
          if ((uVar7 & 1) != 0) {
            if (*unaff_x22 == 0) goto cp__a;
            FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar2);
            FUN_01be77ec();
          }
          goto LAB_01be6028;
        }
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_03923030(uVar9,0);
      unaff_s14 = fStack0000000000000048;
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_038f1768(0);
        if ((lVar5 == 0) || (lVar5 = FUN_0391c27c(lVar5,0), lVar5 == 0)) goto cp__a;
        fVar15 = (float)FUN_03928d34(lVar5,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar15 = fVar15 - fStack000000000000004c;
        fVar21 = fVar21 - fStack0000000000000048;
        fVar19 = fVar19 - unaff_s15;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar17 = SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar21 * fVar21);
        if (fVar17 <= DAT_00b55370) {
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x27 + 599) = 1;
          }
          pfVar8 = *(float **)(*unaff_x20 + 0xb8);
          fVar15 = *pfVar8;
          fVar21 = pfVar8[1];
          fVar19 = pfVar8[2];
        }
        else {
          fVar15 = fVar15 / fVar17;
          fVar21 = fVar21 / fVar17;
          fVar19 = fVar19 / fVar17;
        }
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (lVar5 == 0) goto cp__a;
        fVar21 = fVar21 * DAT_00b55290;
        fVar19 = fVar19 * DAT_00b55290;
        fVar15 = fVar15 * DAT_00b55290;
        fVar13 = unaff_s15 + fVar19;
        fVar17 = fStack000000000000004c;
        fVar16 = (float)FUN_03928d34(fVar15,fStack000000000000004c,fVar19,lVar5,0);
        fVar12 = *(float *)(unaff_x19 + 0x38);
        if (fVar12 < 0.0) {
          fVar12 = 0.0;
        }
        fVar17 = fVar17 + ((fStack0000000000000048 + fVar21) - fVar17) * fVar12;
        fVar19 = fVar19 + (fVar13 - fVar19) * fVar12;
        FUN_03928dd4(fVar16 + ((fStack000000000000004c + fVar15) - fVar16) * fVar12,fVar17,fVar19,
                     lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (lVar5 == 0) goto cp__a;
        fVar16 = (float)FUN_03928d34(lVar5,0);
        fVar21 = fVar17;
        fVar15 = fVar19;
        lVar10 = FUN_038f1768(0);
        if ((lVar10 == 0) || (lVar10 = FUN_0391c27c(lVar10,0), lVar10 == 0)) goto cp__a;
        fVar12 = (float)FUN_03928d34(lVar10,0);
        FUN_039148b4(fVar16 - fVar12,fVar17 - fVar21,fVar19 - fVar15,0);
        FUN_03928f54(lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar5 == 0) goto cp__a;
        lVar10 = *(long *)(*unaff_x20 + 0xb8);
        FUN_039293f4(*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                     *(undefined4 *)(lVar10 + 0x14),lVar5,0);
        puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
        uVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar7 = FUN_03923030(uVar9,0);
        if ((uVar7 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar2), lVar5 == 0))
          goto cp__a;
          bVar3 = *(char *)(lVar5 + 0x34) != '\0';
        }
      }
    }
  }
LAB_01be6028:
  uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03923030(uVar9,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *(long *)(*unaff_x20 + 0xb8);
    fVar21 = fStack0000000000000034;
    fVar15 = fStack0000000000000038;
    fVar14 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 *(float *)(lVar5 + 0x48) * fVar14,*(float *)(lVar5 + 0x4c) * fVar14
                                 ,*(float *)(lVar5 + 0x50) * fVar14,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar5 = *(long *)(*unaff_x20 + 0xb8);
    fVar17 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,uStack000000000000003c,
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x48),
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x4c),
                                 fStack0000000000000040 * *(float *)(lVar5 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar17;
    *(float *)(unaff_x19 + 0x94) = unaff_s14 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar14,unaff_s14 + fVar21,unaff_s15 + fVar15,
                   *(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),bVar3,0);
          uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_03923030(uVar9,0);
          puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar7 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar9 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
            uVar7 = FUN_03923030(uVar9,0);
            if ((uVar7 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar2),
                 lVar5 == 0)) goto cp__a;
              lVar5 = *(long *)(lVar5 + 0x58);
              if (lVar5 != 0) {
                (**(code **)(lVar5 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar5 + 0x40),
                           *(undefined8 *)(lVar5 + 0x28));
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


