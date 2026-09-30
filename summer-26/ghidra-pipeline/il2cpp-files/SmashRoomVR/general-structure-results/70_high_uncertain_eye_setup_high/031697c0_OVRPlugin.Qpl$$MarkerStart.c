/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 031697c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStart(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined4 uVar6;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(PTR_DAT_03d80880);
                    /* try { // try from 031697d0 to 032697db has its CatchHandler @ 03169b08 */
  *(undefined1 *)(unaff_x20 + 0x96) = 1;
  FUN_029bb5e8();
  plVar5 = *(long **)(unaff_x19 + 0x120);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 03169804 to 0326980b has its CatchHandler @ 03169c00 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 0316980c to 0326980f has its CatchHandler @ 03169bfc */
                    /* try { // try from 03169810 to 03269813 has its CatchHandler @ 03169bf8 */
                    /* try { // try from 03169814 to 03269817 has its CatchHandler @ 03169bf4 */
      if (*(long *)(piVar4 + -2) == *(long *)StringLiteral_13374) {
                    /* try { // try from 03169838 to 0326984b has its CatchHandler @ 03169bdc */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03169840;
      }
                    /* try { // try from 03169818 to 0326981f has its CatchHandler @ 03169c08 */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
                    /* try { // try from 03169820 to 0326982b has its CatchHandler @ 03169c04 */
    } while (uVar3 != 0);
  }
                    /* try { // try from 0316982c to 03269837 has its CatchHandler @ 03169c08 */
  puVar1 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)StringLiteral_13374,0);
LAB_03169840:
  uVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  *(undefined4 *)(unaff_x19 + 300) = uVar6;
  return;
}


