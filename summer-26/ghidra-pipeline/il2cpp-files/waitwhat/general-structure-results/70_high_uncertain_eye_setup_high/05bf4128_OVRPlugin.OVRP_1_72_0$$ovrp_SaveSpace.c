/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 05bf4128
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  
  unaff_x22[1] = param_2._8_8_;
  *unaff_x22 = param_2._0_8_;
  uVar11 = *(undefined4 *)(param_1 + 0x3f4);
  uVar13 = *(undefined4 *)(in_x10 + 0x3f8);
  *(long *)((long)unaff_x22 + 0x14) = param_3._8_8_;
  *(long *)((long)unaff_x22 + 0xc) = param_3._0_8_;
  uVar12 = *(undefined4 *)(in_x9 + 0x68c);
  *(undefined4 *)(unaff_x20 + 0x334) = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  FUN_069e4d6c(uVar11,uVar12,uVar13,&stack0x00000060,0);
  uStack0000000000000054 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  uStack000000000000004c = uStack000000000000006c;
  in_stack_00000050 = uStack0000000000000070;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(ulong *)((long)unaff_x22 + 0x2c) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)((long)unaff_x22 + 0x24) = uStack0000000000000060;
    unaff_x22[7] = uStack0000000000000054;
    unaff_x22[6] = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    uVar13 = DAT_012e3d7c;
    uVar12 = DAT_012e3bd0;
    uVar11 = DAT_012e3bcc;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_069e4d6c(uVar11,uVar12,uVar13,0,0,0,0xbf800000,&stack0x00000020,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
      *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
      *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
      *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
      if (unaff_x19 != 0) {
        lVar8 = *unaff_x23;
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        **(long **)(lVar8 + 0xb8) = unaff_x19;
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x23);
        FUN_05bf3450();
        puVar5 = PTR_DAT_07116de8;
        puVar4 = PTR_DAT_07116de0;
        puVar3 = PTR_DAT_07116dd8;
        puVar2 = PTR_DAT_07116dd0;
        puVar1 = PTR_DAT_07116dc8;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          lVar6 = *(long *)PTR_DAT_07116de8;
          uVar9 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar6 = *(long *)puVar5;
          }
          uVar10 = **(undefined8 **)(lVar6 + 0xb8);
          uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar3);
          FUN_03df8e90(uVar7,uVar10,*(undefined8 *)puVar4,0);
          uVar9 = FUN_03a84bd0(uVar9,uVar7,*(undefined8 *)puVar1);
          uVar9 = FUN_03a900cc(uVar9,*(undefined8 *)puVar2);
          if (lVar8 != 0) {
            lVar6 = *unaff_x23;
            *(undefined8 *)(lVar8 + 0x10) = uVar9;
            *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar8;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


