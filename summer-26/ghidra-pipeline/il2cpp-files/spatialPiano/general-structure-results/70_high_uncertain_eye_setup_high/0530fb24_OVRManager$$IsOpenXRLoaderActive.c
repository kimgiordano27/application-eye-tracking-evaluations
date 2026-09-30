/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 0530fb24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__IsOpenXRLoaderActive(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar1 = (*(code *)*param_1)();
  *unaff_x19 = 0;
  uVar2 = FUN_053126c8();
  fVar7 = 0.0;
  if ((uVar2 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_0530fcdc;
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<TextSpan>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_0530fbbc;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0();
LAB_0530fbbc:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar1 == 0) goto LAB_0530fcdc;
    fVar6 = (float)FUN_05335a84(lVar1,&stack0x00000020,unaff_w20 & 1,0);
    if (0.0 < fVar6) {
      *unaff_x19 = 1;
      fVar7 = fVar6;
    }
  }
  uVar2 = FUN_05312778();
  if ((uVar2 & 1) == 0) {
    return fVar7;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<TextSpan>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_0530fc74;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0();
LAB_0530fc74:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar1 != 0) {
      fVar6 = (float)FUN_05335e24(lVar1,&stack0x00000020,unaff_w20 & 1,0);
      if (fVar6 <= fVar7) {
        return fVar7;
      }
      *unaff_x19 = 2;
      return fVar6;
    }
  }
LAB_0530fcdc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


