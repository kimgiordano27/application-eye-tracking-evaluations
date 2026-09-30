/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 05be2d48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_ControllerState2___ctor(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  uint unaff_w19;
  byte bVar7;
  long unaff_x21;
  uint uVar8;
  int iVar9;
  int iVar10;
  
                    /* try { // try from 05be2d4c to 05ce2d63 has its CatchHandler @ 05be2500 */
  if ((*(byte *)(unaff_x21 + 0xce4) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112240);
                    /* try { // try from 05be2d64 to 05ce2d67 has its CatchHandler @ 05be2d70 */
    *(undefined1 *)(unaff_x21 + 0xce4) = 1;
  }
  puVar5 = PTR_DAT_07112240;
  bVar7 = 0;
                    /* catch() { ... } // from try @ 05be2d64 with catch @ 05be2d70 */
  uVar8 = 0;
  do {
                    /* try { // try from 05be2d78 to 05ce2d7f has its CatchHandler @ 05be2db4 */
    iVar10 = param_2[4];
                    /* try { // try from 05be2d80 to 05ce2d97 has its CatchHandler @ 05be2500 */
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar9 = param_2[2];
    iVar4 = param_2[3];
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
                    /* try { // try from 05be2d98 to 05ce2d9b has its CatchHandler @ 05be2da0 */
    uVar1 = 1 << (ulong)(uVar8 & 0x1f) & unaff_w19;
    if ((int)uVar8 < 2) {
      iVar9 = iVar2;
      if ((uVar8 == 0) || (iVar9 = iVar3, uVar8 == 1)) goto LAB_05be2dec;
FUN_05be2dd8:
      lVar6 = *(long *)puVar5;
LAB_05be2e40:
      iVar2 = *param_2;
      iVar3 = param_2[1];
      iVar9 = param_2[2];
      iVar4 = param_2[3];
      iVar10 = param_2[4];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if ((int)uVar8 < 2) {
        iVar10 = iVar2;
        if ((uVar8 == 0) || (iVar10 = iVar3, uVar8 == 1)) goto LAB_05be2ea0;
      }
      else if ((uVar8 == 4) || ((iVar10 = iVar4, uVar8 == 3 || (iVar10 = iVar9, uVar8 == 2)))) {
LAB_05be2ea0:
        bVar7 = bVar7 | (iVar10 == 1 && uVar1 != 0);
      }
    }
    else {
      if ((uVar8 != 2) && ((iVar9 = iVar4, uVar8 != 3 && (iVar9 = iVar10, uVar8 != 4))))
      goto FUN_05be2dd8;
LAB_05be2dec:
      lVar6 = *(long *)puVar5;
      if (iVar9 != 2) goto LAB_05be2e40;
      iVar2 = param_2[5];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if ((iVar2 == 1) && (uVar1 == 0)) {
        return 0;
      }
      iVar2 = param_2[5];
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      bVar7 = bVar7 | uVar1 != 0;
      if ((uVar1 != 0) && (iVar2 == 0)) {
        return 1;
      }
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 5) {
      return bVar7;
    }
  } while( true );
}


