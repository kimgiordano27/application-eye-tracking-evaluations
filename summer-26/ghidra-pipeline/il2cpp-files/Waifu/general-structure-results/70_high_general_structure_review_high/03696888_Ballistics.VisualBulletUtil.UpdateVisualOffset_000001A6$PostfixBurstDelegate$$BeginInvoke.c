/*
FUNCTION_NAME: Ballistics.VisualBulletUtil.UpdateVisualOffset_000001A6$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 03696888
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Ballistics_VisualBulletUtil_UpdateVisualOffset_000001A6_PostfixBurstDelegate__BeginInvoke(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  long unaff_x22;
  
  pcVar1 = (code *)FUN_033d1b68();
  *(code **)(unaff_x21 + 0x278) = pcVar1;
  (*pcVar1)();
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(unaff_x22 + 400);
    if (pcVar1 == (code *)0x0) {
                    /* try { // try from 036968b8 to 037968c3 has its CatchHandler @ 036969e0 */
      pcVar1 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x22 + 400) = pcVar1;
    }
    lVar3 = (*pcVar1)(lVar3);
    if (lVar3 != 0) {
      pcVar1 = *(code **)(unaff_x21 + 0x278);
                    /* try { // try from 036968d4 to 0379691b has its CatchHandler @ 03696a00 */
      if (pcVar1 == (code *)0x0) {
        pcVar1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x21 + 0x278) = pcVar1;
      }
      (*pcVar1)(lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 != 0) {
        pcVar1 = *(code **)(unaff_x22 + 400);
        if (pcVar1 == (code *)0x0) {
          pcVar1 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          *(code **)(unaff_x22 + 400) = pcVar1;
        }
        lVar3 = (*pcVar1)(lVar3);
        if (lVar3 != 0) {
          pcVar1 = *(code **)(unaff_x21 + 0x278);
                    /* try { // try from 03696930 to 0379693b has its CatchHandler @ 036969d8 */
          if (pcVar1 == (code *)0x0) {
            pcVar1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
                    /* try { // try from 03696948 to 0379697f has its CatchHandler @ 03696a08 */
            *(code **)(unaff_x21 + 0x278) = pcVar1;
          }
          (*pcVar1)(lVar3,0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_07ade03c(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x78),0);
            plVar2 = *(long **)(unaff_x19 + 0x38);
            if (plVar2 != (long *)0x0) {
                    /* try { // try from 03696980 to 037969bf has its CatchHandler @ 036965c8 */
              (**(code **)(*plVar2 + 0x558))
                        (plVar2,*(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(*plVar2 + 0x560));
              plVar2 = *(long **)(unaff_x19 + 0x40);
              if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036969b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar2 + 0x558))
                          (plVar2,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(*plVar2 + 0x560)
                          );
                return;
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


