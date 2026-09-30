/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 06367a38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  auVar9 = FUN_0632e764(param_1,param_2,*(undefined8 *)(unaff_x19 + 0x70),
                        *(undefined8 *)(unaff_x19 + 0x78),0);
  *(undefined1 (*) [16])(unaff_x20 + 0x48) = auVar9;
  if (*(char *)(unaff_x20 + 0x58) == '\0') {
    bVar3 = 0xff < *(ushort *)(unaff_x19 + 0x80);
  }
  else {
    bVar3 = true;
  }
  *(bool *)(unaff_x20 + 0x58) = bVar3;
  if (*(char *)(unaff_x20 + 0x59) == '\0') {
    bVar3 = 0xff < *(ushort *)(unaff_x19 + 0x82);
  }
  else {
    bVar3 = true;
  }
  *(bool *)(unaff_x20 + 0x59) = bVar3;
  uVar4 = FUN_0632e684(*(undefined8 *)(unaff_x20 + 0x5c),*(undefined8 *)(unaff_x19 + 0x84),0);
  *(undefined8 *)(unaff_x20 + 0x5c) = uVar4;
  uVar4 = FUN_0632e5a4(*(undefined8 *)(unaff_x20 + 100),*(undefined8 *)(unaff_x19 + 0x8c),0);
  *(undefined8 *)(unaff_x20 + 100) = uVar4;
  if (*(char *)(unaff_x20 + 0xa0) == '\0') {
    bVar3 = *(char *)(unaff_x19 + 0xa0) != '\0';
  }
  else {
    bVar3 = true;
  }
  *(bool *)(unaff_x20 + 0xa0) = bVar3;
  if (*(char *)(unaff_x20 + 0xa1) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined1 *)(unaff_x19 + 0xd0);
  }
  *(undefined1 *)(unaff_x20 + 0xa1) = uVar5;
  if (*(char *)(unaff_x20 + 0xa2) == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(unaff_x19 + 0xb0) != '\0';
  }
  *(bool *)(unaff_x20 + 0xa2) = bVar3;
  if (*(char *)(unaff_x20 + 0xa3) == '\0') {
    bVar3 = *(char *)(unaff_x19 + 0xb1) != '\0';
  }
  else {
    bVar3 = true;
  }
  *(bool *)(unaff_x20 + 0xa3) = bVar3;
  puVar1 = PTR_DAT_07d96690;
  lVar6 = *(long *)(unaff_x19 + 0xe0);
  if (lVar6 != 0) {
    plVar8 = (long *)(unaff_x20 + 0xa8);
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
      FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07db34c0);
      *plVar8 = lVar6;
      thunk_FUN_037aeb94(plVar8,lVar6);
      lVar7 = *plVar8;
      lVar6 = *(long *)(unaff_x19 + 0xe0);
    }
    puVar2 = PTR_DAT_07db55d0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_06374108(0);
    FUN_03f09aec(lVar7,lVar6,uVar4,*(undefined8 *)puVar2);
  }
  *(uint *)(unaff_x20 + 0xb0) = *(uint *)(unaff_x20 + 0xb0) | *(uint *)(unaff_x19 + 0xec);
  puVar1 = PTR_DAT_07db55c8;
  lVar6 = *(long *)(unaff_x19 + 0x38);
  if (lVar6 != 0) {
    plVar8 = (long *)(unaff_x20 + 0x70);
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
      FUN_049ce6c0(lVar6,*(undefined8 *)PTR_DAT_07d86c50);
      *plVar8 = lVar6;
      thunk_FUN_037aeb94(plVar8,lVar6);
      lVar7 = *plVar8;
      lVar6 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_03f08efc(lVar7,lVar6,*(undefined8 *)puVar1);
    return;
  }
  return;
}


