/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 0909bf88
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodeOrientationValid(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  FUN_0909bffc();
  puVar1 = PTR_DAT_0ac78be8;
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x130);
    uVar2 = FUN_0a17834c(*(long *)(unaff_x19 + 200),0);
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_0909ab00(uVar3,uVar4,uVar2);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
    thunk_FUN_049ee3d8(unaff_x19 + 0x140,uVar3);
    FUN_08fdfedc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


