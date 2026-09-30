/*
FUNCTION_NAME: cm$$ToString
ENTRY_POINT: 01be618c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void cm__ToString(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  FUN_038fe3fc();
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  puVar1 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
cp__a:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
                    /* try { // try from 01be61c4 to 01ce62bb has its CatchHandler @ 01be61c4
                       catch() { ... } // from try @ 01be61c4 with catch @ 01be61c4
                       catch() { ... } // from try @ 01be62c8 with catch @ 01be61c4 */
    uVar4 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),
                         *(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_27__);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar3 = FUN_01ed712c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar1), lVar3 == 0))
      goto cp__a;
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


