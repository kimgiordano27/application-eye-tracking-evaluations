/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_DestroySpaceUser
ENTRY_POINT: 07caeed4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_DestroySpaceUser
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined4 unaff_w21;
  
  uVar1 = FUN_095a53ac(param_1,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x30);
    if (lVar2 == 0) goto LAB_07caef6c;
    if (*(uint *)(lVar2 + 0x18) <= param_3) goto LAB_07caef70;
    if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_07caef6c;
    FUN_07cae738(*(long *)(unaff_x20 + 0x60),*(undefined4 *)(lVar2 + (long)(int)param_3 * 4 + 0x20),
                 param_4);
  }
  uVar1 = FUN_095a51f8(unaff_w21,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_3) {
LAB_07caef70:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      FUN_07cae738(*(long *)(unaff_x20 + 0x60),
                   *(undefined4 *)(lVar2 + (long)(int)param_3 * 4 + 0x20),0);
      return;
    }
  }
LAB_07caef6c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


