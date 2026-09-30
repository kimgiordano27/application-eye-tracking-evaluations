/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$CanBeChanged
ENTRY_POINT: 04a3335c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a33514) */

uint Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__CanBeChanged
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long *in_stack_00000018;
  
code_r0x04a3335c:
  if (!(bool)in_ZR) goto LAB_04a33348;
LAB_04a33360:
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x21,param_3,0);
  do {
    uVar1 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
LAB_04a33448:
      if (in_stack_00000018 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Category;
      lVar3 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_04a3348c;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a33404;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,lVar3,0);
LAB_04a33404:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    uVar5 = FUN_04a31c48();
    if ((uVar5 & 1) != 0) goto LAB_04a33448;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = *in_stack_00000018;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (in_x9 == 0) goto LAB_04a33360;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04a33348:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x04a3335c;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__get_Category;
    }
  }
LAB_04a3348c:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*(long *)PTR_DAT_06312f78,0);
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__get_Category:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Category:
  return uVar1 & 1;
}


