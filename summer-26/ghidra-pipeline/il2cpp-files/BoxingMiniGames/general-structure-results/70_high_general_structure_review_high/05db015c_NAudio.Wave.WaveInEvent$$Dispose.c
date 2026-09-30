/*
FUNCTION_NAME: NAudio.Wave.WaveInEvent$$Dispose
ENTRY_POINT: 05db015c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint NAudio_Wave_WaveInEvent__Dispose(long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  uint unaff_w25;
  long unaff_x28;
  undefined1 auVar8 [16];
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x05db015c:
  (**(code **)(param_1 + 0x1a8))(unaff_x24,*(undefined8 *)(param_1 + 0x1b0));
  FUN_05db047c();
  if (in_stack_00000028._4_1_ != '\0') goto LAB_05db0430;
  iVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
  if (iVar2 == -1) {
    in_stack_00000010 = unaff_x24[3];
    thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
    uStack000000000000000c =
         (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
    if (unaff_x21 == 0) goto LAB_05db0478;
    FUN_05ca5e18();
    if ((int)unaff_x24[4] != 0xffffff) {
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x24[4]);
      thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x50),&stack0x00000010);
      goto LAB_05db02d8;
    }
  }
  else {
    uVar3 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
    thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
    if (unaff_x21 == 0) goto LAB_05db0478;
LAB_05db02d8:
    FUN_05ca5338();
  }
  lVar5 = FUN_05daf5fc(unaff_x24);
  if (lVar5 == 0) goto LAB_05db0478;
  sVar1 = FUN_05c91ffc(lVar5,0,0);
  if (sVar1 == 0x3c) {
    plVar6 = (long *)(**(code **)(*unaff_x24 + 0x1a8))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
    if (plVar6 == (long *)0x0) {
LAB_05db0478:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if (plVar6 == (long *)0x0) goto LAB_05db0478;
    auVar8 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    _in_stack_00000018 = auVar8;
    uVar7 = NAudio_CoreAudioApi_AudioSessionManager_SessionCreatedDelegate___ctor
                      (&stack0x00000018,*(undefined8 *)PTR_DAT_07a13158,0);
    lVar5 = FUN_05daff2c();
    iVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
    unaff_w20 = uStack0000000000000008;
    if ((iVar2 == -1) && (lVar5 != 0)) {
      FUN_05c98b2c(*(undefined8 *)PTR_DAT_07a13180,uVar7,lVar5,0);
    }
    else {
      FUN_05c8e390(*(undefined8 *)PTR_DAT_07a13160,uVar7,0);
    }
  }
  uVar3 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
  in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
  thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
  do {
    FUN_05ca5e18();
    while( true ) {
      unaff_w25 = 1;
LAB_05db0430:
      unaff_w23 = unaff_w23 + 1;
      iVar2 = (**(code **)(*unaff_x22 + 0x178))();
      if (iVar2 <= unaff_w23) {
        return unaff_w25 & 1;
      }
      unaff_x24 = (long *)(**(code **)(*unaff_x22 + 0x188))();
      if (unaff_x24 == (long *)0x0) goto LAB_05db0478;
      uVar7 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      uVar4 = FUN_05d493f4(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
        param_1 = *unaff_x24;
        goto code_r0x05db015c;
      }
      if (((unaff_w25 | unaff_w20) & 1) == 0) {
        if (unaff_x21 == 0) goto LAB_05db0478;
      }
      else {
        FUN_05e5edb8(0);
        if (unaff_x21 == 0) goto LAB_05db0478;
        FUN_05ca401c();
      }
      FUN_05ca401c();
      if (unaff_x24[8] == 0) break;
      FUN_05ca401c();
    }
    in_stack_00000010 = unaff_x24[3];
    thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
    uStack000000000000000c =
         (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
  } while( true );
}


