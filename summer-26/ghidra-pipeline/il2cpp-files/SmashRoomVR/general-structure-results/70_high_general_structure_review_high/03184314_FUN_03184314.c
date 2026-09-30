/*
FUNCTION_NAME: FUN_03184314
ENTRY_POINT: 03184314
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03184314(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_03ff220f & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80f98);
    thunk_FUN_01ad9084(StringLiteral_13731);
    thunk_FUN_01ad9084(StringLiteral_13732);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff220f = 1;
  }
  puVar2 = PTR_DAT_03d80f98;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)((long)param_1 + 0x84) == 2) {
    lVar4 = param_1[0x31];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1[0x1a];
      lVar5 = param_1[0x31];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar4,lVar5,0);
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1[0x1a];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03922f24(lVar4,0,0);
        if ((uVar3 & 1) == 0) goto LAB_03184424;
      }
      param_1[0x31] = 0;
      thunk_FUN_01b4f09c(param_1 + 0x31,0);
      (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
    }
  }
LAB_03184424:
  FUN_029bd050(param_1,*(undefined8 *)puVar2);
  return;
}


