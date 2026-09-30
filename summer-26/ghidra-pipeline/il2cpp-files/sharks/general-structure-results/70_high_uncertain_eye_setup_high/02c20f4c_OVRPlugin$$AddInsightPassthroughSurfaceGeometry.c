/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 02c20f4c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AddInsightPassthroughSurfaceGeometry(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_02c20178();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  iVar1 = thunk_FUN_01847714(1000);
  if (iVar1 < 1) {
    *(undefined1 *)(unaff_x19 + 0xec) = 1;
    return;
  }
  plVar4 = *(long **)(unaff_x19 + 0x60);
  if (plVar4 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    while (iVar1 != 0x1b) {
      FUN_02c21778();
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar1 = thunk_FUN_01847714(100);
      if (iVar1 < 1) {
        return;
      }
      plVar4 = *(long **)(unaff_x19 + 0x60);
      if (plVar4 == (long *)0x0) goto LAB_02c21134;
      iVar1 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    }
    plVar4 = *(long **)(unaff_x19 + 0x60);
    if (plVar4 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      if (iVar1 != 0x5b) {
        FUN_02c21778();
        FUN_02c21778();
        return;
      }
      plVar4 = *(long **)(unaff_x19 + 0x60);
      if (plVar4 != (long *)0x0) {
        iVar1 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if (iVar1 == 0x3b) {
          iVar1 = 0;
        }
        else {
          plVar4 = *(long **)(unaff_x19 + 0x60);
          if (plVar4 == (long *)0x0) goto LAB_02c21134;
          iVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          while (iVar2 - 0x30U < 10) {
            plVar4 = *(long **)(unaff_x19 + 0x60);
            if (plVar4 == (long *)0x0) goto LAB_02c21134;
            iVar1 = iVar2 + iVar1 * 10 + -0x1e0;
            iVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          }
          iVar1 = iVar1 + -0x31;
        }
        plVar4 = *(long **)(unaff_x19 + 0x60);
        if (plVar4 != (long *)0x0) {
          iVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          if (iVar2 == 0x52) {
            iVar2 = 0;
          }
          else {
            plVar4 = *(long **)(unaff_x19 + 0x60);
            if (plVar4 == (long *)0x0) goto LAB_02c21134;
            iVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
            while (iVar3 - 0x30U < 10) {
              plVar4 = *(long **)(unaff_x19 + 0x60);
              if (plVar4 == (long *)0x0) goto LAB_02c21134;
              iVar2 = iVar3 + iVar2 * 10 + -0x1e0;
              iVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
            }
            iVar2 = iVar2 + -0x31;
          }
          *(int *)(unaff_x19 + 0x18) = iVar2;
          *(int *)(unaff_x19 + 0x1c) = iVar1;
          return;
        }
      }
    }
  }
LAB_02c21134:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


