/*
FUNCTION_NAME: Proyecto26.RestClient$$Post
ENTRY_POINT: 035b2ed0
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Proyecto26_RestClient__Post(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  long unaff_x22;
  
  pcVar1 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
  *(code **)(unaff_x22 + 0xfd0) = pcVar1;
  (*pcVar1)();
  lVar3 = *(long *)(unaff_x19 + 0x2c0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (DAT_086ef168 == (code *)0x0) {
    DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
  (*DAT_086ef168)(lVar3,0);
  *(undefined4 *)(unaff_x19 + 0xc9c) = 0;
  *(undefined4 *)(unaff_x19 + 0xaac) = 0;
  uVar4 = *(undefined8 *)(unaff_x19 + 0xe78);
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar2 = FUN_07a0d2c4(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(int *)(unaff_x19 + 0xc8c) != 2) && (*(int *)(unaff_x19 + 0xc8c) != 4)) {
      FUN_035ba270();
      return;
    }
  }
  return;
}


