/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_SendVirtualKeyboardInput
ENTRY_POINT: 076e8ad8
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_SendVirtualKeyboardInput
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  undefined8 *puVar1;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  *(long *)(unaff_x19 + 0x158) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x150) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
                    /* try { // try from 076e8ae4 to 077e8b0b has its CatchHandler @ 076e8b8c */
  if (*(int *)(param_4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    param_4 = *unaff_x22;
  }
  puVar1 = *(undefined8 **)(param_4 + 0xb8);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    if (*(int *)(param_4 + 0xe4) == 0) {
                    /* try { // try from 076e8b0c to 077e8b0f has its CatchHandler @ 076e8bc4 */
      thunk_FUN_0408f364();
                    /* try { // try from 076e8b10 to 077e8b27 has its CatchHandler @ 076e8bc0 */
      puVar1 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar3 = *puVar1;
                    /* try { // try from 076e8b28 to 077e8b2f has its CatchHandler @ 076e8b9c */
    lVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f68788);
                    /* try { // try from 076e8b38 to 077e8b53 has its CatchHandler @ 076e8b90 */
    FUN_0532f02c(lVar2,uVar3,*(undefined8 *)PTR_DAT_08fae4f0,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar2;
  }
                    /* try { // try from 076e8b54 to 077e8b7b has its CatchHandler @ 076e8b84 */
  *(long *)(unaff_x19 + 0x168) = lVar2;
  FUN_054b6dfc();
  return;
}


