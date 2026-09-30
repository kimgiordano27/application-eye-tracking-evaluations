/*
FUNCTION_NAME: UnityEngine.Animator$$OnCullingModeChanged
ENTRY_POINT: 03557a24
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Animator__OnCullingModeChanged(ulong param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d02a20);
    FUN_01ab69ac(OVRPlugin_OVRP_1_6_0_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xf21) = 1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    in_stack_00000008._4_4_ = param_3;
    uVar1 = FUN_0219c130(*(long *)(param_2 + 0x20),(long)&stack0x00000008 + 4,
                         *(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (((*(long *)(param_2 + 0x20) != 0) &&
        (in_stack_00000018 = param_3, FUN_0219b9a4(*(long *)(param_2 + 0x20),&stack0x00000018),
        unaff_x19 != 0)) && (*(long *)(param_2 + 0x10) != 0)) {
      uStack000000000000001c = param_3;
      FUN_0219b9a4(*(long *)(param_2 + 0x10),&stack0x0000001c,*(undefined8 *)(unaff_x19 + 0x20),
                   *(undefined8 *)PTR_DAT_03d02a20);
      if (*(int *)(unaff_x19 + 0x1c) != 0) {
        return;
      }
      *(undefined4 *)(unaff_x19 + 0x1c) = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


