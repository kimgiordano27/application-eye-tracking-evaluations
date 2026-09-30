/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 056742bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetColorScaleAndOffset(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  long unaff_x20;
  undefined8 *puVar12;
  long unaff_x21;
  undefined8 *puVar13;
  undefined8 *unaff_x22;
  undefined8 uVar14;
  long *plVar15;
  long unaff_x23;
  undefined8 *puVar16;
  int iVar17;
  long unaff_x24;
  undefined8 *puVar18;
  uint uVar19;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  
  puVar12 = *(undefined8 **)(unaff_x20 + 0xe0);
  puVar18 = *(undefined8 **)(unaff_x24 + 0xe8);
  puVar13 = *(undefined8 **)(unaff_x21 + 0xf0);
  puVar16 = *(undefined8 **)(unaff_x23 + 0xf90);
  if ((*(byte *)(unaff_x25 + 0x68b) & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<MethodBase>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MethodInfo>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MockTouch>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<LayoutManager>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<ModifierSpec>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<Module>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MeshGenerationNodeImpl>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MethPropWithType>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MultiLine>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<NLogMessage>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MeshWriteData>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MeshFilter>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MemberAssignment>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<MemberInfo>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<Name>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00dd0);
    FUN_02d965b8(UnityEngine_UIElements_EventBase<KeyUpEvent>_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0x68b) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  lVar6 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_03c2d458(lVar6,*puVar12);
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  lVar7 = thunk_FUN_02dd3144(*puVar18);
  FUN_03bfedd4(lVar7,uVar14,*puVar13);
  uVar8 = FUN_0442a9f0(*puVar16);
  puVar1 = PTR_DAT_06a00dd0;
  if ((uVar8 & 1) == 0) {
LAB_0567459c:
    if (lVar7 == 0) goto LAB_05674718;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_06a00dd0 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) goto LAB_05674718;
    iVar4 = *(int *)(lVar9 + 0xb0);
    if (iVar4 != -1) {
      if (lVar7 == 0) goto LAB_05674718;
      FUN_03bfff24(lVar7,iVar4,
                   *(undefined8 *)System_Collections_Generic_List<LayoutManager>_TypeInfo);
    }
    lVar9 = *(long *)(*(long *)puVar1 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02dcfd18();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if ((lVar9 == 0) || (plVar15 = *(long **)(lVar9 + 0xb8), plVar15 == (long *)0x0))
    goto LAB_05674718;
    lVar9 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)System_Collections_Generic_List<MemberAssignment>_TypeInfo) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_056744f0;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02dd004c(plVar15,*(long *)
                                    System_Collections_Generic_List<MemberAssignment>_TypeInfo,0);
LAB_056744f0:
    iVar4 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    puVar2 = System_Collections_Generic_List<MemberInfo>_TypeInfo;
    puVar1 = System_Collections_Generic_List<LayoutManager>_TypeInfo;
    if (iVar4 < 1) goto LAB_0567459c;
    iVar17 = 0;
    do {
      lVar9 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05674568;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)puVar2,0);
LAB_05674568:
      uVar5 = (*(code *)*puVar12)(plVar15,iVar17,puVar12[1]);
      if (lVar7 == 0) goto LAB_05674718;
      FUN_03bfff24(lVar7,uVar5,*(undefined8 *)puVar1);
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar4);
  }
  puVar3 = System_Collections_Generic_List<ModifierSpec>_TypeInfo;
  puVar2 = System_Collections_Generic_List<MethodInfo>_TypeInfo;
  puVar1 = System_Collections_Generic_List<MethodBase>_TypeInfo;
  if (0 < *(int *)(lVar7 + 0x20)) {
    FUN_03bff8a8(&stack0x00000008,lVar7,
                 *(undefined8 *)System_Collections_Generic_List<Module>_TypeInfo);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar8 = FUN_0514450c(&stack0x00000020,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      iVar4 = FUN_0566e6f0(param_1,in_stack_00000030 & 0xffffffff);
      if (iVar4 != 0) {
        uVar8 = FUN_0566e768(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar8,uVar8 & 0xffffffff);
        }
        FUN_03c2e698(lVar6,uVar8 & 0xffffffff,*(undefined8 *)puVar3);
      }
    }
    FUN_05144508(&stack0x00000020,*(undefined8 *)puVar1);
  }
  puVar1 = System_Collections_Generic_List<Name>_TypeInfo;
  if (lVar6 == 0) {
LAB_05674718:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (0 < *(int *)(lVar6 + 0x20)) {
    lVar7 = FUN_03774f48(lVar6,*(undefined8 *)System_Collections_Generic_List<Name>_TypeInfo);
    if (lVar7 == 0) goto LAB_05674718;
    uVar10 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar10) {
      uVar19 = 0;
      do {
        if (uVar10 <= uVar19) {
LAB_0567471c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar9 = *(long *)(param_1 + 0xf0);
        if (lVar9 == 0) goto LAB_05674718;
        uVar10 = *(uint *)(lVar7 + (long)(int)uVar19 * 4 + 0x20);
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_0567471c;
        for (lVar9 = lVar9 + (ulong)uVar10 * 0x18; uVar10 = *(uint *)(lVar9 + 0x30),
            -1 < (int)uVar10; lVar9 = lVar9 + (ulong)uVar10 * 0x18) {
          FUN_03c2e698(lVar6,uVar10,*(undefined8 *)puVar3);
          lVar9 = *(long *)(param_1 + 0xf0);
          if (lVar9 == 0) goto LAB_05674718;
          if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_0567471c;
        }
        uVar10 = *(uint *)(lVar7 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)uVar10);
    }
  }
  FUN_03774f48(lVar6,*(undefined8 *)puVar1);
  return;
}


