/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetTiledMultiResLevel
ENTRY_POINT: 069720d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_SetTiledMultiResLevel(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float fStack000000000000000c;
  
  if (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  pfVar3 = (float *)thunk_FUN_03ac7604();
  fVar5 = *(float *)(unaff_x19 + 0x50);
  if ((unaff_x20 & 1) == 0) {
    fVar5 = -*(float *)(unaff_x19 + 0x50);
  }
                    /* try { // try from 06972104 to 06a72107 has its CatchHandler @ 0697211c */
  fVar5 = *pfVar3 + fVar5;
                    /* try { // try from 06972108 to 06a7210b has its CatchHandler @ 06972118 */
                    /* try { // try from 0697210c to 06a7213f has its CatchHandler @ 06971ea4 */
  lVar1 = *(long *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06972064 with catch @ 06972114
                        */
  fVar6 = *(float *)(unaff_x19 + 0x4c);
  if (fVar5 <= *(float *)(unaff_x19 + 0x4c)) {
    fVar6 = fVar5;
  }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06972108 with catch @ 06972118
                        */
  fStack000000000000000c = *(float *)(unaff_x19 + 0x48);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06972104 with catch @ 0697211c
                        */
  if (*(float *)(unaff_x19 + 0x48) <= fVar5) {
    fStack000000000000000c = fVar6;
  }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0697203c with catch @ 06972120
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06971fd8 with catch @ 06972124
                        */
  uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x21 + 0x78),&stack0x0000000c);
  if (lVar1 != 0) {
    FUN_0667c5b4(lVar1,uVar2,uVar4,0);
                    /* try { // try from 06972140 to 06a72143 has its CatchHandler @ 0697214c */
                    /* catch() { ... } // from try @ 06972140 with catch @ 0697214c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


