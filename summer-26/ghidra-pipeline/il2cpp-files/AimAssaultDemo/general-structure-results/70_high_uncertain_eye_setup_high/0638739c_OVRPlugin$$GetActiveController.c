/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 0638739c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetActiveController(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  
  if ((*(byte *)(unaff_x21 + 0x584) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    *(undefined1 *)(unaff_x21 + 0x584) = 1;
  }
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_0625ad04(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar4 = thunk_FUN_037788cc();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d88698);
    FUN_061a1b40(uVar4,uVar3,0);
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db62b8);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar3);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = thunk_FUN_037787d0(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07d882c0);
    if (lVar2 == 0) {
      if (param_2 == (long *)0x0) {
LAB_063874a4:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar1 = (**(code **)(*param_2 + 0x908))
                        (param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*param_2 + 0x910));
      if ((uVar1 & 1) != 0) {
        return *(long *)(param_1 + 0x28);
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          if ((uint)uVar4 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar5 = *(long *)(lVar2 + 0x20 + lVar6 * 8);
          if (lVar5 == 0) {
            return 0;
          }
          if (param_2 == (long *)0x0) goto LAB_063874a4;
          uVar1 = (**(code **)(*param_2 + 0x908))(param_2,lVar5,*(undefined8 *)(*param_2 + 0x910));
          if ((uVar1 & 1) != 0) {
            return lVar5;
          }
          uVar4 = *(undefined8 *)(lVar2 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar4);
      }
    }
  }
  return 0;
}


