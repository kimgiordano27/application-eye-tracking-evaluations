/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 073c0cf8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusAcquired(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x22 + 0x530);
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb5380);
    FUN_03c8f898(PTR_DAT_08eb5538);
    FUN_03c8f898(PTR_DAT_08eb5540);
    FUN_03c8f898(PTR_DAT_08eb5530);
                    /* try { // try from 073c0d34 to 074c0d37 has its CatchHandler @ 073c0e10 */
    *(undefined1 *)(unaff_x20 + 0x609) = 1;
  }
                    /* try { // try from 073c0d44 to 074c0d4b has its CatchHandler @ 073c0e18 */
  *(undefined4 *)(param_2 + 0x130) = 0x3dcccccd;
  lVar2 = *plVar5;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *plVar5;
  }
  puVar1 = PTR_DAT_08eb5538;
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *plVar5;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5380);
                    /* try { // try from 073c0d98 to 074c0dc3 has its CatchHandler @ 073c0e14 */
    FUN_04dde150(lVar3,uVar4,*(undefined8 *)PTR_DAT_08eb5540,0);
    plVar5 = (long *)(*(long *)(*plVar5 + 0xb8) + 8);
    *plVar5 = lVar3;
    thunk_FUN_03d233cc(plVar5,lVar3);
  }
                    /* try { // try from 073c0dd0 to 074c0ddb has its CatchHandler @ 073c0e08 */
  *(long *)(param_2 + 0x170) = lVar3;
  thunk_FUN_03d233cc(param_2 + 0x170,lVar3);
  FUN_04ec3888(param_2,*(undefined8 *)puVar1);
  return;
}


