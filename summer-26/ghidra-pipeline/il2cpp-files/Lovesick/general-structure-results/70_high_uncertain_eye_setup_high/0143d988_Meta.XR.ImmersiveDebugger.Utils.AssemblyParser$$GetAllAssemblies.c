/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$GetAllAssemblies
ENTRY_POINT: 0143d988
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetAllAssemblies
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w22;
  long unaff_x23;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  while( true ) {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar2 = *(long *)(param_1 + unaff_x29 * 8 + 0x20);
    if (lVar2 == 0) break;
    uVar3 = FUN_014440c0(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(unaff_x23 + 0x18) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x23 + 0x18) + 0x10), lVar2 == 0)) break;
      lVar4 = *(long *)(unaff_x19 + 0x50);
      FUN_0132138c(lVar2,0,&stack0x00000008,*unaff_x27);
      if ((in_stack_00000008 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
      uVar6 = *(undefined8 *)(in_stack_00000008 + 0x10);
      FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*unaff_x28);
      if (lVar4 == 0) break;
      uVar6 = FUN_0144a43c(lVar4,uVar6,in_stack_00000008,0);
      if (*(long *)(unaff_x19 + 0x70) == 0) break;
      FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*unaff_x28);
      if ((in_stack_00000008 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
      uVar5 = *(undefined8 *)(in_stack_00000008 + 0x10);
      cVar1 = *(char *)(unaff_x19 + 0x27);
      FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_w20,&stack0x00000008,*unaff_x28);
      if (in_stack_00000008 == 0) break;
      FUN_01444ef8(uVar6,param_3,param_4,param_5,unaff_x23,uVar5,unaff_w20,cVar1 != '\0');
    }
    lVar2 = *(long *)(unaff_x19 + 0x58);
    unaff_w22 = unaff_w22 + 1;
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= unaff_w22) {
      return;
    }
    FUN_0132138c(lVar2,unaff_w22,&stack0x00000008,*unaff_x26);
    if ((in_stack_00000008 == 0) || (param_1 = *(long *)(in_stack_00000008 + 0x10), param_1 == 0))
    break;
    in_CY = unaff_w20 <= *(uint *)(param_1 + 0x18);
    in_ZR = *(uint *)(param_1 + 0x18) == unaff_w20;
    unaff_x23 = in_stack_00000008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


