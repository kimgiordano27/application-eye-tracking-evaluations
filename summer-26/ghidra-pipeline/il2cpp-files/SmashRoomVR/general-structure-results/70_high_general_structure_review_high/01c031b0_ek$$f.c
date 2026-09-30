/*
FUNCTION_NAME: ek$$f
ENTRY_POINT: 01c031b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_17;telemetry_or_network_hits_6
*/


void ek__f(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000024;
  
                    /* try { // try from 01c031b4 to 01d032ab has its CatchHandler @ 01c031b4
                       catch() { ... } // from try @ 01c031b4 with catch @ 01c031b4
                       catch() { ... } // from try @ 01c032b8 with catch @ 01c031b4 */
  thunk_FUN_01ad9084(*(undefined8 *)(param_4 + 0x478));
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
  *(undefined1 *)(unaff_x20 + 0x394) = 1;
  uStack0000000000000024 = 0;
  uStack000000000000001c = 0;
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    fVar9 = *(float *)(unaff_x19 + 0x48);
    fVar4 = (float)FUN_03925cf4(0);
    fVar9 = fVar9 - fVar4;
    *(float *)(unaff_x19 + 0x48) = fVar9;
    if (fVar9 <= 0.0) {
      *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x19 + 0x30);
      if ((*(long *)(unaff_x19 + 0x40) != 0) &&
         (lVar1 = FUN_0391fab4(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
        uVar5 = FUN_03928d34(lVar1,0);
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (uVar7 = param_2, uVar8 = param_3, lVar1 = FUN_0391fab4(*(long *)(unaff_x19 + 0x40),0),
           lVar1 != 0)) {
          uVar6 = FUN_039291ac(lVar1,0);
          uVar11 = *(undefined4 *)(unaff_x19 + 0x3c);
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03955c70(uVar5,param_2,param_3,uVar6,uVar7,uVar8,uVar11);
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
          uVar7 = FUN_03959c54();
          if (DAT_03fed256 == '\0') {
            thunk_FUN_01ad9084(
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              );
            DAT_03fed256 = '\x01';
          }
          puVar3 = *(undefined4 **)
                    (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                    + 0xb8);
          uVar13 = *puVar3;
          uVar12 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar1 = FUN_01f259b0(uVar7,param_2,param_3,uVar13,uVar12,uVar10,uVar11,uVar5,
                               *(undefined8 *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__
                              );
          if (lVar1 != 0) {
            lVar1 = FUN_01ed712c(lVar1,*(undefined8 *)
                                        Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                                );
            if ((*(long *)(unaff_x19 + 0x50) != 0) && (lVar1 != 0)) {
              FUN_038ea5f0(*(float *)(*(long *)(unaff_x19 + 0x50) + 0x20) * DAT_00b55298,lVar1,0);
              FUN_01c033cc();
              FUN_03920cb0();
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


