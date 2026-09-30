/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$Invoke
ENTRY_POINT: 033d5698
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x033d59a4) */
/* WARNING: Removing unreachable block (ram,0x033d58f4) */

void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int in_w8;
  long *unaff_x19;
  double dVar12;
  undefined8 uVar13;
  
  iVar7 = *(int *)((long)unaff_x19 + 0xd4);
  piVar8 = (int *)FUN_033ce32c();
  iVar1 = *piVar8;
  uVar9 = FUN_033cb3f4();
  lVar10 = FUN_033ce32c();
  piVar8 = (int *)(lVar10 + 0xc);
  if ((uVar9 & 1) == 0) {
    piVar8 = (int *)(lVar10 + 4);
  }
  iVar3 = 0;
  if (*piVar8 != 0) {
    iVar3 = iVar1 / *piVar8;
  }
  if (in_w8 - iVar7 < iVar3) {
    return;
  }
  *(int *)((long)unaff_x19 + 0xd4) = (int)unaff_x19[9];
  if (unaff_x19[0xb] != 0) {
    if ((~*(uint *)(unaff_x19[0xb] + 0x14) & 3) == 0) {
      FUN_033d5a84();
    }
    FUN_0331bb10(*(undefined8 *)PTR_DAT_06d1acc0,0);
    if (unaff_x19[0x15] != 0) {
      FUN_033eb0bc(unaff_x19[0x15],0);
      FUN_0341da5c(unaff_x19[0x26],0);
      uVar9 = FUN_0341a788();
      puVar6 = PTR_DAT_06d1acc8;
      puVar5 = PTR_DAT_06d1aa48;
      puVar4 = PTR_DAT_06d15498;
      do {
        if ((uVar9 & 1) == 0) {
          FUN_0331bb9c(0);
          return;
        }
        lVar10 = FUN_0341a700();
        if (DAT_071bcd0f == '\0') {
          FUN_02f07e70(puVar5);
          FUN_02f07e70(puVar6);
          DAT_071bcd0f = '\x01';
        }
        if ((unaff_x19[0x16] == 0) ||
           (lVar11 = FUN_04bc1074(unaff_x19[0x16],*(int *)(lVar10 + 0x18) >> 0x10,
                                  *(undefined8 *)puVar5), lVar11 == 0)) break;
        uVar9 = FUN_03419690(*(undefined8 *)(lVar11 + 0xd8),*(undefined8 *)(lVar10 + 0x18),0);
        if ((uVar9 & 1) != 0) {
          FUN_03329a54(*(long *)(lVar11 + 0xd0) == lVar10,*(undefined8 *)puVar6,0);
          dVar12 = (double)FUN_0342142c(unaff_x19[0x26],lVar10,0);
          if ((dVar12 < 1.0) ||
             (dVar12 = (double)FUN_0341d8f8(unaff_x19[0x26],0),
             0.5 <= dVar12 - *(double *)(lVar11 + 0x78))) {
            if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar9 = FUN_033e2324(unaff_x19[0x21],lVar11,(int)unaff_x19[9],0);
            if ((uVar9 & 1) != 0) {
              FUN_033d6078();
              (**(code **)(*unaff_x19 + 0x298))();
              if (unaff_x19[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar10 = *(long *)(unaff_x19[0x1c] + 0x10);
              uVar2 = *(undefined4 *)(*(long *)(unaff_x19[0x21] + 0x20) + 0x50);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              iVar7 = FUN_0331ed68(uVar2,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_0340bb98((float)iVar7,lVar10,0,0);
              if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_033e2554(unaff_x19[0x21],0);
              uVar13 = FUN_0341d8f8(unaff_x19[0x26],0);
              *(undefined8 *)(lVar11 + 0x78) = uVar13;
            }
            if (unaff_x19[0x21] == 0) break;
            FUN_033e25f8(unaff_x19[0x21],0);
          }
        }
        uVar9 = FUN_0341a788();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


