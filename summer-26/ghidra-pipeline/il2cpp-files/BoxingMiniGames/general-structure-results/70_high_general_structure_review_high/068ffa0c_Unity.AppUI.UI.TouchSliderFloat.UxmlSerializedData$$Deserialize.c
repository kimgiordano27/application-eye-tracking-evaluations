/*
FUNCTION_NAME: Unity.AppUI.UI.TouchSliderFloat.UxmlSerializedData$$Deserialize
ENTRY_POINT: 068ffa0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_TouchSliderFloat_UxmlSerializedData__Deserialize
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar2;
  long unaff_x22;
  ulong uVar3;
  long *unaff_x26;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  thunk_FUN_036b7ad0();
  if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
    uVar3 = 0;
    uVar1 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    do {
      if (uVar3 != 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_0686a884(unaff_w20,0);
        if (unaff_x19 == 0) goto LAB_068ffb64;
                    /* try { // try from 068ffad8 to 069ffb03 has its CatchHandler @ 068ffe1c */
        FUN_068695f0();
        uVar1 = (ulong)*(uint *)(unaff_x22 + 0x18);
      }
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar2 = *(long *)(unaff_x22 + 0x20 + uVar3 * 8);
      if (lVar2 != 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_0686afa8(lVar2,unaff_w20,0);
        if (unaff_x19 == 0) {
LAB_068ffb64:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_068695f0();
      }
      uVar1 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  }
                    /* try { // try from 068ffb38 to 069ffb3b has its CatchHandler @ 068ffe18 */
                    /* try { // try from 068ffb50 to 069ffb5b has its CatchHandler @ 068ffe10 */
  return;
}


