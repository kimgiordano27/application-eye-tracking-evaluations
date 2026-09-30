/*
FUNCTION_NAME: OVRSceneVolume$$UpdateTransform
ENTRY_POINT: 0611f648
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSceneVolume__UpdateTransform(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long unaff_x24;
  undefined8 *puVar8;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  puVar8 = *(undefined8 **)(unaff_x24 + 4000);
  uVar2 = FUN_06116a08();
  *(undefined4 *)(unaff_x20 + 0x10) = uVar2;
  uVar4 = FUN_06116de8();
  uVar5 = FUN_061166c8();
  lVar6 = *unaff_x25;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_061154dc();
    uVar2 = OVRPlugin_OVRP_1_93_0___cctor();
    uVar7 = FUN_06110ec0(uVar5);
    uVar3 = FUN_06110e44(uVar5);
    uVar5 = thunk_FUN_0367fe20(*puVar8);
    FUN_0613c284(uVar5,uVar2,uVar7,uVar3,0);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x20 + 0x20),uVar5);
    return;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar1 = PTR_DAT_07a09760;
  uVar5 = FUN_06115e8c();
  uVar4 = FUN_06116de8();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_061154dc(uVar5);
    uVar2 = OVRPlugin_OVRP_1_93_0___cctor();
    uVar7 = FUN_06110ec0(uVar5);
    uVar3 = FUN_06110e44(uVar5);
    uVar5 = thunk_FUN_0367fe20(*puVar8);
    FUN_0613c284(uVar5,uVar2,uVar7,uVar3,0);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x20 + 0x20),uVar5);
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar6 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) != '\0') {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = FUN_061168b8();
    if (lVar6 != 0) {
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07179300(lVar6,0);
      return;
    }
    uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x58),&stack0x00000008);
    uVar5 = FUN_05c8e390(*(undefined8 *)PTR_DAT_07a24fa8,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
    }
    FUN_07179300(uVar5,0);
  }
  return;
}


