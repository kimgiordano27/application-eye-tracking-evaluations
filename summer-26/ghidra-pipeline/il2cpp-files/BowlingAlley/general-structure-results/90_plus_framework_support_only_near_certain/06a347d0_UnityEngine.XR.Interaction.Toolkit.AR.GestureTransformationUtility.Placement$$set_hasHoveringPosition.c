/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility.Placement$$set_hasHoveringPosition
ENTRY_POINT: 06a347d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__set_hasHoveringPosition
               (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  int in_w8;
  int iVar4;
  undefined8 uVar5;
  ulong in_x9;
  ulong uVar6;
  undefined *puVar3;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 - 1 & in_x9;
    in_w8 = in_w8 + 1;
    in_ZR = in_x9 == 0;
  }
  if (1 < in_w8) {
    thunk_FUN_032e1da0(PTR_DAT_07280510);
    uVar5 = FUN_06a34944();
    puVar3 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__;
UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__set_HasPlane:
    uVar2 = thunk_FUN_032e1da0(puVar3);
    uVar5 = FUN_057a19ac(uVar2,uVar5,0);
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar2 = thunk_FUN_032a56a0();
    FUN_0592371c(uVar2,uVar5,0);
    uVar5 = thunk_FUN_032e1da0(
                              Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_Equals__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar2,uVar5);
  }
  uVar1 = param_3 & 0xc;
  if (uVar1 != 0) {
    iVar4 = 0;
    uVar6 = uVar1;
    do {
      uVar6 = uVar6 - 1 & uVar6;
      iVar4 = iVar4 + 1;
    } while (uVar6 != 0);
    if (1 < iVar4) {
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_07280510);
      uVar5 = FUN_06a34944(uVar1,uVar5);
      puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>__ctor__;
      goto 
      UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__set_HasPlane;
    }
  }
  uVar2 = *param_2;
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar5;
  param_1[3] = param_3;
  return;
}


