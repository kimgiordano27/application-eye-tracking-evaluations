/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_62
ENTRY_POINT: 033fdc50
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fde00) */

void OVRPlugin_<>c__<_cctor>b__786_62(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar6;
  long lVar7;
  long *unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  ulong uVar8;
  char in_stack_00000008;
  
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fdbe0 with catch @ 033fdc60
                        */
  plVar3 = (long *)FUN_01d7d9bc(**(undefined8 **)(param_1 + 0x890),*(int *)(unaff_x22 + 0x18) << 1);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fdc2c with catch @ 033fdc64
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fdbc0 with catch @ 033fdc68
                        */
  uVar8 = 0;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fdc00 with catch @ 033fdc6c
                        */
  plVar6 = plVar3 + 4;
  while( true ) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fdc3c with catch @ 033fdc70
                        */
    lVar7 = *unaff_x21;
    thunk_FUN_01da0934();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar8) {
      thunk_FUN_01da0934();
      *unaff_x21 = (long)plVar3;
      thunk_FUN_01e10808();
      thunk_FUN_01da0934();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_01da0934();
      iVar2 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = unaff_w26;
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(uint *)(unaff_x19 + 0x18) = iVar2 << 1 | 1;
      lVar7 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = uVar1 & unaff_w26;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      thunk_FUN_01da0934();
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
      thunk_FUN_01e10808();
      thunk_FUN_01da0934();
      *(uint *)(unaff_x19 + 0x20) = unaff_w26 + 1;
      if (in_stack_00000008 != '\0') {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
      }
      return;
    }
                    /* try { // try from 033fdc88 to 034fdc9f has its CatchHandler @ 033fde24 */
    lVar7 = *unaff_x21;
    thunk_FUN_01da0934();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 033fdca0 to 034fde0f has its CatchHandler @ 033fdb34 */
    uVar1 = uVar1 & unaff_w27 + (int)uVar8;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar5,0);
    }
    if (*(uint *)(plVar3 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *plVar6 = lVar7;
    thunk_FUN_01e10808(plVar6,lVar7);
    uVar8 = uVar8 + 1;
    plVar6 = plVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


