/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 09099d0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeDepth(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined4 uVar8;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x21 + 0x180) = 0;
  uVar8 = thunk_FUN_049ee3d8();
  plVar7 = *(long **)(unaff_x21 + 0x158);
                    /* try { // try from 09099d18 to 09199d2f has its CatchHandler @ 09099da8 */
  *(undefined4 *)(unaff_x21 + 0x178) = 0;
  puVar1 = PTR_DAT_0ac766c0;
  if (plVar7 == (long *)0x0) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    _uStack0000000000000018 = 0;
    _uStack0000000000000010 = 0;
    in_stack_00000028 = 0;
    _uStack0000000000000020 = 0;
    in_stack_00000030 = 0;
    FUN_0905516c(&stack0x00000010,0,0);
  }
  else {
    if (unaff_x19 == 0) goto LAB_09099e34;
                    /* try { // try from 09099d30 to 09199d97 has its CatchHandler @ 0909994c */
    uVar2 = FUN_0a17834c();
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_09099df4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)puVar1,0);
LAB_09099df4:
    (*(code *)*puVar3)(&stack0x00000010,plVar7,uVar2,puVar3[1]);
  }
  uVar8 = uStack0000000000000010;
  if (unaff_x19 != 0) {
    FUN_09098adc(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                 uStack000000000000001c,uStack0000000000000020,uStack0000000000000024);
    return;
  }
LAB_09099e34:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c(uVar8);
}


