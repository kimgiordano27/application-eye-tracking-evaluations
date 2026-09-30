/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$.cctor
ENTRY_POINT: 01fa1578
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_87_0___cctor(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint unaff_w19;
  long unaff_x21;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  long lVar9;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 uStack000000000000001c;
  
                    /* try { // try from 01fa157c to 020a160b has its CatchHandler @ 01fa0b10 */
  thunk_FUN_01279b34(PTR_DAT_027b3ec0);
  *(undefined1 *)(unaff_x22 + 0xf6d) = 1;
  puVar2 = PTR_DAT_027b3ec0;
  uStack000000000000001c = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  uStack0000000000000004 = 0;
  if (unaff_x21 == 0) {
                    /* catch() { ... } // from try @ 01fa1438 with catch @ 01fa16f8
                       try { // try from 01fa16f8 to 020a170f has its CatchHandler @ 01fa0b10 */
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar4 = thunk_FUN_0124bba8();
    FUN_01e7e374(uVar4,0);
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c2020);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar4,uVar5);
  }
  if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9df84();
  FUN_01f9e230(unaff_w19 & 0xfffffff7,&stack0x00000010,&stack0x0000001c,&stack0x00000004);
  lVar3 = FUN_01fa03bc();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01fa1728 to 020a1767 has its CatchHandler @ 01fa0b10 */
    FUN_01230ca0();
  }
  if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      uVar5 = in_stack_00000010;
      uVar4 = in_stack_00000008;
      if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      lVar7 = *(long *)(lVar3 + 0x20 + uVar8 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01f9e508(lVar7,unaff_w19 & 0xfffffff7,uVar5,0,uVar4);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar1 = lVar9 != 0;
        lVar9 = lVar7;
        if (bVar1) {
          uVar4 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar5 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar5,uVar4,0);
          uVar4 = thunk_FUN_01279b34(PTR_DAT_027c2020);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar5,uVar4);
        }
      }
      uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return lVar9;
}


