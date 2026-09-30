/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 02c46ec8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4726c) */

byte OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  byte bStack000000000000008c;
  undefined4 uStack00000000000000ac;
  int iStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  byte bStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000138;
  
  unaff_x19[4] = param_1;
  FUN_015d6ff8(unaff_x19[4]);
  unaff_x19[3] = *(undefined8 *)(unaff_x19[4] + 0x28);
  FUN_015d6ff8(unaff_x19[3]);
  uStack00000000000000ac = FUN_02c475b8(unaff_x19[3]);
  unaff_x19[1] = unaff_x19[0xe];
  if (unaff_x19[1] == 0) {
    iStack00000000000000e4 = 0;
    uStack00000000000000f4 = uStack00000000000000ac;
  }
  else {
    iStack00000000000000e4 = 5;
    in_stack_000000f8 = uStack00000000000000ac;
  }
  uStack00000000000000fc = uStack00000000000000ac;
  if (iStack00000000000000e4 == 0) {
    uStack00000000000000f0 = 0;
    uStack00000000000000ec = uStack00000000000000f4;
  }
  else {
    if (iStack00000000000000e4 != 5) {
      return in_stack_00000138._7_1_;
    }
    *unaff_x19 = unaff_x19[0xe];
    FUN_015d6ff8(*unaff_x19);
    uStack00000000000000f0 = FUN_02c42414(*unaff_x19);
    uStack00000000000000ec = in_stack_000000f8;
  }
  uVar2 = FUN_02c42414(unaff_x19[0x12]);
  FUN_02a4ddb4(uStack00000000000000ec,uStack00000000000000f0,uVar2,0);
  bStack000000000000008c = FUN_02c40bec(unaff_x19[0x12]);
  bStack000000000000008c = bStack000000000000008c & 1;
  if (bStack000000000000008c == 0) {
    iStack00000000000000e4 = 0;
  }
  else {
    iStack00000000000000e4 = 7;
  }
  bStack0000000000000114 = bStack000000000000008c;
  if (iStack00000000000000e4 == 0) {
    if (in_stack_00000120._4_4_ == -1) {
      iStack00000000000000e4 = 0;
    }
    else {
      iStack00000000000000e4 = 8;
    }
    if (iStack00000000000000e4 == 0) {
      FUN_015d6960(*(undefined8 *)PTR_DAT_037f9758);
      bVar1 = FUN_02c30424(&stack0x00000130,0);
      if ((bVar1 & 1) == 0) {
        iStack00000000000000e4 = 0;
      }
      else {
        iStack00000000000000e4 = 8;
      }
      if (iStack00000000000000e4 == 0) {
        bVar1 = FUN_02c472f4(unaff_x19[0x12]);
        if ((bVar1 & 1) == 0) {
          iStack00000000000000e4 = 8;
        }
        else {
          iStack00000000000000e4 = 0;
        }
        if (iStack00000000000000e4 == 0) {
          bVar1 = FUN_02c40bec(unaff_x19[0x12]);
          if ((bVar1 & 1) == 0) {
            iStack00000000000000e4 = 8;
          }
          else {
            iStack00000000000000e4 = 0;
          }
          if (iStack00000000000000e4 == 0) {
            bVar1 = 1;
            bStack0000000000000114 = 1;
            goto LAB_02c47150;
          }
        }
      }
    }
    if (iStack00000000000000e4 != 8) {
      return in_stack_00000138._7_1_;
    }
    bStack0000000000000114 = FUN_02c4764c(unaff_x19[0x12],in_stack_00000120._4_4_,unaff_x19[0x13]);
    bStack0000000000000114 = bStack0000000000000114 & 1;
    bVar1 = bStack0000000000000114;
  }
  else {
    bVar1 = 0;
    if (iStack00000000000000e4 != 7) {
      return in_stack_00000138._7_1_;
    }
  }
LAB_02c47150:
  bStack0000000000000054 = FUN_02a4dcd0(bVar1,0);
  bStack0000000000000054 = bStack0000000000000054 & 1;
  if (bStack0000000000000054 == 0) {
    iStack00000000000000e4 = 9;
  }
  else {
    iStack00000000000000e4 = 0;
  }
  if (iStack00000000000000e4 == 0) {
    FUN_015d6960(*(undefined8 *)PTR_DAT_037f45f0);
    uVar3 = FUN_02c55238(0);
    unaff_x19[0xd] = uVar3;
    if (unaff_x19[0xd] == 0) {
      iStack00000000000000e4 = 10;
    }
    else {
      iStack00000000000000e4 = 0;
    }
    if (iStack00000000000000e4 == 0) {
      lVar4 = unaff_x19[0xd];
      FUN_015d6ff8(lVar4);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      FUN_015d6ff8(uVar3);
      uStack000000000000002c = FUN_02c475b8(uVar3);
      uVar3 = unaff_x19[0xd];
      FUN_015d6ff8(uVar3);
      uStack000000000000001c = FUN_02c42414(uVar3);
      uVar2 = FUN_02c42414(unaff_x19[0x12]);
      FUN_02a4de38(uStack000000000000002c,uStack000000000000001c,uVar2,0);
    }
    else {
      if (iStack00000000000000e4 != 10) {
        return in_stack_00000138._7_1_;
      }
      FUN_015d6960(*(undefined8 *)PTR_DAT_037f8790);
      uVar3 = FUN_02c55288(0);
      FUN_015d6ff8(uVar3);
      uStack000000000000000c = FUN_02c475b8(uVar3);
      uVar2 = FUN_02c42414(unaff_x19[0x12]);
      FUN_02a4de38(uStack000000000000000c,0,uVar2,0);
    }
  }
  else if (iStack00000000000000e4 != 9) {
    return in_stack_00000138._7_1_;
  }
  return bStack0000000000000114 & 1;
}


