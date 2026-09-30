/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 05322510
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


ulong OVRPlugin__GetHandTrackingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  ulong uVar6;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  
  plVar5 = *(long **)(unaff_x20 + 0x90);
  lVar3 = *plVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *plVar5;
  }
  puVar2 = UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo;
  puVar1 = System_Data_DeletedRowInaccessibleException_TypeInfo;
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0491fdd0(&stack0x00000010,**(long **)(lVar3 + 0xb8),
               *(undefined8 *)System_ComponentModel_DelegatingTypeDescriptionProvider_TypeInfo);
  do {
    uVar4 = FUN_04bbd038(&stack0x00000010,*(undefined8 *)puVar2);
    uVar6 = in_stack_00000028;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      break;
    }
    if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = (**(code **)(*in_stack_00000020 + 0x8c8))();
  } while ((uVar4 & 1) == 0);
  FUN_04bbd150(&stack0x00000010,*(undefined8 *)puVar1);
  return uVar6 & 0xffffffff;
}


