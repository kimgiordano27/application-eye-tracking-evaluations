/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetAppLatencyTimings
ENTRY_POINT: 01f966b8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetAppLatencyTimings(void)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  
  while (!(bool)in_CY) {
                    /* try { // try from 01f966c8 to 020966db has its CatchHandler @ 01f96738 */
    *unaff_x22 = unaff_x23;
    thunk_FUN_01286abc(unaff_x22,unaff_x23);
    unaff_w26 = unaff_w26 + 1;
    if ((int)unaff_x21[3] <= (int)(unaff_w20 + unaff_w26)) {
                    /* try { // try from 01f966ec to 020966f7 has its CatchHandler @ 01f96740 */
      *unaff_x19 = (long)unaff_x21;
                    /* try { // try from 01f966f8 to 02096733 has its CatchHandler @ 01f9660c */
      thunk_FUN_01286abc();
      return;
    }
    lVar2 = *unaff_x19;
    if (lVar2 == 0) {
LAB_01f96724:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) break;
    lVar2 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_01f96724;
    uVar3 = *unaff_x25;
    lVar1 = thunk_FUN_0124baac(lVar2,uVar3);
    if (lVar1 == 0) {
LAB_01f96728:
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar2,uVar3);
    }
    uVar3 = *unaff_x25;
    lVar1 = thunk_FUN_0124baac(lVar2,uVar3);
    if (lVar1 == 0) goto LAB_01f96728;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w26) break;
    unaff_x23 = *(long *)(lVar1 + (long)(int)unaff_w26 * 8 + 0x20);
    if ((unaff_x23 != 0) &&
       (lVar2 = thunk_FUN_0124baac(unaff_x23,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar3,0);
    }
    unaff_x22 = unaff_x22 + 1;
    in_CY = *(uint *)(unaff_x21 + 3) <= unaff_w20 + unaff_w26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


