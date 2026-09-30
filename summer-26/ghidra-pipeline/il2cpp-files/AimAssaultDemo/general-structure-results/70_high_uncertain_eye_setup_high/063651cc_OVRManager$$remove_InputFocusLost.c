/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 063651cc
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


void OVRManager__remove_InputFocusLost(ulong param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0x4c8);
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db54d0);
    FUN_0373b518(PTR_DAT_07db54d8);
    FUN_0373b518(PTR_DAT_07db54a8);
    FUN_0373b518(PTR_DAT_07db54e0);
    FUN_0373b518(PTR_DAT_07db54e8);
    FUN_0373b518(PTR_DAT_07db54c8);
    *(undefined1 *)(unaff_x20 + 0x421) = 1;
  }
  lVar5 = thunk_FUN_037788cc(*puVar9);
  FUN_062855bc(lVar5,0);
  puVar1 = PTR_DAT_07db54a8;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x10) = param_2;
    puVar4 = PTR_DAT_07db54e8;
    puVar3 = PTR_DAT_07db54d8;
    puVar2 = PTR_DAT_07db54d0;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    uVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
    FUN_04499378(uVar7,lVar5,*(undefined8 *)puVar4,0);
    FUN_03f72448(uVar8,uVar7,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


