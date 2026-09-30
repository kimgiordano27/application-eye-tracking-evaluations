/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_96
ENTRY_POINT: 033feaf4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033febd0) */
/* WARNING: Removing unreachable block (ram,0x033fecec) */
/* WARNING: Removing unreachable block (ram,0x033fecf8) */

undefined4 OVRPlugin_<>c__<_cctor>b__786_96(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w20;
  undefined4 uVar6;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  while( true ) {
                    /* catch() { ... } // from try @ 033feae8 with catch @ 033feafc */
    FUN_033fe3ac();
                    /* try { // try from 033feb08 to 034feb13 has its CatchHandler @ 033feb28 */
    if (in_stack_00000008 == (long *)0x0) {
      if (in_stack_00000000._4_1_ != '\0') {
        FUN_033fd850();
      }
      return 1;
    }
                    /* try { // try from 033feb14 to 034feb1f has its CatchHandler @ 033fe918 */
    FUN_033fd850();
    if (in_stack_00000008 == (long *)0x0) break;
                    /* try { // try from 033feb20 to 034feb27 has its CatchHandler @ 033feb28 */
    lVar2 = *unaff_x25;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033feb08 with catch @ 033feb28
                       catch(type#2 @ 00000000) { ... } // from try @ 033feb20 with catch @ 033feb28
                        */
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *unaff_x25;
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 5) == '\0') {
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar2 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_033fec28;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(in_stack_00000008,*unaff_x26,0);
LAB_033fec28:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    }
    else {
      FUN_0340037c(1,0);
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar2 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_033feba0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(in_stack_00000008,*unaff_x26,0);
LAB_033feba0:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
      FUN_0340037c(0,0);
    }
    in_stack_00000008 = (long *)0x0;
    uVar4 = thunk_FUN_01db5314(0);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      goto LAB_033fecb8;
    }
    iVar1 = thunk_FUN_01dc9540(0);
    if (0x1d < iVar1 - unaff_w20) break;
    in_stack_00000000._4_1_ = '\0';
  }
  uVar6 = 1;
LAB_033fecb8:
  FUN_033fd850();
  return uVar6;
}


