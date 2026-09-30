/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 0566ba5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  long lStack0000000000000058;
  
  lVar1 = tpidr_el0;
  lStack0000000000000058 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0566ba80 to 0576ba93 has its CatchHandler @ 0566bae8 */
  if ((DAT_06dbc67b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
                    /* try { // try from 0566ba94 to 0576bad3 has its CatchHandler @ 0566b9e8 */
    DAT_06dbc67b = 1;
  }
  in_stack_00000018 = param_2[1];
  in_stack_00000010 = *param_2;
  in_stack_00000028 = param_2[3];
  in_stack_00000020 = param_2[2];
  in_stack_00000030 = param_2[4];
  uStack000000000000000c = 0;
  uStack0000000000000044 = *(undefined8 *)((long)param_2 + 0x34);
  in_stack_00000038 = (undefined4)param_2[5];
  uStack000000000000003c = (undefined4)*(undefined8 *)((long)param_2 + 0x2c);
  in_stack_00000040 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x2c) >> 0x20);
  uVar3 = FUN_05656680(&stack0x00000010,0);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 0566bad4 to 0576bad7 has its CatchHandler @ 0566baec */
                    /* try { // try from 0566bad8 to 0576badb has its CatchHandler @ 0566bae4 */
                    /* try { // try from 0566badc to 0576badf has its CatchHandler @ 0566bae0 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566badc with catch @ 0566bae0
                       try { // try from 0566bae0 to 0576bb0b has its CatchHandler @ 0566b9e8 */
    if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566bad8 with catch @ 0566bae4
                        */
      thunk_FUN_02df485c();
    }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566ba80 with catch @ 0566bae8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566bad4 with catch @ 0566baec
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0566ba4c with catch @ 0566baf0
                        */
    uVar3 = FUN_056555cc(param_2,param_1,&stack0x0000000c,0);
    uVar2 = uStack000000000000000c;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
  }
                    /* try { // try from 0566bb0c to 0576bb0f has its CatchHandler @ 0566bb18 */
  if (*(long *)(lVar1 + 0x28) != lStack0000000000000058) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0566bb1c with catch @ 0566bb2c
                        */
    __stack_chk_fail(uVar2);
  }
                    /* catch() { ... } // from try @ 0566bb0c with catch @ 0566bb18 */
                    /* try { // try from 0566bb1c to 0576bb23 has its CatchHandler @ 0566bb2c */
                    /* try { // try from 0566bb24 to 0576bb2f has its CatchHandler @ 0566b9e8 */
  return;
}


