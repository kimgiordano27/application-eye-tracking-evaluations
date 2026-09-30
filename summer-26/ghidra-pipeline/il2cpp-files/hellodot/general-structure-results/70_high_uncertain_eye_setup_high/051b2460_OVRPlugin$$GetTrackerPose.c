/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 051b2460
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined8 param_5)

{
  undefined4 *puVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_d8;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  if (*(char *)(unaff_x20 + 0x148) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    *(undefined1 *)(unaff_x20 + 0x148) = 1;
  }
  uVar4 = 0;
  puVar1 = *(undefined4 **)(*unaff_x21 + 0xb8);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar3 = FUN_05ee9d24(0,0);
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_05effcac(uVar5,uVar6,uVar7,uVar3,unaff_d8,uVar4,param_5);
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(ulong *)(lVar2 + 0x30) = (ulong)uStack0000000000000014;
  *(ulong *)(lVar2 + 0x28) = (ulong)uStack000000000000000c;
  *(ulong *)(lVar2 + 0x24) = (ulong)uStack000000000000000c << 0x20;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  return;
}


