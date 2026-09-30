/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 076bfef0
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  FUN_0403162c(PTR_DAT_08fad640);
  *(undefined1 *)(unaff_x21 + 0x149) = 1;
  in_stack_00000050 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076bfde8 with catch @ 076bff14
                        */
  if (unaff_x19 != 0) {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076bfe14 with catch @ 076bff18
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076bfdf0 with catch @ 076bff1c
                        */
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar3 = PTR_DAT_08fad630;
    puVar2 = PTR_DAT_08fad628;
    if (unaff_x20 != 0) {
                    /* try { // try from 076bff34 to 077bff4b has its CatchHandler @ 076c0220 */
                    /* try { // try from 076bff4c to 077c020f has its CatchHandler @ 076bfaa4 */
      FUN_05951464(&stack0x00000010);
      while( true ) {
        uVar4 = FUN_04f8d1a4(&stack0x00000010,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
          FUN_04f8d1a0(&stack0x00000010,*(undefined8 *)puVar2);
          return;
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x38;
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + 0x50) = in_stack_00000050;
          *(undefined8 *)(lVar5 + 0x38) = in_stack_00000038;
          *(undefined8 *)(lVar5 + 0x30) = in_stack_00000030;
          *(undefined8 *)(lVar5 + 0x48) = in_stack_00000048;
          *(undefined8 *)(lVar5 + 0x40) = in_stack_00000040;
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000028;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000020;
        }
        else {
          in_stack_00000068 = in_stack_00000028;
          in_stack_00000060 = in_stack_00000020;
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          in_stack_00000090 = in_stack_00000050;
          FUN_05950714();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


