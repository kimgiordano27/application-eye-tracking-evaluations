/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 06380350
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__EnqueueSubmitLayer(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x780));
  *(undefined1 *)(unaff_x20 + 0x529) = 1;
  puVar1 = PTR_DAT_07d96690;
  if (unaff_x19 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_07d96690 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = FUN_0637ee64();
  if (lVar3 != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = FUN_0637f06c(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x40),1);
    puVar1 = PTR_DAT_07d95b18;
    if ((uVar5 & 1) != 0) {
      plVar10 = *(long **)(lVar3 + 0x38);
      if (plVar10 == (long *)0x0) {
        return 0;
      }
      if (*plVar10 == *(long *)PTR_DAT_07d95b18) {
        puVar7 = (undefined8 *)thunk_FUN_03778a20(plVar10);
        uVar6 = *puVar7;
        uVar8 = puVar7[1];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar2 = FUN_06816240(uVar6,uVar8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar6 = FUN_061d52c8(0);
        if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
        }
        uVar2 = FUN_061b1f4c(plVar10,uVar6,0);
      }
      uStack000000000000000c = 0;
      FUN_04e5a2ac(&stack0x0000000c,uVar2,*(undefined8 *)PTR_DAT_07db3780);
      return uStack000000000000000c;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar6 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar8 = FUN_0637ef78();
  uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6078);
  uVar6 = FUN_063349e4(uVar9,uVar6,uVar8,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar8 = thunk_FUN_037788cc();
  FUN_061a843c(uVar8,uVar6,0);
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6080);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar8,uVar6);
}


