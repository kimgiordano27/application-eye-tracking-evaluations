/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateHandTrackingProvider
ENTRY_POINT: 05598008
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__CreateHandTrackingProvider(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  undefined8 *unaff_x21;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x7d8));
  *(undefined1 *)(unaff_x20 + 0x584) = 1;
  plVar6 = (long *)thunk_FUN_02dd3144(*unaff_x21);
  FUN_05377f4c(plVar6,0);
                    /* try { // try from 0559802c to 05698037 has its CatchHandler @ 055980a4 */
  if (unaff_x19 != 0) {
    if (0 < *(int *)(unaff_x19 + 0x10)) {
      iVar7 = 0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
                    /* try { // try from 0559804c to 0569804f has its CatchHandler @ 0559809c */
                    /* try { // try from 05598050 to 05698097 has its CatchHandler @ 05597fe8 */
        uVar5 = FUN_053674f8();
        uVar1 = uVar5 & 0xffff;
        if (uVar1 == 0x2c) {
          if (bVar2) {
            if (plVar6 != (long *)0x0) {
              bVar2 = true;
LAB_055980fc:
              uVar5 = 0x2c;
              goto LAB_05598100;
            }
            goto LAB_05598140;
          }
          if (!bVar4) {
            if (plVar6 != (long *)0x0) {
              bVar2 = false;
              bVar4 = true;
              goto LAB_055980fc;
            }
            goto LAB_05598140;
          }
          bVar2 = false;
                    /* catch() { ... } // from try @ 055980c0 with catch @ 055980d0 */
          bVar3 = true;
                    /* try { // try from 055980d4 to 056980db has its CatchHandler @ 055980e4 */
          bVar4 = true;
        }
        else {
          if (uVar1 == 0x5d) {
            if (plVar6 == (long *)0x0) goto LAB_05598140;
            bVar2 = false;
                    /* try { // try from 05598098 to 0569809b has its CatchHandler @ 055980a0 */
            bVar3 = false;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0559804c with catch @ 0559809c
                       try { // try from 0559809c to 056980bf has its CatchHandler @ 05597fe8 */
            bVar4 = false;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05598098 with catch @ 055980a0
                        */
            uVar5 = 0x5d;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0559802c with catch @ 055980a4
                        */
          }
          else if (uVar1 == 0x5b) {
            if (plVar6 == (long *)0x0) goto LAB_05598140;
            bVar3 = false;
            bVar4 = false;
            bVar2 = true;
            uVar5 = 0x5b;
          }
          else {
            if (bVar3) {
              bVar2 = false;
                    /* try { // try from 055980c0 to 056980c3 has its CatchHandler @ 055980d0 */
              bVar3 = true;
              goto LAB_0559810c;
            }
                    /* try { // try from 055980dc to 056980e7 has its CatchHandler @ 05597fe8 */
            if (plVar6 == (long *)0x0) goto LAB_05598140;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055980d4 with catch @ 055980e4
                        */
            bVar2 = false;
                    /* try { // try from 055980e8 to 0569812f has its CatchHandler @ 055980e8
                       catch() { ... } // from try @ 055980e8 with catch @ 055980e8
                       catch() { ... } // from try @ 05598158 with catch @ 055980e8
                       catch() { ... } // from try @ 0559819c with catch @ 055980e8
                       catch() { ... } // from try @ 055981d4 with catch @ 055980e8 */
            bVar3 = false;
          }
LAB_05598100:
          FUN_0537a744(plVar6,uVar5,0);
        }
LAB_0559810c:
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_x19 + 0x10));
    }
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 05598130 to 0569813b has its CatchHandler @ 0559819c */
                    /* WARNING: Could not recover jumptable at 0x0559813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
LAB_05598140:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


