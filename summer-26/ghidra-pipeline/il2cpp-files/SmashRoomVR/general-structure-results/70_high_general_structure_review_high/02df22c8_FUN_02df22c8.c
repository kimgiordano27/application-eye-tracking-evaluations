/*
FUNCTION_NAME: FUN_02df22c8
ENTRY_POINT: 02df22c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_02df22c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0028 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0028 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(param_7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(param_6 + 0x40);
  if (lVar8 == 0) goto LAB_02df252c;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_6 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(param_6 + 0x48) * 8 + 0x20);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03923030(lVar8,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(param_6 + 0x38);
  if (lVar6 == 0) goto LAB_02df252c;
  uVar2 = *(undefined4 *)(param_6 + 0x48);
  lVar9 = *(long *)(lVar6 + 0x10);
  lVar10 = *(long *)Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
  ;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_02df252c;
  uVar3 = *(uint *)(lVar6 + 0x18);
  if (uVar3 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar6 + 0x18) = uVar3 + 1;
    *(undefined4 *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
  }
  else {
    FUN_02b2c8dc(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  iVar1 = *(int *)(param_6 + 0x48) + 1;
  *(int *)(param_6 + 0x48) = iVar1;
  if (*(long *)(param_6 + 0x40) == 0) goto LAB_02df252c;
  if (*(int *)(*(long *)(param_6 + 0x40) + 0x18) <= iVar1) {
    *(undefined4 *)(param_6 + 0x48) = 0;
  }
  if (*(char *)(param_6 + 0x2c) == '\0') {
LAB_02df2494:
    if (lVar8 == 0) goto LAB_02df252c;
  }
  else {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_038f032c(0);
    if ((uVar5 & 1) == 0) goto LAB_02df2494;
    if ((param_7 == 0) || (uVar7 = FUN_039230bc(param_7,0), lVar8 == 0)) goto LAB_02df252c;
    FUN_0392316c(lVar8,uVar7,0);
  }
  lVar6 = FUN_0391c2b8(lVar8,0);
  if (lVar6 != 0) {
    FUN_0391fb70(lVar6,1,0);
    lVar6 = FUN_0391c27c(lVar8,0);
    if (lVar6 != 0) {
      FUN_03928dd4(param_1,param_2,param_3,lVar6,0);
      FUN_038ea808(lVar8,param_7,0);
      FUN_038ea5f0(param_5,lVar8,0);
      FUN_038ea678(param_4,lVar8,0);
      FUN_038ea890(lVar8,0);
      return;
    }
  }
LAB_02df252c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


