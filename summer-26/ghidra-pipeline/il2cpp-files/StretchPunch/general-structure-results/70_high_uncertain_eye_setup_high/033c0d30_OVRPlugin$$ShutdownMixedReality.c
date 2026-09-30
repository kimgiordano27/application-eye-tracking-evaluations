/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 033c0d30
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShutdownMixedReality(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar7;
  long unaff_x23;
  long lVar8;
  ulong unaff_x24;
  long unaff_x25;
  
  while (lVar2 = thunk_FUN_01de26bc(unaff_x23,*(undefined8 *)(param_1 + 0x40)), plVar7 = unaff_x22,
        lVar2 != 0) {
    do {
                    /* try { // try from 033c0d44 to 034c0d87 has its CatchHandler @ 033c12cc */
      if (*(uint *)(unaff_x21 + 3) <= unaff_x24) goto LAB_033c0e14;
      unaff_x22 = plVar7 + 1;
      *plVar7 = unaff_x23;
      thunk_FUN_01e10808(plVar7,unaff_x23);
      uVar5 = *(uint *)(unaff_x19 + 3);
      uVar6 = (ulong)uVar5;
      unaff_x24 = unaff_x24 + 1;
      if ((long)(int)uVar5 <= (long)unaff_x24) {
        if ((int)uVar5 < 1) {
          return;
        }
        if (unaff_x20 == 0) {
LAB_033c0e18:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033c0e18 to 034c0fa7 has its CatchHandler @ 033c0b38 */
          FUN_01d7db70();
        }
        lVar2 = 0;
        plVar7 = unaff_x19 + 4;
        goto LAB_033c0d8c;
      }
      if (uVar6 <= unaff_x24) goto LAB_033c0e14;
      if (unaff_x21 == (long *)0x0) goto LAB_033c0e18;
      unaff_x23 = *(long *)(unaff_x25 + unaff_x24 * 8);
      plVar7 = unaff_x22;
    } while (unaff_x23 == 0);
    param_1 = *unaff_x21;
  }
LAB_033c0e1c:
  uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,0);
LAB_033c0d8c:
  uVar5 = (uint)uVar6;
  if ((*(uint *)(unaff_x20 + 0x18) <= (uint)lVar2) ||
     (uVar1 = *(uint *)(unaff_x20 + 0x20 + lVar2 * 4), *(uint *)(unaff_x21 + 3) <= uVar1)) {
LAB_033c0e14:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  lVar8 = unaff_x21[(long)(int)uVar1 + 4];
  if (lVar8 != 0) {
                    /* try { // try from 033c0dc0 to 034c0deb has its CatchHandler @ 033c121c */
    lVar3 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar3 == 0) goto LAB_033c0e1c;
    uVar5 = (uint)unaff_x19[3];
  }
  if (uVar5 <= (uint)lVar2) goto LAB_033c0e14;
  *plVar7 = lVar8;
  thunk_FUN_01e10808(plVar7,lVar8);
  uVar6 = unaff_x19[3];
  lVar2 = lVar2 + 1;
                    /* try { // try from 033c0df8 to 034c0dff has its CatchHandler @ 033c1208 */
  plVar7 = plVar7 + 1;
  if ((int)uVar6 <= (int)lVar2) {
    return;
  }
  goto LAB_033c0d8c;
}


