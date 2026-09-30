/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 0748ae34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin___cctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  uVar3 = (*in_x9)();
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_091f9220 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08a5bcd8(&stack0x00000040,0);
    uStack0000000000000034 = uStack0000000000000054;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000030 = uStack0000000000000050;
    uStack0000000000000028 = uStack0000000000000048;
    uStack000000000000002c = uStack000000000000004c;
LAB_0748af50:
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    return uVar3 & 1;
  }
                    /* catch() { ... } // from try @ 0748ae14 with catch @ 0748ae40 */
                    /* try { // try from 0748ae50 to 0758ae57 has its CatchHandler @ 0748ae6c */
  lVar4 = FUN_068de924();
                    /* try { // try from 0748ae58 to 0758ae63 has its CatchHandler @ 0748ac58 */
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
                    /* try { // try from 0748ae64 to 0758ae6b has its CatchHandler @ 0748ae6c */
    plVar8 = *(long **)(*(long *)(lVar4 + 0x78) + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0748ae50 with catch @ 0748ae6c
                       catch(type#2 @ 00000000) { ... } // from try @ 0748ae64 with catch @ 0748ae6c
                        */
    lVar4 = FUN_068de924();
    if (lVar4 != 0) {
      uStack0000000000000014 = *(undefined8 *)(lVar4 + 0x44);
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x3c) >> 0x20);
      uVar2 = uStack0000000000000050;
      uStack0000000000000048 = (undefined4)*(undefined8 *)(lVar4 + 0x38);
      uVar1 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20);
      in_stack_00000040 = uVar9;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar8 != (long *)0x0) {
        uStack000000000000000c = uStack000000000000004c;
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09220378) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0748af20;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_09220378,1);
LAB_0748af20:
        in_stack_00000068 = uVar1;
        uStack0000000000000074 = uStack0000000000000014;
        uStack000000000000006c = uStack000000000000000c;
        in_stack_00000070 = uVar2;
        in_stack_00000060 = uVar9;
        (*(code *)*puVar5)(&stack0x00000020,plVar8,&stack0x00000060,puVar5[1]);
        goto LAB_0748af50;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


