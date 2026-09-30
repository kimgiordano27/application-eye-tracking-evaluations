/*
FUNCTION_NAME: Ballistics.VisualBulletUtil.UpdateVisualOffset_000001A6$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0369679c
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Ballistics_VisualBulletUtil_UpdateVisualOffset_000001A6_PostfixBurstDelegate___ctor
               (code *param_1)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  long unaff_x22;
  
  (*param_1)();
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) {
    pcVar2 = *(code **)(unaff_x22 + 400);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x22 + 400) = pcVar2;
    }
    lVar3 = (*pcVar2)(lVar3);
                    /* try { // try from 036967cc to 037967e7 has its CatchHandler @ 036969ec */
    if (lVar3 != 0) {
      pcVar2 = *(code **)(unaff_x21 + 0x278);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x21 + 0x278) = pcVar2;
      }
      (*pcVar2)(lVar3,1);
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 != 0) {
        pcVar2 = *(code **)(unaff_x22 + 400);
        if (pcVar2 == (code *)0x0) {
                    /* try { // try from 0369680c to 0379680f has its CatchHandler @ 036969fc */
          pcVar2 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          *(code **)(unaff_x22 + 400) = pcVar2;
        }
                    /* try { // try from 03696824 to 03796833 has its CatchHandler @ 036969f0 */
        lVar3 = (*pcVar2)(lVar3);
        if (lVar3 != 0) {
          pcVar2 = *(code **)(unaff_x21 + 0x278);
          if (pcVar2 == (code *)0x0) {
                    /* try { // try from 0369683c to 03796867 has its CatchHandler @ 03696a04 */
            pcVar2 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
            *(code **)(unaff_x21 + 0x278) = pcVar2;
          }
          (*pcVar2)(lVar3,1);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 03696868 to 03796877 has its CatchHandler @ 036969e8 */
            FUN_07ade03c(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x80),0);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              FUN_07ade03c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x88),0);
              plVar1 = *(long **)(unaff_x19 + 0x38);
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 0x558))
                          (plVar1,*(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(*plVar1 + 0x560)
                          );
                plVar1 = *(long **)(unaff_x19 + 0x40);
                if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036969b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar1 + 0x558))
                            (plVar1,*(undefined8 *)(unaff_x19 + 0x70),
                             *(undefined8 *)(*plVar1 + 0x560));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


