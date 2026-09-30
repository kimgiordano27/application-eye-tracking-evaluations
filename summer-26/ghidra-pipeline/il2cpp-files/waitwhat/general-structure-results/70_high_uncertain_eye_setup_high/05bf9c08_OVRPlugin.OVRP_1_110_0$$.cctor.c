/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$.cctor
ENTRY_POINT: 05bf9c08
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


long OVRPlugin_OVRP_1_110_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xff0));
  FUN_03188a78(PTR_DAT_07112168);
  *(undefined1 *)(unaff_x20 + 0xe49) = 1;
  puVar1 = PTR_DAT_07112168;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  if (unaff_x19 != 0) {
    lVar3 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116ff0,*(undefined4 *)(unaff_x19 + 0x18));
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar6 = 0;
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)(lVar3 + 0x24);
      do {
        if (uVar5 <= uVar6) {
LAB_05bf9d28:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x20 + uVar6 * 8),1,0);
        in_stack_00000028 = in_stack_00000000._12_4_;
        in_stack_00000020 = in_stack_00000000._4_8_;
        uStack0000000000000034 = (undefined4)in_stack_00000018;
        in_stack_00000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack000000000000002c = uStack0000000000000010;
        in_stack_00000030 = uStack0000000000000014;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar2 = FUN_05bf9d30(uVar6 & 0xffffffff,&stack0x00000048);
        if (lVar3 == 0) goto LAB_05bf9d2c;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_05bf9d28;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((long)puVar7 + -4) = uVar2;
        puVar7[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *puVar7 = in_stack_00000020;
        *(ulong *)((long)puVar7 + 0x14) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)((long)puVar7 + 0xc) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        puVar7 = puVar7 + 4;
        uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
      } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar1);
    FUN_05bf9e40();
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
      return lVar4;
    }
  }
LAB_05bf9d2c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


