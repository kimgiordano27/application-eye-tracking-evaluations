/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 04f5dce4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetControllerLocalizedVibration(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  float fVar5;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar1 = (undefined8 *)FUN_02b7654c();
  (*(code *)*puVar1)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x22 != 0) {
    fVar5 = (float)FUN_04f7f3c0();
    if (0.0 < fVar5) {
      *unaff_x19 = 1;
      unaff_s8 = fVar5;
    }
    uVar2 = FUN_04f5ded0();
    if ((uVar2 & 1) == 0) {
      return unaff_s8;
    }
    if (unaff_x21 != (long *)0x0) {
      lVar3 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)System_Runtime_Serialization_IObjectReference_var)
          {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
            goto LAB_04f5ddb4;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f5ddb4:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (unaff_x22 != 0) {
        fVar5 = (float)FUN_04f7f760();
        if (fVar5 <= unaff_s8) {
          return unaff_s8;
        }
        *unaff_x19 = 2;
        return fVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


