/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 01d69ecc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  FUN_00fdc2e4(PTR_DAT_02358910);
  FUN_00fdc2e4(PTR_DAT_02358918);
  FUN_00fdc2e4(PTR_DAT_02358920);
  *(undefined1 *)(unaff_x23 + 0x72c) = 1;
  FUN_01d4b63c();
  puVar2 = PTR_DAT_02352ca8;
  puVar1 = PTR_DAT_0234bc58;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar3 = FUN_01ca1f10();
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  thunk_FUN_0106e12c();
  uVar3 = FUN_01ca1f10();
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  thunk_FUN_0106e12c();
  uVar3 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d5e86c(uVar3);
  lVar4 = FUN_01c9f7dc();
  puVar1 = PTR_DAT_0234bbb0;
  if (lVar4 == 0) {
    lVar5 = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
LAB_01d6a000:
    thunk_FUN_0106e12c(unaff_x19 + 0xa0,lVar5);
    return;
  }
  uVar3 = *(undefined8 *)PTR_DAT_0234bbb0;
  lVar5 = thunk_FUN_0103ffe0(lVar4,uVar3);
  if (lVar5 != 0) {
    *(long *)(unaff_x19 + 0xa0) = lVar5;
    uVar3 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_0103ffe0(lVar4,uVar3);
    if (lVar5 != 0) goto LAB_01d6a000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0(lVar4,uVar3);
}


