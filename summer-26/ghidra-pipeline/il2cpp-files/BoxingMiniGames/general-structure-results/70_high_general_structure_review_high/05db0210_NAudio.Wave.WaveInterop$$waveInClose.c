/*
FUNCTION_NAME: NAudio.Wave.WaveInterop$$waveInClose
ENTRY_POINT: 05db0210
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05db01dc) */

undefined8 NAudio_Wave_WaveInterop__waveInClose(long param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x28;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  long lStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x05db0210:
  lStack0000000000000010 = param_1;
  thunk_FUN_0367fa58(param_2,&stack0x00000010);
  in_stack_00000008._4_4_ =
       (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
  thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
  do {
    FUN_05ca5e18();
    do {
      while( true ) {
        unaff_w23 = unaff_w23 + 1;
        iVar3 = (**(code **)(*unaff_x22 + 0x178))();
        if (iVar3 <= unaff_w23) {
          return 1;
        }
        unaff_x24 = (long *)(**(code **)(*unaff_x22 + 0x188))();
        if (unaff_x24 == (long *)0x0) goto LAB_05db0478;
        uVar4 = (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
        uVar5 = FUN_05d493f4(uVar4,0,0);
        if ((uVar5 & 1) == 0) break;
        FUN_05e5edb8(0);
        if (unaff_x21 == 0) goto LAB_05db0478;
        FUN_05ca401c();
        FUN_05ca401c();
        if (unaff_x24[8] == 0) {
          param_1 = unaff_x24[3];
          param_2 = *(undefined8 *)(unaff_x28 + 0x68);
          goto code_r0x05db0210;
        }
        FUN_05ca401c();
      }
      (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      FUN_05db047c();
    } while (in_stack_00000028._4_1_ != '\0');
    iVar3 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
    if (iVar3 == -1) {
      lStack0000000000000010 = unaff_x24[3];
      thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x68),&stack0x00000010);
      in_stack_00000008._4_4_ =
           (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
      if (unaff_x21 == 0) goto LAB_05db0478;
      FUN_05ca5e18();
      if ((int)unaff_x24[4] != 0xffffff) {
        lStack0000000000000010 = CONCAT44(lStack0000000000000010._4_4_,(int)unaff_x24[4]);
        thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x50),&stack0x00000010);
        goto LAB_05db02d8;
      }
    }
    else {
      uVar2 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
      lStack0000000000000010 = CONCAT44(lStack0000000000000010._4_4_,uVar2);
      thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (unaff_x21 == 0) goto LAB_05db0478;
LAB_05db02d8:
      FUN_05ca5338();
    }
    lVar6 = FUN_05daf5fc(unaff_x24);
    if (lVar6 == 0) goto LAB_05db0478;
    sVar1 = FUN_05c91ffc(lVar6,0,0);
    if (sVar1 == 0x3c) {
      plVar7 = (long *)(**(code **)(*unaff_x24 + 0x1a8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      if (plVar7 == (long *)0x0) {
LAB_05db0478:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      if (plVar7 == (long *)0x0) goto LAB_05db0478;
      auVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      _in_stack_00000018 = auVar8;
      uVar4 = NAudio_CoreAudioApi_AudioSessionManager_SessionCreatedDelegate___ctor
                        (&stack0x00000018,*(undefined8 *)PTR_DAT_07a13158,0);
      lVar6 = FUN_05daff2c();
      iVar3 = (**(code **)(*unaff_x24 + 0x198))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1a0));
      if ((iVar3 == -1) && (lVar6 != 0)) {
        FUN_05c98b2c(*(undefined8 *)PTR_DAT_07a13180,uVar4,lVar6,0);
      }
      else {
        FUN_05c8e390(*(undefined8 *)PTR_DAT_07a13160,uVar4,0);
      }
    }
    uVar2 = (**(code **)(*unaff_x24 + 0x178))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x180));
    lStack0000000000000010 = CONCAT44(lStack0000000000000010._4_4_,uVar2);
    thunk_FUN_0367fa58(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
  } while( true );
}


