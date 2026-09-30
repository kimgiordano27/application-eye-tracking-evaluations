/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase.<StartAutoTween>d__15<float>$$System.IDisposable.Dispose
ENTRY_POINT: 021c3c64
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<StartAutoTween>d__15<float>__System_IDisposable_Dispose
               (void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  
  *(undefined1 *)(unaff_x21 + 0x1c3) = in_w8;
  if (unaff_x19 != (long *)0x0) {
    iVar2 = (**(code **)(*unaff_x19 + 0x248))();
    puVar1 = StringLiteral_1894;
    if (iVar2 < 1) {
      if (unaff_x20 == (long *)0x0) goto LAB_021c3dd0;
    }
    else {
      lVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1895);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar3,*(undefined8 *)puVar1);
      iVar2 = (**(code **)(*unaff_x19 + 0x248))();
      puVar1 = StringLiteral_1893;
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          uVar4 = (**(code **)(*unaff_x19 + 0x238))();
          if (lVar3 == 0) goto LAB_021c3dd0;
          FUN_02f17d24(lVar3,uVar4,*(undefined8 *)puVar1);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      if (unaff_x20[4] == 0) goto LAB_021c3dd0;
      FUN_0267bf58(unaff_x20[4],lVar3,*(undefined8 *)StringLiteral_1897);
    }
    lVar3 = (**(code **)(*unaff_x20 + 0x178))();
    iVar2 = (**(code **)(*unaff_x19 + 0x248))();
    if (0 < iVar2) {
      if (unaff_x20[4] == 0) goto LAB_021c3dd0;
      FUN_0267bef8(unaff_x20[4],*(undefined8 *)StringLiteral_1896);
    }
    if (lVar3 != unaff_x19[2]) {
                    /* WARNING: Could not recover jumptable at 0x021c3db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 600))();
      return;
    }
    return;
  }
LAB_021c3dd0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


