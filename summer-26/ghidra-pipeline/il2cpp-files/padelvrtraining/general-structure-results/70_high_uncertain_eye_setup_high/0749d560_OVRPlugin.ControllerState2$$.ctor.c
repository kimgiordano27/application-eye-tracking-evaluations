/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 0749d560
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_ControllerState2___ctor(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  lVar3 = FUN_03d2d394(*(undefined8 *)PTR_DAT_09223c98,*(undefined4 *)(param_1 + 0x18));
  puVar1 = PTR_DAT_0921fae8;
  if (in_stack_00000068 != 0) {
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar3 + 0x20);
    do {
      if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)uVar5) {
        lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
        FUN_0749d784();
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
          thunk_FUN_03d1023c((long *)(lVar4 + 0x10),lVar3);
          return lVar4;
        }
        break;
      }
      if (*(uint *)(in_stack_00000068 + 0x18) <= uVar5) {
LAB_0749d680:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      FUN_073fcea8(&stack0x00000020,*(undefined8 *)(in_stack_00000068 + uVar5 * 8 + 0x20),1,0);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar2 = FUN_0749d688(uVar5 & 0xffffffff,&stack0x00000068);
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000028 = in_stack_00000048;
      uStack000000000000002c = uStack000000000000004c;
      uStack0000000000000030 = uStack0000000000000050;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_0749d680;
      *puVar6 = uVar2;
      puVar6[8] = 0;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(puVar6 + 6) = uStack0000000000000054;
      *(ulong *)(puVar6 + 4) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      *(ulong *)(puVar6 + 3) = CONCAT44(uStack000000000000004c,in_stack_00000048);
      *(undefined8 *)(puVar6 + 1) = in_stack_00000040;
      puVar6 = puVar6 + 9;
    } while (in_stack_00000068 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


