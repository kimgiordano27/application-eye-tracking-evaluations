/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_91
ENTRY_POINT: 033fe8cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__786_91(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar6;
  uint uVar7;
  undefined4 in_stack_00000008;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x540));
  *(undefined1 *)(unaff_x21 + 0xc25) = 1;
  uVar4 = *(uint *)(unaff_x20 + 0x18);
  thunk_FUN_01da0934();
  uVar1 = uVar4 & 0xffff;
  do {
    uVar7 = uVar1;
    uVar6 = uVar4;
    if (uVar7 == uVar6 >> 0x10) goto LAB_033fe9bc;
    uVar2 = uVar7 | uVar6 & 0xffff0000;
    thunk_FUN_01da0934();
                    /* try { // try from 033fe918 to 034fe9a3 has its CatchHandler @ 033fe918
                       catch() { ... } // from try @ 033fe918 with catch @ 033fe918
                       catch() { ... } // from try @ 033fea18 with catch @ 033fe918
                       catch() { ... } // from try @ 033feb14 with catch @ 033fe918 */
    uVar4 = thunk_FUN_01d9976c((uint *)(unaff_x20 + 0x18),uVar6 & 0xffff0000 | uVar7 + 1 & 0xffff,
                               uVar2,0);
    puVar3 = StringLiteral_2260;
    uVar1 = uVar4 & 0xffff;
  } while (uVar4 != uVar2);
  in_stack_00000008 = 0;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 != 0) {
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_033fe9f4:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar5 = *(long *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
      thunk_FUN_01da0934();
      *unaff_x19 = lVar5;
      thunk_FUN_01e10808();
      if (lVar5 != 0) {
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 != 0) {
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            unaff_x19 = (long *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
LAB_033fe9bc:
            *unaff_x19 = 0;
            thunk_FUN_01e10808(unaff_x19,0);
            return uVar7 != uVar6 >> 0x10;
          }
          goto LAB_033fe9f4;
        }
        break;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f53e0(&stack0x00000008);
      lVar5 = *(long *)(unaff_x20 + 0x10);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


