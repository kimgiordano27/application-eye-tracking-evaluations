/*
FUNCTION_NAME: OVRPlugin.OVRP_1_108_0$$ovrp_UnityOpenXR_OnAppSpaceChange2
ENTRY_POINT: 05696574
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05696640) */

void OVRPlugin_OVRP_1_108_0__ovrp_UnityOpenXR_OnAppSpaceChange2(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_1 != 0) {
    iVar1 = unaff_w21;
    if (unaff_w21 < 0) {
      iVar1 = unaff_w21 + 1;
    }
    uVar3 = 2;
    if (unaff_w22 == 2) {
      uVar3 = 3;
      unaff_w21 = iVar1 >> 1;
    }
    in_stack_00000020 = FUN_0540bf88(iVar1 >> 1);
    uVar2 = FUN_0540beb8(&stack0x00000020,0);
    uVar2 = FUN_05533a00(uVar2,unaff_w20 << 2,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05654f00(uVar4,uVar3,uVar2,unaff_w21,0);
    FUN_0540bf9c(&stack0x00000020,0);
  }
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_02da42ec(*in_stack_00000018,0);
  }
  return;
}


