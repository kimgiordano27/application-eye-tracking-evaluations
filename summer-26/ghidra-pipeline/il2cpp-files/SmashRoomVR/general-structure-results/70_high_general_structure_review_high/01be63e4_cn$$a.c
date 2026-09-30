/*
FUNCTION_NAME: cn$$a
ENTRY_POINT: 01be63e4
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


/* WARNING: Removing unreachable block (ram,0x01be6540) */

void cn__a(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long lVar6;
  long unaff_x27;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
  
  fVar13 = unaff_s8 - unaff_s9;
  fVar12 = unaff_s11 - unaff_s14;
  fVar10 = unaff_s12 - unaff_s15;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar8 = SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12);
                    /* try { // try from 01be6420 to 01ce642b has its CatchHandler @ 01be6454 */
  if (fVar8 <= DAT_00b55370) {
    if (*(char *)(unaff_x27 + 599) == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      *(undefined1 *)(unaff_x27 + 599) = 1;
    }
    pfVar5 = *(float **)(*unaff_x20 + 0xb8);
    fVar13 = *pfVar5;
    fVar12 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar13 = fVar13 / fVar8;
                    /* try { // try from 01be642c to 01ce6467 has its CatchHandler @ 01be63b4 */
    fVar12 = fVar12 / fVar8;
    fVar10 = fVar10 / fVar8;
  }
  lVar6 = *(long *)(unaff_x19 + 0xa8);
  if (lVar6 != 0) {
    fVar12 = fVar12 * DAT_00b55290;
    fVar10 = fVar10 * DAT_00b55290;
    fVar13 = fVar13 * DAT_00b55290;
    fVar11 = unaff_s15 + fVar10;
    fVar8 = in_stack_00000048._4_4_;
    fVar7 = (float)FUN_03928d34(fVar13,in_stack_00000048._4_4_,fVar10,lVar6,0);
    fVar9 = *(float *)(unaff_x19 + 0x38);
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    fVar8 = fVar8 + ((unaff_s14 + fVar12) - fVar8) * fVar9;
    fVar10 = fVar10 + (fVar11 - fVar10) * fVar9;
    FUN_03928dd4(fVar7 + ((in_stack_00000048._4_4_ + fVar13) - fVar7) * fVar9,fVar8,fVar10,lVar6,0);
    lVar6 = *(long *)(unaff_x19 + 0xa8);
    if (lVar6 != 0) {
      fVar7 = (float)FUN_03928d34(lVar6,0);
      fVar13 = fVar8;
      fVar12 = fVar10;
      lVar2 = FUN_038f1768(0);
      if ((lVar2 != 0) && (lVar2 = FUN_0391c27c(lVar2,0), lVar2 != 0)) {
        fVar9 = (float)FUN_03928d34(lVar2,0);
        FUN_039148b4(fVar7 - fVar9,fVar8 - fVar13,fVar10 - fVar12,0);
        FUN_03928f54(lVar6,0);
        lVar6 = *(long *)(unaff_x19 + 0xa8);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar6 != 0) {
          lVar2 = *(long *)(*unaff_x20 + 0xb8);
          FUN_039293f4(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                       *(undefined4 *)(lVar2 + 0x14),lVar6,0);
          puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            uVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
            uVar4 = FUN_03923030(uVar3,0);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar6 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                 lVar6 == 0)) goto cp__a;
              unaff_w21 = (uint)(*(char *)(lVar6 + 0x34) != '\0');
            }
            uVar3 = *(undefined8 *)(unaff_x19 + 0xa0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar4 = FUN_03923030(uVar3,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (*(long *)(unaff_x19 + 0xa0) != 0) {
              FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
              if (DAT_03fed260 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed260 = '\x01';
              }
              lVar6 = *(long *)(*unaff_x20 + 0xb8);
              fVar13 = fStack0000000000000034;
              fVar12 = fStack0000000000000038;
              fVar10 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                           fStack0000000000000038,uStack000000000000003c,
                                           *(float *)(lVar6 + 0x48) * unaff_s10,
                                           *(float *)(lVar6 + 0x4c) * unaff_s10,
                                           *(float *)(lVar6 + 0x50) * unaff_s10,0);
              if (DAT_03fed260 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed260 = '\x01';
              }
              lVar6 = *(long *)(*unaff_x20 + 0xb8);
              fVar8 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                          fStack0000000000000038,uStack000000000000003c,
                                          in_stack_00000040 * *(float *)(lVar6 + 0x48),
                                          in_stack_00000040 * *(float *)(lVar6 + 0x4c),
                                          in_stack_00000040 * *(float *)(lVar6 + 0x50),0);
              *(float *)(unaff_x19 + 0x90) = in_stack_00000048._4_4_ + fVar8;
              *(float *)(unaff_x19 + 0x94) = unaff_s14 + fStack0000000000000034;
              *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
              if (*(long *)(unaff_x19 + 0xa0) != 0) {
                FUN_038fcfa4(in_stack_00000048._4_4_ + fVar10,unaff_s14 + fVar13,unaff_s15 + fVar12,
                             *(long *)(unaff_x19 + 0xa0),0,0);
                if (*(long *)(unaff_x19 + 0xa0) != 0) {
                  FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                               *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
                  if (*(long *)(unaff_x19 + 0xa0) != 0) {
                    FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
                    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar4 = FUN_03923030(uVar3,0);
                    puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
                    if ((uVar4 & 1) != 0) {
                      if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
                      uVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
                      uVar4 = FUN_03923030(uVar3,0);
                      if ((uVar4 & 1) != 0) {
                        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                           (lVar6 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                           lVar6 == 0)) goto cp__a;
                        lVar6 = *(long *)(lVar6 + 0x58);
                        if (lVar6 != 0) {
                          (**(code **)(lVar6 + 0x18))
                                    (*(undefined4 *)(unaff_x19 + 0x90),
                                     *(undefined4 *)(unaff_x19 + 0x94),
                                     *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar6 + 0x40)
                                     ,*(undefined8 *)(lVar6 + 0x28));
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
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


