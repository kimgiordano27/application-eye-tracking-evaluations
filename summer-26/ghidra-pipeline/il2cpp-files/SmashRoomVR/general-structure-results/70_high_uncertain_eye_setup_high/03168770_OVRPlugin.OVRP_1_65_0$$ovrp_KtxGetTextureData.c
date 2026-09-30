/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 03168770
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar5;
  
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 03168784 to 03268787 has its CatchHandler @ 03168814 */
                    /* try { // try from 03168788 to 032687eb has its CatchHandler @ 031686d4 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xb90)) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_031687cc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_031687cc:
  uVar5 = (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
    *(undefined4 *)(unaff_x21 + 0x78) = uVar5;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 031687ec to 032687ef has its CatchHandler @ 03168808 */
                    /* try { // try from 031687f0 to 032687f7 has its CatchHandler @ 031686d4 */
      FUN_030d0278(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
                    /* try { // try from 031687f8 to 032687ff has its CatchHandler @ 03168804 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168728 with catch @ 03168800
                       try { // try from 03168800 to 0326882b has its CatchHandler @ 031686d4 */
      FUN_03168ea4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


