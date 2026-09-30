/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 08a13934
PROGRAM: Hyper-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  while ((uVar1 = FUN_088e7824(param_2,param_2 + 0x10,0), uVar1 != 0 && ((uVar1 & 7) != 4))) {
    if (uVar1 == 8) {
      uVar2 = FUN_088e76b0(param_2,param_2 + 0x10,0);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
    else if (uVar1 == 0x10) {
      uVar2 = FUN_088e76b0(param_2,param_2 + 0x10,0);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
    else if (uVar1 == 0x19) {
      uVar3 = FUN_088e7fc8(param_2,param_2 + 0x10,0);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
    }
    else {
      uVar3 = FUN_088ed628(*(undefined8 *)(param_1 + 0x10),param_2,0);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_049ee3d8(param_1 + 0x10,uVar3);
    }
  }
  return;
}


