/*
FUNCTION_NAME: OVREyeGaze$$Awake
ENTRY_POINT: 033518c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Awake(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x21;
  
  FUN_03351a3c();
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<MaskableGraphic>_get_Current__;
  lVar2 = *(long *)
           Method_System_Collections_Generic_HashSet_Enumerator<MaskableGraphic>_get_Current__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) != '\0') {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(char *)(unaff_x21 + 0x18) == '\0') {
      thunk_FUN_01c273e8(Method_System_Collections_Generic_List_Enumerator<PolyNode>_Dispose__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c();
    }
  }
  FUN_033211cc();
  return;
}


