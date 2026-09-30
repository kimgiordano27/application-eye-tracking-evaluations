/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 0745ec40
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  FUN_03d2d2b0(PTR_DAT_091a0cb0);
  FUN_03d2d2b0(PTR_DAT_092208c8);
  FUN_03d2d2b0(PTR_DAT_09222f40);
  FUN_03d2d2b0(PTR_DAT_092208d0);
  FUN_03d2d2b0(PTR_DAT_09222f48);
                    /* try { // try from 0745ec7c to 0755ec83 has its CatchHandler @ 0745ecc8 */
  *(undefined1 *)(unaff_x22 + 0x7fe) = 1;
  thunk_FUN_03d2ef40(*unaff_x20);
                    /* try { // try from 0745ec90 to 0755ec93 has its CatchHandler @ 0745ecc4 */
                    /* try { // try from 0745ec94 to 0755ecb7 has its CatchHandler @ 0745eb58 */
  FUN_070caf4c();
  FUN_073a3240();
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar2 = FUN_04ec281c(*(long *)(unaff_x19 + 200),*(undefined8 *)PTR_DAT_092208c8);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0x138);
    if (*(long *)(unaff_x19 + 0x120) == 0) {
      lVar3 = FUN_08a4d9c8();
      if (lVar3 == 0) goto LAB_0745ed80;
      FUN_04f82d4c(lVar3,*(undefined8 *)PTR_DAT_092208d0);
      FUN_0745ed84();
    }
    puVar1 = PTR_DAT_09222f48;
    if (*(long *)(unaff_x19 + 200) != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x130);
      uVar2 = FUN_08a4d98c(*(long *)(unaff_x19 + 200),0);
      uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
      FUN_07462d14(uVar4,uVar5,uVar2,0);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
      thunk_FUN_03d1023c(unaff_x19 + 0x140,uVar4);
      FUN_073a32e4();
      return;
    }
  }
LAB_0745ed80:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


