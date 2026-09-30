/*
FUNCTION_NAME: cn$$.ctor
ENTRY_POINT: 01be634c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;telemetry_or_network_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x01be6540) */
/* WARNING: Removing unreachable block (ram,0x01be6708) */

void cn___ctor(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  undefined8 uVar6;
  long unaff_x27;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  float unaff_s9;
  float fVar15;
  ulong unaff_d10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  uVar2 = FUN_03923030(param_4,0);
  if ((uVar2 & 1) == 0) {
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    fVar7 = unaff_s13 - unaff_s11;
    in_stack_00000028._4_4_ = unaff_s12 - in_stack_00000028._4_4_;
    fVar10 = fStack0000000000000044 - unaff_s14;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar8 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + in_stack_00000028._4_4_ * in_stack_00000028._4_4_
                );
    if (fVar8 <= DAT_00b55370) {
      if (*(char *)(unaff_x27 + 599) == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        *(undefined1 *)(unaff_x27 + 599) = 1;
      }
      pfVar5 = *(float **)(*unaff_x20 + 0xb8);
      fVar12 = *pfVar5;
      fVar13 = pfVar5[1];
      fVar11 = pfVar5[2];
    }
    else {
      fVar12 = fVar7 / fVar8;
      fVar13 = in_stack_00000028._4_4_ / fVar8;
      fVar11 = fVar10 / fVar8;
    }
    lVar3 = *(long *)(unaff_x19 + 0xa8);
    if (lVar3 == 0) goto cp__a;
    fVar13 = fVar13 * unaff_s8;
    fVar11 = fVar11 * unaff_s8;
    fVar14 = unaff_s13 - fVar12 * unaff_s8;
    fVar15 = unaff_s12 - fVar13;
    fStack0000000000000044 = fStack0000000000000044 - fVar11;
    fVar9 = (float)FUN_03928d34(lVar3,0);
    fVar12 = *(float *)(unaff_x19 + 0x38);
    if (*(float *)(unaff_x19 + 0x38) < 0.0) {
      fVar12 = 0.0;
    }
    FUN_03928dd4(fVar14 + (fVar9 - fVar14) * fVar12,fVar15 + (fVar13 - fVar15) * fVar12,
                 fStack0000000000000044 + (fVar11 - fStack0000000000000044) * fVar12,lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0xa8);
    FUN_039148b4(fVar7,in_stack_00000028._4_4_,fVar10,0);
    if (lVar3 == 0) goto cp__a;
    FUN_03928f54(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0xa8);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
    fVar7 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (lVar3 == 0) goto cp__a;
    fVar7 = fVar8 * fVar7;
    fVar10 = (float)uVar6 * fVar8;
    fVar8 = (float)((ulong)uVar6 >> 0x20) * fVar8;
    fVar8 = fVar8 + fVar8;
    FUN_039293f4(CONCAT44(fVar8,fVar10 + fVar10),fVar8,fVar7 + fVar7,lVar3,0);
    puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
    if (*unaff_x22 == 0) goto cp__a;
    uVar6 = FUN_01ed712c(*unaff_x22,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03923030(uVar6,0);
    unaff_d10 = (ulong)uStack000000000000003c;
    if ((uVar2 & 1) != 0) {
      if (*unaff_x22 == 0) goto cp__a;
      FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
      FUN_01be77ec();
    }
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar6,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_038f1768(0);
      if ((lVar3 == 0) || (lVar3 = FUN_0391c27c(lVar3,0), lVar3 == 0)) goto cp__a;
      fVar7 = (float)FUN_03928d34(lVar3,0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      fVar7 = fVar7 - unaff_s9;
      param_2 = param_2 - fStack0000000000000048;
      param_3 = param_3 - unaff_s15;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar10 = SQRT(param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2);
      if (fVar10 <= DAT_00b55370) {
        if (*(char *)(unaff_x27 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x27 + 599) = 1;
        }
        pfVar5 = *(float **)(*unaff_x20 + 0xb8);
        fVar7 = *pfVar5;
        param_2 = pfVar5[1];
        param_3 = pfVar5[2];
      }
      else {
        fVar7 = fVar7 / fVar10;
        param_2 = param_2 / fVar10;
        param_3 = param_3 / fVar10;
      }
      lVar3 = *(long *)(unaff_x19 + 0xa8);
      if (lVar3 == 0) goto cp__a;
      param_2 = param_2 * DAT_00b55290;
      param_3 = param_3 * DAT_00b55290;
      fVar7 = fVar7 * DAT_00b55290;
      fVar13 = unaff_s15 + param_3;
      fVar10 = fStack000000000000004c;
      fVar8 = (float)FUN_03928d34(fVar7,fStack000000000000004c,param_3,lVar3,0);
      fVar12 = *(float *)(unaff_x19 + 0x38);
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      fVar10 = fVar10 + ((fStack0000000000000048 + param_2) - fVar10) * fVar12;
      param_3 = param_3 + (fVar13 - param_3) * fVar12;
      FUN_03928dd4(fVar8 + ((fStack000000000000004c + fVar7) - fVar8) * fVar12,fVar10,param_3,lVar3,
                   0);
      lVar3 = *(long *)(unaff_x19 + 0xa8);
      if (lVar3 == 0) goto cp__a;
      fVar12 = (float)FUN_03928d34(lVar3,0);
      fVar7 = fVar10;
      fVar8 = param_3;
      lVar4 = FUN_038f1768(0);
      if (lVar4 == 0) goto cp__a;
      lVar4 = FUN_0391c27c(lVar4,0);
      unaff_d10 = (ulong)uStack000000000000003c;
      if (lVar4 == 0) goto cp__a;
      fVar13 = (float)FUN_03928d34(lVar4,0);
      FUN_039148b4(fVar12 - fVar13,fVar10 - fVar7,param_3 - fVar8,0);
      FUN_03928f54(lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0xa8);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      if (lVar3 == 0) goto cp__a;
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar3,0);
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
      uVar2 = FUN_03923030(uVar6,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
           (lVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1), lVar3 == 0))
        goto cp__a;
        unaff_w21 = (uint)(*(char *)(lVar3 + 0x34) != '\0');
      }
    }
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar3 = *(long *)(*unaff_x20 + 0xb8);
    fVar7 = fStack0000000000000034;
    fVar10 = fStack0000000000000038;
    fVar8 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,fStack0000000000000038
                                ,unaff_d10,*(float *)(lVar3 + 0x48) * unaff_s8,
                                *(float *)(lVar3 + 0x4c) * unaff_s8,
                                *(float *)(lVar3 + 0x50) * unaff_s8,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar3 = *(long *)(*unaff_x20 + 0xb8);
    fVar12 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,unaff_d10,
                                 fStack0000000000000040 * *(float *)(lVar3 + 0x48),
                                 fStack0000000000000040 * *(float *)(lVar3 + 0x4c),
                                 fStack0000000000000040 * *(float *)(lVar3 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar12;
    *(float *)(unaff_x19 + 0x94) = fStack0000000000000048 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar8,fStack0000000000000048 + fVar7,unaff_s15 + fVar10,
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
          uVar2 = FUN_03923030(uVar6,0);
          puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar2 & 1) != 0) {
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
            uVar2 = FUN_03923030(uVar6,0);
            if ((uVar2 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                 lVar3 == 0)) goto cp__a;
              lVar3 = *(long *)(lVar3 + 0x58);
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))
                          (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar3 + 0x40),
                           *(undefined8 *)(lVar3 + 0x28));
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


