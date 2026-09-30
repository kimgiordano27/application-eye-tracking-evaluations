/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 058b8b28
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


bool Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent
               (undefined8 param_1,uint param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint in_w9;
  uint uVar13;
  uint uVar14;
  uint in_w10;
  long lVar15;
  ulong in_x15;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x24;
  uint unaff_w25;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
code_r0x058b8b28:
  lVar15 = (long)(int)param_1;
  uVar12 = in_x15 & 0xffffffff;
  do {
    uVar10 = (uint)uVar12;
    if ((int)uVar10 < (int)in_w9) {
      if (uVar10 <= in_w9) {
        uVar10 = in_w9;
      }
      do {
        uVar11 = (uint)uVar12;
        if ((uVar10 == uVar11) || (in_w10 <= (uint)lVar15)) goto LAB_058b8c50;
        if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar15 * 4) <=
            *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar11 * 4)) goto LAB_058b8b78;
        uVar12 = (ulong)(uVar11 + 1);
      } while (in_w9 != uVar11 + 1);
      uVar12 = (ulong)in_w9;
    }
LAB_058b8b78:
    lVar15 = lVar15 + 1;
  } while (lVar15 != (int)unaff_w22);
  *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
  do {
    in_x15 = (ulong)(int)uVar12;
    uVar12 = in_x15;
    if ((long)in_x15 <= (long)param_3) {
      uVar12 = param_3;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar12;
    uVar10 = param_2;
    while (in_x15 != *(ulong *)(unaff_x29 + -0x80)) {
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)in_x15) goto LAB_058b8c50;
      *(ulong *)(unaff_x29 + -0x70) = in_x15;
      iVar2 = *(int *)(*(long *)(unaff_x29 + -0x30) + in_x15 * 4);
      iVar1 = iVar2 + 2;
      if (-1 < iVar2 + 1) {
        iVar1 = iVar2 + 1;
      }
      if (iVar1 >> 1 < (int)unaff_x27) {
        lVar15 = (long)(iVar1 >> 1);
        do {
          puVar4 = PTR_DAT_0727aa68;
          uVar10 = (uint)lVar15;
          if ((uint)unaff_x27 <= uVar10) goto LAB_058b8c50;
          uVar3 = *(ushort *)(unaff_x21 + lVar15 * 2);
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
            uVar9 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,iVar1);
            puVar5 = PTR_DAT_072970b0;
            auVar17 = FUN_049b37a4(uVar9,*(undefined8 *)PTR_DAT_072970b0);
            FUN_049b3278(unaff_x29 + -0x18,auVar17._0_8_,auVar17._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            uVar9 = *(undefined8 *)puVar4;
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar17;
            uVar9 = FUN_032d5d3c(uVar9,iVar1);
            auVar17 = FUN_049b37a4(uVar9,*(undefined8 *)puVar5);
            FUN_049b3278(unaff_x29 + -0x30,auVar17._0_8_,auVar17._8_8_,
                         *(undefined8 *)PTR_DAT_072970a0);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar17;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
          uVar11 = uVar10 * 2;
          if (uVar3 == 0x2a) {
LAB_058b8984:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            uVar10 = unaff_w22 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11;
LAB_058b89a0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar10) goto LAB_058b8c50;
            unaff_w22 = uVar10 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar10 * 4) = uVar11 | 1;
          }
          else {
            uVar13 = (uint)unaff_x19;
            if ((uVar3 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar10 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (unaff_w25 == uVar10) goto LAB_058b8c50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar10 * 2) == 0x2e) {
                    bVar6 = true;
                    goto LAB_058b8978;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar13 != uVar10);
              }
              bVar6 = false;
LAB_058b8978:
              uVar10 = unaff_w22;
              if (bVar6 || *(int *)(unaff_x29 + -100) != 0) goto LAB_058b8984;
              goto LAB_058b89a0;
            }
            if ((uVar3 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_058b8a60:
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11 + 2;
                unaff_w22 = unaff_w22 + 1;
                break;
              }
            }
            else {
              if ((uVar3 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar3 == 0x5c) {
                  uVar10 = uVar10 + 1;
                  if (uVar10 != (uint)unaff_x27) {
                    if (uVar10 < (uint)unaff_x27) {
                      uVar3 = *(ushort *)(unaff_x21 + (long)(int)uVar10 * 2);
                      uVar11 = uVar10 * 2;
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
                  if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) break;
                  if (uVar3 != 0x3f) {
                    if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                      if ((uint)uVar3 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      sVar7 = FUN_058a4e4c(uVar3,0);
                      sVar8 = FUN_058a4e4c(*(undefined4 *)(unaff_x29 + -0x94),0);
                      if (sVar7 != sVar8) break;
                    }
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar11 + 2;
                }
                unaff_w22 = unaff_w22 + 1;
                break;
              }
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar13) {
                if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_058b8a60;
                break;
              }
            }
          }
          lVar15 = lVar15 + 1;
          if (lVar15 == unaff_x24) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_058b8c50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            unaff_w22 = unaff_w22 + 1;
          }
        } while (lVar15 != unaff_x24);
      }
      param_3 = *(ulong *)(unaff_x29 + -0x88);
      uVar10 = *(uint *)(unaff_x29 + -0x68);
      in_x15 = *(long *)(unaff_x29 + -0x70) + 1;
      if (((long)in_x15 < (long)param_3) &&
         ((int)*(undefined8 *)(unaff_x29 + -0x90) < (int)unaff_w22)) {
        param_1 = *(undefined8 *)(unaff_x29 + -0x90);
        in_w9 = *(uint *)(unaff_x29 + -0x28);
        in_w10 = *(uint *)(unaff_x29 + -0x10);
        param_2 = uVar10;
        goto code_r0x058b8b28;
      }
    }
    if (unaff_w22 == 0) {
      lVar15 = *(long *)(unaff_x29 + -0xa0);
      bVar6 = false;
      goto LAB_058b8be8;
    }
    uVar16 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
    uVar11 = (uint)unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar16;
    *(undefined8 *)(unaff_x29 + -0x30) = uVar9;
    if ((int)uVar11 <= *(int *)(unaff_x29 + -0x74)) {
      uVar13 = *(uint *)(unaff_x29 + -0x28);
LAB_058b8bbc:
      lVar15 = *(long *)(unaff_x29 + -0xa0);
      if (unaff_w22 - 1 < uVar13) {
        bVar6 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                *(int *)(unaff_x29 + -0x5c);
LAB_058b8be8:
        if (*(long *)(lVar15 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return bVar6;
      }
LAB_058b8c50:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if ((int)uVar10 < (int)uVar11) {
      if (uVar11 <= uVar10) goto LAB_058b8c50;
      uVar14 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar10 * 2);
      param_2 = uVar10 + 1;
    }
    else {
      uVar13 = *(uint *)(unaff_x29 + -0x28);
      if (uVar13 <= unaff_w22 - 1) goto LAB_058b8c50;
      uVar14 = *(uint *)(unaff_x29 + -0x94);
      param_2 = uVar10;
      if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
          *(int *)(unaff_x29 + -0x5c)) goto LAB_058b8bbc;
    }
    *(uint *)(unaff_x29 + -0x94) = uVar14;
    bVar6 = (uVar14 & 0xffff) == 0x2e;
    *(uint *)(unaff_x29 + -0x74) = uVar10;
    uVar12 = 0;
    unaff_w25 = param_2;
    if (param_2 <= uVar11) {
      unaff_w25 = uVar11;
    }
    param_3 = (ulong)(int)unaff_w22;
    unaff_w22 = 0;
    *(uint *)(unaff_x29 + -0x78) = (uint)(bVar6 || (int)uVar11 <= (int)uVar10);
    *(uint *)(unaff_x29 + -100) = (uint)(!bVar6 || (int)uVar11 <= (int)uVar10);
    *(uint *)(unaff_x29 + -0x60) =
         (uint)((int)uVar11 <= (int)param_2) | ((int)uVar10 < (int)uVar11 && bVar6) ^ 1;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(ulong *)(unaff_x29 + -0x88) = param_3;
    *(uint *)(unaff_x29 + -0x68) = param_2;
  } while( true );
}


