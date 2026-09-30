/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.IntegerContainer$$.ctor
ENTRY_POINT: 04a333d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a33514) */

uint Meta_XR_ImmersiveDebugger_Utils_IntegerContainer___ctor
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
  long *in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_04a33404;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_02b7654c(unaff_x22,param_3,0);
LAB_04a33404:
      (*(code *)*puVar1)(unaff_x22,puVar1[1]);
      uVar2 = FUN_04a31c48();
      if ((uVar2 & 1) != 0) {
LAB_04a33448:
        if (in_stack_00000018 == (long *)0x0)
        goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Category;
        lVar3 = *in_stack_00000018;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_04a3348c;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04a33474;
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
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04a3337c;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x23,0);
LAB_04a3337c:
      unaff_w21 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if ((unaff_w21 & 1) == 0) {
        unaff_w21 = 0;
        goto LAB_04a33448;
      }
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
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_04a33474:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__get_Category;
    }
  }
LAB_04a3348c:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*(long *)PTR_DAT_06312f78,0);
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__get_Category:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Category:
  return unaff_w21 & 1;
}


