/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppShouldRecenter
ENTRY_POINT: 01f96650
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppShouldRecenter(long param_1)

{
  long lVar1;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  
  for (; lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0; param_1 = param_1 + unaff_x27 * 8) {
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
    if (*(uint *)(lVar1 + 0x18) <= unaff_w26) {
LAB_01f9658c:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    lVar2 = *(long *)(lVar1 + (long)(int)unaff_w26 * 8 + 0x20);
                    /* try { // try from 01f96694 to 020966af has its CatchHandler @ 01f9673c */
    if ((lVar2 != 0) &&
       (lVar1 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
                    /* try { // try from 01f96734 to 02096737 has its CatchHandler @ 01f96740 */
      uVar3 = thunk_FUN_012668ac();
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f966c8 with catch @ 01f96738
                       try { // try from 01f96738 to 02096757 has its CatchHandler @ 01f9660c */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f96694 with catch @ 01f9673c
                        */
      FUN_01230b78(uVar3,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w20 + unaff_w26) goto LAB_01f9658c;
    *unaff_x22 = lVar2;
    thunk_FUN_01286abc(unaff_x22,lVar2);
    unaff_w26 = unaff_w26 + 1;
    if ((int)unaff_x21[3] <= (int)(unaff_w20 + unaff_w26)) {
      *unaff_x19 = (long)unaff_x21;
      thunk_FUN_01286abc();
      return;
    }
    param_1 = *unaff_x19;
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_w20) goto LAB_01f9658c;
    unaff_x22 = unaff_x22 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


