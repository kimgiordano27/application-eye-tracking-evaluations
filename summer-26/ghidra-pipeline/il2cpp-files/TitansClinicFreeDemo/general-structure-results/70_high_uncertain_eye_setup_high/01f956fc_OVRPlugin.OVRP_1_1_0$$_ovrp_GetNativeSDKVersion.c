/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetNativeSDKVersion
ENTRY_POINT: 01f956fc
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


undefined8 OVRPlugin_OVRP_1_1_0___ovrp_GetNativeSDKVersion(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  uint uVar5;
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
    iVar1 = FUN_01f95eb8(unaff_x22);
    uVar5 = unaff_w20;
    do {
      if (iVar1 == 0) {
        if ((*(uint *)(unaff_x21 + 0x18) <= uVar5) || (*(uint *)(unaff_x21 + 0x18) <= unaff_w26))
        goto LAB_01f9581c;
        lVar6 = *unaff_x28;
        lVar7 = *unaff_x29;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar1 = FUN_01f96308(lVar6,lVar7);
        unaff_w25 = unaff_w25 | iVar1 == 0;
      }
      unaff_w20 = unaff_w26;
      if (iVar1 != 2) {
        unaff_w20 = uVar5;
      }
      unaff_w26 = unaff_w26 + 1;
      unaff_w25 = unaff_w25 & iVar1 != 2;
      if (in_stack_00000018._4_4_ == unaff_w26) {
        if (unaff_w25 != 0) {
          uVar3 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar4 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar4,uVar3,0);
          uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar4,uVar3);
        }
        if (unaff_w20 < *(uint *)(unaff_x21 + 0x18)) {
          return *(undefined8 *)(unaff_x21 + (long)(int)unaff_w20 * 8 + 0x20);
        }
        goto LAB_01f9581c;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_01f9581c;
      unaff_x28 = (long *)(unaff_x21 + (long)(int)unaff_w20 * 8 + 0x20);
      plVar2 = (long *)*unaff_x28;
      if (plVar2 == (long *)0x0) goto LAB_01f95820;
      uVar3 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_01f9581c;
      unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w26 * 8 + 0x20);
      plVar2 = (long *)*unaff_x29;
      if (plVar2 == (long *)0x0) goto LAB_01f95820;
      uVar4 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar1 = FUN_01f95b1c(uVar3,uVar4,in_stack_00000010);
      uVar5 = unaff_w20;
    } while ((unaff_x19 == 0) || (iVar1 != 0));
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) {
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    plVar2 = (long *)*unaff_x28;
    if (plVar2 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    unaff_x22 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) goto LAB_01f9581c;
    plVar2 = (long *)*unaff_x29;
    if (plVar2 == (long *)0x0) goto LAB_01f95820;
    (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    param_1 = (long *)PTR_DAT_027c1390;
  } while( true );
}


