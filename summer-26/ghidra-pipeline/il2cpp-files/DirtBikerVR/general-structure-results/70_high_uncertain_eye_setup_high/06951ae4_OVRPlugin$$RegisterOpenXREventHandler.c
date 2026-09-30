/*
FUNCTION_NAME: OVRPlugin$$RegisterOpenXREventHandler
ENTRY_POINT: 06951ae4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RegisterOpenXREventHandler
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 uVar6;
  
  *(undefined8 *)(unaff_x19 + 0x90) = unaff_x20;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x90));
  puVar2 = PTR_DAT_084b5d60;
                    /* try { // try from 06951af8 to 06a51b07 has its CatchHandler @ 06951b20 */
                    /* try { // try from 06951b08 to 06a51b27 has its CatchHandler @ 06951104 */
  if (((*(long *)(unaff_x19 + 0x10) != 0) &&
      (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) {
                    /* catch() { ... } // from try @ 06951af8 with catch @ 06951b20 */
    uVar3 = FUN_04de82e0(lVar5,0,*(undefined8 *)PTR_DAT_084b5d60);
                    /* catch() { ... } // from try @ 06951930 with catch @ 06951b24 */
                    /* try { // try from 06951b28 to 06a51b2b has its CatchHandler @ 06951b34 */
                    /* try { // try from 06951b2c to 06a51b3b has its CatchHandler @ 06951104 */
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
                    /* catch() { ... } // from try @ 06951b28 with catch @ 06951b34 */
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xa8),uVar3);
    puVar1 = PTR_DAT_08486738;
                    /* catch() { ... } // from try @ 069518fc with catch @ 06951b38 */
                    /* try { // try from 06951b3c to 06a51e83 has its CatchHandler @ 06951b3c
                       catch() { ... } // from try @ 06951b3c with catch @ 06951b3c
                       catch() { ... } // from try @ 0695218c with catch @ 06951b3c
                       catch() { ... } // from try @ 069522b8 with catch @ 06951b3c
                       catch() { ... } // from try @ 06952360 with catch @ 06951b3c
                       catch() { ... } // from try @ 0695245c with catch @ 06951b3c
                       catch() { ... } // from try @ 0695255c with catch @ 06951b3c
                       catch() { ... } // from try @ 06952570 with catch @ 06951b3c
                       catch() { ... } // from try @ 0695259c with catch @ 06951b3c */
    if (((*(long *)(unaff_x19 + 0x10) != 0) &&
        (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) {
      uVar3 = FUN_04de82e0(lVar5,1,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xb0),uVar3);
      uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_07c9c218(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06951bd8;
        uVar6 = FUN_07cac65c(*(long *)(unaff_x19 + 0x50),0);
        *(undefined4 *)(unaff_x19 + 0xb8) = uVar6;
        *(undefined4 *)(unaff_x19 + 0xbc) = param_2;
        *(undefined4 *)(unaff_x19 + 0xc0) = param_3;
        *(undefined4 *)(unaff_x19 + 0xc4) = param_4;
      }
      FUN_0693839c();
      return;
    }
  }
LAB_06951bd8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


