/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 0564fe74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusAcquired(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long lVar6;
  long unaff_x28;
  
  if (*(long *)(unaff_x28 + 0x38) == 0) {
    FUN_02dcfd74();
  }
  puVar1 = System_Collections_Generic_IList<XmlNode>_TypeInfo;
                    /* try { // try from 0564fea8 to 0574feaf has its CatchHandler @ 056500d8 */
  if (((0 < (int)unaff_x26[1]) && (*unaff_x26 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x26,unaff_x26[1],
                           *(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x28)), lVar3 != 0)) {
                    /* try { // try from 0564feb4 to 0574feb7 has its CatchHandler @ 056500d4 */
    uVar4 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18)
                        );
    FUN_055339f0(uVar4,0);
                    /* try { // try from 0564fecc to 0574fecf has its CatchHandler @ 056500cc */
  }
  lVar6 = *(long *)puVar1;
  lVar3 = *(long *)(lVar6 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar6);
    lVar3 = *(long *)(lVar6 + 0x38);
  }
                    /* try { // try from 0564fef0 to 0574fef3 has its CatchHandler @ 056500b4 */
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
                    /* try { // try from 0564fefc to 0574feff has its CatchHandler @ 056500bc */
    FUN_02dcfd74(lVar3);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar3 = FUN_036ec9f4(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
                    /* try { // try from 0564ff34 to 0574ff3f has its CatchHandler @ 056500e4 */
    FUN_036ec908(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
  }
  puVar2 = System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_0564ffe4(unaff_w23,unaff_w22,unaff_w21,unaff_w20);
  uVar5 = FUN_055efebc(uVar4,*(undefined8 *)puVar2,0,0);
  if ((uVar5 & 1) == 0) {
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
    memcpy(unaff_x19,&stack0x00000010,0x48);
  }
  return;
}


