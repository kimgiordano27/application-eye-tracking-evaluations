/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogWarning
ENTRY_POINT: 04ac9074
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04ac9160) */

void Meta_XR_MultiplayerBlocks_Colocation_Logger__LogWarning(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
code_r0x04ac9074:
  puVar1 = (undefined8 *)FUN_02b7654c(param_1,param_2,0);
  do {
    (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_04ac8c00();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04ac8ff8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x24,0);
LAB_04ac8ff8:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_04ac9110;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    param_2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02b76218(param_2);
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    param_1 = in_stack_00000018;
    unaff_x21 = in_stack_00000018;
    if (uVar3 == 0) goto code_r0x04ac9074;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
      if (uVar3 == 0) goto code_r0x04ac9074;
    }
    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04ac912c;
    }
  }
LAB_04ac9110:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x23,0);
LAB_04ac912c:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


