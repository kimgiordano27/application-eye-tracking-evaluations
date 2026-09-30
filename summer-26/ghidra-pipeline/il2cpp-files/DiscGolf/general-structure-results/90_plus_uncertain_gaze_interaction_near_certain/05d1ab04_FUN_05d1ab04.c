/*
FUNCTION_NAME: FUN_05d1ab04
ENTRY_POINT: 05d1ab04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_6
*/


long FUN_05d1ab04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_06dc2eff & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                );
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__);
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    DAT_06dc2eff = 1;
  }
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
  ;
  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  if (param_1 != 0) {
    uVar5 = FUN_05c0b574(param_1,0);
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05d1a700(lVar6,*(undefined8 *)puVar1,uVar5);
    puVar1 = OVRPlugin_OVRP_1_128_0_TypeInfo;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      iVar4 = FUN_05c0c118(param_1,0);
      uVar5 = FUN_05c0c424(param_1,0);
      puVar8 = (undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
      if (((iVar4 == 0x1bb) ||
          (puVar8 = (undefined8 *)
                    Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__,
          iVar4 == 0x50)) && (uVar7 = thunk_FUN_0536b75c(uVar5,*puVar8,0), (uVar7 & 1) != 0)) {
        uVar10 = *(undefined8 *)puVar1;
        uVar5 = FUN_05c0c4d4(param_1,0);
      }
      else {
        uVar10 = *(undefined8 *)puVar1;
        uVar5 = FUN_05c0b228(param_1,0);
      }
      puVar3 = 
      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
      ;
      puVar2 = Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo;
      puVar1 = OVRPlugin_OVRP_1_119_0_TypeInfo;
      if (lVar9 != 0) {
        FUN_05ccbab0(lVar9,uVar10,uVar5,0);
        FUN_05ccbab0(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
        FUN_05ccbab0(lVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


