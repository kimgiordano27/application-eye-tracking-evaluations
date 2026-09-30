/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 05be554c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  ulong uVar6;
  undefined4 *puVar7;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  puVar1 = PTR_DAT_07112160;
  if (unaff_x19 != 0) {
    lVar3 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116b58,*(undefined4 *)(unaff_x19 + 0x18));
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar6 = 0;
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined4 *)(lVar3 + 0x20);
      do {
        if (uVar5 <= uVar6) {
LAB_05be5644:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x20 + uVar6 * 8),1,0);
        uStack0000000000000028 = in_stack_00000000._12_4_;
        in_stack_00000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = in_stack_00000018;
        uStack000000000000002c = uStack0000000000000010;
        uStack0000000000000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar2 = FUN_05bf3340(uVar6 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) goto LAB_05be5648;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_05be5644;
        uVar6 = uVar6 + 1;
        *puVar7 = uVar2;
        *(ulong *)(puVar7 + 3) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(puVar7 + 1) = in_stack_00000020;
        *(undefined8 *)(puVar7 + 6) = uStack0000000000000034;
        *(ulong *)(puVar7 + 4) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        puVar7[8] = 0;
        puVar7 = puVar7 + 9;
        uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
      } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05bf3450();
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
      return lVar4;
    }
  }
LAB_05be5648:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


