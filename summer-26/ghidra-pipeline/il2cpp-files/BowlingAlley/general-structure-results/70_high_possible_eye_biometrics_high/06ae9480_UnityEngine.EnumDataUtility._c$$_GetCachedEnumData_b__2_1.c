/*
FUNCTION_NAME: UnityEngine.EnumDataUtility.<>c$$<GetCachedEnumData>b__2_1
ENTRY_POINT: 06ae9480
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_EnumDataUtility_<>c__<GetCachedEnumData>b__2_1(ulong param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280008);
                    /* try { // try from 06ae9498 to 06be961f has its CatchHandler @ 06ae9498
                       catch() { ... } // from try @ 06ae9498 with catch @ 06ae9498
                       catch() { ... } // from try @ 06ae9694 with catch @ 06ae9498
                       catch() { ... } // from try @ 06ae96bc with catch @ 06ae9498
                       catch() { ... } // from try @ 06ae96fc with catch @ 06ae9498
                       catch() { ... } // from try @ 06ae9768 with catch @ 06ae9498
                       catch() { ... } // from try @ 06ae97b8 with catch @ 06ae9498 */
    thunk_FUN_032e1da0(Method_System_ValueTuple<EventModifiers,_Vector2>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_ValueTuple<ExceptionDispatchInfo,_bool>__ctor__);
    *(undefined1 *)(unaff_x20 + 800) = 1;
  }
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar1);
    lVar1 = *unaff_x23;
  }
  plVar2 = *(long **)(lVar1 + 0xb8);
  if (*plVar2 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar1);
      plVar2 = *(long **)(*unaff_x23 + 0xb8);
    }
    lVar1 = plVar2[1];
    uVar3 = *(undefined8 *)Method_System_ValueTuple<EventModifiers,_Vector2>__ctor__;
    uVar4 = *(undefined8 *)Method_System_ValueTuple<ExceptionDispatchInfo,_bool>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_07280008 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_0644a524(lVar1,uVar3,uVar4,0);
    lVar1 = *unaff_x23;
    **(undefined8 **)(lVar1 + 0xb8) = uVar3;
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar1);
    lVar1 = *unaff_x23;
  }
  *param_2 = **(undefined8 **)(lVar1 + 0xb8);
  return;
}


