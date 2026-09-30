/*
FUNCTION_NAME: cp$$.ctor
ENTRY_POINT: 01be6790
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


void cp___ctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000010;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0xc);
  fVar8 = *(float *)(*(long *)(param_1 + 0xb8) + 0x14);
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
                    /* try { // try from 01be67b8 to 01ce67d3 has its CatchHandler @ 01be6908 */
    DAT_03fed25c = '\x01';
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (unaff_x23 != 0) {
    fVar8 = in_stack_00000010 * fVar8;
                    /* try { // try from 01be67e0 to 01ce67fb has its CatchHandler @ 01be6904 */
    fVar6 = (float)uVar7 * in_stack_00000010;
    in_stack_00000010 = (float)((ulong)uVar7 >> 0x20) * in_stack_00000010;
    in_stack_00000010 = in_stack_00000010 + in_stack_00000010;
    FUN_039293f4(CONCAT44(in_stack_00000010,fVar6 + fVar6),in_stack_00000010,fVar8 + fVar8);
    puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
    if (*unaff_x22 != 0) {
      uVar7 = FUN_01ed712c(*unaff_x22,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_03923030(uVar7,0);
      if ((uVar3 & 1) != 0) {
        if (*unaff_x22 == 0) goto cp__a;
        FUN_01ed712c(*unaff_x22,*(undefined8 *)puVar1);
        FUN_01be77ec();
      }
      uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar7,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fcf60(*(long *)(unaff_x19 + 0xa0),2,0);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed260 = '\x01';
        }
        fVar8 = unaff_s12;
        fVar6 = unaff_s13;
        fVar4 = (float)FUN_03914a7c(in_stack_00000030,0);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed260 = '\x01';
        }
        fVar5 = (float)FUN_03914a7c(in_stack_00000030,0);
        *(float *)(unaff_x19 + 0x90) = in_stack_00000048._4_4_ + fVar5;
        *(float *)(unaff_x19 + 0x94) = unaff_s14 + unaff_s12;
        *(float *)(unaff_x19 + 0x98) = unaff_s15 + unaff_s13;
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
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar3 = FUN_03923030(uVar7,0);
              puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
              if ((uVar3 & 1) != 0) {
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
                uVar3 = FUN_03923030(uVar7,0);
                if ((uVar3 & 1) != 0) {
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
  }
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


