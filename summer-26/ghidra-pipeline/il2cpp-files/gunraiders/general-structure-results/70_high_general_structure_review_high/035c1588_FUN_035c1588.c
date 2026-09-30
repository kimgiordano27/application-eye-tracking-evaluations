/*
FUNCTION_NAME: FUN_035c1588
ENTRY_POINT: 035c1588
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


uint FUN_035c1588(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 local_40 [16];
  undefined1 local_24 [4];
  
  if ((DAT_04537cba & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_GetPooled__);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlFactory<ListView,_ListView_UxmlTraits>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__)
    ;
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<MinMaxSlider,_MinMaxSlider_UxmlTraits>__ctor__
                );
    DAT_04537cba = 1;
  }
  puVar4 = GameAnalyticsSDK_State_GAState_TypeInfo;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), auVar2 = ZEXT816(0), lVar8 == 0))
  goto LAB_035c19b0;
  cVar6 = FUN_0351d240(lVar8,0);
  auVar2._8_8_ = local_40._8_8_;
  auVar2._0_8_ = local_40._0_8_;
  auVar1._8_8_ = local_40._8_8_;
  auVar1._0_8_ = local_40._0_8_;
  if (cVar6 == '\0') {
                    /* catch() { ... } // from try @ 035c11d4 with catch @ 035c1708 */
    if (param_2 != 0) {
                    /* catch() { ... } // from try @ 035c16f4 with catch @ 035c170c */
      *(long *)(param_1 + 0xa0) = param_2;
                    /* catch() { ... } // from try @ 035c16f0 with catch @ 035c1710 */
LAB_035c174c:
      uVar16 = FUN_031532a8(*(undefined8 *)(param_2 + 0x28),0);
      auVar2._8_8_ = local_40._8_8_;
      auVar2._0_8_ = local_40._0_8_;
      if ((uVar16 & 1) != 0) {
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_035c19b0;
                    /* catch() { ... } // from try @ 035c1740 with catch @ 035c1764 */
                    /* try { // try from 035c176c to 036c1773 has its CatchHandler @ 035c1788 */
        uVar16 = FUN_031532a8(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x50),0);
        auVar2._8_8_ = local_40._8_8_;
        auVar2._0_8_ = local_40._0_8_;
        if ((uVar16 & 1) != 0) {
                    /* try { // try from 035c1774 to 036c177f has its CatchHandler @ 035c10dc */
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_035c19b0;
                    /* try { // try from 035c1780 to 036c1787 has its CatchHandler @ 035c1788 */
          plVar18 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
                    /* catch() { ... } // from try @ 035c176c with catch @ 035c1788
                       catch() { ... } // from try @ 035c1780 with catch @ 035c1788 */
          lVar10 = *(long *)PTR_DAT_0422f958;
          lVar8 = *(long *)(lVar10 + 0x38);
          if (lVar8 == 0) {
            FUN_01c723f0(lVar10);
            lVar8 = *(long *)(lVar10 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          auVar2._8_8_ = local_40._8_8_;
          auVar2._0_8_ = local_40._0_8_;
          if (plVar18 == (long *)0x0) goto LAB_035c19b0;
          lVar15 = *plVar18;
          lVar10 = *(long *)puVar4;
          plVar9 = (long *)**(long **)(lVar8 + 0xb8);
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          uVar19 = *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlFactory<MinMaxSlider,_MinMaxSlider_UxmlTraits>__ctor__
          ;
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar10) goto LAB_035c1988;
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          goto LAB_035c1978;
        }
      }
      auVar2._8_8_ = local_40._8_8_;
      auVar2._0_8_ = local_40._0_8_;
      if (*(long *)(param_1 + 0xa0) == 0) {
LAB_035c19b0:
        local_40 = auVar2;
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar16 = FUN_03546310(*(long *)(param_1 + 0xa0),0);
      if ((uVar16 & 1) != 0) {
        auVar2 = local_40;
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_035c19b0;
        uVar19 = FUN_0354a9bc(*(long *)(param_1 + 0x48),0);
        uVar16 = FUN_031532a8(uVar19,0);
        if ((uVar16 & 1) != 0) {
          lVar8 = *(long *)(param_1 + 0x48);
          local_40 = FUN_032c9e14(0);
          uVar19 = FUN_032cbf38(local_40,0);
          auVar2 = local_40;
          if (lVar8 == 0) goto LAB_035c19b0;
          FUN_0354a9d4(lVar8,uVar19,0);
        }
      }
      auVar2 = local_40;
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_035c19b0;
      uVar16 = FUN_031532a8(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x48),0);
      auVar2 = local_40;
      if ((uVar16 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0xa0);
        uVar19 = FUN_035c2510();
        auVar2 = local_40;
        if (lVar8 == 0) goto LAB_035c19b0;
        *(undefined8 *)(lVar8 + 0x48) = uVar19;
      }
      plVar18 = *(long **)(param_1 + 0x48);
      if (plVar18 == (long *)0x0) goto LAB_035c19b0;
      local_40 = auVar2;
      uVar7 = (**(code **)(*plVar18 + 0x1b8))
                        (plVar18,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*plVar18 + 0x1c0));
      goto LAB_035c18bc;
    }
                    /* try { // try from 035c1744 to 036c176b has its CatchHandler @ 035c10dc */
    param_2 = *(long *)(param_1 + 0xa0);
    if (param_2 != 0) goto LAB_035c174c;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_035c19b0;
    plVar18 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
    lVar10 = *(long *)PTR_DAT_0422f958;
    lVar8 = *(long *)(lVar10 + 0x38);
    if (lVar8 == 0) {
      FUN_01c723f0(lVar10);
      lVar8 = *(long *)(lVar10 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394();
    }
    auVar2._8_8_ = local_40._8_8_;
    auVar2._0_8_ = local_40._0_8_;
    if (plVar18 == (long *)0x0) goto LAB_035c19b0;
    lVar15 = *plVar18;
    lVar10 = *(long *)puVar4;
    plVar9 = (long *)**(long **)(lVar8 + 0xb8);
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    uVar19 = *(undefined8 *)
              Method_UnityEngine_UIElements_UxmlFactory<ListView,_ListView_UxmlTraits>__ctor__;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar10) goto LAB_035c1988;
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
LAB_035c1978:
    puVar11 = (undefined8 *)FUN_01c72498(plVar18,lVar10,1);
    goto LAB_035c1998;
  }
  auVar2 = auVar1;
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_035c19b0;
  plVar18 = *(long **)(*(long *)(param_1 + 0x40) + 0x18);
  plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  puVar5 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_GetPooled__;
  auVar3._8_8_ = local_40._8_8_;
  auVar3._0_8_ = local_40._0_8_;
  auVar2._8_8_ = local_40._8_8_;
  auVar2._0_8_ = local_40._0_8_;
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), auVar2 = auVar3, lVar8 == 0))
  goto LAB_035c19b0;
  local_24[0] = FUN_0351d240(lVar8,0);
  lVar8 = thunk_FUN_01c49334(*(undefined8 *)puVar5,local_24);
  auVar2._8_8_ = local_40._8_8_;
  auVar2._0_8_ = local_40._0_8_;
  if (plVar9 == (long *)0x0) goto LAB_035c19b0;
  if ((lVar8 != 0) &&
     (lVar10 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
    uVar19 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar19,0);
  }
  auVar2._8_8_ = local_40._8_8_;
  auVar2._0_8_ = local_40._0_8_;
  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar9[4] = lVar8;
  if (plVar18 == (long *)0x0) goto LAB_035c19b0;
  lVar8 = *plVar18;
  uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
  uVar19 = *(undefined8 *)
            Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__;
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 035c16e8 to 036c16eb has its CatchHandler @ 035c1718 */
      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                    /* catch() { ... } // from try @ 035c16ec with catch @ 035c1714 */
                    /* catch() { ... } // from try @ 035c16e8 with catch @ 035c1718 */
                    /* catch() { ... } // from try @ 035c1258 with catch @ 035c171c */
                    /* catch() { ... } // from try @ 035c1238 with catch @ 035c1720 */
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_035c1724;
      }
                    /* try { // try from 035c16ec to 036c16ef has its CatchHandler @ 035c1714 */
      uVar16 = uVar16 - 1;
                    /* try { // try from 035c16f0 to 036c16f3 has its CatchHandler @ 035c1710 */
      piVar17 = piVar17 + 4;
                    /* try { // try from 035c16f4 to 036c16f7 has its CatchHandler @ 035c170c */
    } while (uVar16 != 0);
  }
                    /* try { // try from 035c16f8 to 036c16fb has its CatchHandler @ 035c1700 */
                    /* try { // try from 035c16fc to 036c173f has its CatchHandler @ 035c10dc */
                    /* catch() { ... } // from try @ 035c16f8 with catch @ 035c1700 */
  puVar11 = (undefined8 *)FUN_01c72498(plVar18,*(long *)puVar4,1);
                    /* catch() { ... } // from try @ 035c11e8 with catch @ 035c1704 */
LAB_035c1724:
                    /* catch() { ... } // from try @ 035c122c with catch @ 035c1724 */
  pcVar14 = (code *)*puVar11;
  uVar13 = puVar11[1];
                    /* catch() { ... } // from try @ 035c129c with catch @ 035c1728 */
  uVar12 = 2;
LAB_035c1738:
  (*pcVar14)(plVar18,uVar12,uVar19,plVar9,uVar13);
  uVar7 = 0;
                    /* try { // try from 035c1740 to 036c1743 has its CatchHandler @ 035c1764 */
LAB_035c18bc:
  return uVar7 & 1;
LAB_035c1988:
  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
LAB_035c1998:
  pcVar14 = (code *)*puVar11;
  uVar13 = puVar11[1];
  uVar12 = 1;
  goto LAB_035c1738;
}


