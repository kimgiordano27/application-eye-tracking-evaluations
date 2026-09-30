/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 0566fbc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShutdownMixedReality(void)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
code_r0x0566fbc0:
  FUN_040101ec();
  do {
    if (unaff_x19 == 0) {
LAB_0566fc60:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0566fc60;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = unaff_x21;
      LeanTween__value(plVar3,unaff_x21);
    }
    else {
      FUN_040101ec();
    }
    do {
      do {
        uVar1 = *(uint *)(unaff_x27 + 0x18);
        unaff_x28 = unaff_x28 + 1;
        if ((int)uVar1 <= (int)unaff_x28) {
          do {
            unaff_x24 = unaff_x24 + 1;
            if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x24) {
              return;
            }
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) goto LAB_0566fc64;
            unaff_x27 = *(long *)(unaff_x23 + unaff_x24 * 8 + 0x20);
          } while ((unaff_x27 == 0) || (uVar1 = *(uint *)(unaff_x27 + 0x18), (int)uVar1 < 1));
          unaff_x28 = 0;
          unaff_x29 = unaff_x27 + 0x20;
        }
        if (uVar1 <= (uint)unaff_x28) {
LAB_0566fc64:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0566fc64 to 0576fd83 has its CatchHandler @ 0566fc64
                       catch() { ... } // from try @ 0566fc64 with catch @ 0566fc64
                       catch() { ... } // from try @ 0566fd94 with catch @ 0566fc64
                       catch() { ... } // from try @ 0566fe64 with catch @ 0566fc64 */
          FUN_02d96868();
        }
        lVar5 = *(long *)(unaff_x29 + unaff_x28 * 8);
        if (lVar5 == 0) goto LAB_0566fc60;
      } while (*(char *)(lVar5 + 0x38) == '\0');
      unaff_x21 = *(long *)(lVar5 + 0x28);
      if (unaff_x21 == 0) goto LAB_0566fc60;
      uVar2 = FUN_0634b218(unaff_x21,0);
    } while (((uVar2 & 1) == 0) || (*(char *)(unaff_x21 + 0x70) == '\0'));
    if (unaff_x20 == 0) goto LAB_0566fc60;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_0566fc60;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto code_r0x0566fbc0;
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *plVar3 = lVar5;
    LeanTween__value(plVar3,lVar5);
  } while( true );
}


