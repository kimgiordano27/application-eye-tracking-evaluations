/*
FUNCTION_NAME: cn$$GetHashCode
ENTRY_POINT: 01be6450
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01be6708) */

void cn__GetHashCode(void)

{
  undefined *puVar1;
  ulong uVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long lVar4;
  long unaff_x27;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
                    /* catch() { ... } // from try @ 01be6420 with catch @ 01be6454 */
  *(undefined1 *)(unaff_x23 + 0x25d) = 1;
  puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  fVar10 = unaff_s13 - unaff_s11;
  in_stack_00000028._4_4_ = unaff_s12 - in_stack_00000028._4_4_;
  fVar13 = fStack0000000000000044 - unaff_s14;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar8 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + in_stack_00000028._4_4_ * in_stack_00000028._4_4_
              );
  if (fVar8 <= DAT_00b55370) {
    if (*(char *)(unaff_x27 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x27 + 599) = 1;
    }
    pfVar3 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar5 = fVar10 / fVar8;
    fVar7 = in_stack_00000028._4_4_ / fVar8;
    fVar9 = fVar13 / fVar8;
  }
  lVar4 = *(long *)(unaff_x19 + 0xa8);
  fStack0000000000000024 = in_stack_00000028._4_4_;
  if (lVar4 != 0) {
    fVar7 = fVar7 * unaff_s8;
    fVar9 = fVar9 * unaff_s8;
    fVar11 = unaff_s13 - fVar5 * unaff_s8;
    fVar14 = unaff_s12 - fVar7;
    fStack0000000000000044 = fStack0000000000000044 - fVar9;
    fVar6 = (float)FUN_03928d34(lVar4,0);
    fVar5 = *(float *)(unaff_x19 + 0x38);
    if (*(float *)(unaff_x19 + 0x38) < 0.0) {
      fVar5 = 0.0;
    }
    FUN_03928dd4(fVar11 + (fVar6 - fVar11) * fVar5,fVar14 + (fVar7 - fVar14) * fVar5,
                 fStack0000000000000044 + (fVar9 - fStack0000000000000044) * fVar5,lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0xa8);
    FUN_039148b4(fVar10,fStack0000000000000024,fVar13,0);
    if (lVar4 != 0) {
      FUN_03928f54(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0xa8);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      uVar12 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
      fVar10 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar4 != 0) {
        fVar10 = fVar8 * fVar10;
        fVar13 = (float)uVar12 * fVar8;
        fVar8 = (float)((ulong)uVar12 >> 0x20) * fVar8;
        fVar8 = fVar8 + fVar8;
        FUN_039293f4(CONCAT44(fVar8,fVar13 + fVar13),fVar8,fVar10 + fVar10,lVar4,0);
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*unaff_x22 != 0) {
          uVar12 = FUN_01ed712c(*unaff_x22,
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
          uVar2 = FUN_03923030(uVar12,0);
          if ((uVar2 & 1) != 0) {
            if (*unaff_x22 == 0) goto cp__a;
            FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
            FUN_01be77ec();
          }
          uVar12 = *(undefined8 *)(unaff_x19 + 0xa0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(uVar12,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(long *)(unaff_x19 + 0xa0) != 0) {
            FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
            if (DAT_03fed260 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed260 = '\x01';
            }
            lVar4 = *(long *)(*unaff_x20 + 0xb8);
            fVar10 = fStack0000000000000034;
            fVar13 = fStack0000000000000038;
            fVar8 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                        fStack0000000000000038,uStack000000000000003c,
                                        *(float *)(lVar4 + 0x48) * unaff_s8,
                                        *(float *)(lVar4 + 0x4c) * unaff_s8,
                                        *(float *)(lVar4 + 0x50) * unaff_s8,0);
            if (DAT_03fed260 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed260 = '\x01';
            }
            lVar4 = *(long *)(*unaff_x20 + 0xb8);
            fVar5 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                        fStack0000000000000038,uStack000000000000003c,
                                        fStack0000000000000040 * *(float *)(lVar4 + 0x48),
                                        fStack0000000000000040 * *(float *)(lVar4 + 0x4c),
                                        fStack0000000000000040 * *(float *)(lVar4 + 0x50),0);
            *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar5;
            *(float *)(unaff_x19 + 0x94) = fStack0000000000000048 + fStack0000000000000034;
            *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
            if (*(long *)(unaff_x19 + 0xa0) != 0) {
              FUN_038fcfa4(fStack000000000000004c + fVar8,fStack0000000000000048 + fVar10,
                           unaff_s15 + fVar13,*(long *)(unaff_x19 + 0xa0),0,0);
              if (*(long *)(unaff_x19 + 0xa0) != 0) {
                FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                             *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
                if (*(long *)(unaff_x19 + 0xa0) != 0) {
                  FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
                  uVar12 = *(undefined8 *)(unaff_x19 + 0x30);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar2 = FUN_03923030(uVar12,0);
                  puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
                  if ((uVar2 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
                    uVar12 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
                    uVar2 = FUN_03923030(uVar12,0);
                    if ((uVar2 & 1) != 0) {
                      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                         (lVar4 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                         lVar4 == 0)) goto cp__a;
                      lVar4 = *(long *)(lVar4 + 0x58);
                      if (lVar4 != 0) {
                        (**(code **)(lVar4 + 0x18))
                                  (*(undefined4 *)(unaff_x19 + 0x90),
                                   *(undefined4 *)(unaff_x19 + 0x94),
                                   *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar4 + 0x40),
                                   *(undefined8 *)(lVar4 + 0x28));
                      }
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


