/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 01d64eb0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x22;
  
                    /* try { // try from 01d64eb8 to 01e64ecb has its CatchHandler @ 01d64f20 */
  if ((*(byte *)(unaff_x22 + 0x6d1) & 1) == 0) {
                    /* try { // try from 01d64ecc to 01e64f0f has its CatchHandler @ 01d64dfc */
    FUN_00fdc2e4(PTR_DAT_02351818);
    *(undefined1 *)(unaff_x22 + 0x6d1) = 1;
  }
  uVar1 = *param_1;
  if (DAT_0247b899 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234d0c0);
    DAT_0247b899 = '\x01';
  }
  puVar2 = PTR_DAT_02351818;
  if (param_2 == 0) {
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64eb8 with catch @ 01d64f20
                        */
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
                    /* try { // try from 01d64f10 to 01e64f13 has its CatchHandler @ 01d64f18 */
    uVar3 = FUN_01c4f8e0(param_2,0);
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64e70 with catch @ 01d64f14
                       try { // try from 01d64f14 to 01e64f43 has its CatchHandler @ 01d64dfc */
    uVar4 = *(undefined4 *)(param_2 + 0x10);
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64f10 with catch @ 01d64f18
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64e74 with catch @ 01d64f1c
                        */
  }
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64e90 with catch @ 01d64f24
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64e54 with catch @ 01d64f28
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d64e3c with catch @ 01d64f2c
                        */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
                    /* try { // try from 01d64f44 to 01e64f47 has its CatchHandler @ 01d64f58 */
  FUN_01d46578(uVar1,uVar3,uVar4,param_3,0);
  return;
}


