/*
FUNCTION_NAME: cp$$h
ENTRY_POINT: 01be67f4
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


void cp__h(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined4 unaff_w21;
  long *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
  if (*unaff_x22 != 0) {
                    /* try { // try from 01be6808 to 01ce6823 has its CatchHandler @ 01be6900 */
    uVar3 = FUN_01ed712c(*unaff_x22,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_03923030(uVar3,0);
    if ((uVar4 & 1) != 0) {
      if (*unaff_x22 == 0) goto cp__a;
      FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
      FUN_01be77ec();
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0xa0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
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
      fVar7 = unaff_s12;
      fVar8 = unaff_s13;
      fVar5 = (float)FUN_03914a7c(in_stack_00000030,0);
      if (DAT_03fed260 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed260 = '\x01';
      }
      fVar6 = (float)FUN_03914a7c(in_stack_00000030,0);
      *(float *)(unaff_x19 + 0x90) = in_stack_00000048._4_4_ + fVar6;
      *(float *)(unaff_x19 + 0x94) = unaff_s14 + unaff_s12;
      *(float *)(unaff_x19 + 0x98) = unaff_s15 + unaff_s13;
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcfa4(in_stack_00000048._4_4_ + fVar5,unaff_s14 + fVar7,unaff_s15 + fVar8,
                     *(long *)(unaff_x19 + 0xa0),0,0);
        if (*(long *)(unaff_x19 + 0xa0) != 0) {
          FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                       *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
          if (*(long *)(unaff_x19 + 0xa0) != 0) {
            FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
            uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
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
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar4 = FUN_03923030(uVar3,0);
              if ((uVar4 & 1) != 0) {
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (lVar2 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1),
                   lVar2 == 0)) goto cp__a;
                lVar2 = *(long *)(lVar2 + 0x58);
                if (lVar2 != 0) {
                  (**(code **)(lVar2 + 0x18))
                            (*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                             *(undefined4 *)(unaff_x19 + 0x98),*(undefined8 *)(lVar2 + 0x40),
                             *(undefined8 *)(lVar2 + 0x28));
                }
              }
            }
            return;
          }
        }
      }
    }
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


