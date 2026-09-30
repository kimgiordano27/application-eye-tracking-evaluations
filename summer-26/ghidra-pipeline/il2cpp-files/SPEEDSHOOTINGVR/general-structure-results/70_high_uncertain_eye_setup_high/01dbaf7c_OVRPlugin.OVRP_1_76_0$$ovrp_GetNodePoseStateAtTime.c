/*
FUNCTION_NAME: OVRPlugin.OVRP_1_76_0$$ovrp_GetNodePoseStateAtTime
ENTRY_POINT: 01dbaf7c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbb04c) */

byte OVRPlugin_OVRP_1_76_0__ovrp_GetNodePoseStateAtTime(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  int iStack00000000000000e4;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000138;
  
  uVar2 = FUN_01dbe450(0);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
    iStack00000000000000e4 = 10;
  }
  else {
    iStack00000000000000e4 = 0;
  }
  if (iStack00000000000000e4 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    FUN_00e5db80(lVar3);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    FUN_00e5db80(uVar2);
    uStack000000000000002c = FUN_01dc0110(uVar2,0);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
    FUN_00e5db80(uVar2);
    uStack000000000000001c = FUN_01db6578(uVar2);
    uVar1 = FUN_01db6578(*(undefined8 *)(unaff_x19 + 0x90));
    FUN_01c4f4b4(uStack000000000000002c,uStack000000000000001c,uVar1,0);
  }
  else {
    if (iStack00000000000000e4 != 10) {
      return in_stack_00000138._7_1_;
    }
    FUN_00e5daf0(*(undefined8 *)PTR_DAT_0234c680);
    uVar2 = FUN_01dbe4a0(0);
    FUN_00e5db80(uVar2);
    uStack000000000000000c = FUN_01dc0110(uVar2,0);
    uVar1 = FUN_01db6578(*(undefined8 *)(unaff_x19 + 0x90));
    FUN_01c4f4b4(uStack000000000000000c,0,uVar1,0);
  }
  return in_stack_00000110._4_1_ & 1;
}


