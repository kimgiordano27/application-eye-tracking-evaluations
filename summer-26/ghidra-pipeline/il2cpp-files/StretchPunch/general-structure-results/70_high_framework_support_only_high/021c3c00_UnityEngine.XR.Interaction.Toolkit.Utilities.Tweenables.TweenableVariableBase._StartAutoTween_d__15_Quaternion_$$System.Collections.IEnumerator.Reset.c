/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase.<StartAutoTween>d__15<Quaternion>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 021c3c00
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


long * UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<StartAutoTween>d__15<Quaternion>__System_Collections_IEnumerator_Reset
                 (long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  
  if ((DAT_044a31c3 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1893);
    FUN_01d7d918(StringLiteral_1894);
    FUN_01d7d918(StringLiteral_1895);
    FUN_01d7d918(StringLiteral_1896);
    FUN_01d7d918(StringLiteral_1897);
    DAT_044a31c3 = 1;
  }
  if (param_2 != (long *)0x0) {
    iVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    puVar1 = StringLiteral_1894;
    if (iVar2 < 1) {
      if (param_1 == (long *)0x0) goto LAB_021c3dd0;
    }
    else {
      lVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1895);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar3,*(undefined8 *)puVar1);
      iVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      puVar1 = StringLiteral_1893;
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          uVar4 = (**(code **)(*param_2 + 0x238))(param_2,iVar6,*(undefined8 *)(*param_2 + 0x240));
          if (lVar3 == 0) goto LAB_021c3dd0;
          FUN_02f17d24(lVar3,uVar4,*(undefined8 *)puVar1);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      if (param_1[4] == 0) goto LAB_021c3dd0;
      FUN_0267bf58(param_1[4],lVar3,*(undefined8 *)StringLiteral_1897);
    }
    lVar3 = (**(code **)(*param_1 + 0x178))(param_1,param_2[2],*(undefined8 *)(*param_1 + 0x180));
    iVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (0 < iVar2) {
      if (param_1[4] == 0) goto LAB_021c3dd0;
      FUN_0267bef8(param_1[4],*(undefined8 *)StringLiteral_1896);
    }
    if (lVar3 != param_2[2]) {
                    /* WARNING: Could not recover jumptable at 0x021c3db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(**(code **)(*param_2 + 600))
                                 (param_2,lVar3,0,*(undefined8 *)(*param_2 + 0x260));
      return plVar5;
    }
    return param_2;
  }
LAB_021c3dd0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


