/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderInt.UxmlSerializedData$$Deserialize
ENTRY_POINT: 068e785c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_RangeSliderInt_UxmlSerializedData__Deserialize(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  long unaff_x22;
  
                    /* try { // try from 068e785c to 069e791f has its CatchHandler @ 068e724c */
  *(undefined1 *)(unaff_x22 + 0x1e1) = 1;
  if (unaff_x19 == 0) goto LAB_068e7c30;
  uVar4 = FUN_057235d4();
  if ((((uVar4 & 1) != 0) && (uVar4 = FUN_057235d4(), (uVar4 & 1) != 0)) &&
     (plVar5 = (long *)FUN_05723340(), puVar3 = PTR_DAT_07a4ff60, plVar5 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_07a4ff60 + 0x130);
                    /* catch() { ... } // from try @ 068e7680 with catch @ 068e79c4 */
    if (((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
        (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_07a4ff60))
       && (plVar6 = (long *)FUN_05723340(), plVar6 != (long *)0x0)) {
      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                    /* try { // try from 068e79e8 to 069e79eb has its CatchHandler @ 068e7a34 */
                    /* try { // try from 068e79ec to 069e7a23 has its CatchHandler @ 068e724c */
      if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_068e7c30;
        uVar1 = *(undefined4 *)((long)plVar6 + 0x14);
        FUN_068773e4(*(long *)(unaff_x20 + 0x10),(ulong)*(uint *)((long)plVar5 + 0x14) + unaff_x21,0
                     ,0);
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_068e7c30;
                    /* try { // try from 068e7a24 to 069e7a33 has its CatchHandler @ 068e7a34 */
        uVar7 = FUN_06876410(*(long *)(unaff_x20 + 0x10),uVar1,0);
                    /* catch() { ... } // from try @ 068e79e8 with catch @ 068e7a34
                       catch() { ... } // from try @ 068e7a24 with catch @ 068e7a34 */
                    /* try { // try from 068e7a38 to 069e7a3b has its CatchHandler @ 068e7b04 */
                    /* try { // try from 068e7a3c to 069e7a83 has its CatchHandler @ 068e724c */
                    /* catch() { ... } // from try @ 068e7820 with catch @ 068e7a40 */
                    /* catch() { ... } // from try @ 068e7830 with catch @ 068e7a44 */
                    /* catch() { ... } // from try @ 068e7840 with catch @ 068e7a48 */
        FUN_05724890();
                    /* catch() { ... } // from try @ 068e7940 with catch @ 068e7a4c */
                    /* catch() { ... } // from try @ 068e793c with catch @ 068e7a50 */
                    /* catch() { ... } // from try @ 068e7800 with catch @ 068e7a54 */
                    /* catch() { ... } // from try @ 068e7938 with catch @ 068e7a58 */
        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a50020);
                    /* catch() { ... } // from try @ 068e7858 with catch @ 068e7a5c */
                    /* catch() { ... } // from try @ 068e7930 with catch @ 068e7a60 */
                    /* catch() { ... } // from try @ 068e7794 with catch @ 068e7a64 */
        FUN_05e5ae34(lVar8,0);
                    /* catch() { ... } // from try @ 068e7730 with catch @ 068e7a68 */
        *(undefined2 *)(lVar8 + 0x10) = 0x201;
        *(undefined8 *)(lVar8 + 0x18) = uVar7;
        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x18),uVar7);
                    /* try { // try from 068e7a84 to 069e7a87 has its CatchHandler @ 068e7a98 */
        FUN_057233e0();
                    /* catch() { ... } // from try @ 068e7a84 with catch @ 068e7a98 */
      }
    }
  }
  uVar4 = FUN_057235d4();
  if (((uVar4 & 1) != 0) && (uVar4 = FUN_057235d4(), (uVar4 & 1) != 0)) {
                    /* try { // try from 068e7920 to 069e7927 has its CatchHandler @ 068e7ab8 */
                    /* try { // try from 068e7928 to 069e792b has its CatchHandler @ 068e7ab0 */
    plVar5 = (long *)FUN_05723340();
                    /* try { // try from 068e792c to 069e792f has its CatchHandler @ 068e724c */
                    /* try { // try from 068e7930 to 069e7937 has its CatchHandler @ 068e7a60 */
                    /* try { // try from 068e7938 to 069e793b has its CatchHandler @ 068e7a58 */
                    /* try { // try from 068e793c to 069e793f has its CatchHandler @ 068e7a50 */
    plVar6 = (long *)FUN_05723340();
    puVar3 = PTR_DAT_07a4ff60;
                    /* try { // try from 068e7940 to 069e7943 has its CatchHandler @ 068e7a4c */
    if (plVar5 == (long *)0x0) {
      return;
    }
                    /* try { // try from 068e7944 to 069e79e7 has its CatchHandler @ 068e724c */
    lVar9 = *plVar5;
    lVar8 = *(long *)PTR_DAT_07a4ff60;
    uVar4 = (ulong)*(byte *)(lVar8 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(lVar9 + 200) + uVar4 * 8 + -8) != lVar8)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_07a4ff58 + 0x130);
      if (*(byte *)(lVar9 + 0x130) < bVar2) {
        return;
      }
      if (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_07a4ff58) {
        return;
      }
      lVar9 = plVar5[3];
      if (lVar9 == 0) {
        return;
      }
    }
    else {
                    /* try { // try from 068e7a9c to 069e7aa3 has its CatchHandler @ 068e7b04 */
                    /* try { // try from 068e7aa4 to 069e7adb has its CatchHandler @ 068e724c */
                    /* catch() { ... } // from try @ 068e75a8 with catch @ 068e7aa8 */
                    /* catch() { ... } // from try @ 068e75b4 with catch @ 068e7aac */
      lVar9 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7d88,1);
                    /* catch() { ... } // from try @ 068e7928 with catch @ 068e7ab0 */
      lVar8 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 068e75d0 with catch @ 068e7ab4 */
                    /* catch() { ... } // from try @ 068e7920 with catch @ 068e7ab8 */
                    /* catch() { ... } // from try @ 068e753c with catch @ 068e7abc */
      uVar4 = (ulong)*(byte *)(lVar8 + 0x130);
                    /* catch() { ... } // from try @ 068e74d8 with catch @ 068e7ac0 */
                    /* try { // try from 068e7adc to 069e7adf has its CatchHandler @ 068e7af0 */
      if (((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
          (*(long *)(*(long *)(*plVar5 + 200) + uVar4 * 8 + -8) != lVar8)) || (lVar9 == 0))
      goto LAB_068e7c30;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_068e7c34;
                    /* catch() { ... } // from try @ 068e7adc with catch @ 068e7af0 */
      *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)((long)plVar5 + 0x14);
    }
                    /* try { // try from 068e7af4 to 069e7afb has its CatchHandler @ 068e7b04 */
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
                    /* try { // try from 068e7afc to 069e7b07 has its CatchHandler @ 068e724c */
                    /* catch() { ... } // from try @ 068e7a38 with catch @ 068e7b04
                       catch() { ... } // from try @ 068e7a9c with catch @ 068e7b04
                       catch() { ... } // from try @ 068e7af4 with catch @ 068e7b04 */
      if (((uint)*(byte *)(lVar10 + 0x130) < (uint)uVar4) ||
         (*(long *)(*(long *)(lVar10 + 200) + uVar4 * 8 + -8) != lVar8)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_07a4ff58 + 0x130);
        if ((uint)*(byte *)(lVar10 + 0x130) < (uint)bVar2) {
          return;
        }
        if (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_07a4ff58)
        {
          return;
        }
        lVar8 = plVar6[3];
        if (lVar8 == 0) {
          return;
        }
      }
      else {
        lVar8 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7d88,1);
        lVar10 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar10 + 0x130);
        if (((*(byte *)(*plVar6 + 0x130) < bVar2) ||
            (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar10)) || (lVar8 == 0)
           ) {
LAB_068e7c30:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_068e7c34:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)((long)plVar6 + 0x14);
      }
      FUN_05724890();
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a50018);
      FUN_068e89d8(uVar7,0x111,lVar9,lVar8,uVar11);
      FUN_057233e0();
      return;
    }
  }
  return;
}


