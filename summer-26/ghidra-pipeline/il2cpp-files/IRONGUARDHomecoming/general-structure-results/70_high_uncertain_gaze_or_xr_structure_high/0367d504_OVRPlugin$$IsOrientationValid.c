/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 0367d504
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsOrientationValid(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *unaff_x24;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x24;
    }
    uVar3 = **(undefined8 **)(param_2 + 0xb8);
    uVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_60__
                              );
    FUN_02e6c0a0(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_65__,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_01f51358(puVar2,uVar1);
  }
  FUN_0230b6f4();
  return;
}


