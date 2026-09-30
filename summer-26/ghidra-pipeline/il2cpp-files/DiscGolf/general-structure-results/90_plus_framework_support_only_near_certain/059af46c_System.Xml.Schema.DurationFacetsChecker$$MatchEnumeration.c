/*
FUNCTION_NAME: System.Xml.Schema.DurationFacetsChecker$$MatchEnumeration
ENTRY_POINT: 059af46c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x059af7f0) */
/* WARNING: Removing unreachable block (ram,0x059af90c) */

void System_Xml_Schema_DurationFacetsChecker__MatchEnumeration(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *unaff_x20;
  long unaff_x22;
  uint uVar14;
  long *unaff_x27;
  uint unaff_w28;
  uint uStack0000000000000004;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  thunk_FUN_02df485c();
                    /* try { // try from 059af474 to 05aaf483 has its CatchHandler @ 059afbd8 */
  lVar13 = *(long *)PTR_DAT_06a0f520;
  lVar6 = *(long *)(lVar13 + 0x20);
                    /* try { // try from 059af488 to 05aaf493 has its CatchHandler @ 059afbbc */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
                    /* try { // try from 059af4a0 to 05aaf4a7 has its CatchHandler @ 059afbb8 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar6 = *(long *)(lVar13 + 0x20);
                    /* try { // try from 059af4b8 to 05aaf4c7 has its CatchHandler @ 059afbb4 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
                    /* try { // try from 059af4c8 to 05aaf4d7 has its CatchHandler @ 059afbb0 */
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
                    /* try { // try from 059af4e0 to 05aaf4e7 has its CatchHandler @ 059afbac */
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 059af4f8 to 05aaf503 has its CatchHandler @ 059afba8 */
  in_stack_00000040 = (**(code **)(*plVar7 + 0x178))(plVar7,0x104,*(undefined8 *)(*plVar7 + 0x180));
  in_stack_00000020 = &stack0x00000040;
  in_stack_00000018 = 0;
                    /* try { // try from 059af520 to 05aaf523 has its CatchHandler @ 059afb68 */
  plVar7 = (long *)FUN_054a6e40();
                    /* try { // try from 059af524 to 05aaf52f has its CatchHandler @ 059afba4 */
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 059af530 to 05aaf543 has its CatchHandler @ 059afbc8 */
  lVar6 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_0_1_2_TypeInfo) {
        puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_059af580;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
                    /* try { // try from 059af56c to 05aaf573 has its CatchHandler @ 059afba0 */
  puVar8 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)OVRPlugin_OVRP_0_1_2_TypeInfo,0);
LAB_059af580:
  in_stack_00000038 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  puVar4 = PTR_DAT_06a12a38;
  puVar3 = PTR_DAT_069fbff8;
  uStack0000000000000004 = (uint)(in_stack_00000038 == (long *)0x0);
  if (in_stack_00000038 != (long *)0x0) {
    uVar14 = 1;
    do {
      plVar7 = in_stack_00000038;
      lVar6 = *in_stack_00000038;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059af614;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*(long *)puVar3,0);
LAB_059af614:
      uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = in_stack_00000038;
      puVar2 = PTR_DAT_069fbff0;
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000038 == (long *)0x0) goto LAB_059af7e4;
        lVar6 = *in_stack_00000038;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 == 0) goto LAB_059af7bc;
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_059af7a4;
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *in_stack_00000038;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059af678;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*(long *)puVar5,0);
LAB_059af678:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *(long *)puVar4;
      iVar1 = *(int *)(lVar6 + 0x10) - *(int *)(unaff_x22 + 0x10);
      if (*plVar7 == lVar13) {
        uVar9 = (**(code **)(lVar13 + 0x1b8))(plVar7,*(undefined8 *)(lVar13 + 0x1c0));
        uVar9 = FUN_059afa8c(uVar9,*(undefined4 *)(unaff_x22 + 0x10),iVar1,&stack0x00000040,0);
        lVar6 = in_stack_00000048;
        uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        System_Xml_Schema_StringFacetsChecker__CheckBuiltInFacets(lVar6,uVar10,uVar9);
      }
      else if ((*plVar7 == *unaff_x27) && (uVar11 = FUN_059b0184(plVar7), (uVar11 & 1) != 0)) {
        uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        uVar9 = FUN_059afa8c(uVar9,*(undefined4 *)(unaff_x22 + 0x10),iVar1,&stack0x00000040,1);
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(0,uVar9);
        }
        FUN_059a62fc(in_stack_00000048,uVar9,0);
      }
      uVar14 = 0;
    } while (in_stack_00000038 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_059af7a4:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_059af7d8;
    }
  }
LAB_059af7bc:
  puVar8 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*(long *)PTR_DAT_069fbff0,0);
LAB_059af7d8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_059af7e4:
  lVar6 = in_stack_00000048;
  if ((uVar14 & unaff_w28) != 0) {
    uVar9 = (**(code **)(*unaff_x20 + 0x1c8))();
    lVar13 = (**(code **)(*unaff_x20 + 0x1c8))();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = FUN_059afa8c(uVar9,0,*(undefined4 *)(lVar13 + 0x10),&stack0x00000040,1);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar9,uVar9);
    }
    FUN_059a62fc(lVar6,uVar9,0);
  }
  FUN_02d2a0b4(&stack0x00000018);
  plVar7 = (long *)*in_stack_00000030;
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_059af8b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)puVar2,0);
LAB_059af8b4:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


