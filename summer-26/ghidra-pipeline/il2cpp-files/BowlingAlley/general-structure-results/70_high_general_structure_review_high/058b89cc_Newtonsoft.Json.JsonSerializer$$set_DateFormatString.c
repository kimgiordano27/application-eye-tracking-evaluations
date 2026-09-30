/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatString
ENTRY_POINT: 058b89cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__set_DateFormatString(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  uint uVar18;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
code_r0x058b89cc:
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
       *(undefined4 *)(unaff_x29 + -0x5c);
  unaff_w22 = unaff_w22 + 1;
LAB_058b89ec:
  if (unaff_x23 != unaff_x24) goto LAB_058b882c;
LAB_058b89f4:
  do {
    uVar11 = *(ulong *)(unaff_x29 + -0x88);
    uVar18 = *(uint *)(unaff_x29 + -0x68);
    uVar15 = *(long *)(unaff_x29 + -0x70) + 1;
    uVar12 = uVar18;
    if ((long)uVar11 <= (long)uVar15) goto LAB_058b87e8;
    if ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)) goto LAB_058b87e8;
    uVar12 = *(uint *)(unaff_x29 + -0x28);
    lVar17 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar15 = uVar15 & 0xffffffff;
    do {
      uVar13 = (uint)uVar15;
      if ((int)uVar13 < (int)uVar12) {
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        do {
          uVar14 = (uint)uVar15;
          if ((uVar13 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar17))
          goto LAB_058b8c50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar17 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4)) goto LAB_058b8b78;
          uVar15 = (ulong)(uVar14 + 1);
        } while (uVar12 != uVar14 + 1);
        uVar15 = (ulong)uVar12;
      }
LAB_058b8b78:
      lVar17 = lVar17 + 1;
    } while (lVar17 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
    while( true ) {
      uVar15 = (ulong)(int)uVar15;
      uVar2 = uVar15;
      if ((long)uVar15 <= (long)uVar11) {
        uVar2 = uVar11;
      }
      *(ulong *)(unaff_x29 + -0x80) = uVar2;
      uVar12 = uVar18;
LAB_058b87e8:
      if (uVar15 != *(ulong *)(unaff_x29 + -0x80)) break;
      if (unaff_w22 == 0) {
        lVar17 = *(long *)(unaff_x29 + -0xa0);
        bVar7 = false;
        goto LAB_058b8be8;
      }
      uVar19 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
      uVar13 = (uint)unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar19;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
      if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) {
        uVar14 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
        lVar17 = *(long *)(unaff_x29 + -0xa0);
        if (unaff_w22 - 1 < uVar14) {
          bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
          if (*(long *)(lVar17 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return bVar7;
        }
        goto LAB_058b8c50;
      }
      if ((int)uVar12 < (int)uVar13) {
        if (uVar13 <= uVar12) goto LAB_058b8c50;
        uVar16 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar12 * 2);
        uVar18 = uVar12 + 1;
      }
      else {
        uVar14 = *(uint *)(unaff_x29 + -0x28);
        if (uVar14 <= unaff_w22 - 1) goto LAB_058b8c50;
        uVar16 = *(uint *)(unaff_x29 + -0x94);
        uVar18 = uVar12;
        if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
            *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
      }
      *(uint *)(unaff_x29 + -0x94) = uVar16;
      bVar7 = (uVar16 & 0xffff) == 0x2e;
      *(uint *)(unaff_x29 + -0x74) = uVar12;
      uVar15 = 0;
      unaff_w25 = uVar18;
      if (uVar18 <= uVar13) {
        unaff_w25 = uVar13;
      }
      uVar11 = (ulong)(int)unaff_w22;
      unaff_w22 = 0;
      *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar13 <= (int)uVar12);
      *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar13 <= (int)uVar12);
      *(uint *)(unaff_x29 + -0x60) =
           (uint)((int)uVar13 <= (int)uVar18) | ((int)uVar12 < (int)uVar13 && bVar7) ^ 1;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(ulong *)(unaff_x29 + -0x88) = uVar11;
      *(uint *)(unaff_x29 + -0x68) = uVar18;
    }
    if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar15) goto LAB_058b8c50;
    *(ulong *)(unaff_x29 + -0x70) = uVar15;
    iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar15 * 4);
    iVar1 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
  } while ((int)unaff_x27 <= iVar1 >> 1);
  unaff_x23 = (long)(iVar1 >> 1);
LAB_058b882c:
  puVar5 = PTR_DAT_0727aa68;
  uVar18 = (uint)unaff_x23;
  if ((uint)unaff_x27 <= uVar18) goto LAB_058b8c50;
  uVar4 = *(ushort *)(unaff_x21 + unaff_x23 * 2);
  if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
    iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
    uVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
    puVar6 = PTR_DAT_072970b0;
    auVar20 = FUN_049b37a4(uVar10,*(undefined8 *)PTR_DAT_072970b0);
    FUN_049b3278(unaff_x29 + -0x18,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_072970a0);
    uVar10 = *(undefined8 *)puVar5;
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar20;
    uVar10 = FUN_032d5d3c(uVar10,iVar1);
    auVar20 = FUN_049b37a4(uVar10,*(undefined8 *)puVar6);
    FUN_049b3278(unaff_x29 + -0x30,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_072970a0);
    *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar20;
    unaff_x21 = *(long *)(unaff_x29 + -0x50);
    unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
    unaff_x24 = *(long *)(unaff_x29 + -0x40);
    unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
  }
  uVar12 = uVar18 * 2;
  if (uVar4 == 0x2a) goto LAB_058b8984;
  uVar13 = (uint)unaff_x19;
  if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
    if ((*(uint *)(unaff_x29 + -0x60) & 1) != 0) goto LAB_058b8930;
    uVar18 = *(uint *)(unaff_x29 + -0x68);
    goto LAB_058b8910;
  }
  if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
    if ((*(uint *)(unaff_x29 + -0x78) & 1) != 0) goto LAB_058b89c0;
  }
  else {
    if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
      if (uVar4 == 0x5c) {
        uVar18 = uVar18 + 1;
        if (uVar18 != (uint)unaff_x27) {
          if (uVar18 < (uint)unaff_x27) {
            uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar18 * 2);
            uVar12 = uVar18 * 2;
            goto LAB_058b8a90;
          }
          goto LAB_058b8c50;
        }
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
             *(undefined4 *)(unaff_x29 + -0x5c);
      }
      else {
LAB_058b8a90:
        if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) goto LAB_058b89f4;
        if (uVar4 != 0x3f) {
          if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
            if ((uint)uVar4 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) goto LAB_058b89f4;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            sVar8 = FUN_058a4e4c(uVar4,0);
            sVar9 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
            if (sVar8 != sVar9) goto LAB_058b89f4;
          }
        }
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
        *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
      }
      unaff_w22 = unaff_w22 + 1;
      goto LAB_058b89f4;
    }
    if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) goto LAB_058b89c0;
    if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) != 0x2e) goto LAB_058b89f4;
  }
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
  unaff_w22 = unaff_w22 + 1;
  goto LAB_058b89f4;
  while( true ) {
    if (*(short *)(unaff_x28 + (long)(int)uVar18 * 2) == 0x2e) {
      bVar7 = true;
      goto LAB_058b8978;
    }
    uVar18 = uVar18 + 1;
    if (uVar13 == uVar18) break;
LAB_058b8910:
    if (unaff_w25 == uVar18) goto LAB_058b8c50;
  }
LAB_058b8930:
  bVar7 = false;
LAB_058b8978:
  uVar18 = unaff_w22;
  if (bVar7 || *(int *)(unaff_x29 + -100) != 0) {
LAB_058b8984:
    if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
    uVar18 = unaff_w22 + 1;
    *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12;
  }
  if (*(uint *)(unaff_x29 + -0x10) <= uVar18) goto LAB_058b8c50;
  unaff_w22 = uVar18 + 1;
  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar18 * 4) = uVar12 | 1;
LAB_058b89c0:
  unaff_x23 = unaff_x23 + 1;
  if (unaff_x23 == unaff_x24) goto code_r0x058b89cc;
  goto LAB_058b89ec;
}


