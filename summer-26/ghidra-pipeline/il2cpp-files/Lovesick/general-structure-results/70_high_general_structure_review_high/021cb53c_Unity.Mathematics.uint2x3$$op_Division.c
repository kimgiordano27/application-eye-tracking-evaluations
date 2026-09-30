/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$op_Division
ENTRY_POINT: 021cb53c
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


void Unity_Mathematics_uint2x3__op_Division(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x19 + 0x688) = 1;
  }
  iVar1 = **(int **)(*unaff_x20 + 0xb8) + 1;
  **(int **)(*unaff_x20 + 0xb8) = iVar1;
  if (1 < iVar1) {
    return;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8844);
  puVar3 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  if (lVar4 != 0) {
    FUN_011c21b8(lVar4,0,*(undefined8 *)StringLiteral_11723,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0213f8cc(lVar4,0);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar4 != 0) {
      FUN_016f27fc(lVar4,0,*(undefined8 *)
                            Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass7_0_<DOPath>b__0__
                   ,0);
      Unity_Mathematics_bool3__op_BitwiseAnd(lVar4,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        FUN_016f27fc(lVar4,0,*(undefined8 *)
                              Method_Unity_Collections_NativeArray<Vector3>_get_IsCreated__,0);
        FUN_02142604(lVar4,0);
        FUN_021cb698();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


