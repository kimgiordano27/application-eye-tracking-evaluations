/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilLevel
ENTRY_POINT: 0569e1bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569e360) */

undefined1  [16] OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilLevel(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x23;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000038;
  
  plVar1 = (long *)FUN_054a7ab8();
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05399594(in_stack_00000038,plVar1,0);
  FUN_059c8114();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0569e254;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar1,*unaff_x23,0);
LAB_0569e254:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  plVar1 = (long *)*in_stack_00000028;
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0569e2bc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar1,*unaff_x23,0);
LAB_0569e2bc:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return ZEXT816(0);
}


