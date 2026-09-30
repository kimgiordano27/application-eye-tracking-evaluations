/*
FUNCTION_NAME: cm$$Equals
ENTRY_POINT: 01be5fc8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x01be6540) */
/* WARNING: Removing unreachable block (ram,0x01be6708) */

void cm__Equals(long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long unaff_x27;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float fVar15;
  ulong unaff_d10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  uVar6 = *(undefined8 *)(unaff_x19 + 0xb8);
  if (*(int *)(**(long **)(param_1 + 0xcf8) + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar6,0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *unaff_x22;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(lVar7,0);
    if ((uVar3 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(uVar6,0);
      uVar2 = uVar2 & 1;
    }
    else {
      uVar2 = 1;
    }
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (lVar7 = FUN_0391c2b8(*(long *)(unaff_x19 + 0xa8),0), lVar7 == 0)) goto cp__a;
    FUN_0391fb70(lVar7,uVar2,0);
    lVar7 = FUN_038f1768(0);
    if ((lVar7 == 0) || (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) goto cp__a;
    fVar8 = (float)FUN_03928d34(lVar7,0);
    lVar7 = *unaff_x22;
    fVar14 = param_3;
    fVar12 = param_4;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(lVar7,0);
    unaff_s14 = fStack0000000000000048;
    if ((uVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar6,0);
      if ((uVar3 & 1) == 0) {
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
        fVar8 = unaff_s13 - fVar8;
        param_3 = unaff_s12 - param_3;
        param_4 = fStack0000000000000044 - param_4;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar14 = SQRT(param_4 * param_4 + fVar8 * fVar8 + param_3 * param_3);
        if (fVar14 <= DAT_00b55370) {
          if (*(char *)(unaff_x27 + 599) == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            *(undefined1 *)(unaff_x27 + 599) = 1;
          }
          pfVar5 = *(float **)(*unaff_x20 + 0xb8);
          fVar12 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar9 = pfVar5[2];
        }
        else {
          fVar12 = fVar8 / fVar14;
          fVar10 = param_3 / fVar14;
          fVar9 = param_4 / fVar14;
        }
        lVar7 = *(long *)(unaff_x19 + 0xa8);
        if (lVar7 == 0) goto cp__a;
        fVar10 = fVar10 * unaff_s8;
        fVar9 = fVar9 * unaff_s8;
        fVar13 = unaff_s13 - fVar12 * unaff_s8;
        fVar15 = unaff_s12 - fVar10;
        fStack0000000000000044 = fStack0000000000000044 - fVar9;
        fVar11 = (float)FUN_03928d34(lVar7,0);
        fVar12 = *(float *)(unaff_x19 + 0x38);
        if (*(float *)(unaff_x19 + 0x38) < 0.0) {
          fVar12 = 0.0;
        }
        FUN_03928dd4(fVar13 + (fVar11 - fVar13) * fVar12,fVar15 + (fVar10 - fVar15) * fVar12,
                     fStack0000000000000044 + (fVar9 - fStack0000000000000044) * fVar12,lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0xa8);
        FUN_039148b4(fVar8,param_3,param_4,0);
        if (lVar7 == 0) goto cp__a;
        FUN_03928f54(lVar7,0);
        lVar7 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
        fVar12 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
        if (DAT_03fed25c == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25c = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar7 == 0) goto cp__a;
        fVar12 = fVar14 * fVar12;
        fVar8 = (float)uVar6 * fVar14;
        fVar14 = (float)((ulong)uVar6 >> 0x20) * fVar14;
        fVar14 = fVar14 + fVar14;
        FUN_039293f4(CONCAT44(fVar14,fVar8 + fVar8),fVar14,fVar12 + fVar12,lVar7,0);
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*unaff_x22 == 0) goto cp__a;
        uVar6 = FUN_01ed712c(*unaff_x22,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar3 = FUN_03923030(uVar6,0);
        unaff_d10 = (ulong)uStack000000000000003c;
        if ((uVar3 & 1) != 0) {
          if (*unaff_x22 == 0) goto cp__a;
          FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
          FUN_01be77ec();
        }
        goto LAB_01be6028;
      }
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar6,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = FUN_038f1768(0);
      if ((lVar7 == 0) || (lVar7 = FUN_0391c27c(lVar7,0), lVar7 == 0)) goto cp__a;
      fVar8 = (float)FUN_03928d34(lVar7,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      fVar8 = fVar8 - unaff_s9;
      fVar14 = fVar14 - fStack0000000000000048;
      fVar12 = fVar12 - unaff_s15;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar10 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar14 * fVar14);
      if (fVar10 <= DAT_00b55370) {
        if (*(char *)(unaff_x27 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x27 + 599) = 1;
        }
        pfVar5 = *(float **)(*unaff_x20 + 0xb8);
        fVar8 = *pfVar5;
        fVar14 = pfVar5[1];
        fVar12 = pfVar5[2];
      }
      else {
        fVar8 = fVar8 / fVar10;
        fVar14 = fVar14 / fVar10;
        fVar12 = fVar12 / fVar10;
      }
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto cp__a;
      fVar14 = fVar14 * DAT_00b55290;
      fVar12 = fVar12 * DAT_00b55290;
      fVar8 = fVar8 * DAT_00b55290;
      fVar13 = unaff_s15 + fVar12;
      fVar10 = fStack000000000000004c;
      fVar9 = (float)FUN_03928d34(fVar8,fStack000000000000004c,fVar12,lVar7,0);
      fVar11 = *(float *)(unaff_x19 + 0x38);
      if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      fVar10 = fVar10 + ((fStack0000000000000048 + fVar14) - fVar10) * fVar11;
      fVar12 = fVar12 + (fVar13 - fVar12) * fVar11;
      FUN_03928dd4(fVar9 + ((fStack000000000000004c + fVar8) - fVar9) * fVar11,fVar10,fVar12,lVar7,0
                  );
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (lVar7 == 0) goto cp__a;
      fVar9 = (float)FUN_03928d34(lVar7,0);
      fVar14 = fVar10;
      fVar8 = fVar12;
      lVar4 = FUN_038f1768(0);
      if (lVar4 == 0) goto cp__a;
      lVar4 = FUN_0391c27c(lVar4,0);
      unaff_d10 = (ulong)uStack000000000000003c;
      if (lVar4 == 0) goto cp__a;
      fVar11 = (float)FUN_03928d34(lVar4,0);
      FUN_039148b4(fVar9 - fVar11,fVar10 - fVar14,fVar12 - fVar8,0);
      FUN_03928f54(lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0xa8);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      if (lVar7 == 0) goto cp__a;
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar7,0);
      puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
      uVar6 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                           *(undefined8 *)
                            Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_03923030(uVar6,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
           (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1), lVar7 == 0))
        goto cp__a;
        unaff_w21 = (uint)(*(char *)(lVar7 + 0x34) != '\0');
      }
    }
  }
LAB_01be6028:
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar6,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar7 = *(long *)(*unaff_x20 + 0xb8);
    fVar14 = fStack0000000000000034;
    fVar12 = fStack0000000000000038;
    fVar8 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,fStack0000000000000038
                                ,unaff_d10,*(float *)(lVar7 + 0x48) * unaff_s8,
                                *(float *)(lVar7 + 0x4c) * unaff_s8,
                                *(float *)(lVar7 + 0x50) * unaff_s8,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar7 = *(long *)(*unaff_x20 + 0xb8);
    fVar10 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,unaff_d10,
                                 fStack0000000000000040 * *(float *)(lVar7 + 0x48),
                                 fStack0000000000000040 * *(float *)(lVar7 + 0x4c),
                                 fStack0000000000000040 * *(float *)(lVar7 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar10;
    *(float *)(unaff_x19 + 0x94) = unaff_s14 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar8,unaff_s14 + fVar14,unaff_s15 + fVar12,
                   *(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar3 = FUN_03923030(uVar6,0);
          puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar3 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar6 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
            uVar3 = FUN_03923030(uVar6,0);
            if ((uVar3 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar7 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                 lVar7 == 0)) goto cp__a;
              lVar7 = *(long *)(lVar7 + 0x58);
              if (lVar7 != 0) {
                (**(code **)(lVar7 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar7 + 0x40),
                           *(undefined8 *)(lVar7 + 0x28));
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


