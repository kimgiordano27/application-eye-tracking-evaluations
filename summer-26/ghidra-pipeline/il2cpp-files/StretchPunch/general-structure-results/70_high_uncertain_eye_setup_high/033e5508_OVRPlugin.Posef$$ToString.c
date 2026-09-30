/*
FUNCTION_NAME: OVRPlugin.Posef$$ToString
ENTRY_POINT: 033e5508
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Posef__ToString(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint unaff_w25;
  uint unaff_w26;
  uint unaff_w27;
  ulong unaff_x28;
  undefined8 in_stack_00000008;
  
code_r0x033e5508:
  iVar2 = FUN_034180e4();
  if (iVar2 == 0) {
    return 0;
  }
  if (((int)unaff_x28 == 0xd) && ((unaff_x20 & 1) != 0)) goto LAB_033e5534;
  do {
    if ((int)unaff_x28 == 8) {
      iVar2 = FUN_034180e4();
      if (iVar2 < 1) goto LAB_033e54c8;
      FUN_034180e4();
      FUN_034185b4();
    }
    else {
      FUN_03419818();
    }
    bVar1 = false;
    while( true ) {
      if (unaff_w27 != 0) {
        FUN_033e5018();
      }
      if (bVar1) {
        FUN_033e506c();
        *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
        if (unaff_x21 != (long *)0x0) {
          uVar4 = (**(code **)(*unaff_x21 + 0x168))();
          return uVar4;
        }
        goto LAB_033e5600;
      }
LAB_033e54c8:
      uVar3 = FUN_033e4bc0();
      unaff_w27 = (uint)in_stack_00000008._4_1_ | unaff_w26 & 1;
      unaff_w26 = (uint)(unaff_w27 != 0);
      unaff_x28 = uVar3 >> 0x20;
      if ((unaff_w25 == ((uint)uVar3 & 0xffff)) && ((uVar3 & 0xffff) != 0)) {
        if (unaff_x21 == (long *)0x0) goto LAB_033e5600;
        goto code_r0x033e5508;
      }
      if (((int)(uVar3 >> 0x20) != 0xd) || ((unaff_x20 & 1) == 0)) break;
LAB_033e5534:
      bVar1 = true;
    }
    if (unaff_x21 == (long *)0x0) {
LAB_033e5600:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  } while( true );
}


