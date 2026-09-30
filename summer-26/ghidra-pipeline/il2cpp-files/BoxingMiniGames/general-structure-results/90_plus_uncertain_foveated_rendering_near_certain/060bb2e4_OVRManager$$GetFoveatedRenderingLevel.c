/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 060bb2e4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRManager__GetFoveatedRenderingLevel(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long in_x9;
  long *in_x10;
  int *piVar4;
  long unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_060bb32c;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bb32c:
  (*(code *)*puVar2)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x21 != 0) {
    uVar3 = FUN_060e3a00();
    uVar1 = unaff_w22 | 2;
    if ((uVar3 & 1) == 0) {
      uVar1 = unaff_w22;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


