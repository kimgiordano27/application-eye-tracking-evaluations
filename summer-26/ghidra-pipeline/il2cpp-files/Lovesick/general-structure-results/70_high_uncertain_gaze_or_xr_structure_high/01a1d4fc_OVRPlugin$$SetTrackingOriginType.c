/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 01a1d4fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingOriginType(ulong param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x21;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x21 + 0x268);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x9da) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = FUN_02681b9c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_01a1d5a4;
                    /* try { // try from 01a1d550 to 01b1d577 has its CatchHandler @ 01a1dfa4 */
    FUN_0266622c(*(long *)(param_2 + 0x38),0,0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = FUN_02681b9c(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_01a1ca08(*(long *)(param_2 + 0x20),0);
    return;
  }
LAB_01a1d5a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


