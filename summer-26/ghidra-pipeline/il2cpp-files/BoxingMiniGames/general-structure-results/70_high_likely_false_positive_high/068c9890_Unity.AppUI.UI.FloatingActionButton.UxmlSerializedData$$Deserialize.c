/*
FUNCTION_NAME: Unity.AppUI.UI.FloatingActionButton.UxmlSerializedData$$Deserialize
ENTRY_POINT: 068c9890
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_FloatingActionButton_UxmlSerializedData__Deserialize(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined *puVar7;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x8f0));
  *(undefined1 *)(unaff_x23 + 199) = 1;
  puVar7 = PTR_DAT_07a02578;
  iVar2 = *(int *)(*unaff_x22 + 0xe4);
  unaff_x20[2] = 0xffffffffffffffff;
  if (iVar2 == 0) {
    thunk_FUN_036a1978();
  }
  unaff_x20[6] = 0;
  thunk_FUN_036b7ad0(unaff_x20 + 6,0);
  unaff_x20[4] = unaff_x21;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  thunk_FUN_036b7ad0();
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                    /* try { // try from 068c98f0 to 069c98fb has its CatchHandler @ 068c995c */
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_06868e38();
  if ((uVar3 & 1) == 0) {
    if (unaff_x21 == 0) {
LAB_068c9a0c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
                    /* try { // try from 068c9910 to 069c9917 has its CatchHandler @ 068c9960 */
    iVar2 = FUN_068689cc();
    puVar1 = PTR_DAT_07a048f0;
                    /* try { // try from 068c9918 to 069c9957 has its CatchHandler @ 068c9874 */
    if (iVar2 == 4) {
      iVar2 = *(int *)(*(long *)puVar7 + 0xe4);
      *(undefined4 *)(unaff_x20 + 1) = 8;
      *unaff_x20 = 8;
      if (iVar2 == 0) {
        thunk_FUN_036a1978();
      }
      FUN_0686af50(*(undefined8 *)puVar1,0);
                    /* try { // try from 068c9958 to 069c995b has its CatchHandler @ 068c9960 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068c98f0 with catch @ 068c995c
                       try { // try from 068c995c to 069c997b has its CatchHandler @ 068c9874 */
      uVar3 = FUN_068680a8();
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068c9910 with catch @ 068c9960
                       catch(type#1 @ 07542bc8) { ... } // from try @ 068c9958 with catch @ 068c9960
                        */
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar3 = FUN_06868e38();
        if ((uVar3 & 1) != 0) {
          thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
          uVar5 = thunk_FUN_0367fe20();
          puVar7 = PTR_DAT_07a4f538;
          goto LAB_068c9a9c;
        }
        if (unaff_x19 == 0) goto LAB_068c9a0c;
        iVar2 = FUN_068689cc();
        if (iVar2 == 0x10) {
          lVar4 = *unaff_x22;
          *(undefined4 *)(unaff_x20 + 1) = 0x18;
          iVar2 = *(int *)(lVar4 + 0xe4);
          *unaff_x20 = 0x18;
          goto joined_r0x068c9a04;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
        uVar5 = thunk_FUN_0367fe20();
        puVar7 = PTR_DAT_07a4f540;
      }
      else {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
                    /* try { // try from 068c997c to 069c997f has its CatchHandler @ 068c9988 */
        uVar3 = FUN_068680a8();
                    /* catch() { ... } // from try @ 068c997c with catch @ 068c9988 */
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 068c998c to 069c9993 has its CatchHandler @ 068c999c */
          iVar2 = *(int *)(*unaff_x22 + 0xe4);
                    /* try { // try from 068c9994 to 069c999f has its CatchHandler @ 068c9874 */
joined_r0x068c9a04:
          if (iVar2 == 0) {
            thunk_FUN_036a1978();
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068c998c with catch @ 068c999c
                        */
          unaff_x20[5] = unaff_x19;
                    /* try { // try from 068c99ac to 069c9a2b has its CatchHandler @ 068c99ac
                       catch() { ... } // from try @ 068c99ac with catch @ 068c99ac
                       catch() { ... } // from try @ 068c9a58 with catch @ 068c99ac
                       catch() { ... } // from try @ 068c9a9c with catch @ 068c99ac
                       catch() { ... } // from try @ 068c9ad4 with catch @ 068c99ac */
          thunk_FUN_036b7ad0(unaff_x20 + 5);
          return;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
        uVar5 = thunk_FUN_0367fe20();
        puVar7 = PTR_DAT_07a4f530;
      }
      uVar6 = thunk_FUN_036aa1c8(puVar7);
      puVar7 = PTR_DAT_07a4f538;
    }
    else {
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar5 = thunk_FUN_0367fe20();
                    /* try { // try from 068c9a4c to 069c9a57 has its CatchHandler @ 068c9aa0 */
      uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a4f528);
      puVar7 = PTR_DAT_079fe4f8;
                    /* try { // try from 068c9a58 to 069c9a97 has its CatchHandler @ 068c99ac */
    }
    uVar8 = thunk_FUN_036aa1c8(puVar7);
    FUN_05d7e218(uVar5,uVar6,uVar8,0);
  }
  else {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar5 = thunk_FUN_0367fe20();
    puVar7 = PTR_DAT_079fe4f8;
                    /* try { // try from 068c9a2c to 069c9a37 has its CatchHandler @ 068c9a9c */
LAB_068c9a9c:
    uVar6 = thunk_FUN_036aa1c8(puVar7);
    FUN_05d7e1a0(uVar5,uVar6,0);
  }
  uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a4f548);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar5,uVar6);
}


