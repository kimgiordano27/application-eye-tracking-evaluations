/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 033e54b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Quatf___cctor(long param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint in_w9;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  if (in_w9 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  bVar1 = *(byte *)(param_1 + 0x24);
  bVar4 = false;
LAB_033e54c8:
  do {
    bVar2 = bVar4;
    uVar7 = FUN_033e4bc0();
    bVar4 = in_stack_00000008._4_1_ != '\0' || bVar2;
    iVar6 = (int)(uVar7 >> 0x20);
    if (((uint)bVar1 == ((uint)uVar7 & 0xffff)) && ((uVar7 & 0xffff) != 0)) {
      if (unaff_x21 == (long *)0x0) goto LAB_033e5600;
      iVar5 = FUN_034180e4();
      if (iVar5 == 0) {
        return 0;
      }
      if ((iVar6 != 0xd) || ((unaff_x20 & 1) == 0)) goto LAB_033e5544;
LAB_033e5534:
      bVar3 = true;
    }
    else {
      if ((iVar6 == 0xd) && ((unaff_x20 & 1) != 0)) goto LAB_033e5534;
      if (unaff_x21 == (long *)0x0) goto LAB_033e5600;
LAB_033e5544:
      if (iVar6 == 8) {
        iVar6 = FUN_034180e4();
        if (iVar6 < 1) goto LAB_033e54c8;
        FUN_034180e4();
        FUN_034185b4();
      }
      else {
        FUN_03419818();
      }
      bVar3 = false;
    }
    if (in_stack_00000008._4_1_ != '\0' || bVar2) {
      FUN_033e5018();
    }
    if (bVar3) {
      FUN_033e506c();
      *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
      if (unaff_x21 != (long *)0x0) {
        uVar8 = (**(code **)(*unaff_x21 + 0x168))();
        return uVar8;
      }
LAB_033e5600:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  } while( true );
}


