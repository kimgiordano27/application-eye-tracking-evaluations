/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 03383e90
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               long param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x22;
  long unaff_x25;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(unaff_x25 + 0x5b8);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b8);
    *(undefined1 *)(unaff_x22 + 0x621) = 1;
  }
  plVar1 = (long *)FUN_01c5d2fc(*puVar5,3);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((param_4 != 0) &&
     (lVar2 = thunk_FUN_01c495e4(param_4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_03383f6c:
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  uVar4 = *(uint *)(plVar1 + 3);
  if (uVar4 != 0) {
    plVar1[4] = param_4;
    if (param_5 != 0) {
      lVar2 = thunk_FUN_01c495e4(param_5,*(undefined8 *)(*plVar1 + 0x40));
      if (lVar2 == 0) goto LAB_03383f6c;
      uVar4 = *(uint *)(plVar1 + 3);
    }
    if (1 < uVar4) {
      plVar1[5] = param_5;
      if (param_6 != 0) {
        lVar2 = thunk_FUN_01c495e4(param_6,*(undefined8 *)(*plVar1 + 0x40));
        if (lVar2 == 0) goto LAB_03383f6c;
        uVar4 = *(uint *)(plVar1 + 3);
      }
      if (2 < uVar4) {
        plVar1[6] = param_6;
        FUN_03383e08(param_2,param_3,plVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


