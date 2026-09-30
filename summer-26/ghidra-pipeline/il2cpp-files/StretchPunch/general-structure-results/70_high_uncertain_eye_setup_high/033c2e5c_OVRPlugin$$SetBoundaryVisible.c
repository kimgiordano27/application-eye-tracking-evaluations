/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 033c2e5c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetBoundaryVisible(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long lVar6;
  uint unaff_w24;
  long *unaff_x25;
  uint uVar7;
  
  do {
    iVar5 = (int)param_1;
    if (iVar5 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
                    /* try { // try from 033c2e70 to 034c2e73 has its CatchHandler @ 033c2f40 */
        if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_033c2fb8;
        plVar1 = *(long **)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_033c2fb4;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
                    /* try { // try from 033c2e98 to 034c2f07 has its CatchHandler @ 033c2f78 */
        if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_033c2fb8;
        if (plVar1 == (long *)0x0) goto LAB_033c2fb4;
        uVar2 = (**(code **)(*plVar1 + 0x8e8))
                          (plVar1,*(undefined8 *)(unaff_x19 + (long)(int)uVar7 * 8 + 0x20),
                           *(undefined8 *)(*plVar1 + 0x8f0));
        if ((uVar2 & 1) == 0) {
          iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
          break;
        }
        uVar7 = uVar7 + 1;
        iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
      } while ((int)uVar7 < iVar5);
    }
    if (iVar5 <= (int)uVar7) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_033c2fb8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (unaff_x21 == (long *)0x0) {
LAB_033c2fb4:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar6 = *unaff_x25;
                    /* try { // try from 033c2f08 to 034c2f23 has its CatchHandler @ 033c26dc */
      if ((lVar6 != 0) &&
         (lVar3 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4,0);
      }
      if (*(uint *)(unaff_x21 + 3) <= unaff_w22) goto LAB_033c2fb8;
      unaff_x21[(long)(int)unaff_w22 + 4] = lVar6;
                    /* try { // try from 033c2f24 to 034c2f27 has its CatchHandler @ 033c2f4c */
      thunk_FUN_01e10808(unaff_x21 + (long)(int)unaff_w22 + 4,lVar6);
      unaff_w22 = unaff_w22 + 1;
    }
    do {
      unaff_w24 = unaff_w24 + 1;
                    /* try { // try from 033c2f38 to 034c2f63 has its CatchHandler @ 033c2f78 */
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
        if (unaff_w22 == 0) {
          lVar6 = 0;
        }
        else {
          if (unaff_w22 != 1) {
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar6 = FUN_033c3010();
            return lVar6;
          }
          if (unaff_x21 == (long *)0x0) goto LAB_033c2fb4;
          if ((int)unaff_x21[3] == 0) goto LAB_033c2fb8;
          lVar6 = unaff_x21[4];
        }
        return lVar6;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_033c2fb8;
      unaff_x25 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
      plVar1 = (long *)*unaff_x25;
      if ((plVar1 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar1 + 0x3b8))(plVar1,*(undefined8 *)(*plVar1 + 0x3c0)),
         unaff_x23 == 0)) goto LAB_033c2fb4;
    } while (*(long *)(unaff_x23 + 0x18) == 0);
    if (unaff_x19 == 0) goto LAB_033c2fb4;
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
  } while( true );
}


