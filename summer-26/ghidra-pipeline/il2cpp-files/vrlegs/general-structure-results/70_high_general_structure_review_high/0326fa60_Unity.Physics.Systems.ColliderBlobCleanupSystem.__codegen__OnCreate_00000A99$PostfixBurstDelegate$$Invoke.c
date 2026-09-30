/*
FUNCTION_NAME: Unity.Physics.Systems.ColliderBlobCleanupSystem.__codegen__OnCreate_00000A99$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0326fa60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Physics_Systems_ColliderBlobCleanupSystem___codegen__OnCreate_00000A99_PostfixBurstDelegate__Invoke
               (void)

{
  long lVar1;
  int in_w8;
  long lVar2;
  long *unaff_x24;
  
  if (in_w8 - 3U < 2) {
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x24;
    }
    lVar2 = 0xc0;
  }
  else if (in_w8 == 2) {
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x24;
    }
    lVar2 = 0x70;
  }
  else {
    if (in_w8 != 1) {
      return;
    }
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar1 = *unaff_x24;
    }
    lVar2 = 0x20;
  }
  FUN_01f57c18(*(long *)(lVar1 + 0xb8) + lVar2);
  return;
}


