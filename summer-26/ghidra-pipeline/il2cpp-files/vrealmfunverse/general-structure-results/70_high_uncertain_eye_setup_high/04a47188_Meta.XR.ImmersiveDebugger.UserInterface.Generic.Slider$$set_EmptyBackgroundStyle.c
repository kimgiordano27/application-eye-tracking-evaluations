/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$set_EmptyBackgroundStyle
ENTRY_POINT: 04a47188
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a4727c) */

uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__set_EmptyBackgroundStyle
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
code_r0x04a47188:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_04a4717c;
LAB_04a47194:
  puVar1 = (undefined8 *)FUN_02b7654c(unaff_x22,param_3,0);
  do {
    (*(code *)*puVar1)(unaff_x22,puVar1[1]);
    uVar2 = FUN_04a448fc();
    if ((uVar2 & 1) == 0) {
LAB_04a471e4:
      if (in_stack_00000018 == (long *)0x0) goto code_r0x04a47254;
      lVar3 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_04a47228;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04a47128;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x24,0);
LAB_04a47128:
    unaff_w21 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((unaff_w21 & 1) == 0) goto LAB_04a471e4;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02b76218(param_3);
    }
    param_1 = *in_stack_00000018;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x22 = in_stack_00000018;
    if (in_x9 == 0) goto LAB_04a47194;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04a4717c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x04a47188;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04a47244;
    }
  }
LAB_04a47228:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x23,0);
LAB_04a47244:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
code_r0x04a47254:
  return (unaff_w21 ^ 1) & 1;
}


