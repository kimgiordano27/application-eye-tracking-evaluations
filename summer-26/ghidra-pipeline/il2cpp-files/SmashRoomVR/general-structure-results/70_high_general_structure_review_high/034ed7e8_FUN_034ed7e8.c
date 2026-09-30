/*
FUNCTION_NAME: FUN_034ed7e8
ENTRY_POINT: 034ed7e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_034ed7e8(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  int local_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_03ff6cd3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d95210);
    thunk_FUN_01ad9084(PTR_DAT_03d95218);
    thunk_FUN_01ad9084(PTR_DAT_03d95220);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
    thunk_FUN_01ad9084(PTR_DAT_03d95228);
    thunk_FUN_01ad9084(PTR_DAT_03d95230);
    thunk_FUN_01ad9084(PTR_DAT_03d95238);
    thunk_FUN_01ad9084(PTR_DAT_03d95240);
    DAT_03ff6cd3 = 1;
  }
  puVar9 = PTR_DAT_03d95228;
  puVar6 = PTR_DAT_03d94ed8;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_03d94ed8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar8 = PTR_DAT_03d95220;
    puVar7 = PTR_DAT_03d95218;
    puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
    puVar4 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    local_a0 = FUN_034e87a8();
    FUN_02d98034(&local_b8,local_a0,*(undefined8 *)puVar9);
    iVar16 = 0;
    uStack_88 = uStack_b0;
    local_80 = local_a8;
    while( true ) {
      uVar10 = FUN_0273aca4(&local_90,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) break;
      lVar11 = FUN_0273acd0(&local_90,*(undefined8 *)puVar8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (iVar16 <= *(int *)(lVar11 + 0x90)) {
        iVar16 = *(int *)(lVar11 + 0x90) + 1;
      }
    }
    FUN_0273aca0(&local_90,*(undefined8 *)PTR_DAT_03d95210);
    iVar1 = *(int *)(param_1 + 100);
    iVar14 = iVar16;
    if ((0 < iVar1) && (iVar14 = iVar1, iVar1 < iVar16)) {
      local_b8 = iVar16;
      uVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_b8);
      local_bc = *(int *)(param_1 + 100);
      uVar13 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_bc);
      uVar12 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d95240,uVar12,uVar13,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar5);
      }
      FUN_038f3474(uVar12,param_1,0);
      iVar14 = *(int *)(param_1 + 100);
    }
    if (DAT_03fed2d9 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed2d9 = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar16 = -0x80000000;
    if ((float)(int)SQRT((float)iVar14) != INFINITY) {
      iVar16 = (int)SQRT((float)iVar14);
    }
    iVar1 = iVar16;
    if (iVar14 <= (iVar16 + -1) * iVar16) {
      iVar1 = iVar16 + -1;
    }
    if (*(char *)(param_1 + 0x61) != '\0') {
      iVar1 = iVar16;
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    auVar17 = FUN_034e87a8();
    local_a0 = auVar17;
    FUN_02d98034(&local_b8,local_a0,*(undefined8 *)puVar9);
    local_90 = CONCAT44(uStack_b4,local_b8);
    uStack_88 = uStack_b0;
    local_80 = local_a8;
    while( true ) {
      uVar10 = FUN_0273aca4(&local_90,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) break;
      lVar11 = FUN_0273acd0(&local_90,*(undefined8 *)puVar8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar14 = *(int *)(lVar11 + 0x70);
      if (iVar1 * iVar16 <= iVar14) {
        local_b8 = iVar14;
        uVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_b8);
        local_bc = iVar1 * iVar16;
        uVar13 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_bc);
        uVar12 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d95230,uVar12,uVar13,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2f0c(uVar12,lVar11,0);
        *(undefined4 *)(lVar11 + 0x70) = *(undefined4 *)(lVar11 + 0x90);
      }
      lVar15 = *(long *)(lVar11 + 0x78);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03922f24(lVar15,0,0);
      if ((uVar10 & 1) == 0) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar2 = 0;
        if (iVar16 != 0) {
          iVar2 = iVar14 / iVar16;
        }
        FUN_038f0e08(*(float *)(param_1 + 0x68) +
                     (*(float *)(param_1 + 0x70) / (float)iVar16) * (float)(iVar14 - iVar2 * iVar16)
                     ,(*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x6c)) -
                      (*(float *)(param_1 + 0x74) / (float)iVar1) * (float)(iVar2 + 1),lVar15,0);
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2f0c(*(undefined8 *)PTR_DAT_03d95238,lVar11,0);
      }
    }
    FUN_0273aca0(&local_90,*(undefined8 *)PTR_DAT_03d95210);
  }
  return;
}


