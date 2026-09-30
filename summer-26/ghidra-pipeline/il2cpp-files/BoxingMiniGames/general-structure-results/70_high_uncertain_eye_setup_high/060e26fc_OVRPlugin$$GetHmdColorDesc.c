/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 060e26fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHmdColorDesc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0xc03) = 1;
  plVar1 = (long *)FUN_03642a4c(*unaff_x21,5);
  lVar2 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_060e28bc(lVar2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_060e28ac:
    uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_036b7ad0(plVar1 + 4,lVar2);
    lVar2 = thunk_FUN_0367fe20(*unaff_x22);
    FUN_060e28bc(lVar2,1);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_060e28ac;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar2;
      thunk_FUN_036b7ad0(plVar1 + 5,lVar2);
      lVar2 = thunk_FUN_0367fe20(*unaff_x22);
      FUN_060e28bc(lVar2,2);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_060e28ac;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_036b7ad0(plVar1 + 6,lVar2);
        lVar2 = thunk_FUN_0367fe20(*unaff_x22);
        FUN_060e28bc(lVar2,3);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_060e28ac;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar2;
          thunk_FUN_036b7ad0(plVar1 + 7,lVar2);
          lVar2 = thunk_FUN_0367fe20(*unaff_x22);
          FUN_060e28bc(lVar2,4);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_0367fd24(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_060e28ac;
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar2;
            thunk_FUN_036b7ad0(plVar1 + 8,lVar2);
            *(long *)(unaff_x19 + 0x10) = (long)plVar1;
            thunk_FUN_036b7ad0((long *)(unaff_x19 + 0x10),plVar1);
            FUN_05e5ae34();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


