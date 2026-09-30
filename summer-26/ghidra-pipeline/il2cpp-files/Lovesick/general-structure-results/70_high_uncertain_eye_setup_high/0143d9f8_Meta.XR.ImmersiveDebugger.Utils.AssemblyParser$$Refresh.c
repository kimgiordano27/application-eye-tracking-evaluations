/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Refresh
ENTRY_POINT: 0143d9f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Refresh
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar5;
  long in_stack_00000008;
  
  while( true ) {
    uVar5 = FUN_0144a43c(param_5,unaff_x25,param_7,0);
    if (((*(long *)(unaff_x19 + 0x70) == 0) ||
        (FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*unaff_x28),
        in_stack_00000008 == 0)) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
    uVar4 = *(undefined8 *)(in_stack_00000008 + 0x10);
    cVar1 = *(char *)(unaff_x19 + 0x27);
    FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*unaff_x28);
    if (in_stack_00000008 == 0) break;
    FUN_01444ef8(uVar5,param_2,param_3,param_4,unaff_x23,uVar4,unaff_w20,cVar1 != '\0');
    do {
      lVar3 = *(long *)(unaff_x19 + 0x58);
      unaff_w22 = unaff_w22 + 1;
      if (lVar3 == 0) goto LAB_0143da9c;
      if (*(int *)(lVar3 + 0x18) <= unaff_w22) {
        return;
      }
      FUN_0132138c(lVar3,unaff_w22,&stack0x00000008,*unaff_x26);
      unaff_x23 = in_stack_00000008;
      if ((in_stack_00000008 == 0) || (lVar3 = *(long *)(in_stack_00000008 + 0x10), lVar3 == 0))
      goto LAB_0143da9c;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_0143da9c;
      uVar2 = FUN_014440c0(lVar3,0);
    } while ((uVar2 & 1) == 0);
    if ((*(long *)(unaff_x23 + 0x18) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x23 + 0x18) + 0x10), lVar3 == 0)) break;
    param_5 = *(long *)(unaff_x19 + 0x50);
    FUN_0132138c(lVar3,0,&stack0x00000008,*unaff_x27);
    if ((in_stack_00000008 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
    unaff_x25 = *(undefined8 *)(in_stack_00000008 + 0x10);
    FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*unaff_x28);
    param_7 = in_stack_00000008;
    if (param_5 == 0) break;
  }
LAB_0143da9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


