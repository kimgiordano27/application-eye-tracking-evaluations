/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 051b1f84
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] OVRPlugin__set_cpuLevel(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long unaff_x24;
  undefined1 auVar6 [16];
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined4 in_stack_00000068;
  
  *(undefined1 *)(unaff_x24 + 0x2ed) = 1;
  lVar1 = OVRPlugin__get_audioInId();
  if (lVar1 == 0) {
    FUN_051b1510();
    FUN_05168180(&stack0x00000020);
    uStack0000000000000054 = uStack0000000000000034;
    in_stack_00000050 = uStack0000000000000030;
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    uStack0000000000000028 = 0;
    in_stack_00000020 = 0;
    FUN_051b20a8(in_stack_00000068,&stack0x00000020);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = in_stack_00000020 & 0xffffffff;
  }
  else {
    plVar2 = (long *)OVRPlugin__get_audioInId();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06608988) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_051b206c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_06608988,1);
LAB_051b206c:
    auVar6 = (*(code *)*puVar3)(plVar2);
  }
  return auVar6;
}


