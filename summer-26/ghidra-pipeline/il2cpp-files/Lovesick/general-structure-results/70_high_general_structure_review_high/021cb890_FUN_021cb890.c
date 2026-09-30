/*
FUNCTION_NAME: FUN_021cb890
ENTRY_POINT: 021cb890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_021cb890(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  if ((DAT_03781689 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8844);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_11723);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector3>_get_IsCreated__);
    thunk_FUN_00d48444(StringLiteral_9403);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass7_0_<DOPath>b__0__
                      );
    DAT_03781689 = 1;
  }
  puVar3 = StringLiteral_9403;
  if ((DAT_03781687 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9403);
    DAT_03781687 = 1;
  }
  iVar1 = **(int **)(*(long *)puVar3 + 0xb8);
  iVar2 = iVar1 + -1;
  if ((0 < iVar1) && (**(int **)(*(long *)puVar3 + 0xb8) = iVar2, iVar2 < 1)) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8844);
    puVar4 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
    puVar3 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
    ;
    if (lVar5 != 0) {
      FUN_011c21b8(lVar5,0,*(undefined8 *)StringLiteral_11723,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0213fa48(lVar5,0);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar5 != 0) {
        FUN_016f27fc(lVar5,0,*(undefined8 *)
                              Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass7_0_<DOPath>b__0__
                     ,0);
        FUN_0214213c(lVar5,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar5 != 0) {
          FUN_016f27fc(lVar5,0,*(undefined8 *)
                                Method_Unity_Collections_NativeArray<Vector3>_get_IsCreated__,0);
          FUN_02142670(lVar5,0);
          FUN_021cba28();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


