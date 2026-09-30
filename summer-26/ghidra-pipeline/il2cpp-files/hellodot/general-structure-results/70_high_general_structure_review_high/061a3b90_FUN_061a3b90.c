/*
FUNCTION_NAME: FUN_061a3b90
ENTRY_POINT: 061a3b90
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_061a3b90(long param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 local_38;
  int local_34;
  
  if ((DAT_06a83d8a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UI_InputField_SubmitEvent_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__92_TypeInfo);
    DAT_06a83d8a = 1;
  }
  puVar1 = OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo;
  if (param_2 == 0) {
    local_34 = param_5;
    uVar3 = thunk_FUN_02cea4e8(*(undefined8 *)OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo,
                               &local_34);
    local_38 = 0;
    uVar4 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1,&local_38);
    FUN_0615ceb0(uVar3,uVar4,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_061a3d64;
    FUN_0619b4b0(*(long *)(param_1 + 0x10),0);
  }
  puVar1 = UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo;
  if (param_5 == 1) {
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)UnityEngine_UI_InputField_SubmitEvent_TypeInfo,1)
      ;
      if (plVar5 == (long *)0x0) goto LAB_061a3d64;
      lVar7 = *(long *)(param_1 + 0x18);
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar3,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[4] = lVar7;
      lVar7 = *(long *)puVar1;
      *(long **)(*(long *)(lVar7 + 0xb8) + 0x10) = plVar5;
      goto LAB_061a3d3c;
    }
  }
  else if (param_5 != 0) {
    FUN_0615d890(*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__92_TypeInfo,0);
    puVar2 = OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo;
    local_34 = param_5;
    uVar3 = thunk_FUN_02cea4e8(*(undefined8 *)OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo,
                               &local_34);
    local_38 = 2;
    uVar4 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&local_38);
    FUN_0615ceb0(uVar3,uVar4,0);
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_061a3d64:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar3 = FUN_06183190(*(long *)(param_1 + 0x18),0);
    lVar7 = *(long *)puVar1;
    *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10) = uVar3;
    goto LAB_061a3d3c;
  }
  lVar7 = *(long *)
           UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_TypeInfo;
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10) = 0;
LAB_061a3d3c:
  **(undefined8 **)(lVar7 + 0xb8) = param_3;
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = param_4;
  return;
}


