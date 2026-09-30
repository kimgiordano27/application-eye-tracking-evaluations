/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 063ace40
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x063ace40:
  uVar4 = FUN_060c530c(unaff_x23,1,0);
  Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
  if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_063ab8e0();
  if (unaff_x21 == 0) {
LAB_063ad288:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar5 = FUN_05b0f700(unaff_x21,uVar4,uVar5,*(undefined8 *)PTR_DAT_07d8cff8);
  uVar6 = FUN_063ae148(uVar5,uVar4,&stack0x00000028);
  if ((uVar6 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_063ad288;
    (**(code **)(*unaff_x20 + 0x1f8))();
  }
  do {
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar6 & 1) == 0) {
      return unaff_x21;
    }
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        return unaff_x21;
      }
      if (iVar2 == 0xd) {
        return unaff_x21;
      }
LAB_063ad1fc:
      FUN_031a5e18();
      (**(code **)(*unaff_x19 + 0x238))();
      thunk_FUN_037a15ac(PTR_DAT_07db23b0);
      uVar4 = FUN_06278b80();
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6f00);
      System_Convert__ToInt32(uVar5,uVar4,0);
      uVar4 = FUN_062d5fcc();
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6f08);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar5);
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) goto LAB_063ad288;
    unaff_x23 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar6 = FUN_063349dc(unaff_x23,0);
    if ((uVar6 & 1) != 0) {
      return unaff_x21;
    }
    if (unaff_x23 == 0) goto LAB_063ad288;
    sVar1 = FUN_060bb390(unaff_x23,0,0);
    if (sVar1 != 0x24) break;
    uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(unaff_x23,*unaff_x25,0);
    if (((((uVar6 & 1) == 0) &&
         (uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (unaff_x23,*(undefined8 *)PTR_DAT_07db4b20,0), (uVar6 & 1) == 0)) &&
        (uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                           (unaff_x23,*(undefined8 *)PTR_DAT_07db4c70,0), (uVar6 & 1) == 0)) &&
       ((uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                           (unaff_x23,*(undefined8 *)PTR_DAT_07db2418,0), (uVar6 & 1) == 0 &&
        (uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                           (unaff_x23,*(undefined8 *)PTR_DAT_07db2408,0), (uVar6 & 1) == 0)))) {
      return unaff_x21;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063ad288;
    lVar7 = (**(code **)(*unaff_x20 + 0x248))();
    if (lVar7 == 0) {
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
        FUN_05b0e950(unaff_x21,*(undefined8 *)PTR_DAT_07d8cff0);
      }
      in_stack_00000020 = 0;
      while( true ) {
        in_stack_00000018 = in_stack_00000020;
        uVar4 = FUN_04e5f0f4(&stack0x00000018,*unaff_x28);
        System_Convert__ToInt32(*unaff_x29,uVar4,0);
        lVar7 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar7 == 0) break;
        FUN_04e5efe4(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
      }
      in_stack_00000018 = in_stack_00000020;
      uVar4 = FUN_04e5f0f4(&stack0x00000018,*unaff_x28);
      lVar7 = System_Convert__ToInt32(*unaff_x29,uVar4,0);
      uVar4 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07db6ef8,lVar7,0);
      if (unaff_x21 == 0) goto LAB_063ad288;
      FUN_05b0f700(unaff_x21,uVar4,*(undefined8 *)PTR_DAT_07db6d60,*(undefined8 *)PTR_DAT_07d8cff8);
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
    uVar6 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(unaff_x23,*unaff_x25,0);
    if ((uVar6 & 1) != 0) {
      return unaff_x21;
    }
    uVar4 = FUN_060c530c(unaff_x23,1,0);
    Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
    uVar5 = (**(code **)(*unaff_x19 + 0x238))();
    uVar6 = FUN_0632e0e4(uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_063ad1fc;
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
      FUN_05b0e950(unaff_x21,*(undefined8 *)PTR_DAT_07d8cff0);
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_063ad288;
      uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    uVar4 = FUN_060c1430(lVar7,*(undefined8 *)PTR_DAT_07d9d178,uVar4,0);
    if (unaff_x21 == 0) goto LAB_063ad288;
    FUN_05b0f700(unaff_x21,uVar4,uVar5,*(undefined8 *)PTR_DAT_07d8cff8);
    unaff_x25 = (undefined8 *)PTR_DAT_07db4c68;
  } while( true );
  if (sVar1 != 0x40) {
    return unaff_x21;
  }
  if (unaff_x21 == 0) {
    unaff_x21 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
    FUN_05b0e950(unaff_x21,*(undefined8 *)PTR_DAT_07d8cff0);
  }
  goto code_r0x063ace40;
}


