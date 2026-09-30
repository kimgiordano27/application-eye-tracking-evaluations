/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 051e08cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__MarkerStart(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
                    /* try { // try from 051e08cc to 052e093f has its CatchHandler @ 051e07cc */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066091f8);
  *(undefined1 *)(unaff_x19 + 0x5dd) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066092c0);
                    /* try { // try from 051e0940 to 052e094f has its CatchHandler @ 051e0954 */
    FUN_04a57244(lVar4,uVar5,*(undefined8 *)PTR_DAT_066092e0,0);
    lVar3 = *unaff_x22;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x48) = lVar4;
  }
                    /* catch() { ... } // from try @ 051e08b4 with catch @ 051e0954
                       catch() { ... } // from try @ 051e0940 with catch @ 051e0954 */
  if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 051e0958 to 052e095b has its CatchHandler @ 051e0a08 */
    thunk_FUN_02cd038c();
                    /* try { // try from 051e095c to 052e0977 has its CatchHandler @ 051e07cc */
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_066092d8;
  puVar1 = PTR_DAT_066092d0;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051e0848 with catch @ 051e0960
                        */
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
                    /* try { // try from 051e0978 to 052e098f has its CatchHandler @ 051e09f8 */
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
                    /* try { // try from 051e0990 to 052e09e7 has its CatchHandler @ 051e07cc */
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066092c8);
    FUN_04a640d4(lVar6,uVar5,*(undefined8 *)PTR_DAT_066092e8,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50) = lVar6;
  }
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_03d862c0(uVar5,7,lVar4,lVar6,*(undefined8 *)puVar1);
  return uVar5;
}


