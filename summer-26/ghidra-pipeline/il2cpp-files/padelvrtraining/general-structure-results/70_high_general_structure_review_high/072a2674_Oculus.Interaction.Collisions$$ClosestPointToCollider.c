/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToCollider
ENTRY_POINT: 072a2674
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void Oculus_Interaction_Collisions__ClosestPointToCollider(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 in_w8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack000000000000002c;
  
                    /* try { // try from 072a2674 to 073a267b has its CatchHandler @ 072a26d0 */
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  *unaff_x19 = in_w8;
                    /* try { // try from 072a2684 to 073a268f has its CatchHandler @ 072a26cc */
  uStack0000000000000010 = param_1;
                    /* try { // try from 072a2690 to 073a26eb has its CatchHandler @ 072a2614 */
  uVar2 = FUN_068a4dcc(&stack0x00000010,*(undefined8 *)PTR_DAT_091b1630);
  if ((uVar2 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_09219108);
    uVar3 = FUN_0720bd8c(uVar9,uVar3,0);
    uVar9 = thunk_FUN_03d1e194(PTR_DAT_09219148);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 072a2684 with catch @ 072a26cc
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 072a2674 with catch @ 072a26d0
                        */
    FUN_03d2d414(uVar3,uVar9);
  }
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* catch() { ... } // from try @ 072a26ec with catch @ 072a2700 */
  lVar4 = FUN_0720b33c(*(long *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 072a270c to 073a2717 has its CatchHandler @ 072a272c */
                    /* try { // try from 072a2718 to 073a2723 has its CatchHandler @ 072a2614 */
  _uStack0000000000000010 = FUN_06362bc8(lVar4,0,*(undefined8 *)PTR_DAT_091b1640);
                    /* try { // try from 072a2724 to 073a272b has its CatchHandler @ 072a272c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 072a270c with catch @ 072a272c
                       catch(type#2 @ 00000000) { ... } // from try @ 072a2724 with catch @ 072a272c
                        */
                    /* try { // try from 072a2730 to 073a276f has its CatchHandler @ 072a2730
                       catch() { ... } // from try @ 072a2730 with catch @ 072a2730
                       catch() { ... } // from try @ 072a279c with catch @ 072a2730
                       catch() { ... } // from try @ 072a27d4 with catch @ 072a2730
                       catch() { ... } // from try @ 072a281c with catch @ 072a2730 */
  uVar2 = FUN_068a4d80(&stack0x00000010,*(undefined8 *)PTR_DAT_091b1638);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000010;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_StringLiteral_52115_09219068 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04a43188(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    FUN_068a4dcc(&stack0x00000010,*(undefined8 *)PTR_DAT_091b1630);
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    iVar1 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    plVar5 = *(long **)(unaff_x19 + 8);
                    /* try { // try from 072a2770 to 073a277f has its CatchHandler @ 072a27dc */
    if (iVar1 != 3) {
      lVar4 = thunk_FUN_03d1e194(PTR_DAT_091a2ae0);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar3 = FUN_071392b4(0);
      plVar7 = *(long **)(unaff_x19 + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uStack000000000000002c =
           (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      uVar9 = thunk_FUN_03d1e194(PTR_DAT_09215d40);
      uVar9 = thunk_FUN_03d2eb70(uVar9,&stack0x0000002c);
      uVar8 = thunk_FUN_03d1e194(PTR_DAT_09219100);
      uVar3 = FUN_072675bc(uVar8,uVar3,uVar9,0);
      uVar3 = FUN_0720bd8c(plVar5,uVar3,0);
      uVar9 = thunk_FUN_03d1e194(PTR_DAT_09219148);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar3,uVar9);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
                    /* try { // try from 072a2794 to 073a279b has its CatchHandler @ 072a27d4 */
                    /* try { // try from 072a279c to 073a27cf has its CatchHandler @ 072a2730 */
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09219088);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)PTR_DAT_091a13f8) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(plVar5);
      }
    }
    FUN_072a14d4(lVar4,plVar5);
    plVar5 = (long *)(unaff_x19 + 0xe);
                    /* try { // try from 072a27d0 to 073a27d3 has its CatchHandler @ 072a27d8 */
    *plVar5 = lVar4;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 072a2794 with catch @ 072a27d4
                       try { // try from 072a27d4 to 073a27f3 has its CatchHandler @ 072a2730 */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 072a27d0 with catch @ 072a27d8
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 072a2770 with catch @ 072a27dc
                        */
    thunk_FUN_03d1023c(plVar5,lVar4);
    lVar4 = *(long *)(unaff_x19 + 0xe);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
                    /* try { // try from 072a27f4 to 073a27f7 has its CatchHandler @ 072a2804 */
    uVar3 = thunk_FUN_03d2ee44(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_09215b80);
                    /* catch() { ... } // from try @ 072a27f4 with catch @ 072a2804 */
    FUN_072a2268(lVar4,uVar3,uVar9);
                    /* try { // try from 072a2810 to 073a281b has its CatchHandler @ 072a2830 */
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* try { // try from 072a281c to 073a2827 has its CatchHandler @ 072a2730 */
    lVar4 = FUN_072a2c20(*plVar5,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 10));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* try { // try from 072a2828 to 073a282f has its CatchHandler @ 072a2830 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 072a2810 with catch @ 072a2830
                       catch(type#2 @ 00000000) { ... } // from try @ 072a2828 with catch @ 072a2830
                        */
    auVar10 = FUN_071f1178(lVar4,0,0);
    uVar2 = FUN_0708d5f0();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar10;
      thunk_FUN_03d1023c(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_StringLiteral_52115_09219068 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b98f18(unaff_x19 + 2);
    }
    else {
      FUN_0708d63c();
      puVar6 = (undefined8 *)(unaff_x19 + 0xe);
      uVar3 = *puVar6;
      *unaff_x19 = 0xfffffffe;
      *puVar6 = 0;
      thunk_FUN_03d1023c(puVar6,0);
      if (*(int *)(*(long *)PTR_StringLiteral_52115_09219068 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_09219140);
    }
  }
  return;
}


