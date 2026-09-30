/*
FUNCTION_NAME: FUN_06a347a0
ENTRY_POINT: 06a347a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 190
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void FUN_06a347a0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar3;
  
  uVar5 = param_2[1];
  if ((param_3 & (uVar5 ^ 0xffffffffffffffff)) != 0) {
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_07280510);
    uVar6 = FUN_06a34944(param_3 & (uVar5 ^ 0xffffffffffffffff),uVar6);
    uVar2 = thunk_FUN_032e1da0(
                              Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__
                              );
    uVar1 = thunk_FUN_032e1da0(PTR_DAT_07281220);
    uVar6 = FUN_057aaeec(uVar2,uVar6,uVar1,0);
    thunk_FUN_032e1da0(PTR_DAT_07279980);
    uVar2 = thunk_FUN_032a56a0();
    FUN_0591ef6c(uVar2,uVar6,0);
    goto UnityEngine_XR_Interaction_Toolkit_AR_ARGestureInteractor__set_xrOrigin;
  }
  uVar5 = param_3 & 3;
  if (uVar5 == 0) {
UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__get_hoveringPosition:
    uVar5 = param_3 & 0xc;
    if (uVar5 == 0) {
LAB_06a34804:
      uVar2 = *param_2;
      uVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar2;
      param_1[2] = uVar6;
      param_1[3] = param_3;
      return;
    }
    iVar4 = 0;
    uVar7 = uVar5;
    do {
      uVar7 = uVar7 - 1 & uVar7;
      iVar4 = iVar4 + 1;
    } while (uVar7 != 0);
    if (iVar4 < 2) goto LAB_06a34804;
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_07280510);
    uVar6 = FUN_06a34944(uVar5,uVar6);
    puVar3 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>__ctor__;
  }
  else {
    iVar4 = 0;
    uVar7 = uVar5;
    do {
      uVar7 = uVar7 - 1 & uVar7;
      iVar4 = iVar4 + 1;
    } while (uVar7 != 0);
    if (iVar4 < 2)
    goto 
    UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__get_hoveringPosition
    ;
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_07280510);
    uVar6 = FUN_06a34944(uVar5,uVar6);
    puVar3 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__;
  }
  uVar2 = thunk_FUN_032e1da0(puVar3);
  uVar6 = FUN_057a19ac(uVar2,uVar6,0);
  thunk_FUN_032e1da0(PTR_DAT_07279578);
  uVar2 = thunk_FUN_032a56a0();
  FUN_0592371c(uVar2,uVar6,0);
UnityEngine_XR_Interaction_Toolkit_AR_ARGestureInteractor__set_xrOrigin:
  uVar6 = thunk_FUN_032e1da0(
                            Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_Equals__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2,uVar6);
}


