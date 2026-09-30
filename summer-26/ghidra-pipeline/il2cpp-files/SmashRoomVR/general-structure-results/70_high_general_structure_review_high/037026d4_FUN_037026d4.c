/*
FUNCTION_NAME: FUN_037026d4
ENTRY_POINT: 037026d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_037026d4(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff76c4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff76c4 = 1;
  }
  plVar4 = param_1 + 0x1d;
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    if ((*plVar4 == 0) || (iVar2 = FUN_03922ce0(*plVar4,0), param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar3 = FUN_03922ce0(param_2,0);
    if (iVar2 == (int)uVar3) goto LAB_03702780;
  }
  lVar5 = UnityEngine_XR_Interaction_Toolkit_XRBaseController__UpdateControllerModelAnimation
                    (uVar3,param_2);
  *plVar4 = lVar5;
  thunk_FUN_01b4f09c(plVar4,lVar5);
LAB_03702780:
  plVar4 = param_1 + 0x1e;
  *plVar4 = param_1[0x1d];
  thunk_FUN_01b4f09c(plVar4);
  uVar6 = FUN_037028e8(param_1);
  *(undefined4 *)((long)param_1 + 0x10c) = uVar6;
  (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  return *plVar4;
}


