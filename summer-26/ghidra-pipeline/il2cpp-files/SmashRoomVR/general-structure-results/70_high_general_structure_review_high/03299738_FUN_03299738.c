/*
FUNCTION_NAME: FUN_03299738
ENTRY_POINT: 03299738
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_03299738(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  
  if ((DAT_03ff5798 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d861b0);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5798 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_032999fc;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
LAB_032997ec:
    iVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0322e1d4(0x10000000,0x80000000,0);
    if ((uVar2 & 1) == 0) goto LAB_032997ec;
    iVar4 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_032999fc;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0322e1d4(0x4000000,0x80000000,0);
    if ((uVar2 & 1) != 0) {
      iVar4 = 2;
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_032999fc;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x90), lVar3 == 0)) goto LAB_032999fc;
    uVar2 = FUN_032a7cd8(lVar3,1,0);
    if ((uVar2 & 1) != 0) {
      iVar4 = 0x20;
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_032999fc;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
LAB_032998fc:
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x98), lVar3 == 0)) goto LAB_032999fc;
    uVar2 = FUN_032a7cd8(lVar3,1,0);
    if ((uVar2 & 1) == 0) goto LAB_032998fc;
    iVar4 = 0x40;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) goto LAB_032999fc;
  lVar6 = *(long *)(param_1 + 0x28);
  if ((iVar4 == 1) || (iVar4 == 0x20)) {
    lVar3 = *(long *)(lVar3 + 0x90);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x98);
  }
  if ((lVar3 == 0) || (uVar5 = FUN_0391c2b8(lVar3,0), puVar1 = PTR_DAT_03d861b0, lVar6 == 0))
  goto LAB_032999fc;
  puVar7 = (undefined8 *)(lVar6 + 0x48);
  *puVar7 = uVar5;
  thunk_FUN_01b4f09c(puVar7,uVar5);
  local_28 = 0;
  FUN_02d067e8(&local_28,iVar4,*(undefined8 *)puVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = local_28;
  if (iVar4 == 1) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x90), lVar6 == 0)) goto LAB_032999fc;
LAB_032999d0:
    uVar5 = FUN_0391c27c(lVar6,0);
  }
  else if (iVar4 == 0x20) {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x90), lVar6 == 0)) goto LAB_032999fc;
    uVar5 = *(undefined8 *)(lVar6 + 0xc0);
  }
  else {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x98), lVar6 == 0)) goto LAB_032999fc;
    if (iVar4 != 0x40) goto LAB_032999d0;
    uVar5 = *(undefined8 *)(lVar6 + 0xc0);
  }
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar3 + 0x68);
    *puVar7 = uVar5;
    thunk_FUN_01b4f09c(puVar7);
    return;
  }
LAB_032999fc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


