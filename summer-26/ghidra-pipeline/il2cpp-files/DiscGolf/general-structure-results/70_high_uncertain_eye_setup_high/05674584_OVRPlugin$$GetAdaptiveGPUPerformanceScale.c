/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 05674584
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAdaptiveGPUPerformanceScale(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar10;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    FUN_03bfff24();
    puVar2 = System_Collections_Generic_List<MethodInfo>_TypeInfo;
    puVar1 = System_Collections_Generic_List<MethodBase>_TypeInfo;
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 == unaff_w23) break;
    lVar6 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05674568;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c();
LAB_05674568:
    (*(code *)*puVar4)();
    if (unaff_x21 == 0) goto LAB_05674718;
  }
  if (0 < *(int *)(unaff_x21 + 0x20)) {
    FUN_03bff8a8(&stack0x00000008);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar5 = FUN_0514450c(&stack0x00000020,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      iVar3 = FUN_0566e6f0();
      if (iVar3 != 0) {
        uVar5 = FUN_0566e768();
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar5,uVar5 & 0xffffffff);
        }
        FUN_03c2e698();
      }
    }
    FUN_05144508(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (unaff_x20 == 0) {
LAB_05674718:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(unaff_x20 + 0x20)) {
    lVar6 = FUN_03774f48();
    if (lVar6 == 0) goto LAB_05674718;
    uVar7 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar7) {
      uVar10 = 0;
      while (uVar10 < uVar7) {
        lVar8 = *(long *)(unaff_x19 + 0xf0);
        if (lVar8 == 0) goto LAB_05674718;
        uVar7 = *(uint *)(lVar6 + (long)(int)uVar10 * 4 + 0x20);
        if (*(uint *)(lVar8 + 0x18) <= uVar7) break;
        for (lVar8 = lVar8 + (ulong)uVar7 * 0x18; uVar7 = *(uint *)(lVar8 + 0x30), -1 < (int)uVar7;
            lVar8 = lVar8 + (ulong)uVar7 * 0x18) {
          FUN_03c2e698();
          lVar8 = *(long *)(unaff_x19 + 0xf0);
          if (lVar8 == 0) goto LAB_05674718;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0567471c;
        }
        uVar7 = *(uint *)(lVar6 + 0x18);
        uVar10 = uVar10 + 1;
        if ((int)uVar7 <= (int)uVar10) goto LAB_056746f0;
      }
LAB_0567471c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
LAB_056746f0:
  FUN_03774f48();
  return;
}


