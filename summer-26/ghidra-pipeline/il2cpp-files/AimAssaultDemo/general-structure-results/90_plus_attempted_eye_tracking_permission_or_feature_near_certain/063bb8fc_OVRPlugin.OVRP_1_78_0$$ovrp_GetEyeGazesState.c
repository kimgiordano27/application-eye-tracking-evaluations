/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 063bb8fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 063bb904 to 064bb907 has its CatchHandler @ 063bb914 */
  FUN_0373b518(PTR_DAT_07db71a8);
                    /* try { // try from 063bb908 to 064bb92b has its CatchHandler @ 063bb7cc */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063bb8a4 with catch @ 063bb90c
                        */
  *(undefined1 *)(unaff_x21 + 0x7e7) = 1;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063bb890 with catch @ 063bb910
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063bb8b0 with catch @ 063bb914
                       catch(type#1 @ 078dda18) { ... } // from try @ 063bb904 with catch @ 063bb914
                        */
  uVar2 = FUN_054d481c(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x28));
  *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
                    /* try { // try from 063bb92c to 064bb92f has its CatchHandler @ 063bb93c */
                    /* catch() { ... } // from try @ 063bb92c with catch @ 063bb93c */
  uVar3 = FUN_054d481c(*(undefined4 *)(unaff_x19 + 0x24),*(undefined4 *)(unaff_x19 + 0x2c));
                    /* try { // try from 063bb948 to 064bb953 has its CatchHandler @ 063bb968 */
  *(int *)(unaff_x19 + 0x34) = (int)uVar3;
  if (*(char *)(unaff_x19 + 0xa8) == '\0') {
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0xa0);
                    /* try { // try from 063bb954 to 064bb95f has its CatchHandler @ 063bb7cc */
  if (lVar1 != 0) {
                    /* try { // try from 063bb960 to 064bb967 has its CatchHandler @ 063bb968 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063bb948 with catch @ 063bb968
                       catch(type#2 @ 00000000) { ... } // from try @ 063bb960 with catch @ 063bb968
                        */
                    /* WARNING: Could not recover jumptable at 0x063bb978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined4 *)(unaff_x19 + 0x30),uVar3,*(undefined8 *)(lVar1 + 0x40),
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


