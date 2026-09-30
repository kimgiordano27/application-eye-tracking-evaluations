/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_13
ENTRY_POINT: 056a9a10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_<>c__<_cctor>b__807_13(void)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar7;
  long in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  System_Nullable<DateTime>__get_Value();
  puVar3 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  if (unaff_x20 != 0) {
    iVar4 = thunk_FUN_02da2370(0);
    lVar7 = *(long *)puVar3;
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_02dcfd74(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 8);
    if (*(long *)(lVar6 + 0x38) == 0) {
      FUN_02dcfd74(lVar6);
    }
    if (((iStack0000000000000008 < 1) || (in_stack_00000000 == 0)) ||
       (lVar6 = FUN_036ec9e8(in_stack_00000000,_iStack0000000000000008,
                             *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_036ec8f8(in_stack_00000000,_iStack0000000000000008,
                           *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
    }
    iVar4 = FUN_056a9aec(unaff_x20 + iVar4,uVar1,uVar5,iStack0000000000000008);
    uVar5 = FUN_0554230c((long)iVar4,0);
    auVar2._8_4_ = iStack0000000000000008;
    auVar2._0_8_ = in_stack_00000000;
    auVar2._12_4_ = uStack000000000000000c;
    *unaff_x19 = uVar5;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


