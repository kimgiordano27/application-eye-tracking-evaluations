/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 060d67c8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_tiledMultiResSupported(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_stack_00000000 [16];
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined1 in_stack_00000040 [16];
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x20) != 0)) {
    lVar3 = *(long *)(param_2 + 0x48);
    uVar1 = FUN_071938f0(*(long *)(param_3 + 0x20),0);
    if (lVar3 != 0) {
      FUN_071939c0(lVar3,uVar1,0);
      if (*(long *)(param_2 + 0x48) != 0) {
        lVar3 = FUN_071bd0d0(*(long *)(param_2 + 0x48),0);
        if (((*(long *)(param_3 + 0x20) != 0) &&
            (lVar2 = FUN_071bd0d0(*(long *)(param_3 + 0x20),0), lVar2 != 0)) &&
           (FUN_071d2870(lVar2,0), lVar3 != 0)) {
          FUN_071d0c1c(lVar3,0);
          if (*(long *)(param_2 + 0x50) != 0) {
            FUN_0718a8f8(*(long *)(param_2 + 0x50),1,0);
            FUN_060bc64c(&stack0x00000040 + 4,*(undefined8 *)(param_2 + 0x40),0);
            uStack0000000000000028 = in_stack_00000040._12_4_;
            in_stack_00000020 = in_stack_00000040._4_8_;
            uStack0000000000000034 = in_stack_00000058;
            uStack000000000000002c = uStack0000000000000050;
            uStack0000000000000030 = uStack0000000000000054;
            FUN_060d6900(&stack0x00000080,param_2,param_3,&stack0x00000020);
            if (*(long *)(param_3 + 0x20) != 0) {
              uVar1 = FUN_071bd0d0(*(long *)(param_3 + 0x20),0);
              FUN_0606b2f8(&stack0x00000000 + 4,uVar1,0,0);
              uStack0000000000000060 = in_stack_00000000._4_8_;
              uStack0000000000000074 = (undefined4)in_stack_00000018;
              uStack0000000000000078 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
              uStack000000000000006c = in_stack_00000010;
              uVar1 = FUN_060526d8(param_2 + 0x58,&stack0x00000060,&stack0x00000080,0);
              *(undefined8 *)(param_2 + 0x70) = uVar1;
              thunk_FUN_036b7ad0((undefined8 *)(param_2 + 0x70),uVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


