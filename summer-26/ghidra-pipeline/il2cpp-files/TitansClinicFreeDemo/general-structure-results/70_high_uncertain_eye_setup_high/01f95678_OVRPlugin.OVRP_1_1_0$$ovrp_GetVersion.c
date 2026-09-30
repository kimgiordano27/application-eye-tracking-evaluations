/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetVersion
ENTRY_POINT: 01f95678
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetVersion(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  long lVar7;
  byte unaff_w25;
  uint unaff_w26;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (*(int *)(*param_1 + 0xe0) == 0) {
      thunk_FUN_01220628(*param_1);
    }
    iVar2 = FUN_01f95b1c(unaff_x22,param_2,in_stack_00000010);
    if ((unaff_x19 != 0) && (iVar2 == 0)) {
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_01f9581c;
      plVar3 = (long *)*unaff_x28;
      if (plVar3 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_01f9581c;
      plVar3 = (long *)*unaff_x29;
      if (plVar3 == (long *)0x0) goto LAB_01f95820;
      (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar2 = FUN_01f95eb8(uVar4);
    }
    if (iVar2 == 0) {
      if ((*(uint *)(unaff_x21 + 0x18) <= unaff_w20) || (*(uint *)(unaff_x21 + 0x18) <= unaff_w26))
      goto LAB_01f9581c;
      lVar6 = *unaff_x28;
      lVar7 = *unaff_x29;
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar2 = FUN_01f96308(lVar6,lVar7);
      unaff_w25 = unaff_w25 | iVar2 == 0;
    }
    uVar1 = unaff_w26;
    if (iVar2 != 2) {
      uVar1 = unaff_w20;
    }
    unaff_w26 = unaff_w26 + 1;
    unaff_w25 = unaff_w25 & iVar2 != 2;
    if (in_stack_00000018._4_4_ == unaff_w26) {
      if (unaff_w25 != 0) {
        uVar4 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar5 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar5,uVar4,0);
        uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar5,uVar4);
      }
      if (uVar1 < *(uint *)(unaff_x21 + 0x18)) {
        return *(undefined8 *)(unaff_x21 + (long)(int)uVar1 * 8 + 0x20);
      }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_01f9581c;
    unaff_x28 = (long *)(unaff_x21 + (long)(int)uVar1 * 8 + 0x20);
    plVar3 = (long *)*unaff_x28;
    if (plVar3 == (long *)0x0) goto LAB_01f95820;
    unaff_x22 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_01f9581c;
    unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w26 * 8 + 0x20);
    plVar3 = (long *)*unaff_x29;
    if (plVar3 == (long *)0x0) goto LAB_01f95820;
    param_2 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
    param_1 = (long *)PTR_DAT_027c1390;
    unaff_w20 = uVar1;
  } while( true );
}


