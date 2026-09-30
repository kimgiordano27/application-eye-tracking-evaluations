/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$OnDrag
ENTRY_POINT: 06d96648
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d967f8) */
/* WARNING: Removing unreachable block (ram,0x06d9667c) */
/* WARNING: Removing unreachable block (ram,0x06d9675c) */
/* WARNING: Removing unreachable block (ram,0x06d96824) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__OnDrag
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  
  while( true ) {
    FUN_07bb38ac(param_1,param_2,param_3);
    uVar1 = FUN_049dc4d0(&stack0x00000030,*unaff_x21);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 06d96658 to 06e96677 has its CatchHandler @ 06d96810 */
      if (unaff_w24 < 0) {
        FUN_049dc4cc(&stack0x00000030,*(undefined8 *)PTR_DAT_08e752d8);
      }
                    /* try { // try from 06d96680 to 06e9668b has its CatchHandler @ 06d96808 */
      if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06d9677c with catch @ 06d96834 */
        FUN_03c8fb30();
      }
                    /* try { // try from 06d96694 to 06e9669f has its CatchHandler @ 06d9680c */
      lVar2 = FUN_07bb2810(*unaff_x22,*(undefined8 *)(unaff_x20 + 0x68),
                           *(undefined8 *)(unaff_x20 + 0x30),0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06d96778 with catch @ 06d96838 */
        FUN_03c8fb30();
      }
      in_stack_00000028 = FUN_071787d8(lVar2,0);
                    /* try { // try from 06d966a8 to 06e966b3 has its CatchHandler @ 06d967f8 */
      uVar1 = FUN_0701d1d0(&stack0x00000028,0);
      if ((uVar1 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
        thunk_FUN_03d233cc(unaff_x19 + 10,0);
        if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
                    /* try { // try from 06d966f4 to 06e9671b has its CatchHandler @ 06d967ec */
        FUN_04527264(unaff_x19 + 2,&stack0x00000028);
      }
      else {
        FUN_0701d29c(&stack0x00000028,0);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar2 = *(long *)(unaff_x20 + 0x70);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        }
        lVar2 = FUN_06d95ed0();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        in_stack_00000028 = FUN_071787d8(lVar2,0);
        uVar1 = FUN_0701d1d0(&stack0x00000028,0);
        if ((uVar1 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
                    /* try { // try from 06d9671c to 06e9673f has its CatchHandler @ 06d95ee0 */
          thunk_FUN_03d233cc(unaff_x19 + 10,0);
          if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
                    /* try { // try from 06d96740 to 06e96743 has its CatchHandler @ 06d96898 */
                    /* try { // try from 06d96744 to 06e96747 has its CatchHandler @ 06d96894 */
                    /* try { // try from 06d96748 to 06e9674b has its CatchHandler @ 06d96890 */
                    /* try { // try from 06d9674c to 06e9674f has its CatchHandler @ 06d9688c */
                    /* try { // try from 06d96750 to 06e96753 has its CatchHandler @ 06d96888 */
                    /* try { // try from 06d96754 to 06e96757 has its CatchHandler @ 06d96884 */
          FUN_04527264(unaff_x19 + 2,&stack0x00000028);
                    /* try { // try from 06d96758 to 06e9675b has its CatchHandler @ 06d96880 */
        }
        else {
          FUN_0701d29c(&stack0x00000028,0);
          if (unaff_w24 < 0) {
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(long *)(unaff_x20 + 0x40) != 0) {
              if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_07169138(*(long *)(unaff_x20 + 0x48),0);
              plVar3 = *(long **)(unaff_x20 + 0x40);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
            }
          }
          *unaff_x19 = 0xfffffffe;
          if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0701e078(unaff_x19 + 2,0);
        }
      }
      return;
    }
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *(long *)(*unaff_x22 + 0x10);
    if (param_1 == 0) break;
    param_3 = 0;
    param_2 = in_stack_00000040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


