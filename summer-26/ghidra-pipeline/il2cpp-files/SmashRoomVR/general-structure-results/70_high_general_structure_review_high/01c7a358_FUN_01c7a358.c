/*
FUNCTION_NAME: FUN_01c7a358
ENTRY_POINT: 01c7a358
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_8
*/


undefined8 FUN_01c7a358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = StringLiteral_316;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 01c7a374 to 01d7a377 has its CatchHandler @ 01c7a37c */
                    /* try { // try from 01c7a378 to 01d7a393 has its CatchHandler @ 01c7a208 */
  if ((DAT_03fed798 & 1) == 0) {
                    /* catch() { ... } // from try @ 01c7a288 with catch @ 01c7a37c
                       catch() { ... } // from try @ 01c7a374 with catch @ 01c7a37c */
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(StringLiteral_317);
    thunk_FUN_01ad9084(StringLiteral_318);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_319);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_316);
    thunk_FUN_01ad9084(StringLiteral_320);
    DAT_03fed798 = 1;
  }
  uVar5 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_01f25510(*(undefined8 *)StringLiteral_319);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
    uVar3 = FUN_03922f24(**(undefined8 **)(*(long *)puVar2 + 0xb8),0,0);
    if ((uVar3 & 1) == 0) goto LAB_01c7a53c;
    if (*(int *)(*(long *)
                  Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar4 = FUN_03b26f4c(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar3 = FUN_03922f24(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar4,*(undefined8 *)StringLiteral_320,0);
      if (lVar4 == 0) goto LAB_01c7a554;
      lVar4 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_317);
    }
    if ((lVar4 == 0) || (lVar4 = FUN_0391c2b8(lVar4,0), lVar4 == 0)) {
LAB_01c7a554:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar5 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_318);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  }
LAB_01c7a53c:
  return **(undefined8 **)(*(long *)puVar2 + 0xb8);
}


