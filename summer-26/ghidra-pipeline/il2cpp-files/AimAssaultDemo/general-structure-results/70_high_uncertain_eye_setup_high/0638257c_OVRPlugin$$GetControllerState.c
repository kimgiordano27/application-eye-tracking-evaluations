/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 0638257c
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


undefined1  [16] OVRPlugin__GetControllerState(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95b18);
    FUN_0373b518(PTR_DAT_07d89e28);
                    /* try { // try from 0638259c to 064825ab has its CatchHandler @ 063825ac */
    FUN_0373b518(PTR_DAT_07d88078);
                    /* catch() { ... } // from try @ 0638251c with catch @ 063825ac
                       catch() { ... } // from try @ 0638259c with catch @ 063825ac */
                    /* try { // try from 063825b0 to 064825b3 has its CatchHandler @ 063825bc */
    FUN_0373b518(PTR_DAT_07d96690);
                    /* try { // try from 063825b4 to 064825bf has its CatchHandler @ 0638144c */
                    /* catch() { ... } // from try @ 063824ec with catch @ 063825bc
                       catch() { ... } // from try @ 063825b0 with catch @ 063825bc */
    FUN_0373b518(PTR_DAT_07da2c80);
    *(undefined1 *)(unaff_x20 + 0x53a) = 1;
  }
  puVar1 = PTR_DAT_07d96690;
  if (param_2 == 0) {
LAB_063826e8:
    return ZEXT816(0);
  }
  if (*(int *)(*(long *)PTR_DAT_07d96690 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = FUN_0637ee64(param_2);
  if (lVar2 != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = FUN_0637f06c(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),1);
    puVar1 = PTR_DAT_07d95b18;
    if ((uVar4 & 1) != 0) {
      plVar9 = *(long **)(lVar2 + 0x38);
      if (plVar9 != (long *)0x0) {
        if (*plVar9 == *(long *)PTR_DAT_07d95b18) {
          puVar6 = (undefined8 *)thunk_FUN_03778a20(plVar9);
          uVar5 = *puVar6;
          uVar7 = puVar6[1];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_06816424(uVar5,uVar7,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_061d52c8(0);
          if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)PTR_DAT_07d89e28);
          }
          FUN_061b498c(plVar9,uVar5,0);
        }
        FUN_04e69734();
      }
      goto LAB_063826e8;
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar5 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar7 = FUN_0637ef78(param_2);
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6140);
  uVar5 = FUN_063349e4(uVar8,uVar5,uVar7,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar7 = thunk_FUN_037788cc();
  FUN_061a843c(uVar7,uVar5,0);
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6148);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar7,uVar5);
}


