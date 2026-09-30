/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager$$set_fallbackIfEyeTrackingUnavailable
ENTRY_POINT: 03b043f0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager__set_fallbackIfEyeTrackingUnavailable
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  
  FUN_01d7d918(PTR_DAT_0423e038);
  *(undefined1 *)(unaff_x21 + 0x97b) = 1;
  if (unaff_x20 == (long *)0x0) {
LAB_03b04518:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  plVar8 = unaff_x20 + 2;
  if (*plVar8 == 0) {
    lVar7 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0423e038 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0423e038)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0423e030 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0423e030)) {
        uVar4 = thunk_FUN_01dd295c(PTR_DAT_0423e040);
        uVar5 = (**(code **)(*unaff_x20 + 0x168))();
        uVar6 = thunk_FUN_01dd295c(PTR_DAT_0423e048);
        uVar4 = FUN_032797dc(uVar4,uVar5,uVar6,0);
        goto LAB_03b04594;
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_03b04518;
      FUN_03199c24(*(long *)(unaff_x19 + 0x10),0);
    }
    else {
      lVar9 = *(long *)(unaff_x19 + 0x18);
      uVar4 = (**(code **)(lVar7 + 0x1c8))();
      if (lVar9 == 0) goto LAB_03b04518;
      FUN_02b23da0(lVar9,uVar4);
    }
    puVar3 = PTR_DAT_0423dee0;
    puVar2 = PTR_DAT_0423ded8;
    *plVar8 = unaff_x19;
    thunk_FUN_01e10808(plVar8);
    uVar4 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
    FUN_02b235c4(uVar4,*(undefined8 *)puVar3);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x48),uVar4);
    return;
  }
  uVar4 = thunk_FUN_01dd295c(PTR_DAT_0423e050);
  uVar5 = (**(code **)(*unaff_x20 + 0x168))();
  uVar4 = FUN_0326dc80(uVar4,uVar5,0);
LAB_03b04594:
  thunk_FUN_01dd295c(StringLiteral_1244);
  uVar5 = thunk_FUN_01de27b8();
  FUN_03393770(uVar5,uVar4,0);
  uVar4 = thunk_FUN_01dd295c(PTR_DAT_0423e058);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar5,uVar4);
}


