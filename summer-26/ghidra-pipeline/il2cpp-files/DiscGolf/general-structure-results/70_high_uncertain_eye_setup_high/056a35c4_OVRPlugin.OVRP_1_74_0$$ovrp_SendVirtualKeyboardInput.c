/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_SendVirtualKeyboardInput
ENTRY_POINT: 056a35c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_SendVirtualKeyboardInput(void)

{
  undefined8 uVar1;
  bool in_ZR;
  int iVar2;
  undefined8 in_x9;
  undefined8 unaff_x19;
  long *unaff_x22;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000000;
  
  uVar1 = 0;
  if (!in_ZR) {
    uVar1 = in_x9;
  }
  auVar3 = OVRPlugin_<>c__<_cctor>b__807_26(&stack0x00000008,0);
                    /* try { // try from 056a35e4 to 057a35eb has its CatchHandler @ 056a3868 */
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
                    /* try { // try from 056a3600 to 057a360b has its CatchHandler @ 056a3864 */
  iVar2 = FUN_056a362c(auVar3._0_8_,auVar3._8_8_,uVar1,in_stack_00000000._4_4_,
                       (long)&stack0x00000000 + 4);
  if (iVar2 != 0) {
    unaff_x19 = 0;
  }
                    /* try { // try from 056a3624 to 057a3633 has its CatchHandler @ 056a36b0 */
  return unaff_x19;
}


