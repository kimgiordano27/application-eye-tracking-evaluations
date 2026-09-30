/*
FUNCTION_NAME: OVRManager$$remove_AudioOutChanged
ENTRY_POINT: 056502c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_AudioOutChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long unaff_x28;
  undefined8 in_stack_00000018;
  
  lVar5 = *(long *)(unaff_x28 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74();
    lVar5 = *(long *)(unaff_x28 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar5 = FUN_036ec9f4(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
                    /* try { // try from 0565031c to 05750323 has its CatchHandler @ 0565036c */
    FUN_036ec908(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x18));
                    /* try { // try from 05650328 to 0575032b has its CatchHandler @ 05650368 */
                    /* try { // try from 0565032c to 05750387 has its CatchHandler @ 05650290 */
  }
  puVar2 = System_Buffers_IMemoryOwner<IntPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05650328 with catch @ 05650368
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0565031c with catch @ 0565036c
                        */
  uVar3 = FUN_056503d0(unaff_w23,unaff_w22,unaff_w21,in_stack_00000018._4_4_);
  uVar4 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
                    /* try { // try from 05650388 to 0575038b has its CatchHandler @ 05650394 */
  if ((uVar4 & 1) == 0) {
    unaff_x19[8] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
  }
  else {
                    /* catch() { ... } // from try @ 05650388 with catch @ 05650394 */
                    /* try { // try from 05650398 to 0575039f has its CatchHandler @ 056503a8 */
    memcpy(unaff_x19,&stack0x00000020,0x48);
  }
  return;
}


