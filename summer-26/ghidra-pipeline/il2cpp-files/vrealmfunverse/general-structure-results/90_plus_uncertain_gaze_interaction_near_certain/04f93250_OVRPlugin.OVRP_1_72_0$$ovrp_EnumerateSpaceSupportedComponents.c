/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EnumerateSpaceSupportedComponents
ENTRY_POINT: 04f93250
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_EnumerateSpaceSupportedComponents(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x22;
  
  FUN_02b3c81c(System_Func<Vector3>_TypeInfo);
  FUN_02b3c81c(System_Func<TextGenerator>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xde9) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[3];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo);
    FUN_049c19dc(lVar6,uVar7,*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar4 = lVar6;
    thunk_FUN_02bb0e9c(plVar4,lVar6);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x22;
  }
  puVar2 = System_Func<UIHoverEventArgs>_TypeInfo;
  puVar1 = System_Func<TypePathVisitor>_TypeInfo;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar5[4];
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo);
    FUN_049c8240(lVar8,uVar7,*(undefined8 *)System_Func<Vector3>_TypeInfo,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar4 = lVar8;
    thunk_FUN_02bb0e9c(plVar4,lVar8);
  }
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03bdeaf8(uVar7,3,lVar6,lVar8,*(undefined8 *)puVar1);
  return uVar7;
}


