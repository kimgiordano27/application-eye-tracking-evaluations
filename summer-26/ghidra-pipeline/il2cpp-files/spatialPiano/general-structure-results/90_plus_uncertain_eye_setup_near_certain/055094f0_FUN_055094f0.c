/*
FUNCTION_NAME: FUN_055094f0
ENTRY_POINT: 055094f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


undefined8 FUN_055094f0(long param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
                    /* try { // try from 0550951c to 0560953b has its CatchHandler @ 0550989c */
  if ((DAT_06bbf57a & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_105_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_0_1_1_TypeInfo);
                    /* try { // try from 0550955c to 05609587 has its CatchHandler @ 05509850 */
    FUN_02f08768(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_02f08768(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSByte_TypeInfo);
    FUN_02f08768(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo);
    DAT_06bbf57a = 1;
  }
  FUN_05500c08(param_1,param_2);
  puVar1 = PTR_DAT_067c9c68;
  if (param_2 != (long *)0x0) {
                    /* try { // try from 05509594 to 05609597 has its CatchHandler @ 05509900 */
                    /* try { // try from 05509598 to 056095eb has its CatchHandler @ 0550825c */
    lVar14 = *(long *)(param_1 + 0x18);
    uVar6 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar10);
    }
    uVar6 = FUN_054d2524(uVar6,0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar14 != 0)) {
                    /* try { // try from 055095ec to 05609603 has its CatchHandler @ 05509900 */
      auVar16 = FUN_05512e44(lVar14,uVar6,uVar4,0);
                    /* try { // try from 05509604 to 05609617 has its CatchHandler @ 05509750 */
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054f7a24();
                    /* try { // try from 0550961c to 0560961f has its CatchHandler @ 05509900 */
                    /* try { // try from 05509620 to 05609627 has its CatchHandler @ 0550825c */
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (FUN_054f85b0(*(long *)(param_1 + 0x10),auVar16._0_8_ & 0xffffffff),
           puVar3 = OVRPlugin_OVRP_1_2_0_TypeInfo, puVar2 = OVRPlugin_OVRP_0_1_1_TypeInfo,
           param_3 != (long *)0x0)) {
                    /* try { // try from 05509628 to 0560962f has its CatchHandler @ 055098d8 */
          lVar10 = *param_3;
                    /* try { // try from 05509630 to 05609633 has its CatchHandler @ 055098d4 */
                    /* try { // try from 05509634 to 05609637 has its CatchHandler @ 05509888 */
                    /* try { // try from 05509638 to 0560963b has its CatchHandler @ 05509884 */
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 0550963c to 0560963f has its CatchHandler @ 0550987c */
                    /* try { // try from 05509640 to 05609643 has its CatchHandler @ 05509874 */
                    /* try { // try from 05509644 to 0560964b has its CatchHandler @ 055098f8 */
                    /* try { // try from 0550964c to 0560964f has its CatchHandler @ 055098fc */
          if (uVar11 != 0) {
                    /* try { // try from 05509650 to 05609653 has its CatchHandler @ 055098c4 */
                    /* try { // try from 05509654 to 0560965b has its CatchHandler @ 055098f0 */
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
                    /* try { // try from 0550965c to 0560965f has its CatchHandler @ 055098c0 */
                    /* try { // try from 05509660 to 05609663 has its CatchHandler @ 055098f4 */
              if (*(long *)(piVar13 + -2) == *(long *)OVRPlugin_OVRP_1_2_0_TypeInfo) {
                    /* try { // try from 05509684 to 0560968f has its CatchHandler @ 055098f0 */
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_05509690;
              }
                    /* try { // try from 05509664 to 05609667 has its CatchHandler @ 055098bc */
              uVar11 = uVar11 - 1;
                    /* try { // try from 05509668 to 0560966b has its CatchHandler @ 055098b8 */
              piVar13 = piVar13 + 4;
                    /* try { // try from 0550966c to 05609677 has its CatchHandler @ 055098f8 */
            } while (uVar11 != 0);
          }
                    /* try { // try from 05509678 to 05609683 has its CatchHandler @ 055098fc */
          puVar7 = (undefined8 *)FUN_02f421d0(param_3,*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo,1);
LAB_05509690:
                    /* try { // try from 05509690 to 0560969b has its CatchHandler @ 055098f4 */
          uVar5 = (*(code *)*puVar7)(param_3,puVar7[1]);
                    /* try { // try from 0550969c to 0560969f has its CatchHandler @ 055098b4 */
                    /* try { // try from 055096a0 to 056096a7 has its CatchHandler @ 055098e4 */
                    /* try { // try from 055096a8 to 056096ab has its CatchHandler @ 055098ec */
                    /* try { // try from 055096ac to 056096af has its CatchHandler @ 055097b4 */
          lVar10 = FUN_02f0880c(*(undefined8 *)puVar2,(ulong)uVar5);
                    /* try { // try from 055096b0 to 056096b3 has its CatchHandler @ 05509808 */
                    /* try { // try from 055096b4 to 056096b7 has its CatchHandler @ 055097a4 */
                    /* try { // try from 055096b8 to 056096bf has its CatchHandler @ 055098cc */
          if (0 < (int)uVar5) {
            uVar11 = 0;
                    /* try { // try from 055096c0 to 056096c3 has its CatchHandler @ 055098ac */
            do {
                    /* try { // try from 055096c4 to 056096c7 has its CatchHandler @ 055098a8 */
              lVar14 = *param_3;
                    /* try { // try from 055096c8 to 056096cb has its CatchHandler @ 055098a4 */
                    /* try { // try from 055096cc to 056096cf has its CatchHandler @ 055098a0 */
              uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* try { // try from 055096d0 to 056096d3 has its CatchHandler @ 0550989c */
              if (uVar12 != 0) {
                    /* try { // try from 055096d4 to 056096df has its CatchHandler @ 055098e4 */
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                    /* try { // try from 055096e0 to 056096eb has its CatchHandler @ 055098ec */
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    /* try { // try from 05509704 to 0560970f has its CatchHandler @ 055098a8 */
                    puVar7 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_05509710;
                  }
                  uVar12 = uVar12 - 1;
                    /* try { // try from 055096ec to 056096f7 has its CatchHandler @ 055098cc */
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
                    /* try { // try from 055096f8 to 05609703 has its CatchHandler @ 055098ac */
              puVar7 = (undefined8 *)FUN_02f421d0(param_3,*(long *)puVar3,0);
LAB_05509710:
                    /* try { // try from 05509710 to 0560971b has its CatchHandler @ 055098a4 */
                    /* try { // try from 0550971c to 05609727 has its CatchHandler @ 055098a0 */
              plVar8 = (long *)(*(code *)*puVar7)(param_3,uVar11 & 0xffffffff,puVar7[1]);
                    /* try { // try from 05509728 to 05609733 has its CatchHandler @ 0550989c */
              FUN_05500c08(param_1,plVar8);
              if (plVar8 == (long *)0x0) goto LAB_055098dc;
                    /* try { // try from 05509734 to 05609737 has its CatchHandler @ 055097bc */
                    /* try { // try from 05509738 to 0560973b has its CatchHandler @ 05509760 */
              lVar15 = *(long *)(param_1 + 0x18);
                    /* try { // try from 0550973c to 0560973f has its CatchHandler @ 05509758 */
                    /* catch() { ... } // from try @ 055090dc with catch @ 05509740
                       try { // try from 05509740 to 0560991b has its CatchHandler @ 0550825c */
                    /* catch() { ... } // from try @ 0550935c with catch @ 05509744 */
              uVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                    /* catch() { ... } // from try @ 05509314 with catch @ 05509748 */
              lVar14 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 055091ec with catch @ 0550974c */
                    /* catch() { ... } // from try @ 05509604 with catch @ 05509750 */
                    /* catch() { ... } // from try @ 05509378 with catch @ 05509754 */
              if (*(int *)(lVar14 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0550973c with catch @ 05509758 */
                    /* catch() { ... } // from try @ 05509330 with catch @ 0550975c */
                thunk_FUN_02f6670c(lVar14);
              }
                    /* catch() { ... } // from try @ 05509738 with catch @ 05509760 */
                    /* catch() { ... } // from try @ 05508e60 with catch @ 05509764 */
                    /* catch() { ... } // from try @ 05508e30 with catch @ 05509768 */
              uVar6 = FUN_054d2524(uVar6,0);
                    /* catch() { ... } // from try @ 055092b4 with catch @ 0550976c */
                    /* catch() { ... } // from try @ 05508ef8 with catch @ 05509770 */
                    /* catch() { ... } // from try @ 05508898 with catch @ 05509774 */
                    /* catch() { ... } // from try @ 0550879c with catch @ 05509778 */
                    /* catch() { ... } // from try @ 05508750 with catch @ 0550977c */
                    /* catch() { ... } // from try @ 05508700 with catch @ 05509780 */
              if ((*(long *)(param_1 + 0x10) == 0) ||
                 (uVar4 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar15 == 0)) goto LAB_055098dc;
                    /* catch() { ... } // from try @ 055086b8 with catch @ 05509784 */
                    /* catch() { ... } // from try @ 055093fc with catch @ 05509788 */
                    /* catch() { ... } // from try @ 055093a4 with catch @ 0550978c */
                    /* catch() { ... } // from try @ 0550939c with catch @ 05509790 */
                    /* catch() { ... } // from try @ 05509360 with catch @ 05509794 */
              auVar17 = FUN_05512e44(lVar15,uVar6,uVar4,0);
                    /* catch() { ... } // from try @ 05509318 with catch @ 05509798 */
                    /* catch() { ... } // from try @ 055092f4 with catch @ 0550979c */
                    /* catch() { ... } // from try @ 055092dc with catch @ 055097a0 */
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_055098dc;
                    /* catch() { ... } // from try @ 055096b4 with catch @ 055097a4 */
                    /* catch() { ... } // from try @ 055091f0 with catch @ 055097a8 */
              FUN_054f7a24();
                    /* catch() { ... } // from try @ 05508e80 with catch @ 055097ac */
                    /* catch() { ... } // from try @ 05508e50 with catch @ 055097b0 */
                    /* catch() { ... } // from try @ 055096ac with catch @ 055097b4 */
                    /* catch() { ... } // from try @ 05508e38 with catch @ 055097b8 */
                    /* catch() { ... } // from try @ 05508e14 with catch @ 055097bc
                       catch() { ... } // from try @ 05509734 with catch @ 055097bc */
              if ((*(long *)(param_1 + 0x10) == 0) ||
                 (FUN_054f85b0(*(long *)(param_1 + 0x10),auVar17._0_8_ & 0xffffffff), lVar10 == 0))
              goto LAB_055098dc;
                    /* catch() { ... } // from try @ 05508e00 with catch @ 055097c0 */
                    /* catch() { ... } // from try @ 055089dc with catch @ 055097c4 */
                    /* catch() { ... } // from try @ 05508994 with catch @ 055097c8 */
              if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 055084e4 with catch @ 055098e0 */
                FUN_02f089d0();
              }
                    /* catch() { ... } // from try @ 0550898c with catch @ 055097cc */
              lVar14 = uVar11 * 0x10;
                    /* catch() { ... } // from try @ 05509098 with catch @ 055097d0 */
              uVar11 = uVar11 + 1;
                    /* catch() { ... } // from try @ 05509068 with catch @ 055097d4 */
                    /* catch() { ... } // from try @ 05508fa4 with catch @ 055097d8 */
              *(undefined1 (*) [16])(lVar10 + lVar14 + 0x20) = auVar17;
                    /* catch() { ... } // from try @ 05508f7c with catch @ 055097dc */
            } while (uVar11 != uVar5);
          }
                    /* catch() { ... } // from try @ 05508ddc with catch @ 055097e0 */
                    /* catch() { ... } // from try @ 05509214 with catch @ 055097e4 */
          lVar15 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 05508c90 with catch @ 055097e8 */
                    /* catch() { ... } // from try @ 055087b4 with catch @ 055097ec */
                    /* catch() { ... } // from try @ 05508768 with catch @ 055097f0 */
          lVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
                    /* catch() { ... } // from try @ 0550871c with catch @ 055097f4 */
          if (lVar14 != 0) {
                    /* catch() { ... } // from try @ 05508a88 with catch @ 055097f8 */
                    /* catch() { ... } // from try @ 05508864 with catch @ 055097fc */
                    /* catch() { ... } // from try @ 05509078 with catch @ 05509800 */
                    /* catch() { ... } // from try @ 05508f54 with catch @ 05509804 */
                    /* catch() { ... } // from try @ 055091a8 with catch @ 05509808
                       catch() { ... } // from try @ 055096b0 with catch @ 05509808 */
                    /* catch() { ... } // from try @ 05508508 with catch @ 0550980c */
            uVar6 = FUN_050ef6a8(lVar14,*(undefined8 *)
                                         System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSingle_TypeInfo
                                 ,0x14,0);
            puVar1 = OVRPlugin_OVRP_1_108_0_TypeInfo;
                    /* catch() { ... } // from try @ 055084d0 with catch @ 05509810 */
                    /* catch() { ... } // from try @ 05508fc8 with catch @ 05509814 */
            if (lVar15 != 0) {
                    /* catch() { ... } // from try @ 055092b8 with catch @ 05509818 */
                    /* catch() { ... } // from try @ 05509294 with catch @ 0550981c */
                    /* catch() { ... } // from try @ 05509254 with catch @ 05509820 */
                    /* catch() { ... } // from try @ 05509020 with catch @ 05509824 */
                    /* catch() { ... } // from try @ 05508f0c with catch @ 05509828 */
              FUN_054fb764(lVar15,uVar6);
                    /* catch() { ... } // from try @ 05508efc with catch @ 0550982c */
                    /* catch() { ... } // from try @ 05508ee0 with catch @ 05509830 */
                    /* catch() { ... } // from try @ 05508dc4 with catch @ 05509834 */
                    /* catch() { ... } // from try @ 05508cf4 with catch @ 05509838 */
                    /* catch() { ... } // from try @ 05508cdc with catch @ 0550983c */
              local_78 = 0;
              uStack_70 = 0;
                    /* catch() { ... } // from try @ 05508b9c with catch @ 05509840 */
              local_68 = 0;
                    /* catch() { ... } // from try @ 05508b50 with catch @ 05509844 */
              FUN_03e1d140(&local_78,auVar16._0_8_,auVar16._8_8_,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 05508b34 with catch @ 05509848 */
                    /* catch() { ... } // from try @ 05509108 with catch @ 0550984c */
                    /* catch() { ... } // from try @ 0550955c with catch @ 05509850 */
                    /* catch() { ... } // from try @ 05508aac with catch @ 05509854 */
              lVar14 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
              puVar1 = OVRPlugin_OVRP_1_105_0_TypeInfo;
                    /* catch() { ... } // from try @ 05508a58 with catch @ 05509858 */
              if (lVar14 != 0) {
                    /* catch() { ... } // from try @ 0550896c with catch @ 0550985c */
                    /* catch() { ... } // from try @ 055088f0 with catch @ 05509860 */
                    /* catch() { ... } // from try @ 0550889c with catch @ 05509864 */
                    /* catch() { ... } // from try @ 05508880 with catch @ 05509868 */
                    /* catch() { ... } // from try @ 05508814 with catch @ 0550986c */
                    /* catch() { ... } // from try @ 05508800 with catch @ 05509870 */
                    /* catch() { ... } // from try @ 05509640 with catch @ 05509874 */
                    /* catch() { ... } // from try @ 055087a0 with catch @ 05509878 */
                uVar6 = FUN_050ef6a8(lVar14,*(undefined8 *)
                                             System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanSByte_TypeInfo
                                     ,0x14,0);
                    /* catch() { ... } // from try @ 0550963c with catch @ 0550987c */
                    /* catch() { ... } // from try @ 05508754 with catch @ 05509880 */
                    /* catch() { ... } // from try @ 05509638 with catch @ 05509884 */
                    /* catch() { ... } // from try @ 05509634 with catch @ 05509888 */
                uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0550867c with catch @ 0550988c */
                    /* catch() { ... } // from try @ 055085ac with catch @ 05509890 */
                    /* catch() { ... } // from try @ 05508c1c with catch @ 05509894 */
                    /* catch() { ... } // from try @ 05508838 with catch @ 05509898 */
                    /* catch() { ... } // from try @ 0550951c with catch @ 0550989c
                       catch() { ... } // from try @ 055096d0 with catch @ 0550989c
                       catch() { ... } // from try @ 05509728 with catch @ 0550989c */
                    /* catch() { ... } // from try @ 055094dc with catch @ 055098a0
                       catch() { ... } // from try @ 055096cc with catch @ 055098a0
                       catch() { ... } // from try @ 0550971c with catch @ 055098a0 */
                    /* catch() { ... } // from try @ 0550949c with catch @ 055098a4
                       catch() { ... } // from try @ 055096c8 with catch @ 055098a4
                       catch() { ... } // from try @ 05509710 with catch @ 055098a4 */
                    /* catch() { ... } // from try @ 0550945c with catch @ 055098a8
                       catch() { ... } // from try @ 055096c4 with catch @ 055098a8
                       catch() { ... } // from try @ 05509704 with catch @ 055098a8 */
                    /* catch() { ... } // from try @ 05509418 with catch @ 055098ac
                       catch() { ... } // from try @ 055096c0 with catch @ 055098ac
                       catch() { ... } // from try @ 055096f8 with catch @ 055098ac */
                uStack_88 = uStack_70;
                local_90 = local_78;
                    /* catch() { ... } // from try @ 055087e0 with catch @ 055098b0 */
                local_80 = local_68;
                    /* catch() { ... } // from try @ 05508d78 with catch @ 055098b4
                       catch() { ... } // from try @ 0550969c with catch @ 055098b4 */
                FUN_0550e034(uVar9,&local_90,lVar10,uVar6,param_4,0);
                    /* catch() { ... } // from try @ 05509154 with catch @ 055098b8
                       catch() { ... } // from try @ 05509668 with catch @ 055098b8 */
                    /* catch() { ... } // from try @ 05508ea8 with catch @ 055098bc
                       catch() { ... } // from try @ 05509664 with catch @ 055098bc */
                    /* catch() { ... } // from try @ 05508be8 with catch @ 055098c0
                       catch() { ... } // from try @ 0550965c with catch @ 055098c0 */
                    /* catch() { ... } // from try @ 05508b68 with catch @ 055098c4
                       catch() { ... } // from try @ 05509650 with catch @ 055098c4 */
                    /* catch() { ... } // from try @ 05508628 with catch @ 055098c8 */
                    /* catch() { ... } // from try @ 055093c4 with catch @ 055098cc
                       catch() { ... } // from try @ 055096b8 with catch @ 055098cc
                       catch() { ... } // from try @ 055096ec with catch @ 055098cc */
                    /* catch() { ... } // from try @ 0550926c with catch @ 055098d0 */
                    /* catch() { ... } // from try @ 055086bc with catch @ 055098d4
                       catch() { ... } // from try @ 05509630 with catch @ 055098d4 */
                    /* catch() { ... } // from try @ 05509628 with catch @ 055098d8 */
                return uVar9;
              }
            }
          }
        }
      }
    }
  }
LAB_055098dc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05508564 with catch @ 055098dc */
  FUN_02f089c8();
}


