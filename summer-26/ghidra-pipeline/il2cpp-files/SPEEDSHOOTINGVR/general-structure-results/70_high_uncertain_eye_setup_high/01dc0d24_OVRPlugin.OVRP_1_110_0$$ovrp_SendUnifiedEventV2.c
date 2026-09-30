/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$ovrp_SendUnifiedEventV2
ENTRY_POINT: 01dc0d24
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


void OVRPlugin_OVRP_1_110_0__ovrp_SendUnifiedEventV2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 auVar5 [16];
  undefined *puVar4;
  
  puVar4 = PTR_DAT_023509b0;
  if ((unaff_x22 == 0) || (unaff_x24 == 0)) {
    puVar4 = PTR_DAT_02355000;
    if (unaff_x22 != 0) {
      puVar4 = PTR_DAT_02354d90;
    }
    uVar1 = thunk_FUN_010303a8(puVar4);
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01dc0d84 with catch @ 01dc0e14
                       try { // try from 01dc0e14 to 01ec0e2b has its CatchHandler @ 01dc0d58 */
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
                    /* try { // try from 01dc0e2c to 01ec0e43 has its CatchHandler @ 01dc0e74 */
    uVar2 = thunk_FUN_010303a8(PTR_DAT_023578e8);
                    /* try { // try from 01dc0e44 to 01ec0e63 has its CatchHandler @ 01dc0d58 */
    FUN_01c66c10(uVar3,uVar1,uVar2,0);
  }
  else {
    if ((-1 < unaff_w20) && (-1 < unaff_w21)) {
      if (*(int *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w20) {
        thunk_FUN_010303a8(PTR_DAT_0234be28);
        uVar1 = thunk_FUN_010400dc();
        uVar2 = thunk_FUN_010303a8(PTR_DAT_02355000);
        puVar4 = PTR_DAT_02350ed8;
      }
      else {
        if (-1 < unaff_w19) {
          if (unaff_w19 <= *(int *)(unaff_x24 + 0x18)) {
                    /* try { // try from 01dc0d58 to 01ec0d83 has its CatchHandler @ 01dc0d58
                       catch() { ... } // from try @ 01dc0d58 with catch @ 01dc0d58
                       catch() { ... } // from try @ 01dc0e14 with catch @ 01dc0d58
                       catch() { ... } // from try @ 01dc0e44 with catch @ 01dc0d58
                       catch() { ... } // from try @ 01dc0e7c with catch @ 01dc0d58 */
            thunk_FUN_00fda4e8(0);
            auVar5 = FUN_01a2d1a0();
            FUN_011b22cc(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)puVar4);
                    /* try { // try from 01dc0d84 to 01ec0e13 has its CatchHandler @ 01dc0e14 */
                    /* WARNING: Could not recover jumptable at 0x01dc0dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x23 + 600))();
            return;
          }
        }
        thunk_FUN_010303a8(PTR_DAT_0234be28);
        uVar1 = thunk_FUN_010400dc();
        uVar2 = thunk_FUN_010303a8(PTR_DAT_0235aac8);
        puVar4 = PTR_DAT_0234be50;
      }
      uVar3 = thunk_FUN_010303a8(puVar4);
      FUN_01c62494(uVar1,uVar2,uVar3,0);
      uVar2 = thunk_FUN_010303a8(PTR_DAT_0235aad8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar1,uVar2);
    }
    puVar4 = PTR_DAT_0235aad0;
    if (-1 < unaff_w21) {
      puVar4 = PTR_DAT_02355018;
    }
                    /* try { // try from 01dc0e64 to 01ec0e73 has its CatchHandler @ 01dc0e74 */
    uVar1 = thunk_FUN_010303a8(puVar4);
                    /* catch() { ... } // from try @ 01dc0e2c with catch @ 01dc0e74
                       catch() { ... } // from try @ 01dc0e64 with catch @ 01dc0e74 */
    thunk_FUN_010303a8(PTR_DAT_0234be28);
                    /* try { // try from 01dc0e78 to 01ec0e7b has its CatchHandler @ 01dc0e84 */
    uVar3 = thunk_FUN_010400dc();
                    /* try { // try from 01dc0e7c to 01ec0e87 has its CatchHandler @ 01dc0d58 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01dc0e78 with catch @ 01dc0e84
                        */
    uVar2 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar3,uVar1,uVar2,0);
  }
  uVar1 = thunk_FUN_010303a8(PTR_DAT_0235aad8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar1);
}


