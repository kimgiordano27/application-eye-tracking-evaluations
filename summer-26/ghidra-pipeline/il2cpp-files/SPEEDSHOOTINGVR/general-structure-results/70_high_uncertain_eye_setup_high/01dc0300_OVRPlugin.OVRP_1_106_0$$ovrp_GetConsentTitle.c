/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentTitle
ENTRY_POINT: 01dc0300
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentTitle(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x21;
  long lVar12;
  
  *(undefined1 *)(unaff_x21 + 0xa99) = in_w8;
  uVar8 = FUN_01c4f34c(0);
  puVar1 = PTR_DAT_0234bca8;
  if ((uVar8 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_01dc0498;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0234bca8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (DAT_0247d10e == '\0') {
      FUN_00fdc2e4(PTR_DAT_0234bca8);
      DAT_0247d10e = '\x01';
    }
                    /* try { // try from 01dc0348 to 01ec034b has its CatchHandler @ 01dc0354 */
    lVar9 = *(long *)puVar1;
                    /* try { // try from 01dc034c to 01ec036f has its CatchHandler @ 01dc0228 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01dc02bc with catch @ 01dc0350
                        */
    if (*(int *)(lVar9 + 0xe0) == 0) {
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01dc0348 with catch @ 01dc0354
                        */
      thunk_FUN_01022c14();
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01dc02a0 with catch @ 01dc0358
                        */
      lVar9 = *(long *)puVar1;
    }
    plVar10 = (long *)FUN_00fdc2fc(lVar9);
    if (unaff_x19 == 0) goto LAB_01dc0498;
    lVar9 = *plVar10;
    lVar12 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 01dc0370 to 01ec0373 has its CatchHandler @ 01dc0388 */
    uVar2 = FUN_01dc0110();
    uVar3 = 0;
    if (lVar9 != 0) {
      uVar3 = FUN_01db6578(lVar9,0);
    }
    uVar4 = FUN_01db6578();
    uVar5 = 0;
    if (lVar12 != 0) {
      uVar5 = FUN_01db6578(lVar12,0);
    }
    uVar6 = FUN_01db71b8();
    FUN_01c4f538(uVar2,uVar3,uVar4,uVar5,uVar6,0);
  }
  uVar7 = FUN_01db71b8();
  puVar1 = PTR_DAT_0235aa60;
  if ((uVar7 >> 1 & 1) == 0) {
    FUN_01db71b8();
    FUN_01dab44c();
    return;
  }
  lVar9 = *(long *)PTR_DAT_0235aa60;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar9 = *(long *)puVar1;
  }
  uVar11 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_0234d4c8 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)PTR_DAT_0234d4c8);
  }
  lVar9 = FUN_01c4f758(uVar11,0,0);
  if (lVar9 != 0) {
    FUN_01c4f7fc(lVar9,1,0);
    FUN_01c4f81c(lVar9);
    return;
  }
LAB_01dc0498:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


