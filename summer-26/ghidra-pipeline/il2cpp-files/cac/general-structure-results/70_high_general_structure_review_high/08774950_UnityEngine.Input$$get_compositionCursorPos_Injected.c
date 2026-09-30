/*
FUNCTION_NAME: UnityEngine.Input$$get_compositionCursorPos_Injected
ENTRY_POINT: 08774950
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


undefined4 UnityEngine_Input__get_compositionCursorPos_Injected(void)

{
  undefined4 unaff_w19;
  long lVar1;
  long unaff_x21;
  undefined4 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  _uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar1 = *(long *)(unaff_x21 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_087f9138();
  }
  if (DAT_0969d7b0 == (code *)0x0) {
    DAT_0969d7b0 = (code *)FUN_03f13348(
                                       "UnityEngine.Avatar::Internal_GetZYPostQ_Injected(System.IntPtr,System.Int32,UnityEngine.Quaternion&,UnityEngine.Quaternion&,UnityEngine.Quaternion&)"
                                       );
  }
  (*DAT_0969d7b0)(lVar1,unaff_w19,&stack0x00000020,&stack0x00000010);
  return uStack0000000000000000;
}


