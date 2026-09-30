/*
FUNCTION_NAME: OVRCameraRig$$get_leftEyeAnchor
ENTRY_POINT: 019a92b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__get_leftEyeAnchor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    thunk_FUN_0269b7cc(*(long *)(unaff_x19 + 0x68),0);
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      thunk_FUN_0269b7cc(*(long *)(unaff_x19 + 0x70),0);
      uVar2 = FUN_0269e56c(0);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      if ((uVar2 & 1) != 0) {
        FUN_0268c114();
        return;
      }
      FUN_0268c1d0(uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


