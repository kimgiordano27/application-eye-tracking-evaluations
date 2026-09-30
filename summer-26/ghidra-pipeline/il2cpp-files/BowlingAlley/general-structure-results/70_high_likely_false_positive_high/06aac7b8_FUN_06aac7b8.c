/*
FUNCTION_NAME: FUN_06aac7b8
ENTRY_POINT: 06aac7b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_06aac7b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e30bd & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279fc0);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_NovaSamples_UIControls_UIControl<ButtonVisuals>_get_View__);
    DAT_076e30bd = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06bece64(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = thunk_FUN_032a55a4(param_2,*(undefined8 *)PTR_DAT_07279fc0);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_032a55a4(param_2,*(undefined8 *)
                                        Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                              );
    if (lVar3 == 0) {
      uVar5 = FUN_057a25c4(*(undefined8 *)
                            Method_NovaSamples_UIControls_UIControl<ButtonVisuals>_get_View__,
                           param_2,0);
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2b08(uVar5,param_1,0);
      return;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar2 = FUN_06ac4050(*(long *)(param_1 + 0x40),lVar3,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar4 = *(long **)(param_1 + 0x40);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x278))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x280));
        plVar4 = *(long **)(param_1 + 0x40);
        if (plVar4 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 600);
          uVar5 = *(undefined8 *)(*plVar4 + 0x260);
          goto FUN_06aac918;
        }
      }
    }
  }
  else if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = FUN_06ac51c0(*(long *)(param_1 + 0x40),lVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x2b8))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x2c0));
      plVar4 = *(long **)(param_1 + 0x40);
      if (plVar4 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x298);
        uVar5 = *(undefined8 *)(*plVar4 + 0x2a0);
FUN_06aac918:
                    /* WARNING: Could not recover jumptable at 0x06aac928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar4,lVar3,uVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


