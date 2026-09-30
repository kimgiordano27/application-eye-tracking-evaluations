/*
FUNCTION_NAME: FUN_07537d58
ENTRY_POINT: 07537d58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07537d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = Method_UniRx_ReactiveProperty<Vector4>__ctor__;
  if ((DAT_07ef4cdc & 1) == 0) {
    FUN_03642964(Method_UniRx_ReactiveProperty<Vector4>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<StartTargetFeedbackService_FeedbackData>__ctor__);
    FUN_03642964(Method_UniRx_ReactiveProperty<StartTargetFeedbackService_FeedbackData>_set_Value__)
    ;
    FUN_03642964(Method_UniRx_ReactiveProperty<Vector4>__ctor__);
    DAT_07ef4cdc = 1;
  }
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar3,0);
  puVar2 = Method_UniRx_ReactiveProperty<StartTargetFeedbackService_FeedbackData>_set_Value__;
  puVar1 = Method_UniRx_ReactiveProperty<Vector4>__ctor__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x10),param_2);
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x18),param_3);
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_0554a400(uVar4,lVar3,*(undefined8 *)puVar2,0);
    if (lVar5 != 0) {
      FUN_0459fa8c(lVar5,uVar4,
                   *(undefined8 *)
                    Method_UniRx_ReactiveProperty<StartTargetFeedbackService_FeedbackData>__ctor__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


