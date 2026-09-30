/*
FUNCTION_NAME: FUN_06238c88
ENTRY_POINT: 06238c88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_permission_setup
*/


void FUN_06238c88(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_06dc725d & 1) == 0) {
    FUN_02d965b8(Method_OVRHand_OnSceneChanged__);
    FUN_02d965b8(Method_OVRLocatable_ScheduleUpdateTransforms__);
    FUN_02d965b8(Method_OVRManager_OnPermissionGranted__);
    FUN_02d965b8(Method_UnityEngine_Object_FindFirstObjectByType<DebugUIHandlerPersistentCanvas>__);
    FUN_02d965b8(Method_OVRTask_FromResult<OVRResult<OVRAnchor_EraseResult>>__);
    FUN_02d965b8(
                Method_OVRNativeList_WithSuggestedCapacityFrom<KeyValuePair<OVRAnchor,_Transform>>__
                );
    FUN_02d965b8(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc725d = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_0622a6c8(param_1,0);
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    lVar6 = *(long *)(param_1 + 0xc0);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      FUN_062392b0(param_1);
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0x88) ^ 1;
      puVar4 = Method_OVRLocatable_ScheduleUpdateTransforms__;
      puVar3 = Method_OVRHand_OnSceneChanged__;
      puVar2 = PTR_DAT_069fb990;
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN_04010c90(&local_48,*(long *)(param_1 + 0xe0),
                     *(undefined8 *)Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
        while (uVar5 = FUN_05156804(&local_48,*(undefined8 *)puVar4), lVar6 = local_38,
              (uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar5 = FUN_06350670(lVar6,0,0);
          if ((uVar5 & 1) == 0) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_0634b308(lVar6,1,0);
          }
        }
        FUN_05156800(&local_48,*(undefined8 *)puVar3);
        lVar6 = *(long *)(param_1 + 0xe0);
        if (lVar6 != 0) {
          iVar1 = *(int *)(lVar6 + 0x18);
          *(undefined4 *)(lVar6 + 0x18) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0550afb4(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


