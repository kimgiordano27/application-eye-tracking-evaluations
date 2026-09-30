/*
FUNCTION_NAME: OVRPlugin.OVRP_1_75_0$$.cctor
ENTRY_POINT: 01dbaef4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbb04c) */

byte OVRPlugin_OVRP_1_75_0___cctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 in_w8;
  long lVar3;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  undefined8 uStack0000000000000058;
  byte bStack0000000000000064;
  undefined8 uStack0000000000000068;
  int iStack00000000000000e4;
  byte bStack0000000000000114;
  undefined8 in_stack_00000138;
  
  uStack0000000000000058 = *(undefined8 *)(unaff_x19 + 0x98);
  uStack0000000000000068 = uStack0000000000000058;
  bStack0000000000000064 =
       FUN_01dbb0d8(*(undefined8 *)(unaff_x19 + 0x90),in_w8,uStack0000000000000058);
  bStack0000000000000064 = bStack0000000000000064 & 1;
  bStack0000000000000114 = bStack0000000000000064;
  bStack0000000000000054 = FUN_01c4f34c(0);
  bStack0000000000000054 = bStack0000000000000054 & 1;
  if (bStack0000000000000054 == 0) {
    iStack00000000000000e4 = 9;
  }
  else {
    iStack00000000000000e4 = 0;
  }
  if (iStack00000000000000e4 == 0) {
    FUN_00e5daf0(*(undefined8 *)PTR_DAT_0234bca8);
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
  }
  else if (iStack00000000000000e4 != 9) {
    return in_stack_00000138._7_1_;
  }
  return bStack0000000000000114 & 1;
}


