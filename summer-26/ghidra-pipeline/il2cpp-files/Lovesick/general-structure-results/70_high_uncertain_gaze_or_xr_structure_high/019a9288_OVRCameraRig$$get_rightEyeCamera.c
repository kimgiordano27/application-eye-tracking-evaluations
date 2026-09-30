/*
FUNCTION_NAME: OVRCameraRig$$get_rightEyeCamera
ENTRY_POINT: 019a9288
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__get_rightEyeCamera(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x572) = 1;
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    thunk_FUN_0269b7cc(*(long *)(param_2 + 0x60),0);
    if (*(long *)(param_2 + 0x68) != 0) {
      thunk_FUN_0269b7cc(*(long *)(param_2 + 0x68),0);
      puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(long *)(param_2 + 0x70) != 0) {
        thunk_FUN_0269b7cc(*(long *)(param_2 + 0x70),0);
        uVar2 = FUN_0269e56c(0);
        uVar3 = *(undefined8 *)(param_2 + 0x50);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


