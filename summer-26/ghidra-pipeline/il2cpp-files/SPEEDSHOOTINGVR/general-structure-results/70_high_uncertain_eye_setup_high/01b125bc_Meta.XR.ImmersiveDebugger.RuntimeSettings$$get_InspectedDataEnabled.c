/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_InspectedDataEnabled
ENTRY_POINT: 01b125bc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__get_InspectedDataEnabled(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar6 = 0;
    puVar7 = (undefined4 *)(lVar5 + 0x30);
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (-1 < (int)puVar7[-4]) {
        in_stack_00000008 = *puVar7;
        lVar2 = thunk_FUN_0103fd0c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                   &stack0x00000008);
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_0103ffe0(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar4,0);
        }
        if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
        thunk_FUN_0106e12c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar2);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 6;
    } while (uVar1 != uVar6);
  }
  return;
}


