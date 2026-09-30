/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 01d7fa3c
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


void OVRPlugin__GetAppPerfStats(ulong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int in_w9;
  int unaff_w19;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x24;
  long *plVar5;
  ulong unaff_x28;
  int unaff_w29;
  undefined8 *in_stack_00000000;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  
  param_1 = param_1 & 0xffffffff;
                    /* try { // try from 01d7fa40 to 01e7fa4b has its CatchHandler @ 01d7fa60 */
  iStack000000000000000c = in_w9;
  do {
                    /* try { // try from 01d7fa4c to 01e7fa77 has its CatchHandler @ 01d7fa00 */
    if (param_1 <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar5 = *(long **)(unaff_x24 + 0x20 + unaff_x28 * 8);
    if (unaff_w19 == -1) {
LAB_01d7fabc:
                    /* try { // try from 01d7fac4 to 01e7facb has its CatchHandler @ 01d7facc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d7faac with catch @ 01d7facc
                       catch(type#2 @ 00000000) { ... } // from try @ 01d7fac4 with catch @ 01d7facc
                        */
      if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar4 = FUN_01d7f588(plVar5,unaff_w23,unaff_w22);
      uVar1 = in_stack_00000038;
      if ((uVar4 & 1) != 0) {
        if (unaff_w29 != 0) {
          if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar4 = FUN_01d7f224(plVar5,uVar1,iStack000000000000000c != 0);
          if ((uVar4 & 1) == 0) goto LAB_01d7fb40;
        }
        FUN_0174899c(&stack0x00000010,plVar5,*(undefined8 *)PTR_DAT_02359050);
      }
    }
    else {
      if (plVar5 == (long *)0x0) {
LAB_01d7fb88:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7fa40 with catch @ 01d7fa60
                        */
                    /* try { // try from 01d7fa78 to 01e7fa7b has its CatchHandler @ 01d7faa8 */
                    /* try { // try from 01d7fa7c to 01e7faab has its CatchHandler @ 01d7fa00 */
      bVar2 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
      if ((unaff_w19 == 0 & bVar2) != (unaff_w19 < 1 | bVar2 & 1)) {
                    /* catch() { ... } // from try @ 01d7fa78 with catch @ 01d7faa8 */
        lVar3 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
                    /* try { // try from 01d7faac to 01e7fab7 has its CatchHandler @ 01d7facc */
        if (lVar3 == 0) goto LAB_01d7fb88;
                    /* try { // try from 01d7fab8 to 01e7fac3 has its CatchHandler @ 01d7fa00 */
        if (*(int *)(lVar3 + 0x18) == unaff_w19) goto LAB_01d7fabc;
      }
    }
LAB_01d7fb40:
    param_1 = (ulong)*(uint *)(unaff_x24 + 0x18);
    unaff_x28 = unaff_x28 + 1;
    if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x28) {
      in_stack_00000000[2] = in_stack_00000020;
      in_stack_00000000[1] = in_stack_00000018;
      *in_stack_00000000 = in_stack_00000010;
      return;
    }
  } while( true );
}


