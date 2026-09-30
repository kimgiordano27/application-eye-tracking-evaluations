/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoDeserialize
ENTRY_POINT: 039fb358
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoDeserialize(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_03d755c0();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_020914e4();
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    thunk_FUN_01e10808();
  }
  return *unaff_x20;
}


