/*
FUNCTION_NAME: Fusion.TextWriterLogStream$$Log
ENTRY_POINT: 047667d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x047669f0) */
/* WARNING: Removing unreachable block (ram,0x04766a08) */
/* WARNING: Removing unreachable block (ram,0x04766a20) */

void Fusion_TextWriterLogStream__Log(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long *unaff_x21;
  
                    /* try { // try from 047667d0 to 048667ff has its CatchHandler @ 04765d1c */
  iVar3 = (*param_1)();
                    /* catch() { ... } // from try @ 04766504 with catch @ 047667d8 */
  if (iVar3 < 1) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0476cb28(0);
    return;
  }
                    /* catch() { ... } // from try @ 04766500 with catch @ 047667dc */
                    /* catch() { ... } // from try @ 047662c4 with catch @ 047667e0 */
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a2d20);
  FUN_070b38f0(uVar4,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_04763314(0,uVar4);
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091d2668) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0476688c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370();
LAB_0476688c:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_091d2670;
  puVar1 = PTR_DAT_091a1508;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_047668fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)puVar1,0);
LAB_047668fc:
    uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_047669e4;
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_047669bc;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04766958;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)puVar2,0);
LAB_04766958:
    lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_0463097c(lVar7,uVar4,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_047669d8;
    }
  }
LAB_047669bc:
  puVar5 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_091a14e0,0);
LAB_047669d8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_047669e4:
  Fusion_SessionProperty__op_Implicit(uVar4);
  return;
}


