/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_zxyy
ENTRY_POINT: 034ee6c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Unity_Mathematics_uint3__get_zxyy(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  int local_38;
  int local_34;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 034ee6d0 to 035ee6d3 has its CatchHandler @ 034ee6e0 */
  if ((DAT_03ff6ccf & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
    thunk_FUN_01ad9084(PTR_DAT_03d95298);
    thunk_FUN_01ad9084(PTR_DAT_03d952a0);
    thunk_FUN_01ad9084(PTR_DAT_03d952a8);
    DAT_03ff6ccf = 1;
  }
  local_34 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  uVar4 = FUN_03922f24(uVar8,0,0);
  puVar3 = PTR_DAT_03d95298;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = *(undefined8 *)puVar3;
    goto FUN_034ee96c;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
LAB_034ee7f4:
    puVar3 = PTR_DAT_03d94ed8;
    if (param_2 == -1) {
      return 1;
    }
    uVar7 = 0;
    lVar5 = *(long *)PTR_DAT_03d94ed8;
    while( true ) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar3;
      }
      if (**(int **)(lVar5 + 0xb8) <= (int)uVar7) {
        return 1;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_034ee990;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_034ee994;
      lVar9 = (long)(int)uVar7;
      lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_034ee990;
      if (*(int *)(lVar6 + 0x90) == param_2) break;
      uVar7 = uVar7 + 1;
    }
    local_38 = param_2;
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)
                                Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               ,&local_38);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar5);
      lVar5 = *(long *)puVar3;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) {
LAB_034ee990:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_034ee994:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar8 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d952a0,uVar8,
                         *(undefined8 *)(lVar5 + lVar9 * 8 + 0x20),0);
    lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_034ee990;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_034ee994;
    lVar6 = *(long *)puVar2;
    param_1 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
    iVar1 = *(int *)(lVar6 + 0xe0);
  }
  else {
    if (DAT_03ff6d49 == '\0') {
      thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
      DAT_03ff6d49 = '\x01';
    }
    puVar3 = PTR_DAT_03d94ed8;
    lVar5 = *(long *)PTR_DAT_03d94ed8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar3;
    }
    if (**(int **)(lVar5 + 0xb8) < *(int *)(param_1 + 0x24)) goto LAB_034ee7f4;
    local_34 = *(int *)(param_1 + 0x24);
    uVar8 = FUN_0303de64(&local_34,0);
    uVar8 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d952a8,uVar8,0);
    lVar6 = *(long *)puVar2;
    iVar1 = *(int *)(lVar6 + 0xe0);
  }
  if (iVar1 == 0) {
    thunk_FUN_01ac7298(lVar6);
  }
FUN_034ee96c:
  FUN_038f2f0c(uVar8,param_1,0);
  return 0;
}


