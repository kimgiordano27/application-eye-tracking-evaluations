/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.SVGStyleSheetUtils$$Tokenize
ENTRY_POINT: 02f3be10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f3c070) */
/* WARNING: Removing unreachable block (ram,0x02f3c260) */
/* WARNING: Removing unreachable block (ram,0x02f3c258) */

void ToolBuddy_ThirdParty_VectorGraphics_SVGStyleSheetUtils__Tokenize(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *in_x10;
  int *piVar14;
  long unaff_x19;
  undefined8 uVar15;
  long *unaff_x21;
  long *unaff_x24;
  char cStack000000000000000c;
  
  uVar5 = (**(code **)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138))();
  plVar6 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
  FUN_02734128(plVar6,uVar5,0);
                    /* try { // try from 02f3be54 to 0303bfb7 has its CatchHandler @ 02f3be54
                       catch() { ... } // from try @ 02f3be54 with catch @ 02f3be54
                       catch() { ... } // from try @ 02f3c19c with catch @ 02f3be54
                       catch() { ... } // from try @ 02f3c224 with catch @ 02f3be54
                       catch() { ... } // from try @ 02f3c2b8 with catch @ 02f3be54 */
  lVar11 = *unaff_x21;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cc6e60) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_02f3bea8;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02f3bea8:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar4 = PTR_DAT_03d22a90;
  puVar3 = PTR_DAT_03cbed20;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar12 = *plVar8;
    lVar11 = *(long *)puVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02f3bf18;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar8,lVar11,0);
LAB_02f3bf18:
    uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar2 = PTR_DAT_03cbed08;
    if ((uVar13 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01a89d6c(plVar8,*(undefined8 *)PTR_DAT_03cbed08);
      if (plVar8 == (long *)0x0) goto LAB_02f3c064;
      lVar11 = *plVar8;
                    /* try { // try from 02f3c00c to 0303c017 has its CatchHandler @ 02f3c26c */
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_02f3c03c;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar8;
    lVar11 = *(long *)puVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02f3bf78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar8,lVar11,1);
LAB_02f3bf78:
    plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *plVar9;
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar9);
    }
                    /* try { // try from 02f3bfb8 to 0303bfc7 has its CatchHandler @ 02f3c260 */
    uVar10 = (**(code **)(lVar11 + 0x178))(plVar9,*(undefined8 *)(lVar11 + 0x180));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar10,uVar10);
    }
                    /* try { // try from 02f3bfe0 to 0303bfff has its CatchHandler @ 02f3c264 */
    (**(code **)(*plVar6 + 0x318))(plVar6,uVar10,plVar9,*(undefined8 *)(*plVar6 + 800));
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
                    /* try { // try from 02f3c028 to 0303c073 has its CatchHandler @ 02f3c270 */
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02f3c058;
    }
  }
LAB_02f3c03c:
  puVar7 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_02f3c058:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_02f3c064:
                    /* try { // try from 02f3c074 to 0303c087 has its CatchHandler @ 02f3c250 */
  if ((plVar6 != (long *)0x0) &&
     (plVar8 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0)),
     plVar8 != (long *)0x0)) {
                    /* try { // try from 02f3c090 to 0303c09b has its CatchHandler @ 02f3c268 */
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02f3c0e4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar8,*unaff_x24,1);
LAB_02f3c0e4:
    uVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar10 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,uVar5);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02f3c174;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x24,0);
LAB_02f3c174:
      (*(code *)*puVar7)(plVar6,uVar10,0,puVar7[1]);
      uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_027e0bd8(uVar15,&stack0x0000000c,0);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x30),uVar10);
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      puVar3 = PTR_DAT_03cfe690;
      if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412ab10 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cfe690);
        DAT_0412ab10 = '\x01';
      }
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar3;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x20);
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


