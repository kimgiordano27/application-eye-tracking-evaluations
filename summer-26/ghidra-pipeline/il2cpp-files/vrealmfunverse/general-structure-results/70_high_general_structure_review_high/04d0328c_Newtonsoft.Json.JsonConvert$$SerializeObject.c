/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 04d0328c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 in_x9;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  ulong unaff_x19;
  uint uVar11;
  long unaff_x20;
  long lVar12;
  uint unaff_w22;
  ulong unaff_x23;
  ushort *puVar13;
  ushort *unaff_x25;
  uint uVar14;
  ulong uVar15;
  long *unaff_x28;
  long unaff_x29;
  undefined1 auVar16 [16];
  
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = in_x9;
  *(undefined8 *)(param_1 + -0x10) = 0;
  uVar8 = 4;
  uVar15 = unaff_x23 & 0xffffffff;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
LAB_04d032b8:
  puVar13 = unaff_x25;
  if ((int)uVar15 != 0) {
    *(undefined8 *)(unaff_x29 + -0x40) = uVar8;
    do {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_04cfbd64(puVar13,unaff_x19 | uVar15,*(undefined8 *)(unaff_x29 + -0x28),
                           unaff_x20 + (ulong)unaff_w22,unaff_x29 + -0xc,unaff_x29 + -0x10);
      uVar4 = *(uint *)(unaff_x29 + -0x10);
      **(int **)(unaff_x29 + -0x30) = uVar4 + **(int **)(unaff_x29 + -0x30);
      if ((uVar7 & 1) != 0) break;
      uVar5 = *(uint *)(unaff_x29 + -0xc);
      uVar14 = (uint)uVar15;
      lVar12 = *(long *)PTR_DAT_0632fed8;
      if (uVar14 < uVar5) {
        FUN_04d9bcc4(0);
      }
      if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar12 = *(long *)PTR_DAT_0632fee0;
      if (unaff_w22 < uVar4) {
        FUN_04d9bcc4(0);
      }
      lVar12 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02b76218();
      }
      if (uVar14 == uVar5) {
LAB_04d036c4:
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_04d036dc;
      }
      lVar12 = *unaff_x28;
      puVar1 = puVar13 + (int)uVar5;
      uVar3 = *puVar1;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        lVar12 = thunk_FUN_02b9ad44();
      }
      uVar14 = uVar14 - uVar5;
      unaff_w22 = unaff_w22 - uVar4;
      *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + (long)(int)uVar4;
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_04d03484;
      if (uVar14 != 1) {
        uVar5 = uVar14;
        if (uVar14 < 2) {
          uVar5 = 1;
        }
        uVar11 = 1;
        while (uVar5 != uVar11) {
          lVar12 = *unaff_x28;
          uVar3 = puVar1[(int)uVar11];
          if (*(int *)(lVar12 + 0xe4) == 0) {
            lVar12 = thunk_FUN_02b9ad44();
          }
          if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) {
            lVar12 = *(long *)PTR_DAT_0632fed8;
            if (uVar14 < uVar11) {
              FUN_04d9bcc4(0);
            }
            goto LAB_04d03414;
          }
          uVar11 = uVar11 + 1;
          if (uVar14 == uVar11) goto LAB_04d03404;
        }
        goto LAB_04d036c4;
      }
LAB_04d03404:
      lVar12 = *(long *)PTR_DAT_0632fed8;
      uVar11 = uVar14;
LAB_04d03414:
      if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      uVar14 = uVar14 - uVar11;
      uVar15 = (ulong)uVar14;
      if (0x55555554 < uVar4 * -0x55555555 + 0x2aaaaaaa) {
        if (uVar14 == 0) break;
        goto LAB_04d0367c;
      }
      puVar13 = puVar1 + (int)uVar11;
      unaff_x19 = 0;
      unaff_x20 = 0;
      if (uVar14 == 0) break;
    } while( true );
  }
  goto LAB_04d0368c;
LAB_04d03484:
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
  FUN_04d036e0(puVar1,uVar14,uVar8,uVar2,unaff_x29 + -0x14,unaff_x29 + -0x18);
  *(ulong *)(unaff_x29 + -0x50) = (ulong)*(uint *)(unaff_x29 + -0x18);
  if ((*(uint *)(unaff_x29 + -0x18) & 3) != 0) goto LAB_04d0367c;
  lVar12 = *(long *)PTR_DAT_06329588;
  if ((uint)uVar2 < (uint)*(undefined8 *)(unaff_x29 + -0x50)) {
    FUN_04d9bcc4(0);
  }
  if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  auVar16 = FUN_03e88ba4(uVar8,*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)PTR_DAT_06329590);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar15 = FUN_04cfbd64(auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                        unaff_x29 + -0x1c,unaff_x29 + -0x20);
  puVar6 = PTR_DAT_0632fed8;
  if ((uVar15 & 1) == 0) goto LAB_04d0367c;
  uVar4 = *(uint *)(unaff_x29 + -0x20);
  uVar11 = *(uint *)(unaff_x29 + -0x14);
  iVar10 = **(int **)(unaff_x29 + -0x30);
  *(long *)(unaff_x29 + -0x40) = (long)(int)uVar11;
  lVar12 = *(long *)puVar6;
  **(int **)(unaff_x29 + -0x30) = uVar4 + iVar10;
  if (uVar14 < uVar11) {
    FUN_04d9bcc4(0);
  }
  if ((*(ushort *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  lVar12 = *(long *)PTR_DAT_0632fee0;
  if (unaff_w22 < uVar4) {
    FUN_04d9bcc4(0);
  }
  lVar12 = *(long *)(lVar12 + 0x20);
  *(long *)(unaff_x29 + -0x58) = (long)(int)uVar4;
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  lVar9 = *(long *)(unaff_x29 + -0x40);
  iVar10 = (int)*(long *)(unaff_x29 + -0x58);
  unaff_x20 = 0;
  unaff_x19 = 0;
  uVar14 = uVar14 - (int)lVar9;
  uVar15 = (ulong)uVar14;
  unaff_w22 = unaff_w22 - iVar10;
  uVar8 = *(undefined8 *)(unaff_x29 + -0x50);
  *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + *(long *)(unaff_x29 + -0x58);
  unaff_x25 = puVar1 + lVar9;
  if (0x55555554 < iVar10 * -0x55555555 + 0x2aaaaaaaU) goto code_r0x04d0361c;
  goto LAB_04d032b8;
LAB_04d0367c:
  lVar12 = 0;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
  goto LAB_04d03690;
code_r0x04d0361c:
  if ((int)uVar14 < 1) {
LAB_04d0368c:
    lVar12 = 1;
  }
  else {
    uVar7 = 0;
    do {
      uVar3 = puVar13[lVar9 + (long)(int)uVar5 + uVar7];
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_04d0367c;
      uVar7 = uVar7 + 1;
      lVar12 = 1;
    } while (uVar7 < uVar15);
  }
LAB_04d03690:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04d036dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar12);
}


