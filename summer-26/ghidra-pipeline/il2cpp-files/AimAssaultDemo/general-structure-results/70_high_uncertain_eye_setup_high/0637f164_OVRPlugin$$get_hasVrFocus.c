/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 0637f164
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_0373b518(PTR_DAT_07d89e28);
  FUN_0373b518(PTR_DAT_07d88078);
  FUN_0373b518(PTR_DAT_07d96690);
  *(undefined1 *)(unaff_x20 + 0x521) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = FUN_0637ee64();
  if (lVar4 != 0) {
    lVar5 = *unaff_x21;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *unaff_x21;
    }
    uVar6 = FUN_0637f06c(lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
    puVar2 = PTR_DAT_07d95b18;
    puVar1 = PTR_DAT_07d89e28;
    if ((uVar6 & 1) != 0) {
      plVar11 = *(long **)(lVar4 + 0x38);
      if (plVar11 != (long *)0x0) {
        if (*plVar11 == *(long *)PTR_DAT_07d95b18) {
          puVar8 = (undefined8 *)thunk_FUN_03778a20(plVar11);
          uVar7 = *puVar8;
          uVar9 = puVar8[1];
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar3 = FUN_06816048(uVar7,uVar9,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar4);
          }
          FUN_061b1d34(uVar3,0);
          return;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_061d52c8(0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar4);
      }
      FUN_061b1c0c(plVar11,uVar7,0);
      return;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar7 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar9 = FUN_0637ef78();
  uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6008);
  uVar7 = FUN_063349e4(uVar10,uVar7,uVar9,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar9 = thunk_FUN_037788cc();
  FUN_061a843c(uVar9,uVar7,0);
  uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6010);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar9,uVar7);
}


