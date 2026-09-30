/*
FUNCTION_NAME: FUN_03b1216c
ENTRY_POINT: 03b1216c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_13
*/


void FUN_03b1216c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  if ((DAT_03ffdae9 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db6ac8);
    thunk_FUN_01ad9084(PTR_DAT_03d9cf08);
    DAT_03ffdae9 = 1;
  }
  if ((char)param_1[4] == '\0') {
    FUN_03b22b10(param_1,0);
    puVar4 = PTR_DAT_03d9cf08;
    lVar6 = *(long *)PTR_DAT_03d9cf08;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar4;
    }
    lVar11 = **(long **)(lVar6 + 0xb8);
    if (lVar11 == 0) goto LAB_03b12428;
    if ((int)(*(long **)(lVar6 + 0xb8))[1] == *(int *)(lVar11 + 0x18)) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_03b12428;
      uVar7 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03db6ac8,
                           *(int *)(**(long **)(lVar6 + 0xb8) + 0x18) << 1);
      lVar6 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar6 == 0) goto LAB_03b12428;
      Oculus_Interaction_Locomotion_PlayerLocomotor__MovePlayer
                (lVar6,uVar7,*(undefined4 *)(lVar6 + 0x18),0);
      **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar7;
      thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar7);
    }
    puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
    if (*(int *)(*(long *)
                  Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03b26f4c(0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar8 = FUN_03923030(uVar7,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar6 = FUN_03b26f4c(0);
      if (lVar6 == 0) goto LAB_03b12428;
      uVar12 = *(undefined8 *)(lVar6 + 0x40);
      uVar7 = FUN_0391c2b8(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar8 = FUN_03922f24(uVar12,uVar7,0);
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)((long)param_1 + 0xf2) = 1;
      }
    }
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar4;
    }
    puVar10 = *(undefined8 **)(lVar6 + 0xb8);
    uVar1 = *(uint *)(puVar10 + 1);
    *(uint *)((long)param_1 + 0xec) = uVar1;
    plVar13 = (long *)*puVar10;
    if (plVar13 == (long *)0x0) {
LAB_03b12428:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = thunk_FUN_01afa9e0(param_1,*(undefined8 *)(*plVar13 + 0x40));
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar7,0);
    }
    if (*(uint *)(plVar13 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    plVar13[(long)(int)uVar1 + 4] = (long)param_1;
    thunk_FUN_01b4f09c(plVar13 + (long)(int)uVar1 + 4,param_1);
    *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) =
         *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) + 1;
    *(undefined1 *)((long)param_1 + 0xf1) = 0;
    bVar5 = FUN_03b17a78(param_1);
    *(byte *)(param_1 + 0x1d) = bVar5 & 1;
    uVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
    if ((uVar8 & 1) == 0) {
      uVar9 = 4;
    }
    else if (*(char *)((long)param_1 + 0xf1) == '\0') {
      if (*(char *)((long)param_1 + 0xf2) == '\0') {
        uVar9 = (undefined1)param_1[0x1e];
      }
      else {
        uVar9 = 3;
      }
    }
    else {
      uVar9 = 2;
    }
    (**(code **)(*param_1 + 0x2d8))(param_1,uVar9,1,*(undefined8 *)(*param_1 + 0x2e0));
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}


