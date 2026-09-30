/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$EndInvoke
ENTRY_POINT: 02c4701c
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4726c) */
/* WARNING: Removing unreachable block (ram,0x02c470c4) */
/* WARNING: Removing unreachable block (ram,0x02c47104) */
/* WARNING: Removing unreachable block (ram,0x02c47084) */

byte OVRPlugin_GetBoneSkeleton2Delegate__EndInvoke(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  undefined8 in_stack_000000e0;
  byte bStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000138;
  
  if (in_stack_000000e0._4_4_ == 0) {
    FUN_015d6960(*(undefined8 *)PTR_DAT_037f9758);
    bVar1 = FUN_02c30424(&stack0x00000130,0);
    if ((((bVar1 & 1) == 0) &&
        (bVar1 = FUN_02c472f4(*(undefined8 *)(unaff_x19 + 0x90)), (bVar1 & 1) != 0)) &&
       (bVar1 = FUN_02c40bec(*(undefined8 *)(unaff_x19 + 0x90)), (bVar1 & 1) != 0)) {
      bStack0000000000000114 = 1;
      goto LAB_02c47150;
    }
  }
  else if (in_stack_000000e0._4_4_ != 8) {
    return in_stack_00000138._7_1_;
  }
  bStack0000000000000114 =
       FUN_02c4764c(*(undefined8 *)(unaff_x19 + 0x90),in_stack_00000120._4_4_,
                    *(undefined8 *)(unaff_x19 + 0x98));
  bStack0000000000000114 = bStack0000000000000114 & 1;
LAB_02c47150:
  bStack0000000000000054 = FUN_02a4dcd0(0);
  bStack0000000000000054 = bStack0000000000000054 & 1;
  if (bStack0000000000000054 == 0) {
    in_stack_000000e0._4_4_ = 9;
  }
  else {
    in_stack_000000e0._4_4_ = 0;
  }
  if (in_stack_000000e0._4_4_ == 0) {
    FUN_015d6960(*(undefined8 *)PTR_DAT_037f45f0);
    uVar3 = FUN_02c55238(0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      in_stack_000000e0._4_4_ = 10;
    }
    else {
      in_stack_000000e0._4_4_ = 0;
    }
    if (in_stack_000000e0._4_4_ == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x68);
      FUN_015d6ff8(lVar4);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      FUN_015d6ff8(uVar3);
      uStack000000000000002c = FUN_02c475b8(uVar3);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
      FUN_015d6ff8(uVar3);
      uStack000000000000001c = FUN_02c42414(uVar3);
      uVar2 = FUN_02c42414(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_02a4de38(uStack000000000000002c,uStack000000000000001c,uVar2,0);
    }
    else {
      if (in_stack_000000e0._4_4_ != 10) {
        return in_stack_00000138._7_1_;
      }
      FUN_015d6960(*(undefined8 *)PTR_DAT_037f8790);
      uVar3 = FUN_02c55288(0);
      FUN_015d6ff8(uVar3);
      uStack000000000000000c = FUN_02c475b8(uVar3);
      uVar2 = FUN_02c42414(*(undefined8 *)(unaff_x19 + 0x90));
      FUN_02a4de38(uStack000000000000000c,0,uVar2,0);
    }
  }
  else if (in_stack_000000e0._4_4_ != 9) {
    return in_stack_00000138._7_1_;
  }
  return bStack0000000000000114 & 1;
}


