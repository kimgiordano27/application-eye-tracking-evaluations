/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_61
ENTRY_POINT: 05bfc008
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


void OVRPlugin_<>c__<_cctor>b__810_61(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined4 in_w8;
  long unaff_x19;
  byte bVar8;
  byte bVar9;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  *(undefined4 *)(unaff_x19 + 0x28) = in_w8;
  FUN_05bfc280();
  puVar3 = PTR_DAT_07117058;
  puVar2 = PTR_DAT_07117050;
  uVar6 = FUN_06a50bc8(0x1b,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069864a4(0);
  }
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_04274688(lVar7,*(undefined8 *)puVar2);
  FUN_06ccfe50(4,lVar7,0);
  puVar4 = PTR_DAT_07117038;
  puVar3 = PTR_DAT_07117030;
  puVar2 = PTR_DAT_07117028;
  if (lVar7 != 0) {
    FUN_04275984(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_07117048);
    bVar9 = 0;
    bVar8 = 0;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000040;
    while (uVar6 = FUN_0543cc20(&stack0x00000040,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      lVar7 = *(long *)puVar2;
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar2;
      }
      bVar5 = FUN_06ccea40(&stack0x00000030,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),
                           (long)&stack0x00000028 + 4,0);
      lVar7 = *(long *)puVar2;
      bVar8 = bVar5 & in_stack_00000028._4_1_ != '\0' | bVar8;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar2;
      }
      bVar5 = FUN_06ccea40(&stack0x00000030,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),
                           (long)&stack0x00000028 + 4,0);
      bVar9 = bVar5 & in_stack_00000028._4_1_ != '\0' | bVar9;
    }
    FUN_0543cc1c(&stack0x00000040,*(undefined8 *)puVar3);
    if (bVar8 == 0) {
      bVar5 = 0;
      bVar8 = 0;
    }
    else {
      if (*(char *)(unaff_x19 + 0x30) == '\0') {
        iVar1 = 0;
        if (*(int *)(unaff_x19 + 0x28) + 1 < *(int *)(unaff_x19 + 0x2c)) {
          iVar1 = *(int *)(unaff_x19 + 0x28) + 1;
        }
        *(int *)(unaff_x19 + 0x28) = iVar1;
        FUN_05bfc280();
      }
      bVar5 = 1;
      bVar8 = 1;
    }
    if ((bVar9 != 0) && (bVar8 = bVar5, *(char *)(unaff_x19 + 0x30) == '\0')) {
      iVar1 = *(int *)(unaff_x19 + 0x28) + -1;
      *(int *)(unaff_x19 + 0x28) = iVar1;
      if (iVar1 < 0) {
        *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x2c) + -1;
      }
      FUN_05bfc280();
    }
    *(byte *)(unaff_x19 + 0x30) = bVar9 | bVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


