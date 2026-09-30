/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 063833f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetControllerHapticsState(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07d89e28);
  FUN_0373b518(PTR_DAT_07d88078);
  FUN_0373b518(PTR_DAT_07d97418);
  FUN_0373b518(PTR_DAT_07d96690);
  *(undefined1 *)(unaff_x20 + 0x541) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = FUN_0637ee64();
  if (lVar2 != 0) {
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *unaff_x21;
    }
    uVar4 = FUN_0637f06c(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28),0);
    if ((uVar4 & 1) != 0) {
      lVar3 = thunk_FUN_037787d0(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)PTR_DAT_07d867b8);
      if (lVar3 == 0) {
        plVar9 = *(long **)(lVar2 + 0x38);
        if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)PTR_DAT_07d97418)) {
          if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_061d52c8(0);
          if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
          }
          FUN_061b5ba8(plVar9,uVar5,0);
          uStack0000000000000000 = 0;
          uStack0000000000000008 = 0;
          FUN_0623b108();
        }
        else {
          puVar6 = (undefined8 *)thunk_FUN_03778a20(plVar9);
          uStack0000000000000008 = puVar6[1];
          uStack0000000000000000 = *puVar6;
        }
      }
      else {
        uStack0000000000000000 = 0;
        uStack0000000000000008 = 0;
        FUN_0623aed0();
      }
      auVar1._8_8_ = uStack0000000000000008;
      auVar1._0_8_ = uStack0000000000000000;
      return auVar1;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar5 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar7 = FUN_0637ef78();
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6190);
  uVar5 = FUN_063349e4(uVar8,uVar5,uVar7,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar7 = thunk_FUN_037788cc();
  FUN_061a843c(uVar7,uVar5,0);
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6198);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar7,uVar5);
}


