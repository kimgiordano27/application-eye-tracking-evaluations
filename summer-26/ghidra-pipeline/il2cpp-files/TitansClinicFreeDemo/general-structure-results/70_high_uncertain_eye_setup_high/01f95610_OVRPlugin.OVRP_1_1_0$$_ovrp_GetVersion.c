/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetVersion
ENTRY_POINT: 01f95610
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0___ovrp_GetVersion(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  uint uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  bVar2 = false;
  uVar10 = 1;
  uVar7 = 0;
  do {
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_01f9581c;
    plVar11 = (long *)(unaff_x21 + (long)(int)uVar7 * 8 + 0x20);
    plVar4 = (long *)*plVar11;
    if (plVar4 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar5 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_01f9581c;
    plVar12 = (long *)(unaff_x21 + (long)(int)uVar10 * 8 + 0x20);
    plVar4 = (long *)*plVar12;
    if (plVar4 == (long *)0x0) goto LAB_01f95820;
    uVar6 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
    }
    iVar3 = FUN_01f95b1c(uVar5,uVar6,in_stack_00000010);
    if ((unaff_x19 != 0) && (iVar3 == 0)) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_01f9581c;
      plVar4 = (long *)*plVar11;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      uVar5 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_01f9581c;
      plVar4 = (long *)*plVar12;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95eb8(uVar5);
    }
    if (iVar3 == 0) {
      if ((*(uint *)(unaff_x21 + 0x18) <= uVar7) || (*(uint *)(unaff_x21 + 0x18) <= uVar10))
      goto LAB_01f9581c;
      lVar8 = *plVar11;
      lVar9 = *plVar12;
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar3 = FUN_01f96308(lVar8,lVar9);
      bVar2 = (bool)(bVar2 | iVar3 == 0);
    }
    uVar1 = uVar10;
    if (iVar3 != 2) {
      uVar1 = uVar7;
    }
    uVar10 = uVar10 + 1;
    bVar2 = (bool)(bVar2 & iVar3 != 2);
    uVar7 = uVar1;
  } while (in_stack_00000018._4_4_ != uVar10);
  if (bVar2) {
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar6 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar6,uVar5);
  }
  if (uVar1 < *(uint *)(unaff_x21 + 0x18)) {
    return *(undefined8 *)(unaff_x21 + (long)(int)uVar1 * 8 + 0x20);
  }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


