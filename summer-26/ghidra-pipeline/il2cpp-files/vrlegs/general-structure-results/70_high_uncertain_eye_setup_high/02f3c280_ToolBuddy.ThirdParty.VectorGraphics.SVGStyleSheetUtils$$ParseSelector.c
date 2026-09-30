/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.SVGStyleSheetUtils$$ParseSelector
ENTRY_POINT: 02f3c280
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f3c070) */
/* WARNING: Removing unreachable block (ram,0x02f3c260) */
/* WARNING: Removing unreachable block (ram,0x02f3c258) */

void ToolBuddy_ThirdParty_VectorGraphics_SVGStyleSheetUtils__ParseSelector(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  undefined8 *unaff_x20;
  long *unaff_x21;
  char cStack000000000000000c;
  
                    /* try { // try from 02f3c288 to 0303c28b has its CatchHandler @ 02f3c2a0 */
  uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cdaa78);
  uVar12 = thunk_FUN_01a6848c(uVar11,*(undefined8 *)*unaff_x20);
  if ((uVar12 & 1) != 0) {
                    /* try { // try from 02f3c2c4 to 0303c2cb has its CatchHandler @ 02f3c2cc */
    uVar11 = *unaff_x20;
    __cxa_end_catch();
                    /* catch() { ... } // from try @ 02f3c2ac with catch @ 02f3c2cc
                       catch() { ... } // from try @ 02f3c2c4 with catch @ 02f3c2cc */
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(uVar11);
  }
                    /* catch() { ... } // from try @ 02f3c288 with catch @ 02f3c2a0 */
  uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
                    /* try { // try from 02f3c2ac to 0303c2b7 has its CatchHandler @ 02f3c2cc */
  uVar12 = thunk_FUN_01a6848c(uVar11,*(undefined8 *)*unaff_x20);
  if ((uVar12 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_03abd138,0);
  }
                    /* try { // try from 02f3c2b8 to 0303c2c3 has its CatchHandler @ 02f3be54 */
  __cxa_end_catch();
  puVar4 = PTR_DAT_03ccbd08;
  if (unaff_x21 != (long *)0x0) {
    lVar13 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03ccbd08) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_02f3be20;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02f3be20:
    uVar6 = (*(code *)*puVar7)();
    plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02734128(plVar8,uVar6,0);
    lVar13 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02f3bea8;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02f3bea8:
    plVar9 = (long *)(*(code *)*puVar7)();
    puVar5 = PTR_DAT_03d22a90;
    puVar3 = PTR_DAT_03cbed20;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f3c130 with catch @ 02f3c254 */
      FUN_01ab6c3c();
    }
    do {
      lVar14 = *plVar9;
      lVar13 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02f3bf18;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar9,lVar13,0);
LAB_02f3bf18:
      uVar12 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      puVar2 = PTR_DAT_03cbed08;
      if ((uVar12 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01a89d6c(plVar9,*(undefined8 *)PTR_DAT_03cbed08);
        if (plVar9 == (long *)0x0) goto LAB_02f3c064;
        lVar13 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 == 0) goto LAB_02f3c03c;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_02f3c024;
      }
      lVar14 = *plVar9;
      lVar13 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_02f3bf78;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar9,lVar13,1);
LAB_02f3bf78:
      plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f3c20c with catch @ 02f3c24c */
        FUN_01ab6c3c();
      }
      lVar13 = *plVar10;
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(lVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* catch() { ... } // from try @ 02f3c210 with catch @ 02f3c244 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f3c15c with catch @ 02f3c248 */
        FUN_01ab6ee0(plVar10);
      }
      uVar11 = (**(code **)(lVar13 + 0x178))(plVar10,*(undefined8 *)(lVar13 + 0x180));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f3c074 with catch @ 02f3c250 */
        FUN_01ab6c3c(uVar11,uVar11);
      }
      (**(code **)(*plVar8 + 0x318))(plVar8,uVar11,plVar10,*(undefined8 *)(*plVar8 + 800));
    } while( true );
  }
  goto LAB_02f3c2c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar15 = piVar15 + 4;
    if (uVar12 == 0) break;
LAB_02f3c024:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02f3c058;
    }
  }
LAB_02f3c03c:
  puVar7 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_02f3c058:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
LAB_02f3c064:
  if ((plVar8 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0)),
     plVar9 != (long *)0x0)) {
    lVar14 = *plVar9;
    lVar13 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_02f3c0e4;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar9,lVar13,1);
LAB_02f3c0e4:
    uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,uVar6);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
    if (plVar8 != (long *)0x0) {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02f3c174;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar8,lVar13,0);
LAB_02f3c174:
      (*(code *)*puVar7)(plVar8,uVar11,0,puVar7[1]);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_027e0bd8(uVar16,&stack0x0000000c,0);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x30),uVar11);
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      puVar4 = PTR_DAT_03cfe690;
      if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412ab10 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cfe690);
        DAT_0412ab10 = '\x01';
      }
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *(long *)puVar4;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar16,0);
      }
      return;
    }
  }
LAB_02f3c2c0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


