/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$.ctor
ENTRY_POINT: 06dd2d64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton___ctor
               (undefined8 *param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *__dest;
  ulong __n;
  long *plVar5;
  long unaff_x29;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  *(void **)(unaff_x29 + -0x10) = param_2;
  lVar4 = *(long *)(param_3 + 0x20);
  lVar3 = lVar4;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c(lVar4);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0xfc);
  __dest = &stack0x00000000 + -(__n + 0xf & 0x1fffffff0);
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  plVar5 = (long *)*param_1;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c(lVar3);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x28)) {
    param_2 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(__dest,param_2,__n);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (uVar1 < *(uint *)(plVar5 + 3)) {
    memcpy((void *)((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)uVar1 + 0x20),
           __dest,__n);
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    if (uVar1 < *(uint *)(plVar5 + 3)) {
      FUN_03d2d260(lVar3,(long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)uVar1 + 0x20,
                   __dest);
      if (*(long *)(lVar2 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


