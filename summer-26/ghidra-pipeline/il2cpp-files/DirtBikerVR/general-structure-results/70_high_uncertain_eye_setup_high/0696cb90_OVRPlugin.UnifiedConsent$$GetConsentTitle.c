/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentTitle
ENTRY_POINT: 0696cb90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnifiedConsent__GetConsentTitle(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 uStack0000000000000020;
  long lStack0000000000000030;
  
  puVar2 = PTR_DAT_084b70d0;
  puVar1 = PTR_DAT_0849b360;
  puStack0000000000000010 = (undefined1 *)&stack0x00000020;
  uStack0000000000000008 = 0;
  uStack0000000000000020 = param_2;
  lStack0000000000000030 = param_1;
LAB_0696cbb0:
  do {
    while( true ) {
      uVar4 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1);
      lVar3 = lStack0000000000000030;
      if ((uVar4 & 1) == 0) {
        FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_0849b358);
        if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_054c57ac();
        return 1;
      }
      if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = FUN_07c99058(lStack0000000000000030,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = FUN_07c997a0(lVar5,0);
      if (lVar5 != 0) break;
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar3,*(undefined8 *)puVar2);
    }
    lVar6 = *(long *)(unaff_x19 + 0x38);
    if (lVar6 == 0) {
LAB_0696ccc0:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar6 + 0x18)) {
      uVar7 = FUN_04de82e0(lVar6,iVar8,*unaff_x24);
      uVar4 = thunk_FUN_065cbffc(lVar5,uVar7,0);
      if ((uVar4 & 1) != 0) goto LAB_0696cbb0;
      lVar6 = *(long *)(unaff_x19 + 0x38);
      iVar8 = iVar8 + 1;
      if (lVar6 == 0) goto LAB_0696ccc0;
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar3,*(undefined8 *)puVar2);
  } while( true );
}


