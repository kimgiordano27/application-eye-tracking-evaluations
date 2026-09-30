/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_27
ENTRY_POINT: 07cb428c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__807_27(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong uVar5;
  undefined8 *puVar6;
  uint unaff_w24;
  undefined8 uVar7;
  undefined1 *unaff_x25;
  long lVar8;
  undefined8 uVar9;
  
  if (0 < (int)unaff_w24) {
    lVar8 = 0;
    do {
      lVar1 = unaff_x19 + lVar8;
      uVar2 = *(undefined4 *)(lVar1 + 0x28);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      uVar3 = *(undefined4 *)(lVar1 + 0x38);
      uVar9 = *(undefined8 *)(lVar1 + 0x40);
      uVar4 = thunk_FUN_044857e8(*(undefined8 *)(lVar1 + 0x20));
      puVar6 = (undefined8 *)(param_1 + lVar8);
      *puVar6 = uVar4;
      *(undefined4 *)(puVar6 + 1) = uVar2;
      uVar4 = thunk_FUN_044857e8(uVar7);
      lVar8 = lVar8 + 0x28;
      puVar6[2] = uVar4;
      *(undefined4 *)(puVar6 + 3) = uVar3;
      puVar6[4] = uVar9;
    } while (((ulong)unaff_w24 * 4 + (ulong)unaff_w24) * 8 - lVar8 != 0);
    unaff_x25 = &DAT_0a526000;
  }
  uVar4 = (**(code **)(unaff_x25 + 0xb40))();
  thunk_FUN_044857dc();
  if (param_1 != 0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)(param_1 + 0x10);
      do {
        thunk_FUN_044857dc(puVar6[-2]);
        puVar6[-2] = 0;
        thunk_FUN_044857dc(*puVar6);
        *puVar6 = 0;
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 5;
      } while (uVar5 != 0);
    }
    thunk_FUN_044857dc(param_1);
  }
  return uVar4;
}


