/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartBodyTracking2
ENTRY_POINT: 056a6644
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StartBodyTracking2(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_042293d4();
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000008;
  *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000000;
  lVar1 = FUN_036ec8f0(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleLength,_Length>_TypeInfo);
  if (0 < (int)unaff_x21) {
    uVar2 = 0;
    do {
      *(byte *)(lVar1 + uVar2) =
           (byte)(*(uint *)((uVar2 >> 3 & 0xffffffc) + *(long *)(unaff_x19 + 0x28)) >>
                 (ulong)((uint)uVar2 & 0x1f)) & 1;
      uVar2 = uVar2 + 1;
    } while (unaff_x21 != uVar2);
  }
  return;
}


