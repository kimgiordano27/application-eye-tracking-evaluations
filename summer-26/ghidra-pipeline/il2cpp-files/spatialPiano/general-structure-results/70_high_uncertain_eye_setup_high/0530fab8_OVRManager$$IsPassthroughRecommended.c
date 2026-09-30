/*
FUNCTION_NAME: OVRManager$$IsPassthroughRecommended
ENTRY_POINT: 0530fab8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__IsPassthroughRecommended(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x8a0));
  FUN_02f08768(System_Predicate<StyleSelectorPart>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x1ba) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x23 == (long *)0x0) goto LAB_0530fcdc;
  lVar2 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<StyleSelectorPart>_TypeInfo) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto FUN_0530fb38;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
FUN_0530fb38:
  lVar2 = (*(code *)*puVar1)();
  *unaff_x19 = 0;
  uVar4 = FUN_053126c8();
  fVar7 = 0.0;
  if ((uVar4 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_0530fcdc;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<TextSpan>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_0530fbbc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0();
LAB_0530fbbc:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 == 0) goto LAB_0530fcdc;
    fVar6 = (float)FUN_05335a84(lVar2,&stack0x00000020,unaff_w20 & 1,0);
    if (0.0 < fVar6) {
      *unaff_x19 = 1;
      fVar7 = fVar6;
    }
  }
  uVar4 = FUN_05312778();
  if ((uVar4 & 1) == 0) {
    return fVar7;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<TextSpan>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_0530fc74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0();
LAB_0530fc74:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 != 0) {
      fVar6 = (float)FUN_05335e24(lVar2,&stack0x00000020,unaff_w20 & 1,0);
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


