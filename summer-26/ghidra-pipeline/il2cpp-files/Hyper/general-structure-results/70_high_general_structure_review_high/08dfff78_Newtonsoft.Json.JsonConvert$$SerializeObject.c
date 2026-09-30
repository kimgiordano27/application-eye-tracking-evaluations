/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 08dfff78
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e003a8) */

void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar13;
  long *plVar14;
  
  FUN_04947ee4(PTR_DAT_0ac09b90);
  FUN_04947ee4(PTR_DAT_0ac69fd8);
  FUN_04947ee4(PTR_DAT_0ac69fe0);
  FUN_04947ee4(PTR_DAT_0ac409c8);
  FUN_04947ee4(PTR_DAT_0ac09ba8);
  FUN_04947ee4(PTR_DAT_0ac69fe8);
  FUN_04947ee4(PTR_DAT_0ac69f80);
  FUN_04947ee4(PTR_DAT_0ac69f88);
  FUN_04947ee4(PTR_DAT_0ac69ff0);
  FUN_04947ee4(PTR_DAT_0ac69cf0);
  *(undefined1 *)(unaff_x21 + 0xbe0) = 1;
  plVar14 = (long *)(unaff_x19 + 0x18);
  lVar13 = *plVar14;
  thunk_FUN_049547bc();
  plVar6 = (long *)PTR_DAT_0ac69fd8;
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac69f80);
    FUN_06e60594(lVar13,1,*(undefined8 *)PTR_DAT_0ac69fe8);
    thunk_FUN_049547bc();
    *plVar14 = lVar13;
    thunk_FUN_049ee3d8(plVar14,lVar13);
    plVar6 = (long *)PTR_DAT_0ac69fd8;
  }
  PTR_DAT_0ac69fd8 = (undefined *)plVar6;
  if (unaff_x20 == (long *)0x0) {
LAB_08e0009c:
    plVar14 = (long *)thunk_FUN_04983e64();
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar6) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_08e00118;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar14,*plVar6,0);
LAB_08e00118:
      plVar6 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
      puVar4 = PTR_DAT_0ac69ff0;
      puVar3 = PTR_DAT_0ac409c8;
      puVar2 = PTR_DAT_0ac09ba8;
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_08e0019c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar2,0);
LAB_08e0019c:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_08e002cc;
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_08e00278;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_08e00260;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_08e00200;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0);
LAB_08e00200:
        uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar7 = FUN_08c7ed5c(uVar7,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c(uVar7,uVar7);
        }
        FUN_06e60ca4(lVar13,uVar7,*(undefined8 *)puVar4);
      } while( true );
    }
    lVar10 = thunk_FUN_04983e64();
    if (lVar10 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar7 = thunk_FUN_04983f60();
      uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac69ff8);
      uVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac6a000);
      FUN_08cbd67c(uVar7,uVar8,uVar9,0);
      uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac6a008);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,uVar8);
    }
    if (lVar13 == 0) {
LAB_08e00348:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_06e60d80(lVar13,lVar10,*(undefined8 *)PTR_DAT_0ac69f88);
  }
  else {
    lVar10 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0ac098c8 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0ac098c8)) {
      if (lVar10 != *(long *)PTR_DAT_0ac60880) goto LAB_08e0009c;
    }
    else {
      FUN_08c7ed5c();
    }
    if (lVar13 == 0) goto LAB_08e00348;
    FUN_06e60ca4(lVar13);
  }
LAB_08e00310:
  if (0 < *(int *)(lVar13 + 0x18)) {
    FUN_08e00408();
  }
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_08e00260:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_08e002c0;
    }
  }
LAB_08e00278:
  puVar5 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e002c0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_08e002cc:
  if (lVar13 == 0) goto LAB_08e00348;
  goto LAB_08e00310;
}


