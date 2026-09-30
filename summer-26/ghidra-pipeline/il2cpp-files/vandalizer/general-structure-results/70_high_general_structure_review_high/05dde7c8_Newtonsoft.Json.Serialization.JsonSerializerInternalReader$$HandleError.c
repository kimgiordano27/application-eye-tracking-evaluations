/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 05dde7c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(long param_1)

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
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 in_x9;
  uint uVar18;
  undefined8 unaff_x19;
  long unaff_x21;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar11 = DAT_014bc498;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x20) = 0;
  *(undefined8 *)(param_1 + -8) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x38) = 0;
  *(undefined8 *)(param_1 + -0x40) = 0;
  *(undefined8 *)(param_1 + -0x28) = 0;
  *(undefined8 *)(param_1 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = in_x9;
                    /* try { // try from 05dde7e4 to 05ede803 has its CatchHandler @ 05dde98c */
  *(undefined8 *)(unaff_x29 + -0x10) = uVar11;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  *(int *)(unaff_x29 + -0x5c) = (int)unaff_x27 << 1;
  uVar19 = 0;
  lVar21 = (long)(int)unaff_x27;
  uVar16 = 1;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
                    /* try { // try from 05dde818 to 05ede823 has its CatchHandler @ 05dde980 */
  *(undefined8 **)(unaff_x29 + -0x30) = &uStack_40;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar11;
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x27;
  *(long *)(unaff_x29 + -0x40) = lVar21;
  *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
  *(long *)(unaff_x29 + -0x50) = unaff_x21;
LAB_05dde828:
  uVar13 = (uint)unaff_x19;
  if ((int)uVar19 < (int)uVar13) {
    if (uVar13 <= uVar19) goto LAB_05dded50;
    uVar18 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar19 * 2);
    uVar10 = uVar19 + 1;
  }
  else {
    uVar17 = *(uint *)(unaff_x29 + -0x28);
    uVar14 = uVar16 - 1;
    if (uVar17 <= uVar14) goto LAB_05dded50;
    uVar18 = *(uint *)(unaff_x29 + -0x94);
    uVar10 = uVar19;
    if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4) ==
        *(int *)(unaff_x29 + -0x5c)) goto LAB_05ddecbc;
  }
  *(uint *)(unaff_x29 + -0x94) = uVar18;
  bVar7 = (uVar18 & 0xffff) == 0x2e;
  *(uint *)(unaff_x29 + -0x74) = uVar19;
  uVar15 = 0;
  uVar17 = uVar10;
  if (uVar10 <= uVar13) {
    uVar17 = uVar13;
  }
  uVar12 = (ulong)(int)uVar16;
  uVar16 = 0;
  *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar13 <= (int)uVar19);
  *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar13 <= (int)uVar19);
  *(uint *)(unaff_x29 + -0x60) =
       (uint)((int)uVar13 <= (int)uVar10) | ((int)uVar19 < (int)uVar13 && bVar7) ^ 1;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(ulong *)(unaff_x29 + -0x88) = uVar12;
  *(uint *)(unaff_x29 + -0x68) = uVar10;
  do {
    uVar15 = (ulong)(int)uVar15;
    uVar2 = uVar15;
    if ((long)uVar15 <= (long)uVar12) {
      uVar2 = uVar12;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    uVar19 = uVar10;
    do {
      if (uVar15 == *(ulong *)(unaff_x29 + -0x80)) {
        if (uVar16 == 0) {
          lVar21 = *(long *)(unaff_x29 + -0xa0);
          bVar7 = false;
          goto LAB_05ddece8;
        }
        uVar22 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar11 = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x29 + -0x28) = uVar22;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar11;
        if (*(int *)(unaff_x29 + -0x74) < (int)unaff_x19) goto LAB_05dde828;
        uVar17 = *(uint *)(unaff_x29 + -0x28);
        uVar14 = uVar16 - 1;
        goto LAB_05ddecbc;
      }
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar15) goto LAB_05dded50;
      *(ulong *)(unaff_x29 + -0x70) = uVar15;
      iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar15 * 4);
      iVar1 = iVar3 + 2;
      if (-1 < iVar3 + 1) {
        iVar1 = iVar3 + 1;
      }
      if (iVar1 >> 1 < (int)unaff_x27) {
        lVar20 = (long)(iVar1 >> 1);
        do {
          puVar5 = PTR_DAT_0759b6a8;
          uVar19 = (uint)lVar20;
          if ((uint)unaff_x27 <= uVar19) goto LAB_05dded50;
          uVar4 = *(ushort *)(unaff_x21 + lVar20 * 2);
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)uVar16) {
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
            uVar11 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b6a8,iVar1);
            puVar6 = PTR_DAT_075a5e78;
            auVar23 = FUN_05048b80(uVar11,*(undefined8 *)PTR_DAT_075a5e78);
            FUN_05048684(unaff_x29 + -0x18,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)PTR_DAT_075a5e50);
            uVar11 = *(undefined8 *)puVar5;
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar23;
            uVar11 = FUN_031f21dc(uVar11,iVar1);
            auVar23 = FUN_05048b80(uVar11,*(undefined8 *)puVar6);
            FUN_05048684(unaff_x29 + -0x30,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)PTR_DAT_075a5e50);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar23;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
            lVar21 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
          uVar13 = uVar19 * 2;
          if (uVar4 == 0x2a) {
LAB_05ddea84:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
            uVar19 = uVar16 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar13;
LAB_05ddeaa0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_05dded50;
            uVar16 = uVar19 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar19 * 4) = uVar13 | 1;
          }
          else {
            uVar14 = (uint)unaff_x19;
            if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar19 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (uVar17 == uVar19) goto LAB_05dded50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar19 * 2) == 0x2e) {
                    bVar7 = true;
                    goto LAB_05ddea78;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar14 != uVar19);
              }
              bVar7 = false;
LAB_05ddea78:
              uVar19 = uVar16;
              if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_05ddea84;
              goto LAB_05ddeaa0;
            }
            if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_05ddeb60:
                if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar13 + 2;
                uVar16 = uVar16 + 1;
                break;
              }
            }
            else {
              if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar4 == 0x5c) {
                  uVar19 = uVar19 + 1;
                  if (uVar19 != (uint)unaff_x27) {
                    if (uVar19 < (uint)unaff_x27) {
                      uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar19 * 2);
                      uVar13 = uVar19 * 2;
                      goto LAB_05ddeb90;
                    }
                    goto LAB_05dded50;
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x5c);
                }
                else {
LAB_05ddeb90:
                  if ((int)uVar14 <= *(int *)(unaff_x29 + -0x74)) break;
                  if (uVar4 != 0x3f) {
                    if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                      if ((uint)uVar4 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                    }
                    else {
                      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      sVar8 = FUN_05d7c024(uVar4,0);
                      sVar9 = FUN_05d7c024(*(undefined4 *)(unaff_x29 + -0x94),0);
                      if (sVar8 != sVar9) break;
                    }
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar13 + 2;
                }
                uVar16 = uVar16 + 1;
                break;
              }
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar14) {
                if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_05ddeb60;
                break;
              }
            }
          }
          lVar20 = lVar20 + 1;
          if (lVar20 == lVar21) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            uVar16 = uVar16 + 1;
          }
        } while (lVar20 != lVar21);
      }
      uVar12 = *(ulong *)(unaff_x29 + -0x88);
      uVar10 = *(uint *)(unaff_x29 + -0x68);
      uVar15 = *(long *)(unaff_x29 + -0x70) + 1;
      uVar19 = uVar10;
    } while (((long)uVar12 <= (long)uVar15) ||
            ((int)uVar16 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
    uVar19 = *(uint *)(unaff_x29 + -0x28);
    lVar20 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar15 = uVar15 & 0xffffffff;
    do {
      uVar13 = (uint)uVar15;
      if ((int)uVar13 < (int)uVar19) {
        if (uVar13 <= uVar19) {
          uVar13 = uVar19;
        }
        do {
          uVar14 = (uint)uVar15;
          if ((uVar13 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar20))
          goto LAB_05dded50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar20 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4)) goto LAB_05ddec78;
          uVar15 = (ulong)(uVar14 + 1);
        } while (uVar19 != uVar14 + 1);
        uVar15 = (ulong)uVar19;
      }
LAB_05ddec78:
      lVar20 = lVar20 + 1;
    } while (lVar20 != (int)uVar16);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar16;
  } while( true );
LAB_05ddecbc:
  lVar21 = *(long *)(unaff_x29 + -0xa0);
  if (uVar14 < uVar17) {
    bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4) ==
            *(int *)(unaff_x29 + -0x5c);
LAB_05ddece8:
    if (*(long *)(lVar21 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return bVar7;
  }
LAB_05dded50:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


