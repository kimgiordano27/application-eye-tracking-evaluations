/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationTracked
ENTRY_POINT: 06965f48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_BodyJointLocation__get_OrientationTracked(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 uVar5;
  long in_stack_00000028;
  long in_stack_00000040;
  
  while( true ) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07c69f18(unaff_x22,*unaff_x27,param_1,0);
    uVar5 = FUN_07c94120(0);
    lVar3 = FUN_07c98f88(unaff_x21,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07cacba4(uVar5,uVar5,uVar5,lVar3,0);
    FUN_07c61ca8(unaff_x21,1,0);
    uVar2 = FUN_061c1964(&stack0x00000030,*unaff_x25);
    unaff_x21 = in_stack_00000040;
    if ((uVar2 & 1) == 0) break;
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_x22 = thunk_FUN_07c6140c(in_stack_00000040,0);
    lVar3 = *(long *)(unaff_x24 + 0x40);
    uVar2 = FUN_07c94160(0,unaff_w20,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar2,uVar2 & 0xffffffff);
    }
    param_1 = FUN_04de82e0(lVar3,uVar2 & 0xffffffff,*unaff_x26);
  }
  FUN_061c1960(&stack0x00000030,*(undefined8 *)PTR_DAT_084b6f00);
  if (*(long *)(unaff_x24 + 0x28) != 0) {
    FUN_04de90b8(&stack0x00000018,*(long *)(unaff_x24 + 0x28),*(undefined8 *)PTR_DAT_084b6f30);
    puVar1 = PTR_DAT_084b6f10;
    while (uVar2 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar1), (uVar2 & 1) != 0) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07c9877c(in_stack_00000028,1,0);
    }
    FUN_061c1960(&stack0x00000018,*(undefined8 *)PTR_DAT_084b6ef8);
    if (*(char *)(unaff_x19 + 0x28) != '\0') {
      if (*(long *)(unaff_x24 + 0x50) == 0) goto LAB_069661ec;
      FUN_07cb2910(*(long *)(unaff_x24 + 0x50),0);
    }
    uVar5 = FUN_07c94120(*(float *)(unaff_x24 + 0x38) * 0.5,*(float *)(unaff_x24 + 0x38) * 1.5,0);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
    FUN_07ca4ee0(uVar5,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar4);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return 1;
  }
LAB_069661ec:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


