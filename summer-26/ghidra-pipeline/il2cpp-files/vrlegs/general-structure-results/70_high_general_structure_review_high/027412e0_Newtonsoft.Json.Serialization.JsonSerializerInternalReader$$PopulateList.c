/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 027412e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ushort *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  ushort *unaff_x23;
  uint uVar11;
  long unaff_x25;
  uint unaff_w26;
  long *unaff_x28;
  long unaff_x29;
  undefined1 auVar12 [16];
  
  do {
    uVar6 = FUN_0200257c(param_2,unaff_w26,*(undefined8 *)(param_1 + 0x38));
    lVar10 = *(long *)(unaff_x21 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar6;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      FUN_01a46ff8(lVar10);
    }
    if (unaff_w19 == 0) {
LAB_0274169c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar3 = *unaff_x23;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 02741324 to 0284132f has its CatchHandler @ 02740bdc */
                    /* try { // try from 02741330 to 02841337 has its CatchHandler @ 02741338 */
    if ((uVar3 < 0x21) && ((unaff_x25 << ((ulong)uVar3 & 0x3f) & unaff_x22) != 0)) {
                    /* catch() { ... } // from try @ 02741204 with catch @ 02741338
                       catch() { ... } // from try @ 027412bc with catch @ 02741338
                       catch() { ... } // from try @ 02741330 with catch @ 02741338 */
      if (unaff_w19 != 1) {
        uVar11 = 1;
        do {
          if (unaff_w19 == uVar11) goto LAB_0274169c;
          uVar3 = unaff_x23[(int)uVar11];
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if ((0x20 < uVar3) || ((unaff_x25 << ((ulong)uVar3 & 0x3f) & unaff_x22) == 0)) {
            lVar10 = *(long *)PTR_DAT_03cf75e0;
            if (unaff_w19 < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_027916b4(0);
            }
            goto LAB_02741390;
          }
          uVar11 = uVar11 + 1;
        } while (unaff_w19 != uVar11);
      }
      lVar10 = *(long *)PTR_DAT_03cf75e0;
      uVar11 = unaff_w19;
LAB_02741390:
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      puVar8 = (ushort *)
               FUN_0200257c(unaff_x23,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8(*(long *)(lVar10 + 0x20));
      }
      uVar11 = unaff_w19 - uVar11;
      if (0x55555554 < unaff_w26 * -0x55555555 + 0x2aaaaaaa) {
        if (uVar11 == 0) {
          return 1;
        }
        goto LAB_02741668;
      }
      if (uVar11 == 0) {
        return 1;
      }
    }
    else {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x30);
      FUN_027416a0(unaff_x23,unaff_w19,uVar9,uVar6,unaff_x29 + -0xc,unaff_x29 + -0x10);
      uVar11 = *(uint *)(unaff_x29 + -0x10);
      if ((uVar11 & 3) != 0) goto LAB_02741668;
      lVar10 = *(long *)PTR_DAT_03cef220;
      if ((uint)uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_027916b4(0);
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      uVar6 = FUN_0200257c(uVar9,0,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
      lVar10 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar10);
      }
      uVar9 = *(undefined8 *)PTR_DAT_03cef228;
      *(ulong *)(unaff_x29 + -0x38) = (ulong)uVar11;
      auVar12 = FUN_0208fb8c(uVar6,(ulong)uVar11,uVar9);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_02738d34(auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(unaff_x29 + -0x20),unaff_w20,
                           unaff_x29 + -0x14,unaff_x29 + -0x18);
      if ((uVar5 & 1) == 0) goto LAB_02741668;
      uVar1 = *(uint *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
      **(int **)(unaff_x29 + -0x28) = uVar1 + **(int **)(unaff_x29 + -0x28);
      uVar2 = *(uint *)(unaff_x29 + -0xc);
      uVar11 = unaff_w19 - uVar2;
      lVar10 = *(long *)PTR_DAT_03cf75e0;
      if (unaff_w19 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_027916b4(0);
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      puVar8 = (ushort *)
               FUN_0200257c(unaff_x23,uVar2,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      lVar10 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar10);
      }
      bVar4 = unaff_w20 < uVar1;
      unaff_w20 = unaff_w20 - uVar1;
      lVar10 = *(long *)PTR_DAT_03cf6bb8;
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_027916b4(0);
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      uVar6 = FUN_0200257c(*(undefined8 *)(unaff_x29 + -0x20),uVar1,
                           *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
      lVar10 = *(long *)(lVar10 + 0x20);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar6;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar10);
      }
      if (0x55555554 < uVar1 * -0x55555555 + 0x2aaaaaaa) {
        if ((int)uVar11 < 1) {
          return 1;
        }
        uVar5 = (ulong)uVar11;
        while( true ) {
          uVar3 = *puVar8;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) break;
          puVar8 = puVar8 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return 1;
          }
        }
LAB_02741668:
        **(undefined4 **)(unaff_x29 + -0x28) = 0;
        return 0;
      }
      if (uVar11 == 0) {
        return 1;
      }
      *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x38);
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_02738d34(puVar8,uVar11,*(undefined8 *)(unaff_x29 + -0x20),unaff_w20,unaff_x29 + -4,
                         unaff_x29 + -8);
    unaff_w26 = *(uint *)(unaff_x29 + -8);
    **(int **)(unaff_x29 + -0x28) = unaff_w26 + **(int **)(unaff_x29 + -0x28);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar1 = *(uint *)(unaff_x29 + -4);
    unaff_w19 = uVar11 - uVar1;
    lVar10 = *(long *)PTR_DAT_03cf75e0;
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_027916b4(0);
    }
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    unaff_x23 = (ushort *)FUN_0200257c(puVar8,uVar1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28))
    ;
    lVar10 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      FUN_01a46ff8(lVar10);
    }
    bVar4 = unaff_w20 < unaff_w26;
    unaff_w20 = unaff_w20 - unaff_w26;
    unaff_x21 = *(long *)PTR_DAT_03cf6bb8;
    if (bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_027916b4(0);
    }
    lVar10 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    param_1 = *(long *)(lVar10 + 0xc0);
    param_2 = *(undefined8 *)(unaff_x29 + -0x20);
  } while( true );
}


