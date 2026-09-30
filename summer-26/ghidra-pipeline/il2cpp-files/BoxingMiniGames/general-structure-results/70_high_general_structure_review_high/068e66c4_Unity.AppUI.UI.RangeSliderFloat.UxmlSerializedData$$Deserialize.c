/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderFloat.UxmlSerializedData$$Deserialize
ENTRY_POINT: 068e66c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined4 Unity_AppUI_UI_RangeSliderFloat_UxmlSerializedData__Deserialize(ushort param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  uint uVar9;
  
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar2 = FUN_06876010(*(long *)(unaff_x19 + 0x10),0);
    uVar7 = (ulong)(((uint)param_1 * 2 + (uint)param_1) * 4);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if ((long)(unaff_x20 + (unaff_x21 & 0xffffffff)) < (long)(lVar2 + uVar7)) {
      if (lVar3 != 0) {
        FUN_068762f8(lVar3,*(undefined8 *)PTR_DAT_07a4ff30,0);
        return 0;
      }
    }
    else if (lVar3 != 0) {
      lVar2 = FUN_06876410(lVar3,uVar7,0);
      uVar1 = FUN_068e6cf4();
      if (param_1 != 0) {
        uVar9 = 0;
        do {
                    /* try { // try from 068e6778 to 069e67e3 has its CatchHandler @ 068e6778
                       catch() { ... } // from try @ 068e6778 with catch @ 068e6778
                       catch() { ... } // from try @ 068e680c with catch @ 068e6778
                       catch() { ... } // from try @ 068e6858 with catch @ 068e6778
                       catch() { ... } // from try @ 068e6924 with catch @ 068e6778 */
          if (((lVar2 == 0) || (lVar3 = FUN_06868828(lVar2,uVar9 * 0xc,0xc,0), lVar3 == 0)) ||
             (lVar4 = FUN_06868828(lVar3,0,2,0), lVar4 == 0)) goto LAB_068e6aa8;
          FUN_06869db4(lVar4,*(undefined1 *)(unaff_x19 + 0x18),0);
          lVar4 = FUN_06868828(lVar3,2,2,0);
          if (lVar4 == 0) goto LAB_068e6aa8;
          FUN_06869db4(lVar4,*(undefined1 *)(unaff_x19 + 0x18),0);
          lVar4 = FUN_06868828(lVar3,4,4,0);
          if (lVar4 == 0) goto LAB_068e6aa8;
          FUN_06869c6c(lVar4,*(undefined1 *)(unaff_x19 + 0x18),0);
                    /* try { // try from 068e67e4 to 069e67eb has its CatchHandler @ 068e6820 */
                    /* try { // try from 068e67ec to 069e67f7 has its CatchHandler @ 068e6828 */
          FUN_06868828(lVar3,8,4,0);
                    /* try { // try from 068e6804 to 069e680b has its CatchHandler @ 068e6824 */
                    /* try { // try from 068e680c to 069e683f has its CatchHandler @ 068e6778 */
          plVar5 = (long *)FUN_068e6d28();
          if (plVar5 != (long *)0x0) {
            lVar3 = *plVar5;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068e67e4 with catch @ 068e6820
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068e6804 with catch @ 068e6824
                        */
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 068e67ec with catch @ 068e6828
                        */
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                    /* try { // try from 068e6840 to 069e6857 has its CatchHandler @ 068e691c */
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a4ff18) {
                  puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_068e6870;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
                    /* try { // try from 068e6858 to 069e690b has its CatchHandler @ 068e6778 */
            puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a4ff18,0);
LAB_068e6870:
            (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (unaff_x22 == 0) goto LAB_068e6aa8;
            uVar7 = FUN_057235d4();
            if ((uVar7 & 1) != 0) {
              lVar3 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a4ff18) {
                    puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_068e68f0;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a4ff18,0);
LAB_068e68f0:
              (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 068e690c to 069e691b has its CatchHandler @ 068e691c */
              FUN_05724890();
            }
            lVar3 = *plVar5;
                    /* catch() { ... } // from try @ 068e6840 with catch @ 068e691c
                       catch() { ... } // from try @ 068e690c with catch @ 068e691c */
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 068e6920 to 069e6923 has its CatchHandler @ 068e692c */
                    /* try { // try from 068e6924 to 069e692f has its CatchHandler @ 068e6778 */
            if (uVar7 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 068e6920 with catch @ 068e692c
                        */
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07a4ff18) {
                  puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_068e6968;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a4ff18,0);
LAB_068e6968:
            (*(code *)*puVar6)(plVar5,puVar6[1]);
            FUN_057233e0();
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != param_1);
      }
      FUN_068e77bc();
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x10), lVar2 != 0)) {
        lVar3 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar9 = *(uint *)(lVar2 + 0x18);
          if (uVar9 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar9 + 1;
            plVar5 = (long *)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
            *plVar5 = unaff_x22;
            thunk_FUN_036b7ad0(plVar5);
            return uVar1;
          }
          FUN_0459f03c();
          return uVar1;
        }
      }
    }
  }
LAB_068e6aa8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


