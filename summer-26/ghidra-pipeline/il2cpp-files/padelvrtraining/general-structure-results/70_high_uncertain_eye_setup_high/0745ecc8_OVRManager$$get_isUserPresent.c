/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 0745ecc8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isUserPresent(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ec7c with catch @ 0745ecc8
                        */
  uVar2 = FUN_04ec281c(param_2,*param_1);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
  thunk_FUN_03d1023c(unaff_x19 + 0x138);
                    /* try { // try from 0745ece0 to 0755ece3 has its CatchHandler @ 0745ed04 */
                    /* try { // try from 0745ece4 to 0755ed0b has its CatchHandler @ 0745eb58 */
  if (*(long *)(unaff_x19 + 0x120) == 0) {
    lVar3 = FUN_08a4d9c8();
    if (lVar3 == 0) goto LAB_0745ed80;
                    /* catch() { ... } // from try @ 0745ece0 with catch @ 0745ed04 */
    FUN_04f82d4c(lVar3,*(undefined8 *)PTR_DAT_092208d0);
                    /* try { // try from 0745ed0c to 0755ed13 has its CatchHandler @ 0745ed28 */
    FUN_0745ed84();
  }
  puVar1 = PTR_DAT_09222f48;
                    /* try { // try from 0745ed14 to 0755ed1f has its CatchHandler @ 0745eb58 */
  if (*(long *)(unaff_x19 + 200) != 0) {
                    /* try { // try from 0745ed20 to 0755ed27 has its CatchHandler @ 0745ed28 */
    uVar5 = *(undefined8 *)(unaff_x19 + 0x130);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745ed0c with catch @ 0745ed28
                       catch(type#2 @ 00000000) { ... } // from try @ 0745ed20 with catch @ 0745ed28
                        */
    uVar2 = FUN_08a4d98c(*(long *)(unaff_x19 + 200),0);
    uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
    FUN_07462d14(uVar4,uVar5,uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
    thunk_FUN_03d1023c(unaff_x19 + 0x140,uVar4);
    FUN_073a32e4();
    return;
  }
LAB_0745ed80:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


