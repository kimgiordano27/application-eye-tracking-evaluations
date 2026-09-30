/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_60
ENTRY_POINT: 05bfbf9c
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


void OVRPlugin_<>c__<_cctor>b__810_60(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  long unaff_x19;
  byte bVar9;
  byte bVar10;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000040 = param_1;
  uStack0000000000000050 = param_1;
  uVar6 = FUN_06a50bc8();
  uVar8 = 0;
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_06a50bc8(0x32,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_06a50bc8(0x33,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_06a50bc8(0x34,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_06a50bc8(0x35,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_06a50bc8(0x36,0);
            if ((uVar6 & 1) == 0) goto LAB_05bfc02c;
            uVar8 = 5;
          }
          else {
            uVar8 = 4;
          }
        }
        else {
          uVar8 = 3;
        }
      }
      else {
        uVar8 = 2;
      }
    }
    else {
      uVar8 = 1;
    }
  }
  *(undefined4 *)(unaff_x19 + 0x28) = uVar8;
  FUN_05bfc280();
LAB_05bfc02c:
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
    bVar10 = 0;
    bVar9 = 0;
    uStack0000000000000048 = in_stack_00000010;
    uStack0000000000000040 = in_stack_00000008;
    uStack0000000000000058 = in_stack_00000020;
    uStack0000000000000050 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = (undefined1 *)&stack0x00000040;
    while (uVar6 = FUN_0543cc20(&stack0x00000040,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      lVar7 = *(long *)puVar2;
      in_stack_00000038 = uStack0000000000000058;
      in_stack_00000030 = uStack0000000000000050;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar2;
      }
      bVar5 = FUN_06ccea40(&stack0x00000030,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),
                           (long)&stack0x00000028 + 4,0);
      lVar7 = *(long *)puVar2;
      bVar9 = bVar5 & in_stack_00000028._4_1_ != '\0' | bVar9;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar2;
      }
      bVar5 = FUN_06ccea40(&stack0x00000030,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),
                           (long)&stack0x00000028 + 4,0);
      bVar10 = bVar5 & in_stack_00000028._4_1_ != '\0' | bVar10;
    }
    FUN_0543cc1c(&stack0x00000040,*(undefined8 *)puVar3);
    if (bVar9 == 0) {
      bVar5 = 0;
      bVar9 = 0;
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
      bVar9 = 1;
    }
    if ((bVar10 != 0) && (bVar9 = bVar5, *(char *)(unaff_x19 + 0x30) == '\0')) {
      iVar1 = *(int *)(unaff_x19 + 0x28) + -1;
      *(int *)(unaff_x19 + 0x28) = iVar1;
      if (iVar1 < 0) {
        *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x2c) + -1;
      }
      FUN_05bfc280();
    }
    *(byte *)(unaff_x19 + 0x30) = bVar10 | bVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


