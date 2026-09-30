/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 056743e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AddCustomMetadata(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 *unaff_x23;
  int iVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar4 = FUN_0442a9f0(*unaff_x23);
  puVar1 = PTR_DAT_06a00dd0;
  if ((uVar4 & 1) == 0) {
LAB_0567459c:
    if (unaff_x21 == 0) goto LAB_05674718;
  }
  else {
    lVar5 = *(long *)(*(long *)PTR_DAT_06a00dd0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_05674718;
    if (*(int *)(lVar5 + 0xb0) != -1) {
      if (unaff_x21 == 0) goto LAB_05674718;
      FUN_03bfff24();
    }
    lVar5 = *(long *)(*(long *)puVar1 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (plVar10 = *(long **)(lVar5 + 0xb8), plVar10 == (long *)0x0))
    goto LAB_05674718;
    lVar5 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Collections_Generic_List<MemberAssignment>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_056744f0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   System_Collections_Generic_List<MemberAssignment>_TypeInfo,0);
LAB_056744f0:
    iVar3 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    puVar1 = System_Collections_Generic_List<MemberInfo>_TypeInfo;
    if (iVar3 < 1) goto LAB_0567459c;
    iVar11 = 0;
    do {
      lVar5 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05674568;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar1,0);
LAB_05674568:
      (*(code *)*puVar6)(plVar10,iVar11,puVar6[1]);
      if (unaff_x21 == 0) goto LAB_05674718;
      FUN_03bfff24();
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar3);
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
    while (uVar4 = FUN_0514450c(&stack0x00000020,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      iVar3 = FUN_0566e6f0();
      if (iVar3 != 0) {
        uVar4 = FUN_0566e768();
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar4,uVar4 & 0xffffffff);
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
    lVar5 = FUN_03774f48();
    if (lVar5 == 0) goto LAB_05674718;
    uVar7 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar7) {
      uVar12 = 0;
      do {
        if (uVar7 <= uVar12) {
LAB_0567471c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar8 = *(long *)(unaff_x19 + 0xf0);
        if (lVar8 == 0) goto LAB_05674718;
        uVar7 = *(uint *)(lVar5 + (long)(int)uVar12 * 4 + 0x20);
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0567471c;
        for (lVar8 = lVar8 + (ulong)uVar7 * 0x18; uVar7 = *(uint *)(lVar8 + 0x30), -1 < (int)uVar7;
            lVar8 = lVar8 + (ulong)uVar7 * 0x18) {
          FUN_03c2e698();
          lVar8 = *(long *)(unaff_x19 + 0xf0);
          if (lVar8 == 0) goto LAB_05674718;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0567471c;
        }
        uVar7 = *(uint *)(lVar5 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar7);
    }
  }
  FUN_03774f48();
  return;
}


