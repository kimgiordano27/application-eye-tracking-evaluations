/*
FUNCTION_NAME: FUN_01c08178
ENTRY_POINT: 01c08178
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_8
*/


void FUN_01c08178(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = Method_UnityEngine_UIElements_Vector2Field_<>c_<DescribeFields>b__0_1__;
  puVar1 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__0__;
  if ((DAT_03fed3cc & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2Field_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__0__
                      );
    DAT_03fed3cc = 1;
  }
  uVar3 = FUN_0391993c(*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  iVar4 = FUN_039198f8(*(undefined8 *)puVar1,0,0);
  if (iVar4 == 1) {
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0xd8) != 0) {
        FUN_0391fb70(*(long *)(param_1 + 0xd8),1,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


