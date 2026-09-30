/*
FUNCTION_NAME: FUN_06ae9464
ENTRY_POINT: 06ae9464
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context
*/


void FUN_06ae9464(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__;
  if ((DAT_076e3320 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280008);
    thunk_FUN_032e1da0(Method_System_ValueTuple<EventModifiers,_Vector2>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_ValueTuple<ExceptionDispatchInfo,_bool>__ctor__);
    DAT_076e3320 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar2);
    lVar2 = *(long *)puVar1;
  }
  plVar3 = *(long **)(lVar2 + 0xb8);
  if (*plVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar2);
      plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
    }
    lVar2 = plVar3[1];
    uVar4 = *(undefined8 *)Method_System_ValueTuple<EventModifiers,_Vector2>__ctor__;
    uVar5 = *(undefined8 *)Method_System_ValueTuple<ExceptionDispatchInfo,_bool>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_07280008 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_0644a524(lVar2,uVar4,uVar5,0);
    lVar2 = *(long *)puVar1;
    **(undefined8 **)(lVar2 + 0xb8) = uVar4;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar2);
    lVar2 = *(long *)puVar1;
  }
  *param_1 = **(undefined8 **)(lVar2 + 0xb8);
  return;
}


