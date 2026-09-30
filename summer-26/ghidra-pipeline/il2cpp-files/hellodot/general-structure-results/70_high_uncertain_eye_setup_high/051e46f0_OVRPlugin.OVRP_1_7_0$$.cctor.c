/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 051e46f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_7_0___cctor(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  ulong uVar6;
  undefined8 *puVar7;
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
  
  puVar1 = PTR_DAT_06604b78;
  lVar3 = FUN_02ce7ad4(*param_1,*(undefined4 *)(unaff_x19 + 0x18));
  if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
    uVar6 = 0;
    uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    puVar7 = (undefined8 *)(lVar3 + 0x24);
    do {
      if (uVar5 <= uVar6) {
LAB_051e47f4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      FUN_05155480(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x20 + uVar6 * 8),1,0);
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar2 = FUN_051e47fc(uVar6 & 0xffffffff,&stack0x00000068);
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000028 = in_stack_00000048;
      uStack000000000000002c = uStack000000000000004c;
      uStack0000000000000030 = uStack0000000000000050;
      if (lVar3 == 0) goto LAB_051e47f8;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_051e47f4;
      *(undefined4 *)((long)puVar7 + -4) = uVar2;
      uVar6 = uVar6 + 1;
      *(undefined8 *)((long)puVar7 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)puVar7 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      puVar7[1] = CONCAT44(uStack000000000000004c,in_stack_00000048);
      *puVar7 = in_stack_00000040;
      uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
      puVar7 = puVar7 + 4;
    } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  lVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_051e48f8();
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = lVar3;
    return lVar4;
  }
LAB_051e47f8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


