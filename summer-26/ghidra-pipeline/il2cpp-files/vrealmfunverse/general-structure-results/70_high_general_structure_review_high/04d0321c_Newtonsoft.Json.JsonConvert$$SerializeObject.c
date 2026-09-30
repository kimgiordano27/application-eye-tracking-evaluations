/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 04d0321c
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


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  ulong unaff_x19;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ushort *puVar14;
  ushort *unaff_x25;
  uint uVar15;
  ulong uVar16;
  long unaff_x29;
  undefined1 auVar17 [16];
  undefined8 auStack_10 [2];
  
  FUN_02b3c81c(PTR_DAT_0631a6c0);
  FUN_02b3c81c(PTR_DAT_0632fed8);
  FUN_02b3c81c(PTR_DAT_06329d10);
  FUN_02b3c81c(PTR_DAT_0632fee0);
  FUN_02b3c81c(PTR_DAT_06329588);
  FUN_02b3c81c(PTR_DAT_0632a248);
  FUN_02b3c81c(PTR_DAT_06329590);
  *(undefined1 *)(unaff_x21 + 0x4b1) = 1;
  puVar6 = PTR_DAT_0631a6c0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 **)(unaff_x29 + -0x48) = auStack_10;
  auStack_10[0] = 0;
  uVar9 = 4;
  uVar16 = unaff_x23 & 0xffffffff;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
LAB_04d032b8:
  puVar14 = unaff_x25;
  if ((int)uVar16 != 0) {
    *(undefined8 *)(unaff_x29 + -0x40) = uVar9;
    do {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04cfbd64(puVar14,unaff_x19 | uVar16,*(undefined8 *)(unaff_x29 + -0x28),
                           unaff_x20 + (ulong)unaff_w22,unaff_x29 + -0xc,unaff_x29 + -0x10);
      uVar4 = *(uint *)(unaff_x29 + -0x10);
      **(int **)(unaff_x29 + -0x30) = uVar4 + **(int **)(unaff_x29 + -0x30);
      if ((uVar8 & 1) != 0) break;
      uVar5 = *(uint *)(unaff_x29 + -0xc);
      uVar15 = (uint)uVar16;
      lVar13 = *(long *)PTR_DAT_0632fed8;
      if (uVar15 < uVar5) {
        FUN_04d9bcc4(0);
      }
      if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar13 = *(long *)PTR_DAT_0632fee0;
      if (unaff_w22 < uVar4) {
        FUN_04d9bcc4(0);
      }
      lVar13 = *(long *)(lVar13 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02b76218();
      }
      if (uVar15 == uVar5) {
LAB_04d036c4:
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_04d036dc;
      }
      lVar13 = *(long *)puVar6;
      puVar1 = puVar14 + (int)uVar5;
      uVar3 = *puVar1;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        lVar13 = thunk_FUN_02b9ad44();
      }
      uVar15 = uVar15 - uVar5;
      unaff_w22 = unaff_w22 - uVar4;
      *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + (long)(int)uVar4;
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_04d03484;
      if (uVar15 != 1) {
        uVar5 = uVar15;
        if (uVar15 < 2) {
          uVar5 = 1;
        }
        uVar12 = 1;
        while (uVar5 != uVar12) {
          lVar13 = *(long *)puVar6;
          uVar3 = puVar1[(int)uVar12];
          if (*(int *)(lVar13 + 0xe4) == 0) {
            lVar13 = thunk_FUN_02b9ad44();
          }
          if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) {
            lVar13 = *(long *)PTR_DAT_0632fed8;
            if (uVar15 < uVar12) {
              FUN_04d9bcc4(0);
            }
            goto LAB_04d03414;
          }
          uVar12 = uVar12 + 1;
          if (uVar15 == uVar12) goto LAB_04d03404;
        }
        goto LAB_04d036c4;
      }
LAB_04d03404:
      lVar13 = *(long *)PTR_DAT_0632fed8;
      uVar12 = uVar15;
LAB_04d03414:
      if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      uVar15 = uVar15 - uVar12;
      uVar16 = (ulong)uVar15;
      if (0x55555554 < uVar4 * -0x55555555 + 0x2aaaaaaa) {
        if (uVar15 == 0) break;
        goto LAB_04d0367c;
      }
      puVar14 = puVar1 + (int)uVar12;
      unaff_x19 = 0;
      unaff_x20 = 0;
      if (uVar15 == 0) break;
    } while( true );
  }
  goto LAB_04d0368c;
LAB_04d03484:
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar9 = *(undefined8 *)(unaff_x29 + -0x48);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
  FUN_04d036e0(puVar1,uVar15,uVar9,uVar2,unaff_x29 + -0x14,unaff_x29 + -0x18);
  *(ulong *)(unaff_x29 + -0x50) = (ulong)*(uint *)(unaff_x29 + -0x18);
  if ((*(uint *)(unaff_x29 + -0x18) & 3) != 0) goto LAB_04d0367c;
  lVar13 = *(long *)PTR_DAT_06329588;
  if ((uint)uVar2 < (uint)*(undefined8 *)(unaff_x29 + -0x50)) {
    FUN_04d9bcc4(0);
  }
  if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  auVar17 = FUN_03e88ba4(uVar9,*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)PTR_DAT_06329590);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar16 = FUN_04cfbd64(auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                        unaff_x29 + -0x1c,unaff_x29 + -0x20);
  puVar7 = PTR_DAT_0632fed8;
  if ((uVar16 & 1) == 0) goto LAB_04d0367c;
  uVar4 = *(uint *)(unaff_x29 + -0x20);
  uVar12 = *(uint *)(unaff_x29 + -0x14);
  iVar11 = **(int **)(unaff_x29 + -0x30);
  *(long *)(unaff_x29 + -0x40) = (long)(int)uVar12;
  lVar13 = *(long *)puVar7;
  **(int **)(unaff_x29 + -0x30) = uVar4 + iVar11;
  if (uVar15 < uVar12) {
    FUN_04d9bcc4(0);
  }
  if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  lVar13 = *(long *)PTR_DAT_0632fee0;
  if (unaff_w22 < uVar4) {
    FUN_04d9bcc4(0);
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  *(long *)(unaff_x29 + -0x58) = (long)(int)uVar4;
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  lVar10 = *(long *)(unaff_x29 + -0x40);
  iVar11 = (int)*(long *)(unaff_x29 + -0x58);
  unaff_x20 = 0;
  unaff_x19 = 0;
  uVar15 = uVar15 - (int)lVar10;
  uVar16 = (ulong)uVar15;
  unaff_w22 = unaff_w22 - iVar11;
  uVar9 = *(undefined8 *)(unaff_x29 + -0x50);
  *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + *(long *)(unaff_x29 + -0x58);
  unaff_x25 = puVar1 + lVar10;
  if (0x55555554 < iVar11 * -0x55555555 + 0x2aaaaaaaU) goto code_r0x04d0361c;
  goto LAB_04d032b8;
LAB_04d0367c:
  lVar13 = 0;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
  goto LAB_04d03690;
code_r0x04d0361c:
  if ((int)uVar15 < 1) {
LAB_04d0368c:
    lVar13 = 1;
  }
  else {
    uVar8 = 0;
    do {
      uVar3 = puVar14[lVar10 + (long)(int)uVar5 + uVar8];
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_04d0367c;
      uVar8 = uVar8 + 1;
      lVar13 = 1;
    } while (uVar8 < uVar16);
  }
LAB_04d03690:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04d036dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13);
}


