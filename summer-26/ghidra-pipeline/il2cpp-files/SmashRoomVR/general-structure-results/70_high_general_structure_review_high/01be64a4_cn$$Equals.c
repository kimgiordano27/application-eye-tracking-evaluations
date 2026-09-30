/*
FUNCTION_NAME: cn$$Equals
ENTRY_POINT: 01be64a4
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

void cn__Equals(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  ulong uVar2;
  float *pfVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long lVar4;
  long *unaff_x24;
  long unaff_x27;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  undefined8 uVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  ulong uStack0000000000000010;
  undefined8 uStack0000000000000018;
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
  
  fVar8 = SQRT(param_3 + param_1);
  uStack0000000000000010 = (ulong)(uint)fVar8;
  uStack0000000000000018 = 0;
  if (fVar8 <= param_2) {
    if (*(char *)(unaff_x27 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x27 + 599) = 1;
    }
    pfVar3 = *(float **)(*unaff_x20 + 0xb8);
    param_4 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    param_4 = param_4 / fVar8;
    fVar6 = unaff_s11 / fVar8;
    fVar8 = unaff_s9 / fVar8;
  }
  lVar4 = *(long *)(unaff_x19 + 0xa8);
  if (lVar4 != 0) {
    fVar6 = fVar6 * unaff_s8;
    fVar8 = fVar8 * unaff_s8;
    fVar9 = unaff_s13 - param_4 * unaff_s8;
    fVar11 = unaff_s12 - fVar6;
    fStack0000000000000044 = fStack0000000000000044 - fVar8;
    fStack0000000000000024 = unaff_s11;
    fVar5 = (float)FUN_03928d34(lVar4,0);
    fVar7 = *(float *)(unaff_x19 + 0x38);
    if (*(float *)(unaff_x19 + 0x38) < 0.0) {
      fVar7 = 0.0;
    }
    FUN_03928dd4(fVar9 + (fVar5 - fVar9) * fVar7,fVar11 + (fVar6 - fVar11) * fVar7,
                 fStack0000000000000044 + (fVar8 - fStack0000000000000044) * fVar7,lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0xa8);
    FUN_039148b4(in_stack_00000028._4_4_,fStack0000000000000024,unaff_s9,0);
    if (lVar4 != 0) {
      FUN_03928f54(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0xa8);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      uVar10 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
      fVar8 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar4 != 0) {
        fVar6 = (float)uStack0000000000000010;
        fVar8 = fVar6 * fVar8;
        fVar7 = (float)uVar10 * fVar6;
        fVar6 = (float)((ulong)uVar10 >> 0x20) * fVar6;
        fVar6 = fVar6 + fVar6;
        FUN_039293f4(CONCAT44(fVar6,fVar7 + fVar7),fVar6,fVar8 + fVar8,lVar4,0);
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if (*unaff_x22 != 0) {
          uVar10 = FUN_01ed712c(*unaff_x22,
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
          uVar2 = FUN_03923030(uVar10,0);
          if ((uVar2 & 1) != 0) {
            if (*unaff_x22 == 0) goto cp__a;
            FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
            FUN_01be77ec();
          }
          uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(uVar10,0);
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
            fVar8 = fStack0000000000000034;
            fVar6 = fStack0000000000000038;
            fVar7 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
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
              FUN_038fcfa4(fStack000000000000004c + fVar7,fStack0000000000000048 + fVar8,
                           unaff_s15 + fVar6,*(long *)(unaff_x19 + 0xa0),0,0);
              if (*(long *)(unaff_x19 + 0xa0) != 0) {
                FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                             *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
                if (*(long *)(unaff_x19 + 0xa0) != 0) {
                  FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
                  uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar2 = FUN_03923030(uVar10,0);
                  puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
                  if ((uVar2 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
                    uVar10 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
                    uVar2 = FUN_03923030(uVar10,0);
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


