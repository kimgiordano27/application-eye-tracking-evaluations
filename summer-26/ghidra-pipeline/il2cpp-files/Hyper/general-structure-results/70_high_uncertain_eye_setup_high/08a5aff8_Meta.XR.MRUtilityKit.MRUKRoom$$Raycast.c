/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 08a5aff8
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x24;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  
  FUN_043379c4(&stack0x00000010);
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    in_stack_00000020 = *plVar2;
    __cxa_end_catch();
    plVar2 = (long *)*in_stack_00000028;
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_08a5adc4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x24,0);
LAB_08a5adc4:
      (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948184();
    }
  }
  else {
    FUN_043379c4(&stack0x00000020);
    if (param_2 != 1) {
      FUN_043379c4(&stack0x00000030);
      if (param_2 != 1) {
        FUN_043379c4(&stack0x00000040);
                    /* WARNING: Subroutine does not return */
        FUN_04a6935c(param_1);
      }
      plVar2 = (long *)__cxa_begin_catch(param_1);
      in_stack_00000040 = *plVar2;
      __cxa_end_catch();
      goto code_r0x08a5ae44;
    }
    plVar2 = (long *)__cxa_begin_catch(param_1);
    in_stack_00000030 = *plVar2;
    __cxa_end_catch();
  }
  plVar2 = (long *)*in_stack_00000038;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08a5ae30;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x24,0);
LAB_08a5ae30:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
code_r0x08a5ae44:
  plVar2 = (long *)*in_stack_00000048;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08a5ae9c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x24,0);
LAB_08a5ae9c:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (in_stack_00000040 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


