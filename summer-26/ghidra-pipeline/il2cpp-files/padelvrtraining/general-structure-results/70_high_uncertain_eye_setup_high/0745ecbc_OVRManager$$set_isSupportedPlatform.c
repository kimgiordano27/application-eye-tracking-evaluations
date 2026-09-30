/*
FUNCTION_NAME: OVRManager$$set_isSupportedPlatform
ENTRY_POINT: 0745ecbc
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


void OVRManager__set_isSupportedPlatform(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 uVar5;
  
                    /* try { // try from 0745ecbc to 0755ecdf has its CatchHandler @ 0745eb58 */
  if (param_1 != 0) {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ecb8 with catch @ 0745ecc0
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ec90 with catch @ 0745ecc4
                        */
    uVar2 = FUN_04ec281c(param_1,*(undefined8 *)PTR_DAT_092208c8);
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


