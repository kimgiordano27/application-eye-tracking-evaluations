/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 051b2e98
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSetupLayer(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  puVar5 = PTR_DAT_066089c8;
  puVar4 = PTR_DAT_066089c0;
  if ((DAT_06a712f8 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608830);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608838);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608840);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066089d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608848);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066089c8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066089c0);
    DAT_06a712f8 = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_03a7a09c(lVar7,*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_066089d0;
  puVar5 = PTR_DAT_06608838;
  puVar4 = PTR_DAT_06608830;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x130) != 0)) {
    FUN_03968dbc(&stack0x00000080,*(long *)(param_2 + 0x130),*(undefined8 *)PTR_DAT_06608848);
    in_stack_00000038 = in_stack_00000088;
    in_stack_00000030 = in_stack_00000080;
    in_stack_00000040 = in_stack_00000090;
    while( true ) {
      uVar8 = FUN_0481f4e4(&stack0x00000030,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        FUN_0481f4e0(&stack0x00000030,*(undefined8 *)puVar4);
        uVar1 = *(undefined4 *)(param_2 + 0xe4);
        uVar2 = *(undefined4 *)(param_2 + 0x128);
        uVar12 = *(undefined4 *)(param_2 + 0xdc);
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 1) = uVar1;
        *(undefined4 *)((long)param_1 + 0xc) = uVar2;
        *(undefined4 *)(param_1 + 2) = uVar12;
        uVar13 = *(undefined8 *)(param_2 + 0xf0);
        uVar10 = *(undefined8 *)(param_2 + 0xe8);
        *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_2 + 0xf8);
        *(undefined8 *)((long)param_1 + 0x1c) = uVar13;
        *(undefined8 *)((long)param_1 + 0x14) = uVar10;
        uVar10 = *(undefined8 *)(param_2 + 0x110);
        uVar14 = *(undefined8 *)(param_2 + 0x108);
        uVar13 = *(undefined8 *)(param_2 + 0x100);
        *(undefined4 *)((long)param_1 + 0x44) = 0;
        *(undefined8 *)((long)param_1 + 0x3c) = uVar10;
        *(undefined8 *)((long)param_1 + 0x34) = uVar14;
        *(undefined8 *)((long)param_1 + 0x2c) = uVar13;
        return;
      }
      FUN_051b2ba4(&stack0x00000080,in_stack_00000040);
      if (lVar7 == 0) break;
      in_stack_00000058 = in_stack_00000088;
      in_stack_00000050 = in_stack_00000080;
      in_stack_00000068 = in_stack_00000098;
      in_stack_00000060 = in_stack_00000090;
      in_stack_00000078 = in_stack_000000a8;
      in_stack_00000070 = in_stack_000000a0;
      lVar11 = *(long *)puVar6;
      lVar9 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (uVar3 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
        lVar9 = lVar9 + (long)(int)uVar3 * 0x30;
        *(undefined8 *)(lVar9 + 0x38) = in_stack_00000098;
        *(undefined8 *)(lVar9 + 0x30) = in_stack_00000090;
        *(undefined8 *)(lVar9 + 0x48) = in_stack_000000a8;
        *(undefined8 *)(lVar9 + 0x40) = in_stack_000000a0;
        *(undefined8 *)(lVar9 + 0x28) = in_stack_00000088;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000080;
      }
      else {
        FUN_03a7a940(lVar7,&stack0x00000080,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


