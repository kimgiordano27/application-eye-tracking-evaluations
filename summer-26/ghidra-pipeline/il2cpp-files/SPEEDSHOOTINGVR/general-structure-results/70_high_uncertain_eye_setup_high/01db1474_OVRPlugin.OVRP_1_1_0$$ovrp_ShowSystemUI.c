/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_ShowSystemUI
ENTRY_POINT: 01db1474
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db15b8) */

void OVRPlugin_OVRP_1_1_0__ovrp_ShowSystemUI(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  ulong unaff_x28;
  char in_stack_00000008;
  
  while( true ) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01db13fc with catch @ 01db1478
                       catch(type#2 @ 00000000) { ... } // from try @ 01db146c with catch @ 01db1478
                        */
    if ((unaff_x24 != 0) &&
       (lVar3 = thunk_FUN_0103ffe0(unaff_x24,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *unaff_x23 = unaff_x24;
    thunk_FUN_0106e12c(unaff_x23,unaff_x24);
    unaff_x28 = unaff_x28 + 1;
    unaff_x23 = unaff_x23 + 1;
    lVar3 = *unaff_x21;
    thunk_FUN_00ffe618();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x28) {
      thunk_FUN_00ffe618();
      *unaff_x21 = (long)unaff_x22;
      thunk_FUN_0106e12c();
      thunk_FUN_00ffe618();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_00ffe618();
      iVar2 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = unaff_w26;
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(uint *)(unaff_x19 + 0x18) = iVar2 << 1 | 1;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar1 = uVar1 & unaff_w26;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      thunk_FUN_00ffe618();
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
      thunk_FUN_0106e12c();
      thunk_FUN_00ffe618();
      *(uint *)(unaff_x19 + 0x20) = unaff_w26 + 1;
      if (in_stack_00000008 != '\0') {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01dad12c(unaff_x19 + 0x24,0);
      }
      return;
    }
    lVar3 = *unaff_x21;
    thunk_FUN_00ffe618();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = uVar1 & unaff_w27 + (int)unaff_x28;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    unaff_x24 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


