/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetCurrentDetachedInteractionProfile
ENTRY_POINT: 063bcf8c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_GetCurrentDetachedInteractionProfile(undefined8 param_1)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
                    /* try { // try from 063bcf8c to 064bcf93 has its CatchHandler @ 063bcf94 */
  while (!(bool)in_ZR && in_NG == in_OV) {
    iVar1 = (int)param_1 - in_w3;
    if (unaff_w22 <= iVar1) {
      iVar1 = unaff_w22;
    }
    FUN_06265b84();
    in_w3 = iVar1 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = in_w3;
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_063bd014;
    param_1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
    unaff_w22 = unaff_w22 - iVar1;
    if ((int)param_1 < in_w3) {
      thunk_FUN_037a15ac(PTR_DAT_07d864a0);
      uVar3 = thunk_FUN_037788cc();
                    /* try { // try from 063bcff0 to 064bd01f has its CatchHandler @ 063bcf98 */
      FUN_0627a084(uVar3,0);
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db7668);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar3,uVar4);
    }
    if (in_w3 == (int)param_1) {
      in_w3 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    in_NG = unaff_w22 < 0;
    in_OV = '\0';
    in_ZR = unaff_w22 == 0;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063bcf74 with catch @ 063bcf94
                       catch(type#2 @ 00000000) { ... } // from try @ 063bcf8c with catch @ 063bcf94
                        */
                    /* catch() { ... } // from try @ 063bcfb4 with catch @ 063bcf98
                       catch() { ... } // from try @ 063bcff0 with catch @ 063bcf98
                       catch() { ... } // from try @ 063bd038 with catch @ 063bcf98 */
                    /* try { // try from 063bcfb0 to 064bcfb3 has its CatchHandler @ 063bcfc0 */
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_0158662c;
                    /* try { // try from 063bcfb4 to 064bcfd7 has its CatchHandler @ 063bcf98 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063bcfb0 with catch @ 063bcfc0
                        */
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar2 = FUN_075469d4(*(long *)(unaff_x19 + 0x10),0), lVar2 != 0)) {
                    /* try { // try from 063bcfd8 to 064bcfef has its CatchHandler @ 063bd030 */
    FUN_07545640(lVar2,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_063bd014:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


