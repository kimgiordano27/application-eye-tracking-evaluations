/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 06a634d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  long lVar6;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  *(undefined1 *)(unaff_x20 + 0xda0) = 1;
  puVar3 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XROcclusionSubsystem>__ctor__;
  puVar1 = PTR_DAT_0727c048;
  if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(char *)(*(long *)(unaff_x19 + 0x58) + 0x10) != '\0'))
  {
    return;
  }
  lVar4 = *(long *)
           Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XROcclusionSubsystem>__ctor__
  ;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRObjectTrackingSubsystem>__ctor__;
  uVar8 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  puVar1 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRImageTrackingSubsystem>__ctor__;
  FUN_03b4de7c(uVar8,*(undefined8 *)puVar2);
  iVar7 = 0;
  lVar4 = extraout_x1;
  while( true ) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar5,lVar4);
      lVar5 = *(long *)puVar3;
      lVar4 = extraout_x1_00;
    }
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) <= iVar7) {
      return;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar5,lVar4);
      lVar6 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar6 == 0) break;
    }
    lVar4 = FUN_041e29a8(lVar6,iVar7,*(undefined8 *)puVar1);
    if (lVar4 == 0) break;
    iVar7 = iVar7 + 1;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      FUN_06a635e4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


