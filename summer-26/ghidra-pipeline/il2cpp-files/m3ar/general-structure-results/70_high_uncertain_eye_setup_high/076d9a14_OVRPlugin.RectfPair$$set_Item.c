/*
FUNCTION_NAME: OVRPlugin.RectfPair$$set_Item
ENTRY_POINT: 076d9a14
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_RectfPair__set_Item(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s10;
  undefined4 in_stack_00000028;
  
  FUN_06f806bc(unaff_s8 + unaff_s10,param_1,5,*unaff_x20);
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar5 = FUN_06f803dc(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08fae108),
     puVar3 = PTR_DAT_08fae120, puVar2 = PTR_DAT_08fae118, puVar1 = PTR_DAT_08fae100, lVar5 != 0)) {
    FUN_055eb3ac(&stack0x00000018,lVar5,*(undefined8 *)PTR_DAT_08fae130);
    uVar7 = 0;
    while( true ) {
      uVar6 = FUN_04fbf81c(&stack0x00000018,*(undefined8 *)puVar3);
      uVar4 = in_stack_00000028;
      if ((uVar6 & 1) == 0) {
        FUN_04fbf818(&stack0x00000018,*(undefined8 *)puVar2);
        return uVar7;
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) break;
      fVar8 = (float)FUN_06f80634(*(long *)(unaff_x19 + 0x30),in_stack_00000028,
                                  *(undefined8 *)puVar1);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      fVar9 = (float)FUN_06f80634(*(long *)(unaff_x19 + 0x30),uVar7,*(undefined8 *)puVar1);
      if (fVar8 < fVar9) {
        uVar7 = uVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


