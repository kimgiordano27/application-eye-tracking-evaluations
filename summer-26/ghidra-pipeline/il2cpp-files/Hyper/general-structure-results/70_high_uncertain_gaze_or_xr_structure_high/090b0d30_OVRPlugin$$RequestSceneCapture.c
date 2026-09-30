/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 090b0d30
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  byte bVar1;
  long *plVar2;
  undefined1 in_w8;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x304) = in_w8;
  if (unaff_x20 == (long *)0x0) {
                    /* try { // try from 090b0d68 to 091b0d9f has its CatchHandler @ 090b0a88 */
    unaff_x19[7] = 0;
    plVar2 = (long *)0x0;
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090b0c94 with catch @ 090b0d74
                        */
  }
  else {
    lVar3 = *(long *)PTR_DAT_0ac09788;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
                    /* try { // try from 090b0d60 to 091b0d63 has its CatchHandler @ 090b0d7c */
      plVar2 = (long *)0x0;
                    /* try { // try from 090b0d64 to 091b0d67 has its CatchHandler @ 090b0d78 */
    }
    else {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090b0d64 with catch @ 090b0d78
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090b0d60 with catch @ 090b0d7c
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090b0c68 with catch @ 090b0d80
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090b0c04 with catch @ 090b0d84
                        */
      plVar2 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
    unaff_x19[7] = (long)plVar2;
                    /* try { // try from 090b0da0 to 091b0da3 has its CatchHandler @ 090b0dac */
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 090b0da0 with catch @ 090b0dac */
                    /* try { // try from 090b0db0 to 091b0db7 has its CatchHandler @ 090b0dc0 */
                    /* try { // try from 090b0db8 to 091b0dc3 has its CatchHandler @ 090b0a88 */
      plVar2 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 090b0db0 with catch @ 090b0dc0
                        */
  thunk_FUN_049ee3d8(unaff_x19 + 7,plVar2);
  unaff_x19[8] = (long)unaff_x20;
  thunk_FUN_049ee3d8();
  thunk_FUN_04983e64();
                    /* WARNING: Could not recover jumptable at 0x090b0df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x188))();
  return;
}


