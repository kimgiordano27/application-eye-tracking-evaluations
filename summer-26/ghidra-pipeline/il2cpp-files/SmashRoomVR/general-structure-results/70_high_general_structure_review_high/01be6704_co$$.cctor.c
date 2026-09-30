/*
FUNCTION_NAME: co$$.cctor
ENTRY_POINT: 01be6704
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

void co___cctor(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long lVar3;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  undefined8 uVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (param_4 < 0.0) {
    param_4 = 0.0;
  }
                    /* try { // try from 01be6730 to 01ce6743 has its CatchHandler @ 01be6910 */
  FUN_03928dd4(unaff_s8 + param_1 * param_4,unaff_s9 + (param_2 - unaff_s9) * param_4,
               unaff_s11 + (param_3 - unaff_s11) * param_4);
  lVar3 = *(long *)(unaff_x19 + 0xa8);
                    /* try { // try from 01be6750 to 01ce6763 has its CatchHandler @ 01be690c */
  FUN_039148b4(uStack000000000000002c,in_stack_00000020._4_4_,uStack0000000000000028,0);
  if (lVar3 != 0) {
    FUN_03928f54(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0xa8);
                    /* try { // try from 01be6770 to 01ce67ab has its CatchHandler @ 01be6918 */
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc);
    fVar8 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 0x14);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (lVar3 != 0) {
      fVar8 = in_stack_00000010 * fVar8;
      fVar6 = (float)uVar7 * in_stack_00000010;
      in_stack_00000010 = (float)((ulong)uVar7 >> 0x20) * in_stack_00000010;
      in_stack_00000010 = in_stack_00000010 + in_stack_00000010;
      FUN_039293f4(CONCAT44(in_stack_00000010,fVar6 + fVar6),in_stack_00000010,fVar8 + fVar8,lVar3,0
                  );
      puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
      if (*unaff_x22 != 0) {
        uVar7 = FUN_01ed712c(*unaff_x22,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar2 = FUN_03923030(uVar7,0);
        if ((uVar2 & 1) != 0) {
          if (*unaff_x22 == 0) goto cp__a;
          FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
          FUN_01be77ec();
        }
        uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(uVar7,0);
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
          fVar8 = fStack0000000000000034;
          fVar6 = fStack0000000000000038;
          fVar4 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                      fStack0000000000000038,uStack000000000000003c,
                                      *(float *)(lVar3 + 0x48) * unaff_s10,
                                      *(float *)(lVar3 + 0x4c) * unaff_s10,
                                      *(float *)(lVar3 + 0x50) * unaff_s10,0);
          if (DAT_03fed260 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed260 = '\x01';
          }
          lVar3 = *(long *)(*unaff_x20 + 0xb8);
          fVar5 = (float)FUN_03914a7c(uStack0000000000000030,fStack0000000000000034,
                                      fStack0000000000000038,uStack000000000000003c,
                                      in_stack_00000040 * *(float *)(lVar3 + 0x48),
                                      in_stack_00000040 * *(float *)(lVar3 + 0x4c),
                                      in_stack_00000040 * *(float *)(lVar3 + 0x50),0);
          *(float *)(unaff_x19 + 0x90) = in_stack_00000048._4_4_ + fVar5;
          *(float *)(unaff_x19 + 0x94) = unaff_s14 + fStack0000000000000034;
          *(float *)(unaff_x19 + 0x98) = unaff_s15 + fStack0000000000000038;
          if (*(long *)(unaff_x19 + 0xa0) != 0) {
            FUN_038fcfa4(in_stack_00000048._4_4_ + fVar4,unaff_s14 + fVar8,unaff_s15 + fVar6,
                         *(long *)(unaff_x19 + 0xa0),0,0);
            if (*(long *)(unaff_x19 + 0xa0) != 0) {
              FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                           *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
              if (*(long *)(unaff_x19 + 0xa0) != 0) {
                FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
                uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar2 = FUN_03923030(uVar7,0);
                puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
                if ((uVar2 & 1) != 0) {
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
                  uVar2 = FUN_03923030(uVar7,0);
                  if ((uVar2 & 1) != 0) {
                    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                       (lVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                       lVar3 == 0)) goto cp__a;
                    lVar3 = *(long *)(lVar3 + 0x58);
                    if (lVar3 != 0) {
                      (**(code **)(lVar3 + 0x18))
                                (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94)
                                 ,*(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar3 + 0x40),
                                 *(undefined8 *)(lVar3 + 0x28));
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
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


