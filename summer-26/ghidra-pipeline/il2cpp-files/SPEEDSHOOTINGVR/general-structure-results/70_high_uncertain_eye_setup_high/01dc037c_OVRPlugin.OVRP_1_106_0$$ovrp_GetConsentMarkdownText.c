/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentMarkdownText
ENTRY_POINT: 01dc037c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentMarkdownText(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined4 unaff_w20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar2 = FUN_01db6578();
                    /* catch() { ... } // from try @ 01dc0370 with catch @ 01dc0388 */
                    /* try { // try from 01dc0394 to 01ec039f has its CatchHandler @ 01dc03b4 */
  uVar3 = FUN_01db6578();
  uVar4 = 0;
  if (unaff_x22 != 0) {
                    /* try { // try from 01dc03a0 to 01ec03ab has its CatchHandler @ 01dc0228 */
    uVar4 = FUN_01db6578();
                    /* try { // try from 01dc03ac to 01ec03b3 has its CatchHandler @ 01dc03b4 */
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01dc0394 with catch @ 01dc03b4
                       catch(type#2 @ 00000000) { ... } // from try @ 01dc03ac with catch @ 01dc03b4
                        */
  uVar5 = FUN_01db71b8();
  FUN_01c4f538(unaff_w20,uVar2,uVar3,uVar4,uVar5,0);
  uVar6 = FUN_01db71b8();
  puVar1 = PTR_DAT_0235aa60;
  if ((uVar6 >> 1 & 1) == 0) {
    FUN_01db71b8();
    FUN_01dab44c();
    return;
  }
  lVar7 = *(long *)PTR_DAT_0235aa60;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar7 = *(long *)puVar1;
  }
  uVar8 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_0234d4c8 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)PTR_DAT_0234d4c8);
  }
  lVar7 = FUN_01c4f758(uVar8,0,0);
  if (lVar7 != 0) {
    FUN_01c4f7fc(lVar7,1,0);
    FUN_01c4f81c(lVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


