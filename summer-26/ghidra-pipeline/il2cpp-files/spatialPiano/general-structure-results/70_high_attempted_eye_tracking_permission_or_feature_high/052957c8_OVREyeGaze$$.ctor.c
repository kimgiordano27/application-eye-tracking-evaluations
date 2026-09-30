/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 052957c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  FUN_05054f60();
  puVar1 = PTR_DAT_067cbb40;
  if (unaff_x20 != 0) {
    FUN_037db8fc();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0475f968();
    if (lVar3 != 0) {
      FUN_037db540(lVar3,uVar2,
                   *(undefined8 *)
                    System_Linq_Expressions_PrimitiveParameterExpression<ulong>_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


