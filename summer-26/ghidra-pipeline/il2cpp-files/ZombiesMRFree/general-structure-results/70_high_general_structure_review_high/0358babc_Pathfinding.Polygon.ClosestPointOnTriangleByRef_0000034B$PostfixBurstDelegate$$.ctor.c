/*
FUNCTION_NAME: Pathfinding.Polygon.ClosestPointOnTriangleByRef_0000034B$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0358babc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Pathfinding_Polygon_ClosestPointOnTriangleByRef_0000034B_PostfixBurstDelegate___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x20 + 0xb19) = 1;
  puVar3 = PTR_DAT_06f8a258;
  puVar2 = PTR_DAT_06f77698;
  puVar1 = PTR_DAT_06f6d618;
  if ((**(long **)(*(long *)PTR_DAT_06f72688 + 0xb8) != 0) && (*(long *)(unaff_x19 + 0xf0) != 0)) {
    iVar7 = *(int *)(*(long *)(unaff_x19 + 0xf0) + 0x18) + -1;
    if (-1 < iVar7) {
      uVar8 = *(undefined8 *)(**(long **)(*(long *)PTR_DAT_06f72688 + 0xb8) + 0x90);
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar4 = FUN_068f8810(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
             (lVar5 = FUN_04430018(*(long *)(unaff_x19 + 0xf0),iVar7,*(undefined8 *)puVar2),
             lVar5 == 0)) goto LAB_0358bc4c;
          *(undefined8 *)(lVar5 + 0x58) = uVar8;
          thunk_FUN_03048534((undefined8 *)(lVar5 + 0x58),uVar8);
        }
        if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
           (lVar5 = FUN_04430018(*(long *)(unaff_x19 + 0xf0),iVar7,*(undefined8 *)puVar2),
           lVar5 == 0)) goto LAB_0358bc4c;
        if (*(char *)(lVar5 + 0x60) == '\0') {
          if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_0358bc4c;
          uVar6 = FUN_04430018(*(long *)(unaff_x19 + 0xf0),iVar7,*(undefined8 *)puVar2);
          FUN_0358bc64(uVar6,uVar6);
          FUN_068fa22c();
          if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_0358bc4c;
          FUN_044319c0(*(long *)(unaff_x19 + 0xf0),iVar7,*(undefined8 *)puVar3);
        }
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    puVar2 = PTR_DAT_06f8a268;
    puVar1 = PTR_DAT_06f8a250;
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    if (lVar5 != 0) {
      iVar7 = *(int *)(lVar5 + 0x18) + -1;
      if (iVar7 < 0) {
        return;
      }
      do {
        lVar5 = FUN_04430018(lVar5,iVar7,*(undefined8 *)puVar2);
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0x59) != '\0') {
          if (*(long *)(unaff_x19 + 0xf8) == 0) break;
          uVar8 = FUN_04430018(*(long *)(unaff_x19 + 0xf8),iVar7,*(undefined8 *)puVar2);
          FUN_0358bcd0(uVar8,uVar8);
          FUN_068fa22c();
          if (*(long *)(unaff_x19 + 0xf8) == 0) break;
          FUN_044319c0(*(long *)(unaff_x19 + 0xf8),iVar7,*(undefined8 *)puVar1);
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) {
          return;
        }
        lVar5 = *(long *)(unaff_x19 + 0xf8);
      } while (lVar5 != 0);
    }
  }
LAB_0358bc4c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


