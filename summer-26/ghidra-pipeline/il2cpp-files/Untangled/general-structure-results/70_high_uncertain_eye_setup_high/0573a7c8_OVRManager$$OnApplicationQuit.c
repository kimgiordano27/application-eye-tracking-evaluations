/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 0573a7c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0573a924) */
/* WARNING: Removing unreachable block (ram,0x0573a864) */

undefined8 OVRManager__OnApplicationQuit(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  long *unaff_x25;
  
  if (param_2 == 1) {
    plVar2 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited(param_1);
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0573a724;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0573a724:
      (*(code *)*puVar1)();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ecbb70(lVar6);
    }
    lVar6 = 0;
  }
  else {
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x0573a854;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02eea86c();
code_r0x0573a854:
      (*(code *)*puVar1)();
    }
    if (param_2 != 1) {
      if (unaff_x19 != (long *)0x0) {
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
              goto code_r0x0573a90c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02eea86c();
code_r0x0573a90c:
        (*(code *)*puVar1)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fafaac(param_1);
    }
    plVar2 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited(param_1);
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0573a788;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0573a788:
    (*(code *)*puVar1)();
  }
  if (lVar6 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ecbb70(lVar6);
}


