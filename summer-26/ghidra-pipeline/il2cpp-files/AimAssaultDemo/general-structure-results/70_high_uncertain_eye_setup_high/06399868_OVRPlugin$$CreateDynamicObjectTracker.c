/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTracker
ENTRY_POINT: 06399868
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreateDynamicObjectTracker(void)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long lVar10;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined *puVar9;
  
  FUN_0373b518(PTR_DAT_07d89e28);
  FUN_0373b518(PTR_DAT_07d882c0);
  FUN_0373b518(PTR_DAT_07d96680);
  FUN_0373b518(PTR_DAT_07db6818);
  FUN_0373b518(PTR_DAT_07d95ba8);
  FUN_0373b518(PTR_DAT_07db67f8);
  *(undefined1 *)(unaff_x21 + 0x62f) = 1;
  if (unaff_x19 == (long *)0x0) goto LAB_06399b54;
  iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar1 == 0xb) {
    if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_0631f414();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar4 = FUN_061d52c8(0);
    puVar9 = PTR_DAT_07db6820;
  }
  else {
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 == 2) {
      lVar5 = FUN_06399c38();
    }
    else {
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar1 != 9) {
        thunk_FUN_037a15ac(PTR_DAT_07d88078);
        FUN_031ae340();
        uVar4 = FUN_061d52c8(0);
        FUN_031a5e18();
        uVar2 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar2);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
        thunk_FUN_037784fc(uVar8,&stack0x00000008);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6828);
        goto LAB_06399bf8;
      }
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar6 == (long *)0x0) goto LAB_06399b54;
      uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
      }
      lVar5 = FUN_061b7338(uVar4,0);
    }
    if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_0631d980();
    if ((uVar3 & 1) != 0) {
      unaff_x20 = (long *)FUN_062454e8();
    }
    if (unaff_x20 == (long *)0x0) {
LAB_06399b54:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar4 = (**(code **)(*unaff_x20 + 0x2e8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x2f0));
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar4,*(undefined8 *)PTR_DAT_07db67f8,0);
    if ((uVar3 & 1) != 0) {
      FUN_06399684(unaff_x20);
      if (**(long **)(*(long *)PTR_DAT_07db47b8 + 0xb8) != 0) {
        lVar10 = *(long *)(**(long **)(*(long *)PTR_DAT_07db47b8 + 0xb8) + 0x10);
        plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,1);
        if (plVar6 != (long *)0x0) {
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_037787d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar4,0);
          }
          if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar6[4] = lVar5;
          thunk_FUN_037aeb94(plVar6 + 4,lVar5);
          if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06399ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),plVar6,*(undefined8 *)(lVar10 + 0x28))
            ;
            return uVar4;
          }
        }
      }
      goto LAB_06399b54;
    }
    uVar4 = *(undefined8 *)PTR_DAT_07db6818;
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_062519f8(uVar4,0);
    uVar3 = FUN_0625ad04(unaff_x20,uVar4,0);
    if ((uVar3 & 1) != 0) {
      in_stack_00000008 = 0;
      FUN_067a7064(&stack0x00000008,lVar5,0);
      uVar4 = thunk_FUN_037784fc(*(undefined8 *)PTR_DAT_07d95ba8);
      return uVar4;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar4 = FUN_061d52c8(0);
    puVar9 = PTR_DAT_07db6830;
  }
  uVar8 = thunk_FUN_037a15ac(puVar9);
LAB_06399bf8:
  FUN_063349e4(uVar8,uVar4);
  uVar4 = FUN_062d5fcc();
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6838);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar4,uVar8);
}


