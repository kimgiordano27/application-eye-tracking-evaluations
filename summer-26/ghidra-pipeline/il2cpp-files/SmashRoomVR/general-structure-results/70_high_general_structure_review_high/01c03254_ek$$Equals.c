/*
FUNCTION_NAME: ek$$Equals
ENTRY_POINT: 01c03254
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_4
*/


void ek__Equals(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1 != 0) {
    FUN_039291ac(param_1,0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 01c032ac to 01d032b7 has its CatchHandler @ 01c032e0 */
    uVar1 = FUN_03955c70();
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
                    /* try { // try from 01c032b8 to 01d032f3 has its CatchHandler @ 01c031b4 */
    uVar5 = FUN_03959c54();
    if (DAT_03fed256 == '\0') {
                    /* catch() { ... } // from try @ 01c032ac with catch @ 01c032e0 */
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar3 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar9 = *puVar3;
    uVar8 = puVar3[1];
    uVar7 = puVar3[2];
    uVar6 = puVar3[3];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar2 = FUN_01f259b0(uVar5,unaff_d9,unaff_d10,uVar9,uVar8,uVar7,uVar6,uVar4,
                         *(undefined8 *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    if (lVar2 != 0) {
      lVar2 = FUN_01ed712c(lVar2,*(undefined8 *)
                                  Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                          );
      if ((*(long *)(unaff_x19 + 0x50) != 0) && (lVar2 != 0)) {
        FUN_038ea5f0(*(float *)(*(long *)(unaff_x19 + 0x50) + 0x20) * DAT_00b55298,lVar2,0);
        FUN_01c033cc();
        FUN_03920cb0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


