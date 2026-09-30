/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$EndInvoke
ENTRY_POINT: 033d56cc
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

void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__EndInvoke(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool in_ZR;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *in_x9;
  long *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  double dVar9;
  undefined8 uVar10;
  
  if (in_ZR) {
    param_1 = in_x9;
  }
  iVar5 = 0;
  if (*param_1 != 0) {
    iVar5 = unaff_w22 / *param_1;
  }
  if (unaff_w21 < iVar5) {
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
      uVar6 = FUN_0341a788();
      puVar4 = PTR_DAT_06d1acc8;
      puVar3 = PTR_DAT_06d1aa48;
      puVar2 = PTR_DAT_06d15498;
      do {
        if ((uVar6 & 1) == 0) {
          FUN_0331bb9c(0);
          return;
        }
        lVar7 = FUN_0341a700();
        if (DAT_071bcd0f == '\0') {
          FUN_02f07e70(puVar3);
          FUN_02f07e70(puVar4);
          DAT_071bcd0f = '\x01';
        }
        if ((unaff_x19[0x16] == 0) ||
           (lVar8 = FUN_04bc1074(unaff_x19[0x16],*(int *)(lVar7 + 0x18) >> 0x10,
                                 *(undefined8 *)puVar3), lVar8 == 0)) break;
        uVar6 = FUN_03419690(*(undefined8 *)(lVar8 + 0xd8),*(undefined8 *)(lVar7 + 0x18),0);
        if ((uVar6 & 1) != 0) {
          FUN_03329a54(*(long *)(lVar8 + 0xd0) == lVar7,*(undefined8 *)puVar4,0);
          dVar9 = (double)FUN_0342142c(unaff_x19[0x26],lVar7,0);
          if ((dVar9 < 1.0) ||
             (dVar9 = (double)FUN_0341d8f8(unaff_x19[0x26],0),
             0.5 <= dVar9 - *(double *)(lVar8 + 0x78))) {
            if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar6 = FUN_033e2324(unaff_x19[0x21],lVar8,(int)unaff_x19[9],0);
            if ((uVar6 & 1) != 0) {
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
              lVar7 = *(long *)(unaff_x19[0x1c] + 0x10);
              uVar1 = *(undefined4 *)(*(long *)(unaff_x19[0x21] + 0x20) + 0x50);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              iVar5 = FUN_0331ed68(uVar1,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_0340bb98((float)iVar5,lVar7,0,0);
              if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_033e2554(unaff_x19[0x21],0);
              uVar10 = FUN_0341d8f8(unaff_x19[0x26],0);
              *(undefined8 *)(lVar8 + 0x78) = uVar10;
            }
            if (unaff_x19[0x21] == 0) break;
            FUN_033e25f8(unaff_x19[0x21],0);
          }
        }
        uVar6 = FUN_0341a788();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


