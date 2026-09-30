/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 027ed624
PROGRAM: vrlegs-libil2cpp.so
SCORE: 116
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_foveation_hits_1;frame_or_lifecycle_behavior;functionality_foveated_rendering
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  uint in_w9;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0 || (unaff_w21 & 0x200) != 0) {
    in_w9 = in_w9 | 0x2000000;
  }
  thunk_FUN_01a4b338();
  *(uint *)(unaff_x19 + 0x38) = in_w9;
  if ((((unaff_w20 >> 2 & 1) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) &&
     (uVar2 = FUN_027edf4c(), (uVar2 >> 3 & 1) == 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027edb08();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cd7210;
  uVar3 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000008,0);
  if ((uVar3 & 1) != 0) {
    FUN_027edb7c();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027e063c();
  FUN_027ede5c();
  return;
}


