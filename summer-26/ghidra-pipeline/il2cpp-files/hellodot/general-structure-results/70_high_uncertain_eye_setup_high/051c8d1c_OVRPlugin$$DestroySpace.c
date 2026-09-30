/*
FUNCTION_NAME: OVRPlugin$$DestroySpace
ENTRY_POINT: 051c8d1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroySpace(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  
  plVar2 = (long *)FUN_02ce7ad4(param_1,5);
  lVar3 = thunk_FUN_02cea894(*unaff_x23);
  FUN_051c8eb4(lVar3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_051c8ea4:
    uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    lVar3 = thunk_FUN_02cea894(*unaff_x23);
    FUN_051c8eb4(lVar3,1);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_051c8ea4;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      lVar3 = thunk_FUN_02cea894(*unaff_x23);
      FUN_051c8eb4(lVar3,2);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_051c8ea4;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        lVar3 = thunk_FUN_02cea894(*unaff_x23);
        FUN_051c8eb4(lVar3,3);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_051c8ea4;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          lVar3 = thunk_FUN_02cea894(*unaff_x23);
          FUN_051c8eb4(lVar3,4);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_051c8ea4;
          puVar1 = PTR_DAT_06606c80;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            *(long **)(unaff_x20 + 0x30) = plVar2;
            uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
            FUN_051debc8(uVar5,0);
            *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
            FUN_04f7383c();
            *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


