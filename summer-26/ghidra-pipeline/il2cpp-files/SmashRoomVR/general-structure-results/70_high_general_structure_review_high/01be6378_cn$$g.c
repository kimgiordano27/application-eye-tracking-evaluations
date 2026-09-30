/*
FUNCTION_NAME: cn$$g
ENTRY_POINT: 01be6378
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

void cn__g(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float *pfVar6;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x27;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  ulong unaff_d10;
  float unaff_s15;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  uVar2 = FUN_03923030(param_4,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_038f1768(0);
    if ((lVar3 == 0) || (lVar3 = FUN_0391c27c(lVar3,0), lVar3 == 0)) goto cp__a;
    fVar7 = (float)FUN_03928d34(lVar3,0);
                    /* try { // try from 01be63b4 to 01ce641f has its CatchHandler @ 01be63b4
                       catch() { ... } // from try @ 01be63b4 with catch @ 01be63b4
                       catch() { ... } // from try @ 01be642c with catch @ 01be63b4 */
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    fVar7 = fVar7 - unaff_s9;
    param_2 = param_2 - fStack0000000000000048;
    param_3 = param_3 - unaff_s15;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar9 = SQRT(param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2);
    if (fVar9 <= DAT_00b55370) {
      if (*(char *)(unaff_x27 + 599) == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        *(undefined1 *)(unaff_x27 + 599) = 1;
      }
      pfVar6 = *(float **)(*unaff_x20 + 0xb8);
      fVar7 = *pfVar6;
      param_2 = pfVar6[1];
      param_3 = pfVar6[2];
    }
    else {
      fVar7 = fVar7 / fVar9;
      param_2 = param_2 / fVar9;
      param_3 = param_3 / fVar9;
    }
    lVar3 = *(long *)(unaff_x19 + 0xa8);
    if (lVar3 == 0) goto cp__a;
    param_2 = param_2 * DAT_00b55290;
    param_3 = param_3 * DAT_00b55290;
    fVar7 = fVar7 * DAT_00b55290;
    fVar11 = unaff_s15 + param_3;
    fVar9 = fStack000000000000004c;
    fVar8 = (float)FUN_03928d34(fVar7,fStack000000000000004c,param_3,lVar3,0);
    fVar10 = *(float *)(unaff_x19 + 0x38);
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    fVar9 = fVar9 + ((fStack0000000000000048 + param_2) - fVar9) * fVar10;
    param_3 = param_3 + (fVar11 - param_3) * fVar10;
    FUN_03928dd4(fVar8 + ((fStack000000000000004c + fVar7) - fVar8) * fVar10,fVar9,param_3,lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0xa8);
    if (lVar3 == 0) goto cp__a;
    fVar10 = (float)FUN_03928d34(lVar3,0);
    fVar7 = fVar9;
    fVar8 = param_3;
    lVar4 = FUN_038f1768(0);
    if ((lVar4 == 0) || (lVar4 = FUN_0391c27c(lVar4,0), lVar4 == 0)) goto cp__a;
    fVar11 = (float)FUN_03928d34(lVar4,0);
    FUN_039148b4(fVar10 - fVar11,fVar9 - fVar7,param_3 - fVar8,0);
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
    uVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                         *(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03923030(uVar5,0);
    unaff_d10 = _fStack0000000000000038 >> 0x20;
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1), lVar3 == 0))
      goto cp__a;
      unaff_w21 = (uint)(*(char *)(lVar3 + 0x34) != '\0');
    }
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar5,0);
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
    fVar9 = fStack0000000000000038;
    fVar8 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,fStack0000000000000038
                                ,unaff_d10,*(float *)(lVar3 + 0x48) * unaff_s8,
                                *(float *)(lVar3 + 0x4c) * unaff_s8,
                                *(float *)(lVar3 + 0x50) * unaff_s8,0);
    if (DAT_03fed260 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed260 = '\x01';
    }
    lVar3 = *(long *)(*unaff_x20 + 0xb8);
    fVar10 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                 fStack0000000000000038,unaff_d10,
                                 in_stack_00000040 * *(float *)(lVar3 + 0x48),
                                 in_stack_00000040 * *(float *)(lVar3 + 0x4c),
                                 in_stack_00000040 * *(float *)(lVar3 + 0x50),0);
    *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar10;
    *(float *)(unaff_x19 + 0x94) = fStack0000000000000048 + fStack0000000000000034;
    *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(fStack000000000000004c + fVar8,fStack0000000000000048 + fVar7,unaff_s15 + fVar9,
                   *(long *)(unaff_x19 + 0xa0),0,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                     *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
          uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(uVar5,0);
          puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
          if ((uVar2 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
            uVar5 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
            uVar2 = FUN_03923030(uVar5,0);
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


