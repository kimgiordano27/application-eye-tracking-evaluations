/*
FUNCTION_NAME: Fusion.TextWriterLogStream$$Log
ENTRY_POINT: 0476693c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x047669f0) */
/* WARNING: Removing unreachable block (ram,0x04766a08) */
/* WARNING: Removing unreachable block (ram,0x04766a20) */

void Fusion_TextWriterLogStream__Log(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
code_r0x0476693c:
                    /* try { // try from 04766940 to 0486694f has its CatchHandler @ 04765d1c */
  puVar1 = (undefined8 *)FUN_03d8f370();
  do {
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_0463097c();
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_047668fc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_047668fc:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_047669e4;
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_047669bc;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 == 0) goto code_r0x0476693c;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != *unaff_x22) {
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
      if (uVar3 == 0) goto code_r0x0476693c;
    }
                    /* try { // try from 04766950 to 0486695f has its CatchHandler @ 04766974 */
    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_047669d8;
    }
  }
LAB_047669bc:
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_047669d8:
  (*(code *)*puVar1)();
LAB_047669e4:
  Fusion_SessionProperty__op_Implicit();
  return;
}


