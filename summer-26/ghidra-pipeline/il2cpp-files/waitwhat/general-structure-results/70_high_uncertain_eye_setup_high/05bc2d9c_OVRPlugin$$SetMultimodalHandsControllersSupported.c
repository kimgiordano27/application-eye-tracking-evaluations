/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 05bc2d9c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetMultimodalHandsControllersSupported(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
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
  
  (*(code *)*param_1)(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x22 != 0) {
    fVar5 = (float)FUN_05be39d4();
    if (0.0 < fVar5) {
      *unaff_x19 = 1;
      unaff_s8 = fVar5;
    }
    uVar1 = FUN_05bc2f70();
    if ((uVar1 & 1) == 0) {
      return unaff_s8;
    }
    if (unaff_x21 != (long *)0x0) {
      lVar3 = *unaff_x21;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07112248) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
            goto LAB_05bc2e54;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08();
LAB_05bc2e54:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (unaff_x22 != 0) {
        fVar5 = (float)FUN_05be3d74();
        if (fVar5 <= unaff_s8) {
          return unaff_s8;
        }
        *unaff_x19 = 2;
        return fVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


