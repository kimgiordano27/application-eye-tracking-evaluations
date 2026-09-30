/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 075233e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07523608) */

void ProximaWebSocketSharp_Net_ChunkedRequestStream__Close(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  int iVar11;
  long in_stack_00000018;
  
  puVar3 = PTR_DAT_08e8cb78;
  puVar2 = PTR_DAT_08e87db0;
  puVar1 = PTR_DAT_08e82e10;
  plVar10 = *(long **)(unaff_x20 + 0x290);
  do {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0752344c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_0752344c:
    uVar8 = (*(code *)*puVar5)();
    if ((uVar8 & 1) == 0) {
      iVar11 = 7;
      iVar4 = 7;
      if (unaff_x19 == (long *)0x0) goto LAB_07523590;
LAB_07523530:
      iVar11 = iVar4;
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_07523568;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_075234a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_075234a8:
    uVar6 = (*(code *)*puVar5)();
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(0,uVar6);
    }
    iVar4 = FUN_052138b8(in_stack_00000018,uVar6,*(undefined8 *)puVar3);
    if (iVar4 < 0) {
      if (*(int *)(*(long *)PTR_DAT_08e73918 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_056f9354(&stack0x00000020,0,*(undefined8 *)PTR_DAT_08eb7f18);
      iVar11 = 6;
      iVar4 = 6;
      if (unaff_x19 != (long *)0x0) goto LAB_07523530;
      goto LAB_07523590;
    }
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_052143ec(in_stack_00000018,iVar4,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07523584;
    }
  }
LAB_07523568:
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_07523584:
  (*(code *)*puVar5)();
LAB_07523590:
  FUN_05085674(&stack0x00000010,*(undefined8 *)PTR_DAT_08e953f0);
  if ((iVar11 == 0) || (iVar11 == 7)) {
    if (*(int *)(*(long *)PTR_DAT_08e73918 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_056f9354(&stack0x00000020,1,*(undefined8 *)PTR_DAT_08eb7f18);
  }
  return;
}


