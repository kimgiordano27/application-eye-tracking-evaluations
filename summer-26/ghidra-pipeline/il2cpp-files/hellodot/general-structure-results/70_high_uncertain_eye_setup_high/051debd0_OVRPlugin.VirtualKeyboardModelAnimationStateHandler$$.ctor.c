/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$.ctor
ENTRY_POINT: 051debd0
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  puVar2 = PTR_DAT_06605450;
  if ((DAT_06a715c6 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06605450);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
    DAT_06a715c6 = 1;
  }
  uVar3 = FUN_02ce7ad4(*(undefined8 *)puVar2,0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_02ce7ad4(*(undefined8 *)puVar2,0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_04f7383c(param_1,0);
  puVar2 = PTR_DAT_065d62a0;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar4) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_05f002ac(&stack0x00000020,0);
        *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(ulong *)(param_1 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(param_1 + 0x20) = in_stack_00000020;
        *(undefined8 *)(param_1 + 0x34) = uStack0000000000000034;
        *(ulong *)(param_1 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05f002ac(&stack0x00000060,0);
      in_stack_00000048 = uStack0000000000000068;
      in_stack_00000040 = in_stack_00000060;
      uStack0000000000000054 = uStack0000000000000074;
      uStack0000000000000050 = uStack0000000000000070;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_051ded68:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      puVar1 = (undefined8 *)(lVar6 + lVar5);
      *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000074;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      puVar1[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *puVar1 = in_stack_00000060;
      lVar6 = *(long *)(param_1 + 0x18);
      FUN_05f002ac(&stack0x00000020,0);
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = uStack0000000000000034;
      uStack0000000000000068 = uStack0000000000000028;
      uStack000000000000006c = uStack000000000000002c;
      uStack0000000000000070 = uStack0000000000000030;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_051ded68;
      puVar1 = (undefined8 *)(lVar6 + lVar5);
      lVar5 = lVar5 + 0x1c;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)puVar1 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = in_stack_00000020;
      lVar6 = *(long *)(param_1 + 0x10);
      uVar4 = uVar4 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


