/*
FUNCTION_NAME: Unity.AppUI.UI.ActionButton.UxmlSerializedData$$Register
ENTRY_POINT: 0688bad8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_AppUI_UI_ActionButton_UxmlSerializedData__Register
               (ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  long unaff_x19;
  undefined8 *puVar12;
  long unaff_x21;
  double unaff_d8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar12 = *(undefined8 **)(unaff_x19 + 0xc0);
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a4d0c0);
                    /* try { // try from 0688baf8 to 0698bafb has its CatchHandler @ 0688bb04 */
    FUN_03642964(PTR_DAT_07a1ae30);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0688ba74 with catch @ 0688bafc
                       try { // try from 0688bafc to 0698bb1f has its CatchHandler @ 0688ba24 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0688ba8c with catch @ 0688bb00
                        */
    *(undefined1 *)(unaff_x21 + 0xdec) = 1;
  }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0688ba9c with catch @ 0688bb04
                       catch(type#1 @ 07542bc8) { ... } // from try @ 0688baf8 with catch @ 0688bb04
                        */
  in_stack_00000018 = _UNK_01652618;
  in_stack_00000010 = _DAT_01652610;
  lVar6 = FUN_03642a54(*puVar12,&stack0x00000010);
                    /* try { // try from 0688bb20 to 0698bb23 has its CatchHandler @ 0688bb30 */
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  puVar9 = *(uint **)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 0688bb20 with catch @ 0688bb30 */
                    /* try { // try from 0688bb34 to 0698bb3b has its CatchHandler @ 0688bb44 */
                    /* try { // try from 0688bb3c to 0698bb47 has its CatchHandler @ 0688ba24 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0688bb34 with catch @ 0688bb44
                        */
  if ((((((*puVar9 & 0xfffffffe) != 0) && ((*(ulong *)(puVar9 + 4) & 0xfffffffe) != 0)) &&
       (*(undefined8 *)(lVar6 + *(ulong *)(puVar9 + 4) * 8 + 0x28) = 1, *puVar9 != 0)) &&
      ((puVar9[4] != 0 && (*(undefined8 *)(lVar6 + 0x20) = 1, *puVar9 != 0)))) &&
     (((puVar9[4] & 0xfffffffe) != 0 &&
      ((*(undefined8 *)(lVar6 + 0x28) = 0, puVar5 = PTR_DAT_07a1ae30, dVar3 = DAT_0164fd08,
       (*puVar9 & 0xfffffffe) != 0 && ((int)*(long *)(puVar9 + 4) != 0)))))) {
    *(undefined8 *)(lVar6 + *(long *)(puVar9 + 4) * 8 + 0x20) = 0;
    while( true ) {
      if ((*puVar9 & 0xfffffffe) == 0) goto LAB_0688bd10;
      iVar11 = (int)*(long *)(puVar9 + 4);
      if (iVar11 == 0) goto LAB_0688bd10;
      lVar10 = -0x8000000000000000;
      if (unaff_d8 != INFINITY) {
        lVar10 = (long)unaff_d8;
      }
      if (iVar11 == 1) goto LAB_0688bd10;
      lVar1 = lVar6 + *(long *)(puVar9 + 4) * 8;
      if (param_3 < *(long *)(lVar1 + 0x28) + *(long *)(lVar1 + 0x20) * lVar10) break;
      lVar1 = *(long *)(lVar6 + 0x28);
      *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x20);
      if (((*puVar9 == 0) || (puVar9[4] == 0)) ||
         (*(long *)(lVar6 + 0x20) = lVar1 + *(long *)(lVar6 + 0x20) * lVar10,
         (*puVar9 & 0xfffffffe) == 0)) goto LAB_0688bd10;
      iVar11 = (int)*(long *)(puVar9 + 4);
      if ((iVar11 == 1) || (iVar11 == 0)) goto LAB_0688bd10;
      lVar1 = lVar6 + *(long *)(puVar9 + 4) * 8;
      lVar2 = *(long *)(lVar1 + 0x28);
      *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x20);
      if (((*puVar9 & 0xfffffffe) == 0) || ((int)*(long *)(puVar9 + 4) == 0)) goto LAB_0688bd10;
      *(long *)(lVar6 + *(long *)(puVar9 + 4) * 8 + 0x20) = lVar2 + *(long *)(lVar1 + 0x20) * lVar10
      ;
      if ((unaff_d8 == (double)lVar10) ||
         (unaff_d8 = 1.0 / (unaff_d8 - (double)lVar10), dVar3 < unaff_d8)) break;
    }
    puVar4 = PTR_DAT_079f4610;
    if ((*puVar9 != 0) && (puVar9[4] != 0)) {
      in_stack_00000010 = *(undefined8 *)(lVar6 + 0x20);
      uVar7 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x68),&stack0x00000010);
      if (((**(uint **)(lVar6 + 0x10) & 0xfffffffe) != 0) &&
         (lVar10 = *(long *)(*(uint **)(lVar6 + 0x10) + 4), (int)lVar10 != 0)) {
        in_stack_00000008 = *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20);
        uVar8 = thunk_FUN_0367fa58(*(undefined8 *)(puVar4 + 0x68),&stack0x00000008);
        FUN_05c98b2c(*(undefined8 *)puVar5,uVar7,uVar8,0);
        return;
      }
    }
  }
LAB_0688bd10:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


