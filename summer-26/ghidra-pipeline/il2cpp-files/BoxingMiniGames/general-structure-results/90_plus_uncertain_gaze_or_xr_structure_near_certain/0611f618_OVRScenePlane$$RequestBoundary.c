/*
FUNCTION_NAME: OVRScenePlane$$RequestBoundary
ENTRY_POINT: 0611f618
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRScenePlane__RequestBoundary(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0xfa8));
  *(undefined1 *)(unaff_x21 + 0xbc8) = 1;
  FUN_05e5ae34();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar2 = PTR_DAT_07a24fa0;
  uVar3 = FUN_06116a08();
  *(undefined4 *)(unaff_x20 + 0x10) = uVar3;
  uVar5 = FUN_06116de8();
  uVar6 = FUN_061166c8();
  lVar7 = *unaff_x25;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_061154dc();
    uVar3 = OVRPlugin_OVRP_1_93_0___cctor();
    uVar8 = FUN_06110ec0(uVar6);
    uVar4 = FUN_06110e44(uVar6);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_0613c284(uVar6,uVar3,uVar8,uVar4,0);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x20 + 0x20),uVar6);
    return;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar1 = PTR_DAT_07a09760;
  uVar6 = FUN_06115e8c();
  uVar5 = FUN_06116de8();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_061154dc(uVar6);
    uVar3 = OVRPlugin_OVRP_1_93_0___cctor();
    uVar8 = FUN_06110ec0(uVar6);
    uVar4 = FUN_06110e44(uVar6);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_0613c284(uVar6,uVar3,uVar8,uVar4,0);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x20 + 0x20),uVar6);
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 1) != '\0') {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar7 = FUN_061168b8();
    if (lVar7 != 0) {
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07179300(lVar7,0);
      return;
    }
    uVar6 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x58),&stack0x00000008);
    uVar6 = FUN_05c8e390(*(undefined8 *)PTR_DAT_07a24fa8,uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
    }
    FUN_07179300(uVar6,0);
  }
  return;
}


