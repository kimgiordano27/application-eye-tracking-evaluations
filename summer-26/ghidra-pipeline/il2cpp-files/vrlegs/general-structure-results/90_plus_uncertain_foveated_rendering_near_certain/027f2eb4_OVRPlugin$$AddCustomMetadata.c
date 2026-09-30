/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 027f2eb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void OVRPlugin__AddCustomMetadata(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)thunk_FUN_01a89e68(*unaff_x25);
  FUN_025c6edc();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000008,0);
  if ((uVar2 & 1) == 0) {
    if (unaff_x21 == 0) goto LAB_027f2fac;
  }
  else {
    uVar2 = FUN_027e971c();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d75b4(&stack0x00000008,0);
    }
    if (unaff_x21 == 0) goto LAB_027f2fac;
    FUN_027edb7c();
  }
  uVar2 = FUN_027e971c();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_027f1c88(), (uVar2 & 1) == 0)) {
    if (plVar1 == (long *)0x0) {
LAB_027f2fac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar1 + 0x178))(plVar1);
  }
  return;
}


