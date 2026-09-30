/*
FUNCTION_NAME: cm$$GetHashCode
ENTRY_POINT: 01be611c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void cm__GetHashCode(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined4 unaff_w21;
  float fVar5;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  fVar5 = (float)FUN_03914a7c();
  *(float *)(unaff_x19 + 0x90) = fStack000000000000004c + fVar5;
  *(float *)(unaff_x19 + 0x94) = unaff_s14 + param_2;
  *(float *)(unaff_x19 + 0x98) = unaff_s15 + param_3;
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038fcfa4(fStack000000000000004c + unaff_s11,unaff_s14 + fStack0000000000000048,
                 unaff_s15 + unaff_s13,*(long *)(unaff_x19 + 0xa0),0,0);
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      FUN_038fcfa4(*(undefined4 *)(unaff_x19 + 0x90),*(undefined4 *)(unaff_x19 + 0x94),
                   *(undefined4 *)(unaff_x19 + 0x98),*(long *)(unaff_x19 + 0xa0),1,0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_038fe3fc(*(long *)(unaff_x19 + 0xa0),unaff_w21,0);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(uVar4,0);
        puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) goto cp__a;
          uVar4 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
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
          uVar2 = FUN_03923030(uVar4,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1), lVar3 == 0)
               ) goto cp__a;
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
cp__a:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


