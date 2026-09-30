/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MaxDepth
ENTRY_POINT: 058b8a5c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__get_MaxDepth(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint in_w8;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  uint uVar18;
  long unaff_x24;
  uint unaff_w25;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
code_r0x058b8a5c:
  if (!(bool)in_ZR) goto LAB_058b89f4;
LAB_058b8a60:
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) {
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = in_w8 + 2;
  unaff_w22 = unaff_w22 + 1;
LAB_058b89f4:
  do {
    uVar11 = *(ulong *)(unaff_x29 + -0x88);
    uVar18 = *(uint *)(unaff_x29 + -0x68);
    uVar14 = *(long *)(unaff_x29 + -0x70) + 1;
    uVar17 = uVar18;
    if ((long)uVar11 <= (long)uVar14) goto LAB_058b87e8;
    if ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)) goto LAB_058b87e8;
    uVar17 = *(uint *)(unaff_x29 + -0x28);
    lVar16 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar14 = uVar14 & 0xffffffff;
    do {
      uVar12 = (uint)uVar14;
      if ((int)uVar12 < (int)uVar17) {
        if (uVar12 <= uVar17) {
          uVar12 = uVar17;
        }
        do {
          uVar13 = (uint)uVar14;
          if ((uVar12 == uVar13) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar16))
          goto LAB_058b8c50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar16 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar13 * 4)) goto LAB_058b8b78;
          uVar14 = (ulong)(uVar13 + 1);
        } while (uVar17 != uVar13 + 1);
        uVar14 = (ulong)uVar17;
      }
LAB_058b8b78:
      lVar16 = lVar16 + 1;
    } while (lVar16 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
    while( true ) {
      uVar14 = (ulong)(int)uVar14;
      uVar2 = uVar14;
      if ((long)uVar14 <= (long)uVar11) {
        uVar2 = uVar11;
      }
      *(ulong *)(unaff_x29 + -0x80) = uVar2;
      uVar17 = uVar18;
LAB_058b87e8:
      if (uVar14 != *(ulong *)(unaff_x29 + -0x80)) break;
      if (unaff_w22 == 0) {
        lVar16 = *(long *)(unaff_x29 + -0xa0);
        bVar7 = false;
        goto LAB_058b8be8;
      }
      uVar19 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
      uVar12 = (uint)unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar19;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
      if ((int)uVar12 <= *(int *)(unaff_x29 + -0x74)) {
        uVar13 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
        lVar16 = *(long *)(unaff_x29 + -0xa0);
        if (unaff_w22 - 1 < uVar13) {
          bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
          if (*(long *)(lVar16 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return bVar7;
        }
        goto LAB_058b8c50;
      }
      if ((int)uVar17 < (int)uVar12) {
        if (uVar12 <= uVar17) goto LAB_058b8c50;
        uVar15 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar17 * 2);
        uVar18 = uVar17 + 1;
      }
      else {
        uVar13 = *(uint *)(unaff_x29 + -0x28);
        if (uVar13 <= unaff_w22 - 1) goto LAB_058b8c50;
        uVar15 = *(uint *)(unaff_x29 + -0x94);
        uVar18 = uVar17;
        if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
            *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
      }
      *(uint *)(unaff_x29 + -0x94) = uVar15;
      bVar7 = (uVar15 & 0xffff) == 0x2e;
      *(uint *)(unaff_x29 + -0x74) = uVar17;
      uVar14 = 0;
      unaff_w25 = uVar18;
      if (uVar18 <= uVar12) {
        unaff_w25 = uVar12;
      }
      uVar11 = (ulong)(int)unaff_w22;
      unaff_w22 = 0;
      *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar12 <= (int)uVar17);
      *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar12 <= (int)uVar17);
      *(uint *)(unaff_x29 + -0x60) =
           (uint)((int)uVar12 <= (int)uVar18) | ((int)uVar17 < (int)uVar12 && bVar7) ^ 1;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(ulong *)(unaff_x29 + -0x88) = uVar11;
      *(uint *)(unaff_x29 + -0x68) = uVar18;
    }
    if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar14) goto LAB_058b8c50;
    *(ulong *)(unaff_x29 + -0x70) = uVar14;
    iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar14 * 4);
    iVar1 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    if (iVar1 >> 1 < (int)unaff_x27) {
      lVar16 = (long)(iVar1 >> 1);
      do {
        puVar5 = PTR_DAT_0727aa68;
        uVar18 = (uint)lVar16;
        if ((uint)unaff_x27 <= uVar18) goto LAB_058b8c50;
        uVar4 = *(ushort *)(unaff_x21 + lVar16 * 2);
        if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
          iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
          uVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
          puVar6 = PTR_DAT_072970b0;
          auVar20 = FUN_049b37a4(uVar10,*(undefined8 *)PTR_DAT_072970b0);
          FUN_049b3278(unaff_x29 + -0x18,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_072970a0
                      );
          uVar10 = *(undefined8 *)puVar5;
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar20;
          uVar10 = FUN_032d5d3c(uVar10,iVar1);
          auVar20 = FUN_049b37a4(uVar10,*(undefined8 *)puVar6);
          FUN_049b3278(unaff_x29 + -0x30,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_072970a0
                      );
          *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar20;
          unaff_x21 = *(long *)(unaff_x29 + -0x50);
          unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
          unaff_x24 = *(long *)(unaff_x29 + -0x40);
          unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
        }
        in_w8 = uVar18 << 1;
        if (uVar4 == 0x2a) {
LAB_058b8984:
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
          uVar18 = unaff_w22 + 1;
          *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = in_w8;
LAB_058b89a0:
          if (*(uint *)(unaff_x29 + -0x10) <= uVar18) goto LAB_058b8c50;
          unaff_w22 = uVar18 + 1;
          *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar18 * 4) = in_w8 | 1;
        }
        else {
          uVar17 = (uint)unaff_x19;
          if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
            if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
              uVar18 = *(uint *)(unaff_x29 + -0x68);
              do {
                if (unaff_w25 == uVar18) goto LAB_058b8c50;
                if (*(short *)(unaff_x28 + (long)(int)uVar18 * 2) == 0x2e) {
                  bVar7 = true;
                  goto LAB_058b8978;
                }
                uVar18 = uVar18 + 1;
              } while (uVar17 != uVar18);
            }
            bVar7 = false;
LAB_058b8978:
            uVar18 = unaff_w22;
            if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
            goto LAB_058b89a0;
          }
          if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
            if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) goto LAB_058b8a60;
          }
          else {
            if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
              if (uVar4 == 0x5c) {
                uVar18 = uVar18 + 1;
                if (uVar18 != (uint)unaff_x27) {
                  if (uVar18 < (uint)unaff_x27) {
                    uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar18 * 2);
                    in_w8 = uVar18 * 2;
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
                if ((int)uVar17 <= *(int *)(unaff_x29 + -0x74)) break;
                if (uVar4 != 0x3f) {
                  if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                    if ((uint)uVar4 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    sVar8 = FUN_058a4e4c(uVar4,0);
                    sVar9 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
                    if (sVar8 != sVar9) break;
                  }
                }
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = in_w8 + 2;
              }
              unaff_w22 = unaff_w22 + 1;
              break;
            }
            if (*(int *)(unaff_x29 + -0x74) < (int)uVar17) {
              in_ZR = (*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e;
              goto code_r0x058b8a5c;
            }
          }
        }
        lVar16 = lVar16 + 1;
        if (lVar16 == unaff_x24) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
          *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
               *(undefined4 *)(unaff_x29 + -0x5c);
          unaff_w22 = unaff_w22 + 1;
        }
      } while (lVar16 != unaff_x24);
    }
  } while( true );
}


