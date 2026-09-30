/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 063999dc
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


void OVRPlugin__DestroyDynamicObjectTracker(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03798b70();
  uVar1 = FUN_0631d980();
  if ((uVar1 & 1) != 0) {
    unaff_x20 = (long *)FUN_062454e8();
  }
  if (unaff_x20 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x20 + 0x2e8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x2f0));
    uVar1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar2,*(undefined8 *)PTR_DAT_07db67f8,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)PTR_DAT_07db6818;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar2 = FUN_062519f8(uVar2,0);
      uVar1 = FUN_0625ad04(unaff_x20,uVar2,0);
      if ((uVar1 & 1) != 0) {
        in_stack_00000008 = 0;
        FUN_067a7064(&stack0x00000008);
        thunk_FUN_037784fc(*(undefined8 *)PTR_DAT_07d95ba8);
        return;
      }
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar2 = FUN_061d52c8(0);
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6830);
      FUN_063349e4(uVar5,uVar2);
      uVar2 = FUN_062d5fcc();
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6838);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar2,uVar5);
    }
    FUN_06399684(unaff_x20);
    if (**(long **)(*(long *)PTR_DAT_07db47b8 + 0xb8) != 0) {
      lVar6 = *(long *)(**(long **)(*(long *)PTR_DAT_07db47b8 + 0xb8) + 0x10);
      lVar3 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,1);
      if (lVar3 != 0) {
        if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_037787d0(), lVar4 == 0)) {
          uVar2 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar2,0);
        }
        if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        *(long *)(lVar3 + 0x20) = unaff_x21;
        thunk_FUN_037aeb94();
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06399ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),lVar3,*(undefined8 *)(lVar6 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


