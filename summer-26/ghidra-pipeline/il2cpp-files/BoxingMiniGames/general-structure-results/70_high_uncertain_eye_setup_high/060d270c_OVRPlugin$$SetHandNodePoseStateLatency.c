/*
FUNCTION_NAME: OVRPlugin$$SetHandNodePoseStateLatency
ENTRY_POINT: 060d270c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x060d2820) */
/* WARNING: Removing unreachable block (ram,0x060d285c) */

void OVRPlugin__SetHandNodePoseStateLatency(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
code_r0x060d270c:
  puVar1 = (undefined8 *)FUN_0367cd30(param_1,param_2,param_3);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_060d2814;
      lVar3 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_060d27ec;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_060d27d4;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_060d26cc;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,*unaff_x22,0);
LAB_060d26cc:
    (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    FUN_060d28b8();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000018;
    param_2 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar2 == 0) break;
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
      if (uVar2 == 0) goto LAB_060d2704;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
LAB_060d2704:
  param_3 = 0;
  param_1 = in_stack_00000018;
  goto code_r0x060d270c;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_060d27d4:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_060d2808;
    }
  }
LAB_060d27ec:
  puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,*(long *)PTR_DAT_079f4598,0);
LAB_060d2808:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_060d2814:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_054a890c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_07a24510);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


