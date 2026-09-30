/*
FUNCTION_NAME: FUN_05d7c764
ENTRY_POINT: 05d7c764
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 179
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_05d7c764(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if ((DAT_06bc3a28 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_PanelRaycaster_OnPanelDestroyed__);
    FUN_02f08768(
                Method_Oculus_Interaction_Samples_PanelWithManipulatorsBorderAffordanceController_HandleInteractableStateChanged__
                );
    DAT_06bc3a28 = 1;
  }
  local_50 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (*(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x18) = param_3,
     puVar3 = 
     Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
     , param_2 != 0)) {
    local_50 = *(undefined4 *)(param_2 + 0x128);
    uStack_68 = *(undefined8 *)(param_2 + 0x110);
    local_70 = *(undefined8 *)(param_2 + 0x108);
    uStack_58 = *(undefined8 *)(param_2 + 0x120);
    local_60 = *(undefined8 *)(param_2 + 0x118);
    uStack_78 = *(undefined8 *)(param_2 + 0x100);
    local_80 = *(undefined8 *)(param_2 + 0xf8);
    uVar1 = *(undefined4 *)(param_2 + 0x160);
    uVar2 = *(undefined4 *)(param_2 + 0x164);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar5 = 
    Method_Oculus_Interaction_Samples_PanelWithManipulatorsBorderAffordanceController_HandleInteractableStateChanged__
    ;
    puVar4 = Method_UnityEngine_UIElements_PanelRaycaster_OnPanelDestroyed__;
    FUN_05d44060(&local_80,uVar1,uVar2,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,param_1 + 0xd0,&local_80,0,0,1,*(undefined8 *)puVar5,0);
    uStack_b8 = *(undefined8 *)(param_2 + 0x100);
    local_c0 = *(undefined8 *)(param_2 + 0xf8);
    uStack_a8 = *(undefined8 *)(param_2 + 0x110);
    local_b0 = *(undefined8 *)(param_2 + 0x108);
    uStack_98 = *(undefined8 *)(param_2 + 0x120);
    local_a0 = *(undefined8 *)(param_2 + 0x118);
    local_90 = *(undefined4 *)(param_2 + 0x128);
    FUN_05d7bea4(&local_c0);
    FUN_05daf224(0,param_1 + 200,&local_c0,0,0,1,*(undefined8 *)puVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


