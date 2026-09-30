/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatFormatHandling
ENTRY_POINT: 058b8834
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__get_FloatFormatHandling(void)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  uint uVar17;
  uint uVar18;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  uint uVar19;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  do {
    puVar5 = PTR_DAT_0727aa68;
    uVar3 = *(ushort *)(unaff_x21 + unaff_x23 * 2);
    if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
      iVar4 = *(int *)(unaff_x29 + -0x10) << 1;
      uVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar4);
      puVar6 = PTR_DAT_072970b0;
      auVar21 = FUN_049b37a4(uVar10,*(undefined8 *)PTR_DAT_072970b0);
      FUN_049b3278(unaff_x29 + -0x18,auVar21._0_8_,auVar21._8_8_,*(undefined8 *)PTR_DAT_072970a0);
      uVar10 = *(undefined8 *)puVar5;
      *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar21;
      uVar10 = FUN_032d5d3c(uVar10,iVar4);
      auVar21 = FUN_049b37a4(uVar10,*(undefined8 *)puVar6);
      FUN_049b3278(unaff_x29 + -0x30,auVar21._0_8_,auVar21._8_8_,*(undefined8 *)PTR_DAT_072970a0);
      *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar21;
      unaff_x21 = *(long *)(unaff_x29 + -0x50);
      unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
      unaff_x24 = *(long *)(unaff_x29 + -0x40);
      unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
    }
    uVar18 = (int)unaff_x23 * 2;
    uVar16 = (uint)unaff_x19;
    uVar19 = (uint)unaff_x27;
    if (uVar3 == 0x2a) {
LAB_058b8984:
      if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) break;
      uVar17 = unaff_w22 + 1;
      *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar18;
LAB_058b89a0:
      if (*(uint *)(unaff_x29 + -0x10) <= uVar17) break;
      unaff_w22 = uVar17 + 1;
      *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar17 * 4) = uVar18 | 1;
LAB_058b89c0:
      unaff_x23 = unaff_x23 + 1;
      uVar18 = unaff_w22;
      if (unaff_x23 == unaff_x24) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) break;
        uVar18 = unaff_w22 + 1;
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
             *(undefined4 *)(unaff_x29 + -0x5c);
      }
      unaff_w22 = uVar18;
      if (unaff_x23 == unaff_x24) goto LAB_058b89f4;
    }
    else {
      if ((uVar3 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
        if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
          uVar17 = *(uint *)(unaff_x29 + -0x68);
          do {
            if (unaff_w25 == uVar17) goto LAB_058b8c50;
            if (*(short *)(unaff_x28 + (long)(int)uVar17 * 2) == 0x2e) {
              bVar7 = true;
              goto LAB_058b8978;
            }
            uVar17 = uVar17 + 1;
          } while (uVar16 != uVar17);
        }
        bVar7 = false;
LAB_058b8978:
        uVar17 = unaff_w22;
        if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
        goto LAB_058b89a0;
      }
      if ((uVar3 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
        if ((*(uint *)(unaff_x29 + -0x78) & 1) != 0) goto LAB_058b89c0;
LAB_058b8a60:
        if (unaff_w22 < *(uint *)(unaff_x29 + -0x10)) {
          *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar18 + 2;
          unaff_w22 = unaff_w22 + 1;
          goto LAB_058b89f4;
        }
        break;
      }
      if ((uVar3 == 0x22) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
        if ((int)uVar16 <= *(int *)(unaff_x29 + -0x74)) goto LAB_058b89c0;
        if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
      }
      else if (uVar3 == 0x5c) {
        uVar18 = (int)unaff_x23 + 1;
        if (uVar18 != uVar19) {
          if (uVar18 < uVar19) {
            uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar18 * 2);
            uVar18 = uVar18 * 2;
            goto LAB_058b8a90;
          }
          break;
        }
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) break;
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
             *(undefined4 *)(unaff_x29 + -0x5c);
LAB_058b8ac0:
        unaff_w22 = unaff_w22 + 1;
      }
      else {
LAB_058b8a90:
        if (*(int *)(unaff_x29 + -0x74) < (int)uVar16) {
          if (uVar3 == 0x3f) {
LAB_058b8aa8:
            if (unaff_w22 < *(uint *)(unaff_x29 + -0x10)) {
              *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar18 + 2;
              goto LAB_058b8ac0;
            }
            break;
          }
          if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
            if ((uint)uVar3 == (*(uint *)(unaff_x29 + -0x94) & 0xffff)) goto LAB_058b8aa8;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            sVar8 = FUN_058a4e4c(uVar3,0);
            sVar9 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
            if (sVar8 == sVar9) goto LAB_058b8aa8;
          }
        }
      }
LAB_058b89f4:
      do {
        uVar11 = *(ulong *)(unaff_x29 + -0x88);
        uVar18 = *(uint *)(unaff_x29 + -0x68);
        uVar13 = *(long *)(unaff_x29 + -0x70) + 1;
        uVar17 = uVar18;
        if ((long)uVar11 <= (long)uVar13) goto LAB_058b87e8;
        if ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)) goto LAB_058b87e8;
        uVar17 = *(uint *)(unaff_x29 + -0x28);
        lVar15 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
        uVar13 = uVar13 & 0xffffffff;
        do {
          uVar12 = (uint)uVar13;
          if ((int)uVar12 < (int)uVar17) {
            if (uVar12 <= uVar17) {
              uVar12 = uVar17;
            }
            do {
              uVar14 = (uint)uVar13;
              if ((uVar12 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar15))
              goto LAB_058b8c50;
              if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar15 * 4) <=
                  *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4)) goto LAB_058b8b78;
              uVar13 = (ulong)(uVar14 + 1);
            } while (uVar17 != uVar14 + 1);
            uVar13 = (ulong)uVar17;
          }
LAB_058b8b78:
          lVar15 = lVar15 + 1;
        } while (lVar15 != (int)unaff_w22);
        *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
        while( true ) {
          uVar13 = (ulong)(int)uVar13;
          uVar1 = uVar13;
          if ((long)uVar13 <= (long)uVar11) {
            uVar1 = uVar11;
          }
          *(ulong *)(unaff_x29 + -0x80) = uVar1;
          uVar17 = uVar18;
LAB_058b87e8:
          if (uVar13 != *(ulong *)(unaff_x29 + -0x80)) break;
          if (unaff_w22 == 0) {
            lVar15 = *(long *)(unaff_x29 + -0xa0);
            bVar7 = false;
            goto LAB_058b8be8;
          }
          uVar20 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
          *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
          *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
          *(undefined8 *)(unaff_x29 + -0x28) = uVar20;
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
          if ((int)uVar16 <= *(int *)(unaff_x29 + -0x74)) {
            uVar12 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
            lVar15 = *(long *)(unaff_x29 + -0xa0);
            if (unaff_w22 - 1 < uVar12) {
              bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                      *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
              if (*(long *)(lVar15 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return bVar7;
            }
            goto LAB_058b8c50;
          }
          if ((int)uVar17 < (int)uVar16) {
            if (uVar16 <= uVar17) goto LAB_058b8c50;
            uVar14 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar17 * 2);
            uVar18 = uVar17 + 1;
          }
          else {
            uVar12 = *(uint *)(unaff_x29 + -0x28);
            if (uVar12 <= unaff_w22 - 1) goto LAB_058b8c50;
            uVar14 = *(uint *)(unaff_x29 + -0x94);
            uVar18 = uVar17;
            if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
          }
          *(uint *)(unaff_x29 + -0x94) = uVar14;
          bVar7 = (uVar14 & 0xffff) == 0x2e;
          *(uint *)(unaff_x29 + -0x74) = uVar17;
          uVar13 = 0;
          unaff_w25 = uVar18;
          if (uVar18 <= uVar16) {
            unaff_w25 = uVar16;
          }
          uVar11 = (ulong)(int)unaff_w22;
          unaff_w22 = 0;
          *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar16 <= (int)uVar17);
          *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar16 <= (int)uVar17);
          *(uint *)(unaff_x29 + -0x60) =
               (uint)((int)uVar16 <= (int)uVar18) | ((int)uVar17 < (int)uVar16 && bVar7) ^ 1;
          *(undefined8 *)(unaff_x29 + -0x90) = 0;
          *(ulong *)(unaff_x29 + -0x88) = uVar11;
          *(uint *)(unaff_x29 + -0x68) = uVar18;
        }
        if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar13) goto LAB_058b8c50;
        *(ulong *)(unaff_x29 + -0x70) = uVar13;
        iVar2 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar13 * 4);
        iVar4 = iVar2 + 2;
        if (-1 < iVar2 + 1) {
          iVar4 = iVar2 + 1;
        }
      } while ((int)uVar19 <= iVar4 >> 1);
      unaff_x23 = (long)(iVar4 >> 1);
    }
  } while ((uint)unaff_x23 < uVar19);
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


