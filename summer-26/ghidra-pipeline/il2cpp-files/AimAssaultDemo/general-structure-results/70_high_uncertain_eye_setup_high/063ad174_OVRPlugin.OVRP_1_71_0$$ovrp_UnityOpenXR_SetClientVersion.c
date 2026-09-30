/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_SetClientVersion
ENTRY_POINT: 063ad174
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_SetClientVersion
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (uVar8 = FUN_060c1430(param_2,*param_1,param_4,0), unaff_x21 != 0) {
    FUN_05b0f700(unaff_x21,uVar8,unaff_x25,*(undefined8 *)PTR_DAT_07d8cff8);
    puVar1 = PTR_DAT_07db4c68;
    while( true ) {
      uVar9 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar9 & 1) == 0) {
        return unaff_x21;
      }
      iVar3 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar3 != 4) {
        if (iVar3 == 5) {
          return unaff_x21;
        }
        if (iVar3 == 0xd) {
          return unaff_x21;
        }
        goto LAB_063ad1fc;
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar4 == (long *)0x0) goto LAB_063ad288;
      lVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar9 = FUN_063349dc(lVar5,0);
      if ((uVar9 & 1) != 0) {
        return unaff_x21;
      }
      if (lVar5 == 0) goto LAB_063ad288;
      sVar2 = FUN_060bb390(lVar5,0,0);
      if (sVar2 == 0x24) break;
      if (sVar2 != 0x40) {
        return unaff_x21;
      }
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
        FUN_05b0e950(unaff_x21,*(undefined8 *)PTR_DAT_07d8cff0);
      }
      uVar8 = FUN_060c530c(lVar5,1,0);
      Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
      if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar6 = FUN_063ab8e0();
      if (unaff_x21 == 0) goto LAB_063ad288;
      uVar6 = FUN_05b0f700(unaff_x21,uVar8,uVar6,*(undefined8 *)PTR_DAT_07d8cff8);
      uVar9 = FUN_063ae148(uVar6,uVar8,&stack0x00000028);
      if ((uVar9 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_063ad288;
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (lVar5,*(undefined8 *)puVar1,0);
    if (((((uVar9 & 1) == 0) &&
         (uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (lVar5,*(undefined8 *)PTR_DAT_07db4b20,0), (uVar9 & 1) == 0)) &&
        (uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                           (lVar5,*(undefined8 *)PTR_DAT_07db4c70,0), (uVar9 & 1) == 0)) &&
       ((uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                           (lVar5,*(undefined8 *)PTR_DAT_07db2418,0), (uVar9 & 1) == 0 &&
        (uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                           (lVar5,*(undefined8 *)PTR_DAT_07db2408,0), (uVar9 & 1) == 0)))) {
      return unaff_x21;
    }
    if (unaff_x20 == (long *)0x0) break;
    param_2 = (**(code **)(*unaff_x20 + 0x248))();
    if (param_2 == 0) {
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
        FUN_05b0e950(unaff_x21,*(undefined8 *)PTR_DAT_07d8cff0);
      }
      in_stack_00000020 = 0;
      while( true ) {
        in_stack_00000018 = in_stack_00000020;
        uVar8 = FUN_04e5f0f4(&stack0x00000018,*unaff_x28);
        System_Convert__ToInt32(*unaff_x29,uVar8,0);
        lVar7 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar7 == 0) break;
        FUN_04e5efe4(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
      }
      in_stack_00000018 = in_stack_00000020;
      uVar8 = FUN_04e5f0f4(&stack0x00000018,*unaff_x28);
      param_2 = System_Convert__ToInt32(*unaff_x29,uVar8,0);
      uVar8 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07db6ef8,param_2,0);
      if (unaff_x21 == 0) break;
      FUN_05b0f700(unaff_x21,uVar8,*(undefined8 *)PTR_DAT_07db6d60,*(undefined8 *)PTR_DAT_07d8cff8);
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
    uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (lVar5,*(undefined8 *)puVar1,0);
    if ((uVar9 & 1) != 0) {
      return unaff_x21;
    }
    param_4 = FUN_060c530c(lVar5,1,0);
    Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
    uVar8 = (**(code **)(*unaff_x19 + 0x238))();
    uVar9 = FUN_0632e0e4(uVar8,0);
    if ((uVar9 & 1) == 0) {
LAB_063ad1fc:
      FUN_031a5e18();
      (**(code **)(*unaff_x19 + 0x238))();
      thunk_FUN_037a15ac(PTR_DAT_07db23b0);
      uVar8 = FUN_06278b80();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6f00);
      System_Convert__ToInt32(uVar6,uVar8,0);
      uVar8 = FUN_062d5fcc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6f08);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar8,uVar6);
    }
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
      FUN_05b0e950(unaff_x21,*(undefined8 *)PTR_DAT_07d8cff0);
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar4 == (long *)0x0) {
      unaff_x25 = 0;
      param_1 = (undefined8 *)PTR_DAT_07d9d178;
    }
    else {
      if (plVar4 == (long *)0x0) break;
      unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      param_1 = (undefined8 *)PTR_DAT_07d9d178;
    }
  }
LAB_063ad288:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


