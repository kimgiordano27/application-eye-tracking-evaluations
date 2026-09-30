/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 027f08f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027f09f4) */
/* WARNING: Removing unreachable block (ram,0x027f09bc) */

void OVRPlugin__SetBoundaryVisible(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long lVar6;
  undefined8 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (unaff_x21 != (long *)0x0) {
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_027f0830;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01a472ec();
LAB_027f0830:
      (*(code *)*puVar1)();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar6);
    }
    lVar6 = 0;
  }
  else {
    if (unaff_x21 != (long *)0x0) {
      lVar6 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x027f0988;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01a472ec();
code_r0x027f0988:
      (*(code *)*puVar1)();
    }
    if (param_2 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        FUN_01a4adbc();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_01a4adbc();
  }
  if (lVar6 == 0) {
    thunk_FUN_01a4b338();
    *unaff_x19 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar6);
}


