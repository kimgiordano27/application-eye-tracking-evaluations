/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 06387cf8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x22;
  
  lVar1 = thunk_FUN_037787d0();
  plVar5 = (long *)(unaff_x19 + 0x40);
  *plVar5 = lVar1;
                    /* try { // try from 06387d10 to 06487d5b has its CatchHandler @ 06387d10
                       catch() { ... } // from try @ 06387d10 with catch @ 06387d10
                       catch() { ... } // from try @ 06387dbc with catch @ 06387d10
                       catch() { ... } // from try @ 06387df8 with catch @ 06387d10
                       catch() { ... } // from try @ 06387e1c with catch @ 06387d10
                       catch() { ... } // from try @ 06387e54 with catch @ 06387d10
                       catch() { ... } // from try @ 06387e88 with catch @ 06387d10 */
  uVar2 = thunk_FUN_037787d0();
  thunk_FUN_037aeb94(plVar5,uVar2);
  lVar1 = *plVar5;
  if (lVar1 == 0) {
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x908))
                        (plVar5,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(*plVar5 + 0x910));
      if ((uVar3 & 1) == 0) {
LAB_06387de0:
        uVar2 = 0;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
        thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x18));
        *(undefined4 *)(unaff_x19 + 0x10) = 2;
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  else {
    uVar4 = 0;
    *(undefined4 *)(unaff_x19 + 0x48) = 0;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06387df0 with catch @ 06387e34
                       catch(type#1 @ 078dda18) { ... } // from try @ 06387e00 with catch @ 06387e34
                        */
    while (lVar1 != 0) {
      if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar4) goto LAB_06387de0;
      if (*(uint *)(lVar1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
                    /* try { // try from 06387df8 to 06487dff has its CatchHandler @ 06387d10 */
      lVar1 = *(long *)(lVar1 + (long)(int)uVar4 * 8 + 0x20);
                    /* try { // try from 06387e00 to 06487e03 has its CatchHandler @ 06387e34 */
      if (lVar1 == 0) goto LAB_06387de0;
                    /* try { // try from 06387e04 to 06487e1b has its CatchHandler @ 06387e1c */
      plVar5 = *(long **)(unaff_x19 + 0x28);
      if (plVar5 == (long *)0x0) break;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06387e04 with catch @ 06387e1c
                       try { // try from 06387e1c to 06487e4f has its CatchHandler @ 06387d10 */
      uVar3 = (**(code **)(*plVar5 + 0x908))(plVar5,lVar1,*(undefined8 *)(*plVar5 + 0x910));
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06387da4 with catch @ 06387e20
                        */
      if ((uVar3 & 1) != 0) {
        *(long *)(unaff_x19 + 0x18) = lVar1;
                    /* try { // try from 06387e50 to 06487e53 has its CatchHandler @ 06387e74 */
                    /* try { // try from 06387e54 to 06487e77 has its CatchHandler @ 06387d10 */
        thunk_FUN_037aeb94((long *)(unaff_x19 + 0x18),lVar1);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06387d64 with catch @ 06387e24
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06387d5c with catch @ 06387e28
                        */
      lVar1 = *(long *)(unaff_x19 + 0x40);
      uVar4 = *(int *)(unaff_x19 + 0x48) + 1;
      *(uint *)(unaff_x19 + 0x48) = uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


