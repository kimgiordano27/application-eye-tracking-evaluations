/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 076cdca0
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__IsPerfMetricsSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  int iStack000000000000000c;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x830));
  FUN_0403162c(PTR_DAT_08fad808);
  FUN_0403162c(PTR_DAT_08fad810);
  FUN_0403162c(PTR_DAT_08f65da8);
  FUN_0403162c(PTR_DAT_08f9f480);
  FUN_0403162c(PTR_DAT_08f9f488);
  *(undefined1 *)(unaff_x22 + 0x201) = 1;
  iStack000000000000000c = 0;
  plVar3 = (long *)FUN_040316d0(*unaff_x20,2);
  uVar4 = FUN_074e1fd8();
  lVar5 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_076c32f4(lVar5,uVar4,*unaff_x21,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_076cde28:
    uVar4 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar4,0);
  }
  puVar2 = PTR_DAT_08f9f480;
  if ((int)plVar3[3] != 0) {
    iStack000000000000000c = *unaff_x19;
    plVar3[4] = lVar5;
    iStack000000000000000c = iStack000000000000000c + 2;
    uVar4 = FUN_074e1fd8(&stack0x0000000c,0);
    lVar5 = thunk_FUN_0406deb8(*unaff_x23);
    FUN_076c32f4(lVar5,uVar4,*(undefined8 *)puVar2,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
    goto LAB_076cde28;
    puVar2 = PTR_DAT_08fad830;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar5;
      puVar1 = PTR_DAT_08f65da8;
      uVar4 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
      FUN_076c3330(0,0x43340000,uVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar1,plVar3,0);
      *unaff_x19 = *unaff_x19 + 3;
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


