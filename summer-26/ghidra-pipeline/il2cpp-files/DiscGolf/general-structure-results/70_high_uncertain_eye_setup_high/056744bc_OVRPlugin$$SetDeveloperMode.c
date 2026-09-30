/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 056744bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDeveloperMode(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar10;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_056744f0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_02dd004c();
LAB_056744f0:
  iVar3 = (*(code *)*puVar4)();
  puVar1 = System_Collections_Generic_List<MemberInfo>_TypeInfo;
  if (iVar3 < 1) {
    if (unaff_x21 == 0) goto LAB_05674718;
  }
  else {
    iVar10 = 0;
    do {
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05674568;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c();
LAB_05674568:
      (*(code *)*puVar4)();
      if (unaff_x21 == 0) goto LAB_05674718;
      FUN_03bfff24();
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  puVar2 = System_Collections_Generic_List<MethodInfo>_TypeInfo;
  puVar1 = System_Collections_Generic_List<MethodBase>_TypeInfo;
  if (0 < *(int *)(unaff_x21 + 0x20)) {
    FUN_03bff8a8(&stack0x00000008);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar8 = FUN_0514450c(&stack0x00000020,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      iVar3 = FUN_0566e6f0();
      if (iVar3 != 0) {
        uVar8 = FUN_0566e768();
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar8,uVar8 & 0xffffffff);
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
    uVar5 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar5) {
      uVar11 = 0;
      do {
        if (uVar5 <= uVar11) {
LAB_0567471c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar7 = *(long *)(unaff_x19 + 0xf0);
        if (lVar7 == 0) goto LAB_05674718;
        uVar5 = *(uint *)(lVar6 + (long)(int)uVar11 * 4 + 0x20);
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0567471c;
        for (lVar7 = lVar7 + (ulong)uVar5 * 0x18; uVar5 = *(uint *)(lVar7 + 0x30), -1 < (int)uVar5;
            lVar7 = lVar7 + (ulong)uVar5 * 0x18) {
          FUN_03c2e698();
          lVar7 = *(long *)(unaff_x19 + 0xf0);
          if (lVar7 == 0) goto LAB_05674718;
          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0567471c;
        }
        uVar5 = *(uint *)(lVar6 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar5);
    }
  }
  FUN_03774f48();
  return;
}


