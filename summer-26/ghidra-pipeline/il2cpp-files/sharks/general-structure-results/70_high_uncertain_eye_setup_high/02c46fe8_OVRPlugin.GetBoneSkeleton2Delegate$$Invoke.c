/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$Invoke
ENTRY_POINT: 02c46fe8
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4726c) */

byte OVRPlugin_GetBoneSkeleton2Delegate__Invoke(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  int iStack00000000000000e4;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000138;
  
  if (in_w8 == 7) {
    bStack0000000000000054 = FUN_02a4dcd0(0,0);
    bStack0000000000000054 = bStack0000000000000054 & 1;
    if (bStack0000000000000054 == 0) {
      iStack00000000000000e4 = 9;
    }
    else {
      iStack00000000000000e4 = 0;
    }
    if (iStack00000000000000e4 == 0) {
      FUN_015d6960(*(undefined8 *)PTR_DAT_037f45f0);
      uVar2 = FUN_02c55238(0);
      *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
      if (*(long *)(unaff_x19 + 0x68) == 0) {
        iStack00000000000000e4 = 10;
      }
      else {
        iStack00000000000000e4 = 0;
      }
      if (iStack00000000000000e4 == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x68);
        FUN_015d6ff8(lVar3);
        uVar2 = *(undefined8 *)(lVar3 + 0x28);
        FUN_015d6ff8(uVar2);
        uStack000000000000002c = FUN_02c475b8(uVar2);
        uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
        FUN_015d6ff8(uVar2);
        uStack000000000000001c = FUN_02c42414(uVar2);
        uVar1 = FUN_02c42414(*(undefined8 *)(unaff_x19 + 0x90));
        FUN_02a4de38(uStack000000000000002c,uStack000000000000001c,uVar1,0);
      }
      else {
        if (iStack00000000000000e4 != 10) {
          return in_stack_00000138._7_1_;
        }
        FUN_015d6960(*(undefined8 *)PTR_DAT_037f8790);
        uVar2 = FUN_02c55288(0);
        FUN_015d6ff8(uVar2);
        uStack000000000000000c = FUN_02c475b8(uVar2);
        uVar1 = FUN_02c42414(*(undefined8 *)(unaff_x19 + 0x90));
        FUN_02a4de38(uStack000000000000000c,0,uVar1,0);
      }
    }
    else if (iStack00000000000000e4 != 9) {
      return in_stack_00000138._7_1_;
    }
    in_stack_00000138._7_1_ = in_stack_00000110._4_1_ & 1;
  }
  return in_stack_00000138._7_1_;
}


